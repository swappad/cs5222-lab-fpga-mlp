#include <stdio.h>
#include <stdlib.h>
#include <iostream>

#include "mmult.h"



void matrix_multiply_ref(out_T offsets[CLASSES], w_T weights[CLASSES][FEAT],  in_T in[TILING][FEAT], ap_uint<8> out[TILING])
{
	// matrix multiplication of a A*B matrix
	out_T out_tmp[TILING];
	for (int i = 0; i < TILING; ++i) {
		int max_val = 0;
		out[i] = 0;
		for (int j = 0; j < CLASSES; ++j) {
			out_T sum = offsets[j];
			//ap_uint<32> max_val = 0;
			for (int k = 0; k < FEAT; ++k) {
				sum += in[i][k] * weights[j][k];
			}
			out_tmp[j] = sum;

			if(out_tmp[j] > max_val) {
				max_val = out_tmp[j];
				out[i] = j;
			}
		}
	}
	return;
}


int main(void)
{
	int i,j,err;

	out_T offsets[CLASSES];
	w_T weights[CLASSES][FEAT];
	in_T inputs[TILING][FEAT];
	ap_uint<8> output_sw[BATCH];
	ap_uint<8> output_hw[BATCH];

	/** Matrix Initiation */
	for(i = 0; i<CLASSES; i++) {
		offsets[i] = 0;//(out_T) ((rand()%(1ULL<<OUT_WIDTH)) - (1ULL<<(OUT_WIDTH-1)));
	}

	for(i = 0; i<CLASSES; i++) {
		for(j = 0; j<FEAT; j++) {
			weights[i][j] = i*j;//(w_T) (((rand()*i)%(1ULL<<W_WIDTH)) - (1ULL<<(W_WIDTH-1)));
		}
	}

	for(i = 0; i<TILING; i++) {
		for(j = 0; j<FEAT; j++) {
			inputs[i][j] = i*j;//(in_T) (rand() % (1ULL<<IN_WIDTH));
		}
	}
	/** End of Initiation */


	printf("DEBUGGING AXI4 STREAMING DATA TYPES!\r\n");
	fflush(stdout);

	// prepare data for the DUT
	AXI_VAL in_stream[IS_SIZE];
	AXI_VAL out_stream[OS_SIZE];

	// Input and output stream indices
	int is_idx = 0;
	int os_idx = 0;

	// stream in the offset vector
	for(int i=0; i<CLASSES-OUT_WIDTH_RATIO; i+=OUT_WIDTH_RATIO) {
		axi_T packet = 0;
		PACK_OFF: for (int w = 0; w < OUT_WIDTH_RATIO; w++) {
			out_bit_T bits = *((out_bit_T*) &offsets[i+w]);
			packet |= (bits & ((1ULL<<OUT_WIDTH)-1))<<(w*OUT_WIDTH);
		};
		in_stream[is_idx++] = push_stream(packet, 0);
	}
	// pad the last packet in case things don't align
	axi_T packet = 0;
	FINISH_OFF: for (int i = CLASSES-OUT_WIDTH_RATIO; i < CLASSES; i++) {
		out_bit_T bits = *((out_bit_T*) &offsets[i]);
		packet |= (bits & ((1ULL<<OUT_WIDTH)-1))<<((i%OUT_WIDTH_RATIO)*OUT_WIDTH);
	}
	in_stream[is_idx++] = push_stream(packet, 0);


	// stream in the weigth matrix
	for(int i=0; i<CLASSES; i++) {
		for(int j=0; j<FEAT; j+=W_WIDTH_RATIO) {
			axi_T packet = 0;
			PACK_W: for (int w = 0; w <W_WIDTH_RATIO; w++) {
				w_bit_T bits = *((w_bit_T*) &weights[i][j+w]);
				packet |= (bits & ((1ULL<<W_WIDTH)-1))<<(w*W_WIDTH);
			};
			in_stream[is_idx++] = push_stream(packet, 0);
		}
	}

	for(int b=0; b < 1; b+=TILING) {
		// We only test one TILE here. Everything else takes to long!!!
		// stream in the input matrix
		for(int i=0; i<TILING; i++) {
			for(int j=0; j<FEAT; j+=IN_WIDTH_RATIO) {
				axi_T packet = 0;
				PACK_IN: for (int w = 0; w <IN_WIDTH_RATIO; w++) {
					in_bit_T bits = *((in_bit_T*) &inputs[i][j+w]);
					packet |= (bits & ((1ULL<<IN_WIDTH)-1))<<(w*IN_WIDTH);
				};
				in_stream[is_idx++] = push_stream(packet, is_idx==(IS_SIZE));
			}
		}

		//call the DUT
		mmult_hw(in_stream, out_stream);

	
		union {
			axi_T packet;
			uint8_t out_pack[8];
		} converter;
		// extract the output matrix from the out stream
		for(int i=0; i<TILING; i+=IN_WIDTH_RATIO) {
				converter.packet = pop_stream(out_stream[os_idx++]);
				output_hw[b+i+0] = converter.out_pack[0]; // (ap_uint<8>) tmp_packet.range(7,0);  
				output_hw[b+i+1] = converter.out_pack[1]; // (ap_uint<8>) tmp_packet.range(15,8); 
				output_hw[b+i+2] = converter.out_pack[2]; // (ap_uint<8>) tmp_packet.range(23,16);
				output_hw[b+i+3] = converter.out_pack[3]; // (ap_uint<8>) tmp_packet.range(31,24);
				output_hw[b+i+4] = converter.out_pack[4]; // (ap_uint<8>) tmp_packet.range(39,32);
				output_hw[b+i+5] = converter.out_pack[5]; // (ap_uint<8>) tmp_packet.range(47,40);
				output_hw[b+i+6] = converter.out_pack[6]; // (ap_uint<8>) tmp_packet.range(55,48);
				output_hw[b+i+7] = converter.out_pack[7]; // (ap_uint<8>) tmp_packet.range(63,56);
		}
	}

	/* reference Matrix Multiplication */
	matrix_multiply_ref(offsets, weights, inputs, output_sw);

	/** Matrix comparison */
	err = 0;
	for (i = 0; i<TILING; i++) {
			if (output_sw[i] != output_hw[i]) {
				err++;
				std::cout << i << ": expected " << output_sw[i] << " but got " << output_hw[i] << std::endl;
			}
	}

	if (err == 0)
		printf("Matrices identical ... Test successful!\r\n");
	else
		printf("Test failed!\r\n");

	return err;

}
