#include "mmult_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mmult_hw::thread_weight_buf_3_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_3_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_7_V_d0() {
    weight_buf_3_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_3_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3))) {
        weight_buf_3_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_0_V_address0 = weight_buf_4_0_V_a_reg_19274.read();
    } else {
        weight_buf_4_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_4_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_4_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4))) {
        weight_buf_4_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_1_V_address0 = weight_buf_4_1_V_a_reg_19434.read();
    } else {
        weight_buf_4_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_4_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_4_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_1_V_d0() {
    weight_buf_4_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_4_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4))) {
        weight_buf_4_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_2_V_address0 = weight_buf_4_2_V_a_reg_19594.read();
    } else {
        weight_buf_4_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_4_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_4_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_2_V_d0() {
    weight_buf_4_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_4_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4))) {
        weight_buf_4_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_3_V_address0 = weight_buf_4_3_V_a_reg_19754.read();
    } else {
        weight_buf_4_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_4_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_4_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_3_V_d0() {
    weight_buf_4_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_4_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4))) {
        weight_buf_4_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_4_V_address0 = weight_buf_4_4_V_a_reg_19914.read();
    } else {
        weight_buf_4_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_4_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_4_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_4_V_d0() {
    weight_buf_4_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_4_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4))) {
        weight_buf_4_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_5_V_address0 = weight_buf_4_5_V_a_reg_20074.read();
    } else {
        weight_buf_4_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_4_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_4_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_5_V_d0() {
    weight_buf_4_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_4_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4))) {
        weight_buf_4_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_6_V_address0 = weight_buf_4_6_V_a_reg_20234.read();
    } else {
        weight_buf_4_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_4_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_4_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_6_V_d0() {
    weight_buf_4_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_4_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4))) {
        weight_buf_4_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_7_V_address0 = weight_buf_4_7_V_a_reg_20394.read();
    } else {
        weight_buf_4_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_4_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_4_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_7_V_d0() {
    weight_buf_4_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_4_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4))) {
        weight_buf_4_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_0_V_address0 = weight_buf_5_0_V_a_reg_19279.read();
    } else {
        weight_buf_5_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_5_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_5_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5))) {
        weight_buf_5_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_1_V_address0 = weight_buf_5_1_V_a_reg_19439.read();
    } else {
        weight_buf_5_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_5_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_5_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_1_V_d0() {
    weight_buf_5_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_5_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5))) {
        weight_buf_5_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_2_V_address0 = weight_buf_5_2_V_a_reg_19599.read();
    } else {
        weight_buf_5_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_5_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_5_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_2_V_d0() {
    weight_buf_5_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_5_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5))) {
        weight_buf_5_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_3_V_address0 = weight_buf_5_3_V_a_reg_19759.read();
    } else {
        weight_buf_5_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_5_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_5_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_3_V_d0() {
    weight_buf_5_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_5_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5))) {
        weight_buf_5_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_4_V_address0 = weight_buf_5_4_V_a_reg_19919.read();
    } else {
        weight_buf_5_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_5_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_5_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_4_V_d0() {
    weight_buf_5_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_5_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5))) {
        weight_buf_5_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_5_V_address0 = weight_buf_5_5_V_a_reg_20079.read();
    } else {
        weight_buf_5_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_5_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_5_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_5_V_d0() {
    weight_buf_5_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_5_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5))) {
        weight_buf_5_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_6_V_address0 = weight_buf_5_6_V_a_reg_20239.read();
    } else {
        weight_buf_5_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_5_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_5_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_6_V_d0() {
    weight_buf_5_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_5_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5))) {
        weight_buf_5_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_7_V_address0 = weight_buf_5_7_V_a_reg_20399.read();
    } else {
        weight_buf_5_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_5_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_5_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_7_V_d0() {
    weight_buf_5_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_5_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5))) {
        weight_buf_5_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_0_V_address0 = weight_buf_6_0_V_a_reg_19284.read();
    } else {
        weight_buf_6_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_6_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_6_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6))) {
        weight_buf_6_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_1_V_address0 = weight_buf_6_1_V_a_reg_19444.read();
    } else {
        weight_buf_6_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_6_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_6_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_1_V_d0() {
    weight_buf_6_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_6_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6))) {
        weight_buf_6_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_2_V_address0 = weight_buf_6_2_V_a_reg_19604.read();
    } else {
        weight_buf_6_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_6_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_6_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_2_V_d0() {
    weight_buf_6_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_6_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6))) {
        weight_buf_6_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_3_V_address0 = weight_buf_6_3_V_a_reg_19764.read();
    } else {
        weight_buf_6_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_6_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_6_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_3_V_d0() {
    weight_buf_6_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_6_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6))) {
        weight_buf_6_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_4_V_address0 = weight_buf_6_4_V_a_reg_19924.read();
    } else {
        weight_buf_6_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_6_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_6_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_4_V_d0() {
    weight_buf_6_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_6_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6))) {
        weight_buf_6_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_5_V_address0 = weight_buf_6_5_V_a_reg_20084.read();
    } else {
        weight_buf_6_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_6_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_6_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_5_V_d0() {
    weight_buf_6_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_6_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6))) {
        weight_buf_6_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_6_V_address0 = weight_buf_6_6_V_a_reg_20244.read();
    } else {
        weight_buf_6_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_6_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_6_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_6_V_d0() {
    weight_buf_6_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_6_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6))) {
        weight_buf_6_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_7_V_address0 = weight_buf_6_7_V_a_reg_20404.read();
    } else {
        weight_buf_6_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_6_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_6_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_7_V_d0() {
    weight_buf_6_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_6_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6))) {
        weight_buf_6_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_0_V_address0 = weight_buf_7_0_V_a_reg_19289.read();
    } else {
        weight_buf_7_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_7_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_7_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7))) {
        weight_buf_7_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_1_V_address0 = weight_buf_7_1_V_a_reg_19449.read();
    } else {
        weight_buf_7_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_7_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_7_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_1_V_d0() {
    weight_buf_7_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_7_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7))) {
        weight_buf_7_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_2_V_address0 = weight_buf_7_2_V_a_reg_19609.read();
    } else {
        weight_buf_7_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_7_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_7_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_2_V_d0() {
    weight_buf_7_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_7_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7))) {
        weight_buf_7_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_3_V_address0 = weight_buf_7_3_V_a_reg_19769.read();
    } else {
        weight_buf_7_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_7_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_7_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_3_V_d0() {
    weight_buf_7_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_7_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7))) {
        weight_buf_7_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_4_V_address0 = weight_buf_7_4_V_a_reg_19929.read();
    } else {
        weight_buf_7_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_7_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_7_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_4_V_d0() {
    weight_buf_7_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_7_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7))) {
        weight_buf_7_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_5_V_address0 = weight_buf_7_5_V_a_reg_20089.read();
    } else {
        weight_buf_7_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_7_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_7_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_5_V_d0() {
    weight_buf_7_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_7_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7))) {
        weight_buf_7_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_6_V_address0 = weight_buf_7_6_V_a_reg_20249.read();
    } else {
        weight_buf_7_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_7_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_7_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_6_V_d0() {
    weight_buf_7_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_7_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7))) {
        weight_buf_7_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_7_V_address0 = weight_buf_7_7_V_a_reg_20409.read();
    } else {
        weight_buf_7_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_7_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_7_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_7_V_d0() {
    weight_buf_7_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_7_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7))) {
        weight_buf_7_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_0_V_address0 = weight_buf_8_0_V_a_reg_19294.read();
    } else {
        weight_buf_8_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_8_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_8_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8))) {
        weight_buf_8_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_1_V_address0 = weight_buf_8_1_V_a_reg_19454.read();
    } else {
        weight_buf_8_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_8_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_8_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_1_V_d0() {
    weight_buf_8_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_8_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8))) {
        weight_buf_8_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_2_V_address0 = weight_buf_8_2_V_a_reg_19614.read();
    } else {
        weight_buf_8_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_8_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_8_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_2_V_d0() {
    weight_buf_8_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_8_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8))) {
        weight_buf_8_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_3_V_address0 = weight_buf_8_3_V_a_reg_19774.read();
    } else {
        weight_buf_8_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_8_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_8_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_3_V_d0() {
    weight_buf_8_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_8_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8))) {
        weight_buf_8_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_4_V_address0 = weight_buf_8_4_V_a_reg_19934.read();
    } else {
        weight_buf_8_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_8_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_8_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_4_V_d0() {
    weight_buf_8_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_8_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8))) {
        weight_buf_8_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_5_V_address0 = weight_buf_8_5_V_a_reg_20094.read();
    } else {
        weight_buf_8_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_8_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_8_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_5_V_d0() {
    weight_buf_8_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_8_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8))) {
        weight_buf_8_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_6_V_address0 = weight_buf_8_6_V_a_reg_20254.read();
    } else {
        weight_buf_8_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_8_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_8_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_6_V_d0() {
    weight_buf_8_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_8_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8))) {
        weight_buf_8_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_7_V_address0 = weight_buf_8_7_V_a_reg_20414.read();
    } else {
        weight_buf_8_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_8_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_8_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_7_V_d0() {
    weight_buf_8_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_8_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8))) {
        weight_buf_8_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_0_V_address0 = weight_buf_9_0_V_a_reg_19299.read();
    } else {
        weight_buf_9_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_9_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_9_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9))) {
        weight_buf_9_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_1_V_address0 = weight_buf_9_1_V_a_reg_19459.read();
    } else {
        weight_buf_9_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_9_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_9_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_1_V_d0() {
    weight_buf_9_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_9_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9))) {
        weight_buf_9_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_2_V_address0 = weight_buf_9_2_V_a_reg_19619.read();
    } else {
        weight_buf_9_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_9_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_9_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_2_V_d0() {
    weight_buf_9_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_9_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9))) {
        weight_buf_9_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_3_V_address0 = weight_buf_9_3_V_a_reg_19779.read();
    } else {
        weight_buf_9_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_9_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_9_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_3_V_d0() {
    weight_buf_9_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_9_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9))) {
        weight_buf_9_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_4_V_address0 = weight_buf_9_4_V_a_reg_19939.read();
    } else {
        weight_buf_9_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_9_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_9_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_4_V_d0() {
    weight_buf_9_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_9_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9))) {
        weight_buf_9_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_5_V_address0 = weight_buf_9_5_V_a_reg_20099.read();
    } else {
        weight_buf_9_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_9_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_9_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_5_V_d0() {
    weight_buf_9_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_9_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9))) {
        weight_buf_9_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_6_V_address0 = weight_buf_9_6_V_a_reg_20259.read();
    } else {
        weight_buf_9_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_9_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_9_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_6_V_d0() {
    weight_buf_9_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_9_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9))) {
        weight_buf_9_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_7_V_address0 = weight_buf_9_7_V_a_reg_20419.read();
    } else {
        weight_buf_9_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_9_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_9_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_7_V_d0() {
    weight_buf_9_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_9_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9))) {
        weight_buf_9_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_7_V_we0 = ap_const_logic_0;
    }
}

}

