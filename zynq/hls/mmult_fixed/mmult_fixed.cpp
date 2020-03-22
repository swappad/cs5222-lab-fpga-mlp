#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

#include "mmult.h"

typedef	union myconv {
	axi_T packet;
		int8_t int8_arr[8];
		uint8_t uint8_arr[8];
		int32_t int32_arr[2];
} CONV;


void inner_mult(in_T in[FEAT], out_T out[CLASSES], out_T offset[CLASSES], w_T[CLASSES][FEAT]); 
void in_load(in_T in[FEAT], AXI_VAL stream[IS_SIZE], int* is_idx, CONV* conv);


void in_load(in_T in[FEAT], AXI_VAL stream[IS_SIZE], int* is_idx, CONV* converter) {
#pragma HLS INLINE off
			LOAD_I_2: for(int h=0; h < FEAT; h+=IN_WIDTH_RATIO) {
#pragma HLS pipeline II=1
				converter->packet = pop_stream(stream[(*is_idx)++]);
				in[h+0] = (in_T) converter->uint8_arr[0];
				in[h+1] = (in_T) converter->uint8_arr[1];
				in[h+2] = (in_T) converter->uint8_arr[2];
				in[h+3] = (in_T) converter->uint8_arr[3];
				in[h+4] = (in_T) converter->uint8_arr[4];
				in[h+5] = (in_T) converter->uint8_arr[5];
				in[h+6] = (in_T) converter->uint8_arr[6];
				in[h+7] = (in_T) converter->uint8_arr[7];
			}

}

