#include <stdio.h>
#include <stdlib.h>
#include "mmult.h"

// other
out_T absolut(int x) {
	return (out_T) ((x>0) ? x : -x);
}
// --------------------------------------------------------------------
// function to be accelerated in HW wrapped with AXI4-Stream interface
void mmult_hw (AXI_VAL in_stream[IS_SIZE], AXI_VAL out_stream[OS_SIZE])
{
#pragma HLS INTERFACE s_axilite port=return     bundle=CONTROL_BUS
#pragma HLS INTERFACE axis      port=in_stream
#pragma HLS INTERFACE axis      port=out_stream

	// Assertions (to avoid out of array bound writes)
	assert(BATCH%TILING==0);
	assert(FEAT%W_WIDTH_RATIO==0);
	assert(FEAT%IN_WIDTH_RATIO==0);
	assert((BATCH*CLASSES)%OUT_WIDTH_RATIO==0);

	// Hardware memory buffers
	// CLASSES 10
	// FEAT 265
	// TILING 64
	out_T offset_buf[CLASSES];
	in_T in_buf[TILING][FEAT];
#pragma HLS ARRAY_PARTITION variable=in_buf block factor=32 dim=2
	w_T weight_buf[CLASSES][FEAT];
#pragma HLS ARRAY_PARTITION variable=weight_buf block factor=32 dim=2
	ap_uint<8> out_buf[TILING];

	out_T out_tmp[CLASSES];
#pragma HLS ARRAY_PARTITION variable=out_tmp complete


	// Input and output AXI stream indices
	int is_idx = 0;
	int os_idx = 0;

	// Stream in offset vector
	// CSE548 TODO
LOAD_OFF_1: for(int i=0; i < CLASSES; i+=OUT_WIDTH_RATIO) {
#pragma HLS pipeline II=1
				ap_int<64> tmp = pop_stream(in_stream[is_idx++]);
				offset_buf[i+0] =  tmp.range(31,0);
				offset_buf[i+1] =  tmp.range(63,32);
				
			}

	// Stream in weight matrix
	// CSE548 TODO
LOAD_W_1: for(int i=0; i < CLASSES; i++) {
	LOAD_W_2: for(int j=0; j < FEAT; j+=W_WIDTH_RATIO) {
#pragma HLS pipeline II=1
				  
				  axi_T packet = pop_stream(in_stream[is_idx++]);
				  ap_int<64> tmp = packet;
				  weight_buf[i][j+0] = (w_T) tmp.range(7,0);    // tmp.range(63,56);
				  weight_buf[i][j+1] = (w_T) tmp.range(15,8);   // tmp.range(55,48);
				  weight_buf[i][j+2] = (w_T) tmp.range(23,16);  // tmp.range(47,40);
				  weight_buf[i][j+3] = (w_T) tmp.range(31,24);  // tmp.range(39,32);
				  weight_buf[i][j+4] = (w_T) tmp.range(39,32);  // tmp.range(31,24);
				  weight_buf[i][j+5] = (w_T) tmp.range(47,40);  // tmp.range(23,16);
				  weight_buf[i][j+6] = (w_T) tmp.range(55,48);  // tmp.range(15,7);
				  weight_buf[i][j+7] = (w_T) tmp.range(63,56);  // tmp.range(7,0);

			  }
		  }

	// Iterate over tiles
	LT: for (int t = 0; t < BATCH; t+=TILING) {

		// Stream in input tile
		// CSE548 TODO
		LOAD_I_1: for(int i=0; i < TILING; i++) {
			LOAD_I_2: for(int j=0; j < FEAT; j+=IN_WIDTH_RATIO) {
#pragma HLS pipeline II=1
				  ap_uint<64> tmp = pop_stream(in_stream[is_idx++]);
				  in_buf[i][j+0] = (in_T) tmp.range(7,0);   // tmp.range(63,56); //
				  in_buf[i][j+1] = (in_T) tmp.range(15,8);  // tmp.range(55,48); //
				  in_buf[i][j+2] = (in_T) tmp.range(23,16); // tmp.range(47,40); //
				  in_buf[i][j+3] = (in_T) tmp.range(31,24); // tmp.range(39,32); //
				  in_buf[i][j+4] = (in_T) tmp.range(39,32); // tmp.range(31,24); //
				  in_buf[i][j+5] = (in_T) tmp.range(47,40); // tmp.range(23,16); //
				  in_buf[i][j+6] = (in_T) tmp.range(55,48); // tmp.range(15,7);  //
				  in_buf[i][j+7] = (in_T) tmp.range(63,56); // tmp.range(7,0);   //
			}


		}

		// Perform matrix multiplication
		L1: for (int i = 0; i < TILING; i++) {
			// Iterate over output classes
			// out_buf[i] = 0;
			L2: for (unsigned int j = 0; j < CLASSES; j++) {
			// Perform the dot product
#pragma HLS pipeline II=1
				out_T max_val = 0;
				out_T tmp = offset_buf[j];
				L3: for(int k = 0; k < FEAT; k++) {
					out_T mult =  in_buf[i][k] * weight_buf[j][k];
					tmp = tmp + mult;
				}
				//  ap_uint<32> abs_tmp = abs(tmp[j]);
				//  bool sig = (abs_tmp > max_val);
				//  max_pos = sig ? (ap_uint<8>) j : max_pos;
				//  max_val = sig ? abs_tmp : max_val;
				out_tmp[j] = absolut((int) tmp);

			}
			ap_uint<8> ix0, ix1, ix2, ix3, ix4, ix5, ix6, ix7, ix8;
			ix0 = (out_tmp[0] > out_tmp[1] ? 0 : 1);
			ix1 = (out_tmp[2] > out_tmp[3] ? 2 : 3);
			ix2 = (out_tmp[4] > out_tmp[5] ? 4 : 5);
			ix3 = (out_tmp[6] > out_tmp[7] ? 6 : 7);
			ix4 = (out_tmp[8] > out_tmp[9] ? 8 : 9);

			ix5 = (out_tmp[ix0] > out_tmp[ix1] ? ix0 : ix1);
			ix6 = (out_tmp[ix2] > out_tmp[ix3] ? ix2 : ix3);

			ix7 = (out_tmp[ix5] > out_tmp[ix6] ? ix5 : ix6);
			ix8 = (out_tmp[ix7] > out_tmp[ix4] ? ix7 : ix4);
			out_buf[i] = ix8;

		}

		// Stream out output matrix
		// CSE548 TODO
STORE_O_1: for(int i=0; i < TILING; i+=IN_WIDTH_RATIO) {
#pragma HLS pipeline II=1
				ap_int<64> tmp;
				tmp.range(7,0)   = out_buf[i+0];
				tmp.range(15,8)  = out_buf[i+1];
				tmp.range(23,16) = out_buf[i+2];
				tmp.range(31,24) = out_buf[i+3];
				tmp.range(39,32) = out_buf[i+4];
				tmp.range(47,40) = out_buf[i+5];
				tmp.range(55,48) = out_buf[i+6];
				tmp.range(63,56) = out_buf[i+7];
				axi_T packet = tmp;
				out_stream[os_idx++] = push_stream(packet, os_idx == (BATCH - 1)); //(OS_SIZE));
		   }

	}
}




// --------------------------------------------------------
// functions to insert and extract elements from an axi stream
// includes conversion to correct data type
axi_T pop_stream(AXI_VAL const &e)
{
#pragma HLS INLINE

	axi_T ret = e.data;

	volatile ap_uint<sizeof(axi_T)> strb = e.strb;
	volatile ap_uint<sizeof(axi_T)> keep = e.keep;
	volatile ap_uint<AXI_U> user = e.user;
	volatile ap_uint<1> last = e.last;
	volatile ap_uint<AXI_TI> id = e.id;
	volatile ap_uint<AXI_TD> dest = e.dest;

	return ret;
}

AXI_VAL push_stream(axi_T const &v, bool last = false)
{
#pragma HLS INLINE

	AXI_VAL e;

	e.data = v;
	e.strb = (1<<sizeof(axi_T))-1;
	e.keep = (1<<sizeof(axi_T))-1;
	e.user = 0;
	e.last = last ? 1 : 0;
	e.id = 0;
	e.dest = 0;
	return e;
}