void inner_mult(in_T in[FEAT], out_T out[CLASSES], out_T offset[CLASSES], w_T weight[CLASSES][FEAT]) {
#pragma HLS INLINE off
	// Iterate over output classes
	L2: for (int j = 0; j < CLASSES; j++) {
	// Perform the dot product
		out_T tmp1[FEAT] ;
#pragma HLS ARRAY_PARTITION variable=tmp1 complete 
		out_T tmp;
#pragma HLS RESOURCE variable=tmp core=Mul_LUT
#pragma HLS pipeline II=10
		L3: for(int k = 0; k < FEAT; k++) {
			tmp = in[k] * weight[j][k];
			tmp1[k] = tmp;

		}
			out_T tmp2 = offset[j];
			for(int t=0; t < FEAT;t++) {
				tmp2 = tmp2 + tmp1[t];
			}
		out[j] = tmp2;
	}

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
#pragma HLS ARRAY_PARTITION variable=offset_buf complete
	in_T in_buf[FEAT];
#pragma HLS ARRAY_PARTITION variable=in_buf complete 
	in_T in_tmp[FEAT];
#pragma HLS ARRAY_PARTITION variable=in_tmp complete 
	w_T weight_buf[CLASSES][FEAT];
#pragma HLS ARRAY_PARTITION variable=weight_buf complete dim=2
	out_T out_buf[TILING][CLASSES];
#pragma HLS ARRAY_PARTITION variable=out_buf complete dim=2

	// Input and output AXI stream indices
	int is_idx = 0;
	int os_idx = 0;

	CONV converter;
	// Stream in offset vector
	// CSE548 TODO
	LOAD_OFF_1: for(int i=0; i < CLASSES; i+=OUT_WIDTH_RATIO) {
#pragma HLS pipeline II=1
				converter.packet = pop_stream(in_stream[is_idx++]);
				offset_buf[i+0] = (out_T) converter.int32_arr[0];
				offset_buf[i+1] = (out_T) converter.int32_arr[1];
	}

	// Stream in weight matrix
	// CSE548 TODO
	LOAD_W_1: for(int i=0; i < CLASSES; i++) {
		LOAD_W_2: for(int j=0; j < FEAT; j+=W_WIDTH_RATIO) {
#pragma HLS pipeline II=1
					  converter.packet = pop_stream(in_stream[is_idx++]);
					  weight_buf[i][j+0] = (w_T) converter.int8_arr[0];
					  weight_buf[i][j+1] = (w_T) converter.int8_arr[1];
					  weight_buf[i][j+2] = (w_T) converter.int8_arr[2];
					  weight_buf[i][j+3] = (w_T) converter.int8_arr[3];
					  weight_buf[i][j+4] = (w_T) converter.int8_arr[4];
					  weight_buf[i][j+5] = (w_T) converter.int8_arr[5];
					  weight_buf[i][j+6] = (w_T) converter.int8_arr[6];
					  weight_buf[i][j+7] = (w_T) converter.int8_arr[7];
			  }
	}

	// Iterate over tiles
	LT: for (int t = 0; t < BATCH; t+=TILING) {
		// Stream in input tile
		// CSE548 TODO
/*		LOAD_I_1: for(int i=0; i < TILING; i++) {
			LOAD_I_2: for(int j=0; j < FEAT; j+=IN_WIDTH_RATIO) {
#pragma HLS pipeline II=1
				  converter.packet = pop_stream(in_stream[is_idx++]);
				  in_buf[i][j+0] = (in_T) converter.uint8_arr[0];
				  in_buf[i][j+1] = (in_T) converter.uint8_arr[1];
				  in_buf[i][j+2] = (in_T) converter.uint8_arr[2];
				  in_buf[i][j+3] = (in_T) converter.uint8_arr[3];
				  in_buf[i][j+4] = (in_T) converter.uint8_arr[4];
				  in_buf[i][j+5] = (in_T) converter.uint8_arr[5];
				  in_buf[i][j+6] = (in_T) converter.uint8_arr[6];
				  in_buf[i][j+7] = (in_T) converter.uint8_arr[7];
			}
		}
*/

		// Perform matrix multiplication
		L1: for (int i = 0; i < TILING; i++) {
#pragma HLS DEPENDENCE variable=in_buf inter false
#pragma HLS DEPENDENCE variable=in_tmp inter false
#pragma HLS pipeline II=40
/*			LOAD_I_2: for(int h=0; h < FEAT; h+=IN_WIDTH_RATIO) {
#pragma HLS pipeline II=1
				converter.packet = pop_stream(in_stream[is_idx++]);
				in_buf[i][h+0] = (in_T) converter.uint8_arr[0];
				in_buf[i][h+1] = (in_T) converter.uint8_arr[1];
				in_buf[i][h+2] = (in_T) converter.uint8_arr[2];
				in_buf[i][h+3] = (in_T) converter.uint8_arr[3];
				in_buf[i][h+4] = (in_T) converter.uint8_arr[4];
				in_buf[i][h+5] = (in_T) converter.uint8_arr[5];
				in_buf[i][h+6] = (in_T) converter.uint8_arr[6];
				in_buf[i][h+7] = (in_T) converter.uint8_arr[7];
			}
*/

			in_load(in_buf, in_stream, &is_idx, &converter);
#pragma HLS ALLOCATION instances=in_load limit=1 function

		L_TMP: for(int l=0; l < FEAT; l++) {
#pragma HLS pipeline II=1
				in_tmp[l] = in_buf[l];
			}

			inner_mult(in_tmp, out_buf[i], offset_buf, weight_buf);
#pragma HLS ALLOCATION instances=inner_mult limit=1 function
/*			// Iterate over output classes
			L2: for (int j = 0; j < CLASSES; j++) {
			// Perform the dot product
				out_T tmp = offset_buf[j];

#pragma HLS pipeline II=1
				L3: for(int k = 0; k < FEAT; k++) {
#pragma HLS unroll
					out_T mult =  in_buf[i][k] * weight_buf[j][k];
				tmp += mult;
				}
				out_buf[i][j] = tmp;
			}
*/
		}

		// Stream out output matrix
		// CSE548 TODO
STORE_O_1: for(int i=0; i < TILING; i++) {
	STORE_O_2: for(int j=0; j < CLASSES; j+=OUT_WIDTH_RATIO) {
#pragma HLS pipeline II=1
				   converter.int32_arr[0] = (int32_t) out_buf[i][j+0];
				   converter.int32_arr[1] = (int32_t) out_buf[i][j+1];
				   out_stream[os_idx++] = push_stream(converter.packet, os_idx == (OS_SIZE));
			   }
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

