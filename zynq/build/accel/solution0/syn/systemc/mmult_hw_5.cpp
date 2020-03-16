#include "mmult_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mmult_hw::thread_in_buf_21_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_21_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_0_V_address0 = in_buf_21_0_V_addr_reg_20537.read();
    } else {
        in_buf_21_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_21_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_21_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15))) {
        in_buf_21_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_1_V_address0 = in_buf_21_1_V_addr_reg_20697.read();
    } else {
        in_buf_21_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_21_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_21_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_1_V_d0() {
    in_buf_21_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_21_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15))) {
        in_buf_21_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_21_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_2_V_address0 = in_buf_21_2_V_addr_reg_20857.read();
    } else {
        in_buf_21_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_21_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_21_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_2_V_d0() {
    in_buf_21_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_21_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15))) {
        in_buf_21_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_3_V_address0 = in_buf_21_3_V_addr_reg_21017.read();
    } else {
        in_buf_21_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_21_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_21_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_3_V_d0() {
    in_buf_21_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_21_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15))) {
        in_buf_21_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_21_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_4_V_address0 = in_buf_21_4_V_addr_reg_21177.read();
    } else {
        in_buf_21_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_21_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_21_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_4_V_d0() {
    in_buf_21_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_21_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15))) {
        in_buf_21_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_5_V_address0 = in_buf_21_5_V_addr_reg_21337.read();
    } else {
        in_buf_21_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_21_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_21_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_5_V_d0() {
    in_buf_21_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_21_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15))) {
        in_buf_21_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_21_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_6_V_address0 = in_buf_21_6_V_addr_reg_21497.read();
    } else {
        in_buf_21_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_21_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_21_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_6_V_d0() {
    in_buf_21_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_21_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15))) {
        in_buf_21_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_7_V_address0 = in_buf_21_7_V_addr_reg_21657.read();
    } else {
        in_buf_21_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_21_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_21_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_7_V_d0() {
    in_buf_21_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_21_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15))) {
        in_buf_21_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_22_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_0_V_address0 = in_buf_22_0_V_addr_reg_20542.read();
    } else {
        in_buf_22_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_22_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_22_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16))) {
        in_buf_22_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_1_V_address0 = in_buf_22_1_V_addr_reg_20702.read();
    } else {
        in_buf_22_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_22_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_22_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_1_V_d0() {
    in_buf_22_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_22_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16))) {
        in_buf_22_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_22_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_2_V_address0 = in_buf_22_2_V_addr_reg_20862.read();
    } else {
        in_buf_22_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_22_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_22_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_2_V_d0() {
    in_buf_22_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_22_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16))) {
        in_buf_22_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_3_V_address0 = in_buf_22_3_V_addr_reg_21022.read();
    } else {
        in_buf_22_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_22_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_22_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_3_V_d0() {
    in_buf_22_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_22_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16))) {
        in_buf_22_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_22_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_4_V_address0 = in_buf_22_4_V_addr_reg_21182.read();
    } else {
        in_buf_22_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_22_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_22_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_4_V_d0() {
    in_buf_22_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_22_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16))) {
        in_buf_22_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_5_V_address0 = in_buf_22_5_V_addr_reg_21342.read();
    } else {
        in_buf_22_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_22_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_22_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_5_V_d0() {
    in_buf_22_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_22_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16))) {
        in_buf_22_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_22_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_6_V_address0 = in_buf_22_6_V_addr_reg_21502.read();
    } else {
        in_buf_22_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_22_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_22_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_6_V_d0() {
    in_buf_22_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_22_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16))) {
        in_buf_22_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_7_V_address0 = in_buf_22_7_V_addr_reg_21662.read();
    } else {
        in_buf_22_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_22_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_22_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_7_V_d0() {
    in_buf_22_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_22_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16))) {
        in_buf_22_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_23_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_0_V_address0 = in_buf_23_0_V_addr_reg_20547.read();
    } else {
        in_buf_23_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_23_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_23_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17))) {
        in_buf_23_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_1_V_address0 = in_buf_23_1_V_addr_reg_20707.read();
    } else {
        in_buf_23_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_23_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_23_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_1_V_d0() {
    in_buf_23_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_23_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17))) {
        in_buf_23_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_23_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_2_V_address0 = in_buf_23_2_V_addr_reg_20867.read();
    } else {
        in_buf_23_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_23_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_23_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_2_V_d0() {
    in_buf_23_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_23_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17))) {
        in_buf_23_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_3_V_address0 = in_buf_23_3_V_addr_reg_21027.read();
    } else {
        in_buf_23_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_23_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_23_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_3_V_d0() {
    in_buf_23_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_23_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17))) {
        in_buf_23_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_23_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_4_V_address0 = in_buf_23_4_V_addr_reg_21187.read();
    } else {
        in_buf_23_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_23_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_23_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_4_V_d0() {
    in_buf_23_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_23_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17))) {
        in_buf_23_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_5_V_address0 = in_buf_23_5_V_addr_reg_21347.read();
    } else {
        in_buf_23_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_23_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_23_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_5_V_d0() {
    in_buf_23_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_23_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17))) {
        in_buf_23_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_23_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_6_V_address0 = in_buf_23_6_V_addr_reg_21507.read();
    } else {
        in_buf_23_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_23_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_23_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_6_V_d0() {
    in_buf_23_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_23_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17))) {
        in_buf_23_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_7_V_address0 = in_buf_23_7_V_addr_reg_21667.read();
    } else {
        in_buf_23_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_23_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_23_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_7_V_d0() {
    in_buf_23_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_23_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17))) {
        in_buf_23_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_24_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_0_V_address0 = in_buf_24_0_V_addr_reg_20552.read();
    } else {
        in_buf_24_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_24_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_24_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18))) {
        in_buf_24_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_1_V_address0 = in_buf_24_1_V_addr_reg_20712.read();
    } else {
        in_buf_24_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_24_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_24_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_1_V_d0() {
    in_buf_24_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_24_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18))) {
        in_buf_24_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_24_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_2_V_address0 = in_buf_24_2_V_addr_reg_20872.read();
    } else {
        in_buf_24_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_24_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_24_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_2_V_d0() {
    in_buf_24_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_24_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18))) {
        in_buf_24_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_3_V_address0 = in_buf_24_3_V_addr_reg_21032.read();
    } else {
        in_buf_24_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_24_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_24_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_3_V_d0() {
    in_buf_24_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_24_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18))) {
        in_buf_24_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_24_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_4_V_address0 = in_buf_24_4_V_addr_reg_21192.read();
    } else {
        in_buf_24_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_24_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_24_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_4_V_d0() {
    in_buf_24_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_24_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18))) {
        in_buf_24_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_5_V_address0 = in_buf_24_5_V_addr_reg_21352.read();
    } else {
        in_buf_24_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_24_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_24_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_5_V_d0() {
    in_buf_24_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_24_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18))) {
        in_buf_24_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_24_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_6_V_address0 = in_buf_24_6_V_addr_reg_21512.read();
    } else {
        in_buf_24_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_24_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_24_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_6_V_d0() {
    in_buf_24_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_24_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18))) {
        in_buf_24_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_7_V_address0 = in_buf_24_7_V_addr_reg_21672.read();
    } else {
        in_buf_24_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_24_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_24_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_7_V_d0() {
    in_buf_24_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_24_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18))) {
        in_buf_24_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_25_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_0_V_address0 = in_buf_25_0_V_addr_reg_20557.read();
    } else {
        in_buf_25_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_25_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_25_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19))) {
        in_buf_25_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_1_V_address0 = in_buf_25_1_V_addr_reg_20717.read();
    } else {
        in_buf_25_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_25_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_25_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_1_V_d0() {
    in_buf_25_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_25_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19))) {
        in_buf_25_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_25_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_2_V_address0 = in_buf_25_2_V_addr_reg_20877.read();
    } else {
        in_buf_25_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_25_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_25_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_2_V_d0() {
    in_buf_25_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_25_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19))) {
        in_buf_25_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_3_V_address0 = in_buf_25_3_V_addr_reg_21037.read();
    } else {
        in_buf_25_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_25_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_25_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_3_V_d0() {
    in_buf_25_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_25_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19))) {
        in_buf_25_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_25_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_4_V_address0 = in_buf_25_4_V_addr_reg_21197.read();
    } else {
        in_buf_25_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_25_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_25_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_4_V_d0() {
    in_buf_25_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_25_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19))) {
        in_buf_25_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_5_V_address0 = in_buf_25_5_V_addr_reg_21357.read();
    } else {
        in_buf_25_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_25_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_25_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_5_V_d0() {
    in_buf_25_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_25_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19))) {
        in_buf_25_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_25_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_6_V_address0 = in_buf_25_6_V_addr_reg_21517.read();
    } else {
        in_buf_25_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_25_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_25_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_6_V_d0() {
    in_buf_25_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_25_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19))) {
        in_buf_25_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_7_V_address0 = in_buf_25_7_V_addr_reg_21677.read();
    } else {
        in_buf_25_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_25_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_25_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_7_V_d0() {
    in_buf_25_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_25_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19))) {
        in_buf_25_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_26_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_0_V_address0 = in_buf_26_0_V_addr_reg_20562.read();
    } else {
        in_buf_26_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_26_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_26_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A))) {
        in_buf_26_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_1_V_address0 = in_buf_26_1_V_addr_reg_20722.read();
    } else {
        in_buf_26_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_26_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_26_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_1_V_d0() {
    in_buf_26_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_26_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A))) {
        in_buf_26_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_26_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_2_V_address0 = in_buf_26_2_V_addr_reg_20882.read();
    } else {
        in_buf_26_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_26_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_26_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_2_V_d0() {
    in_buf_26_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_26_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A))) {
        in_buf_26_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_3_V_address0 = in_buf_26_3_V_addr_reg_21042.read();
    } else {
        in_buf_26_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_26_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_26_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_3_V_d0() {
    in_buf_26_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_26_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A))) {
        in_buf_26_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_26_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_4_V_address0 = in_buf_26_4_V_addr_reg_21202.read();
    } else {
        in_buf_26_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_26_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_26_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_4_V_d0() {
    in_buf_26_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_26_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A))) {
        in_buf_26_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_5_V_address0 = in_buf_26_5_V_addr_reg_21362.read();
    } else {
        in_buf_26_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_26_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_26_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_5_V_d0() {
    in_buf_26_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_26_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A))) {
        in_buf_26_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_26_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_6_V_address0 = in_buf_26_6_V_addr_reg_21522.read();
    } else {
        in_buf_26_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_26_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_26_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_6_V_d0() {
    in_buf_26_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_26_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A))) {
        in_buf_26_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_7_V_address0 = in_buf_26_7_V_addr_reg_21682.read();
    } else {
        in_buf_26_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_26_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_26_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_7_V_d0() {
    in_buf_26_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_26_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A))) {
        in_buf_26_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_27_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_0_V_address0 = in_buf_27_0_V_addr_reg_20567.read();
    } else {
        in_buf_27_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_27_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_27_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B))) {
        in_buf_27_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_1_V_address0 = in_buf_27_1_V_addr_reg_20727.read();
    } else {
        in_buf_27_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_27_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_27_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_1_V_d0() {
    in_buf_27_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_27_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B))) {
        in_buf_27_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_27_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_2_V_address0 = in_buf_27_2_V_addr_reg_20887.read();
    } else {
        in_buf_27_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_27_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_27_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_2_V_d0() {
    in_buf_27_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_27_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B))) {
        in_buf_27_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_3_V_address0 = in_buf_27_3_V_addr_reg_21047.read();
    } else {
        in_buf_27_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_27_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_27_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_3_V_d0() {
    in_buf_27_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_27_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B))) {
        in_buf_27_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_27_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_4_V_address0 = in_buf_27_4_V_addr_reg_21207.read();
    } else {
        in_buf_27_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_27_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_27_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_4_V_d0() {
    in_buf_27_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_27_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B))) {
        in_buf_27_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_5_V_address0 = in_buf_27_5_V_addr_reg_21367.read();
    } else {
        in_buf_27_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_27_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_27_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_5_V_d0() {
    in_buf_27_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_27_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B))) {
        in_buf_27_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_27_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_6_V_address0 = in_buf_27_6_V_addr_reg_21527.read();
    } else {
        in_buf_27_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_27_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_27_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_6_V_d0() {
    in_buf_27_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_27_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B))) {
        in_buf_27_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_7_V_address0 = in_buf_27_7_V_addr_reg_21687.read();
    } else {
        in_buf_27_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_27_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_27_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_7_V_d0() {
    in_buf_27_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_27_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B))) {
        in_buf_27_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_28_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_0_V_address0 = in_buf_28_0_V_addr_reg_20572.read();
    } else {
        in_buf_28_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_28_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_28_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C))) {
        in_buf_28_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_1_V_address0 = in_buf_28_1_V_addr_reg_20732.read();
    } else {
        in_buf_28_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_28_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_28_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_1_V_d0() {
    in_buf_28_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_28_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C))) {
        in_buf_28_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_28_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_2_V_address0 = in_buf_28_2_V_addr_reg_20892.read();
    } else {
        in_buf_28_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_28_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_28_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_2_V_d0() {
    in_buf_28_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_28_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C))) {
        in_buf_28_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_3_V_address0 = in_buf_28_3_V_addr_reg_21052.read();
    } else {
        in_buf_28_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_28_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_28_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_3_V_d0() {
    in_buf_28_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_28_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C))) {
        in_buf_28_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_28_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_4_V_address0 = in_buf_28_4_V_addr_reg_21212.read();
    } else {
        in_buf_28_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_28_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_28_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_4_V_d0() {
    in_buf_28_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_28_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C))) {
        in_buf_28_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_5_V_address0 = in_buf_28_5_V_addr_reg_21372.read();
    } else {
        in_buf_28_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_28_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_28_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_5_V_d0() {
    in_buf_28_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_28_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C))) {
        in_buf_28_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_28_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_6_V_address0 = in_buf_28_6_V_addr_reg_21532.read();
    } else {
        in_buf_28_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_28_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_28_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_6_V_d0() {
    in_buf_28_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_28_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C))) {
        in_buf_28_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_7_V_address0 = in_buf_28_7_V_addr_reg_21692.read();
    } else {
        in_buf_28_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_28_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_28_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_7_V_d0() {
    in_buf_28_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_28_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C))) {
        in_buf_28_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_29_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_0_V_address0 = in_buf_29_0_V_addr_reg_20577.read();
    } else {
        in_buf_29_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_29_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_29_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D))) {
        in_buf_29_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_1_V_address0 = in_buf_29_1_V_addr_reg_20737.read();
    } else {
        in_buf_29_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_29_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_29_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_1_V_d0() {
    in_buf_29_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_29_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D))) {
        in_buf_29_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_29_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_2_V_address0 = in_buf_29_2_V_addr_reg_20897.read();
    } else {
        in_buf_29_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_29_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_29_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_2_V_d0() {
    in_buf_29_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_29_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D))) {
        in_buf_29_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_3_V_address0 = in_buf_29_3_V_addr_reg_21057.read();
    } else {
        in_buf_29_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_29_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_29_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_3_V_d0() {
    in_buf_29_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_29_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D))) {
        in_buf_29_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_29_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_4_V_address0 = in_buf_29_4_V_addr_reg_21217.read();
    } else {
        in_buf_29_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_29_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_29_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_4_V_d0() {
    in_buf_29_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_29_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D))) {
        in_buf_29_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_5_V_address0 = in_buf_29_5_V_addr_reg_21377.read();
    } else {
        in_buf_29_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_29_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_29_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_5_V_d0() {
    in_buf_29_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_29_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D))) {
        in_buf_29_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_29_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_6_V_address0 = in_buf_29_6_V_addr_reg_21537.read();
    } else {
        in_buf_29_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_29_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_29_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_6_V_d0() {
    in_buf_29_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_29_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D))) {
        in_buf_29_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_7_V_address0 = in_buf_29_7_V_addr_reg_21697.read();
    } else {
        in_buf_29_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_29_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_29_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_7_V_d0() {
    in_buf_29_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_29_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D))) {
        in_buf_29_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_2_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_0_V_address0 = in_buf_2_0_V_addr_reg_20442.read();
    } else {
        in_buf_2_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_2_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_2_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2))) {
        in_buf_2_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_1_V_address0 = in_buf_2_1_V_addr_reg_20602.read();
    } else {
        in_buf_2_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_2_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_2_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_1_V_d0() {
    in_buf_2_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_2_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2))) {
        in_buf_2_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_2_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_2_V_address0 = in_buf_2_2_V_addr_reg_20762.read();
    } else {
        in_buf_2_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_2_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_2_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_2_V_d0() {
    in_buf_2_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_2_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2))) {
        in_buf_2_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_3_V_address0 = in_buf_2_3_V_addr_reg_20922.read();
    } else {
        in_buf_2_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_2_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_2_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_3_V_d0() {
    in_buf_2_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_2_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2))) {
        in_buf_2_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_2_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_4_V_address0 = in_buf_2_4_V_addr_reg_21082.read();
    } else {
        in_buf_2_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_2_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_2_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_4_V_d0() {
    in_buf_2_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_2_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2))) {
        in_buf_2_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_5_V_address0 = in_buf_2_5_V_addr_reg_21242.read();
    } else {
        in_buf_2_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_2_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_2_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_5_V_d0() {
    in_buf_2_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_2_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2))) {
        in_buf_2_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_2_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_6_V_address0 = in_buf_2_6_V_addr_reg_21402.read();
    } else {
        in_buf_2_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_2_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_2_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_6_V_d0() {
    in_buf_2_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_2_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2))) {
        in_buf_2_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_7_V_address0 = in_buf_2_7_V_addr_reg_21562.read();
    } else {
        in_buf_2_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_2_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_2_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_7_V_d0() {
    in_buf_2_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_2_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2))) {
        in_buf_2_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_30_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_0_V_address0 = in_buf_30_0_V_addr_reg_20582.read();
    } else {
        in_buf_30_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_30_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_30_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_30_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_1_V_address0 = in_buf_30_1_V_addr_reg_20742.read();
    } else {
        in_buf_30_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_30_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_30_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_1_V_d0() {
    in_buf_30_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_30_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_30_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_30_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_2_V_address0 = in_buf_30_2_V_addr_reg_20902.read();
    } else {
        in_buf_30_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_30_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_30_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_2_V_d0() {
    in_buf_30_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_30_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_30_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_3_V_address0 = in_buf_30_3_V_addr_reg_21062.read();
    } else {
        in_buf_30_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_30_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_30_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_3_V_d0() {
    in_buf_30_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_30_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_30_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_30_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_4_V_address0 = in_buf_30_4_V_addr_reg_21222.read();
    } else {
        in_buf_30_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_30_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_30_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_4_V_d0() {
    in_buf_30_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_30_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_30_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_5_V_address0 = in_buf_30_5_V_addr_reg_21382.read();
    } else {
        in_buf_30_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_30_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_30_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_5_V_d0() {
    in_buf_30_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_30_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_30_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_30_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_6_V_address0 = in_buf_30_6_V_addr_reg_21542.read();
    } else {
        in_buf_30_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_30_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_30_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_6_V_d0() {
    in_buf_30_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_30_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_30_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_7_V_address0 = in_buf_30_7_V_addr_reg_21702.read();
    } else {
        in_buf_30_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_30_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_30_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_7_V_d0() {
    in_buf_30_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_30_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_30_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_31_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_0_V_address0 = in_buf_31_0_V_addr_reg_20587.read();
    } else {
        in_buf_31_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_31_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_31_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_31_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_1_V_address0 = in_buf_31_1_V_addr_reg_20747.read();
    } else {
        in_buf_31_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_31_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_31_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_1_V_d0() {
    in_buf_31_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_31_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_31_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_31_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_2_V_address0 = in_buf_31_2_V_addr_reg_20907.read();
    } else {
        in_buf_31_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_31_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_31_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_2_V_d0() {
    in_buf_31_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_31_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_31_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_3_V_address0 = in_buf_31_3_V_addr_reg_21067.read();
    } else {
        in_buf_31_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_31_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_31_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_3_V_d0() {
    in_buf_31_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_31_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_31_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_31_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_4_V_address0 = in_buf_31_4_V_addr_reg_21227.read();
    } else {
        in_buf_31_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_31_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_31_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_4_V_d0() {
    in_buf_31_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_31_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_31_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_31_5_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_5_V_address0 = in_buf_31_5_V_addr_reg_21387.read();
    } else {
        in_buf_31_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_31_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_31_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_5_V_d0() {
    in_buf_31_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_31_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_31_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_6_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_6_V_address0 = in_buf_31_6_V_addr_reg_21547.read();
    } else {
        in_buf_31_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_31_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_31_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_6_V_d0() {
    in_buf_31_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_31_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_31_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_31_7_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_7_V_address0 = in_buf_31_7_V_addr_reg_21707.read();
    } else {
        in_buf_31_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_31_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_31_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_7_V_d0() {
    in_buf_31_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_31_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1E))) {
        in_buf_31_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_3_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_0_V_address0 = in_buf_3_0_V_addr_reg_20447.read();
    } else {
        in_buf_3_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_3_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_3_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3))) {
        in_buf_3_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_1_V_address0 = in_buf_3_1_V_addr_reg_20607.read();
    } else {
        in_buf_3_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_3_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_3_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_1_V_d0() {
    in_buf_3_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_3_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3))) {
        in_buf_3_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_3_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_2_V_address0 = in_buf_3_2_V_addr_reg_20767.read();
    } else {
        in_buf_3_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_3_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_3_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_2_V_d0() {
    in_buf_3_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_3_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3))) {
        in_buf_3_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_3_V_address0 = in_buf_3_3_V_addr_reg_20927.read();
    } else {
        in_buf_3_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_3_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_3_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_3_V_d0() {
    in_buf_3_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_3_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3))) {
        in_buf_3_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_3_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_4_V_address0 = in_buf_3_4_V_addr_reg_21087.read();
    } else {
        in_buf_3_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_3_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_3_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_4_V_d0() {
    in_buf_3_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_3_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3))) {
        in_buf_3_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_5_V_address0 = in_buf_3_5_V_addr_reg_21247.read();
    } else {
        in_buf_3_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_3_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_3_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_5_V_d0() {
    in_buf_3_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_3_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3))) {
        in_buf_3_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_3_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_6_V_address0 = in_buf_3_6_V_addr_reg_21407.read();
    } else {
        in_buf_3_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_3_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_3_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_6_V_d0() {
    in_buf_3_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_3_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3))) {
        in_buf_3_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_7_V_address0 = in_buf_3_7_V_addr_reg_21567.read();
    } else {
        in_buf_3_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_3_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_3_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_7_V_d0() {
    in_buf_3_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_3_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_3))) {
        in_buf_3_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_4_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_0_V_address0 = in_buf_4_0_V_addr_reg_20452.read();
    } else {
        in_buf_4_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_4_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_4_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4))) {
        in_buf_4_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_1_V_address0 = in_buf_4_1_V_addr_reg_20612.read();
    } else {
        in_buf_4_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_4_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_4_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_1_V_d0() {
    in_buf_4_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_4_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4))) {
        in_buf_4_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_4_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_2_V_address0 = in_buf_4_2_V_addr_reg_20772.read();
    } else {
        in_buf_4_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_4_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_4_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_2_V_d0() {
    in_buf_4_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_4_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4))) {
        in_buf_4_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_3_V_address0 = in_buf_4_3_V_addr_reg_20932.read();
    } else {
        in_buf_4_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_4_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_4_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_3_V_d0() {
    in_buf_4_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_4_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4))) {
        in_buf_4_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_4_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_4_V_address0 = in_buf_4_4_V_addr_reg_21092.read();
    } else {
        in_buf_4_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_4_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_4_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_4_V_d0() {
    in_buf_4_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_4_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4))) {
        in_buf_4_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_5_V_address0 = in_buf_4_5_V_addr_reg_21252.read();
    } else {
        in_buf_4_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_4_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_4_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_5_V_d0() {
    in_buf_4_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_4_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4))) {
        in_buf_4_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_4_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_6_V_address0 = in_buf_4_6_V_addr_reg_21412.read();
    } else {
        in_buf_4_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_4_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_4_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_6_V_d0() {
    in_buf_4_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_4_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4))) {
        in_buf_4_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_7_V_address0 = in_buf_4_7_V_addr_reg_21572.read();
    } else {
        in_buf_4_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_4_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_4_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_7_V_d0() {
    in_buf_4_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_4_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_4))) {
        in_buf_4_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_5_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_0_V_address0 = in_buf_5_0_V_addr_reg_20457.read();
    } else {
        in_buf_5_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_5_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_5_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5))) {
        in_buf_5_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_1_V_address0 = in_buf_5_1_V_addr_reg_20617.read();
    } else {
        in_buf_5_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_5_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_5_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_1_V_d0() {
    in_buf_5_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_5_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5))) {
        in_buf_5_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_5_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_2_V_address0 = in_buf_5_2_V_addr_reg_20777.read();
    } else {
        in_buf_5_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_5_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_5_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_2_V_d0() {
    in_buf_5_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_5_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5))) {
        in_buf_5_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_3_V_address0 = in_buf_5_3_V_addr_reg_20937.read();
    } else {
        in_buf_5_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_5_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_5_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_3_V_d0() {
    in_buf_5_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_5_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5))) {
        in_buf_5_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_5_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_4_V_address0 = in_buf_5_4_V_addr_reg_21097.read();
    } else {
        in_buf_5_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_5_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_5_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_4_V_d0() {
    in_buf_5_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_5_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5))) {
        in_buf_5_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_5_V_address0 = in_buf_5_5_V_addr_reg_21257.read();
    } else {
        in_buf_5_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_5_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_5_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_5_V_d0() {
    in_buf_5_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_5_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5))) {
        in_buf_5_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_5_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_6_V_address0 = in_buf_5_6_V_addr_reg_21417.read();
    } else {
        in_buf_5_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_5_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_5_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_6_V_d0() {
    in_buf_5_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_5_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5))) {
        in_buf_5_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_7_V_address0 = in_buf_5_7_V_addr_reg_21577.read();
    } else {
        in_buf_5_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_5_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_5_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_7_V_d0() {
    in_buf_5_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_5_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_5))) {
        in_buf_5_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_6_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_0_V_address0 = in_buf_6_0_V_addr_reg_20462.read();
    } else {
        in_buf_6_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_6_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_6_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6))) {
        in_buf_6_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_1_V_address0 = in_buf_6_1_V_addr_reg_20622.read();
    } else {
        in_buf_6_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_6_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_6_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_1_V_d0() {
    in_buf_6_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_6_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6))) {
        in_buf_6_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_6_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_2_V_address0 = in_buf_6_2_V_addr_reg_20782.read();
    } else {
        in_buf_6_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_6_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_6_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_2_V_d0() {
    in_buf_6_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_6_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6))) {
        in_buf_6_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_3_V_address0 = in_buf_6_3_V_addr_reg_20942.read();
    } else {
        in_buf_6_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_6_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_6_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_3_V_d0() {
    in_buf_6_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_6_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6))) {
        in_buf_6_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_6_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_4_V_address0 = in_buf_6_4_V_addr_reg_21102.read();
    } else {
        in_buf_6_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_6_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_6_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_4_V_d0() {
    in_buf_6_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_6_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6))) {
        in_buf_6_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_5_V_address0 = in_buf_6_5_V_addr_reg_21262.read();
    } else {
        in_buf_6_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_6_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_6_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_5_V_d0() {
    in_buf_6_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_6_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6))) {
        in_buf_6_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_6_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_6_V_address0 = in_buf_6_6_V_addr_reg_21422.read();
    } else {
        in_buf_6_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_6_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_6_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_6_V_d0() {
    in_buf_6_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_6_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6))) {
        in_buf_6_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_7_V_address0 = in_buf_6_7_V_addr_reg_21582.read();
    } else {
        in_buf_6_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_6_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_6_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_7_V_d0() {
    in_buf_6_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_6_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_6))) {
        in_buf_6_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_7_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_0_V_address0 = in_buf_7_0_V_addr_reg_20467.read();
    } else {
        in_buf_7_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_7_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_7_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7))) {
        in_buf_7_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_1_V_address0 = in_buf_7_1_V_addr_reg_20627.read();
    } else {
        in_buf_7_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_7_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_7_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_1_V_d0() {
    in_buf_7_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_7_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7))) {
        in_buf_7_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_7_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_2_V_address0 = in_buf_7_2_V_addr_reg_20787.read();
    } else {
        in_buf_7_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_7_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_7_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_2_V_d0() {
    in_buf_7_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_7_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7))) {
        in_buf_7_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_3_V_address0 = in_buf_7_3_V_addr_reg_20947.read();
    } else {
        in_buf_7_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_7_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_7_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_3_V_d0() {
    in_buf_7_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_7_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7))) {
        in_buf_7_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_7_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_4_V_address0 = in_buf_7_4_V_addr_reg_21107.read();
    } else {
        in_buf_7_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_7_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_7_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_4_V_d0() {
    in_buf_7_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_7_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7))) {
        in_buf_7_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_5_V_address0 = in_buf_7_5_V_addr_reg_21267.read();
    } else {
        in_buf_7_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_7_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_7_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_5_V_d0() {
    in_buf_7_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_7_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7))) {
        in_buf_7_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_7_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_6_V_address0 = in_buf_7_6_V_addr_reg_21427.read();
    } else {
        in_buf_7_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_7_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_7_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_6_V_d0() {
    in_buf_7_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_7_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7))) {
        in_buf_7_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_7_V_address0 = in_buf_7_7_V_addr_reg_21587.read();
    } else {
        in_buf_7_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_7_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_7_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_7_V_d0() {
    in_buf_7_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_7_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_7))) {
        in_buf_7_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_8_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_0_V_address0 = in_buf_8_0_V_addr_reg_20472.read();
    } else {
        in_buf_8_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_8_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_8_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8))) {
        in_buf_8_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_1_V_address0 = in_buf_8_1_V_addr_reg_20632.read();
    } else {
        in_buf_8_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_8_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_8_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_1_V_d0() {
    in_buf_8_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_8_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8))) {
        in_buf_8_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_8_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_2_V_address0 = in_buf_8_2_V_addr_reg_20792.read();
    } else {
        in_buf_8_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_8_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_8_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_2_V_d0() {
    in_buf_8_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_8_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8))) {
        in_buf_8_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_3_V_address0 = in_buf_8_3_V_addr_reg_20952.read();
    } else {
        in_buf_8_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_8_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_8_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_3_V_d0() {
    in_buf_8_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_8_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8))) {
        in_buf_8_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_8_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_4_V_address0 = in_buf_8_4_V_addr_reg_21112.read();
    } else {
        in_buf_8_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_8_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_8_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_4_V_d0() {
    in_buf_8_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_8_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8))) {
        in_buf_8_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_5_V_address0 = in_buf_8_5_V_addr_reg_21272.read();
    } else {
        in_buf_8_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_8_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_8_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_5_V_d0() {
    in_buf_8_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_8_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8))) {
        in_buf_8_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_8_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_6_V_address0 = in_buf_8_6_V_addr_reg_21432.read();
    } else {
        in_buf_8_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_8_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_8_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_6_V_d0() {
    in_buf_8_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_8_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8))) {
        in_buf_8_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_7_V_address0 = in_buf_8_7_V_addr_reg_21592.read();
    } else {
        in_buf_8_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_8_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_8_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_7_V_d0() {
    in_buf_8_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_8_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_8))) {
        in_buf_8_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_9_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_0_V_address0 = in_buf_9_0_V_addr_reg_20477.read();
    } else {
        in_buf_9_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_9_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_9_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9))) {
        in_buf_9_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_1_V_address0 = in_buf_9_1_V_addr_reg_20637.read();
    } else {
        in_buf_9_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_9_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_9_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_1_V_d0() {
    in_buf_9_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_9_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9))) {
        in_buf_9_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_9_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_2_V_address0 = in_buf_9_2_V_addr_reg_20797.read();
    } else {
        in_buf_9_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_9_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_9_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_2_V_d0() {
    in_buf_9_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_9_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9))) {
        in_buf_9_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_3_V_address0 = in_buf_9_3_V_addr_reg_20957.read();
    } else {
        in_buf_9_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_9_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_9_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_3_V_d0() {
    in_buf_9_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_9_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9))) {
        in_buf_9_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_9_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_4_V_address0 = in_buf_9_4_V_addr_reg_21117.read();
    } else {
        in_buf_9_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_9_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_9_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_4_V_d0() {
    in_buf_9_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_9_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9))) {
        in_buf_9_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_5_V_address0 = in_buf_9_5_V_addr_reg_21277.read();
    } else {
        in_buf_9_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_9_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_9_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_5_V_d0() {
    in_buf_9_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_9_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9))) {
        in_buf_9_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_9_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_6_V_address0 = in_buf_9_6_V_addr_reg_21437.read();
    } else {
        in_buf_9_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_9_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_9_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_6_V_d0() {
    in_buf_9_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_9_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9))) {
        in_buf_9_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_7_V_address0 = in_buf_9_7_V_addr_reg_21597.read();
    } else {
        in_buf_9_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_9_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_9_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_7_V_d0() {
    in_buf_9_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_9_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_9))) {
        in_buf_9_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_stream_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19078.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20386.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21712.read())))) {
        in_stream_TDATA_blk_n = in_stream_data_V_0_state.read()[0];
    } else {
        in_stream_TDATA_blk_n = ap_const_logic_1;
    }
}

void mmult_hw::thread_in_stream_TREADY() {
    in_stream_TREADY = in_stream_dest_V_0_state.read()[1];
}

void mmult_hw::thread_in_stream_data_V_0_ack_in() {
    in_stream_data_V_0_ack_in = in_stream_data_V_0_state.read()[1];
}

void mmult_hw::thread_in_stream_data_V_0_ack_out() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19078.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20386.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21712.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_stream_data_V_0_ack_out = ap_const_logic_1;
    } else {
        in_stream_data_V_0_ack_out = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_stream_data_V_0_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, in_stream_data_V_0_sel.read())) {
        in_stream_data_V_0_data_out = in_stream_data_V_0_payload_B.read();
    } else {
        in_stream_data_V_0_data_out = in_stream_data_V_0_payload_A.read();
    }
}

void mmult_hw::thread_in_stream_data_V_0_load_A() {
    in_stream_data_V_0_load_A = (in_stream_data_V_0_state_cmp_full.read() & ~in_stream_data_V_0_sel_wr.read());
}

void mmult_hw::thread_in_stream_data_V_0_load_B() {
    in_stream_data_V_0_load_B = (in_stream_data_V_0_sel_wr.read() & in_stream_data_V_0_state_cmp_full.read());
}

void mmult_hw::thread_in_stream_data_V_0_sel() {
    in_stream_data_V_0_sel = in_stream_data_V_0_sel_rd.read();
}

void mmult_hw::thread_in_stream_data_V_0_state_cmp_full() {
    in_stream_data_V_0_state_cmp_full =  (sc_logic) ((!in_stream_data_V_0_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(in_stream_data_V_0_state.read() != ap_const_lv2_1))[0];
}

void mmult_hw::thread_in_stream_data_V_0_vld_in() {
    in_stream_data_V_0_vld_in = in_stream_TVALID.read();
}

void mmult_hw::thread_in_stream_data_V_0_vld_out() {
    in_stream_data_V_0_vld_out = in_stream_data_V_0_state.read()[0];
}

void mmult_hw::thread_in_stream_dest_V_0_ack_out() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19078.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20386.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21712.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_stream_dest_V_0_ack_out = ap_const_logic_1;
    } else {
        in_stream_dest_V_0_ack_out = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_stream_dest_V_0_vld_in() {
    in_stream_dest_V_0_vld_in = in_stream_TVALID.read();
}

void mmult_hw::thread_indvar_flatten_next_fu_12663_p2() {
    indvar_flatten_next_fu_12663_p2 = (!indvar_flatten_reg_11296.read().is_01() || !ap_const_lv10_1.is_01())? sc_lv<10>(): (sc_biguint<10>(indvar_flatten_reg_11296.read()) + sc_biguint<10>(ap_const_lv10_1));
}

void mmult_hw::thread_indvars_iv_next1_fu_12296_p2() {
    indvars_iv_next1_fu_12296_p2 = (!indvars_iv1_reg_11161.read().is_01() || !ap_const_lv9_20.is_01())? sc_lv<9>(): (sc_biguint<9>(indvars_iv1_reg_11161.read()) + sc_biguint<9>(ap_const_lv9_20));
}

void mmult_hw::thread_indvars_iv_next_fu_18039_p2() {
    indvars_iv_next_fu_18039_p2 = (!indvars_iv_reg_11329.read().is_01() || !ap_const_lv16_5.is_01())? sc_lv<16>(): (sc_biguint<16>(indvars_iv_reg_11329.read()) + sc_biguint<16>(ap_const_lv16_5));
}

void mmult_hw::thread_is_idx_4_fu_12310_p2() {
    is_idx_4_fu_12310_p2 = (!is_idx_3_reg_11217.read().is_01() || !ap_const_lv19_800.is_01())? sc_lv<19>(): (sc_biguint<19>(is_idx_3_reg_11217.read()) + sc_biguint<19>(ap_const_lv19_800));
}

void mmult_hw::thread_is_idx_6_fu_12328_p2() {
    is_idx_6_fu_12328_p2 = (!indvars_iv257_in_reg_11253.read().is_01() || !ap_const_lv19_20.is_01())? sc_lv<19>(): (sc_biguint<19>(indvars_iv257_in_reg_11253.read()) + sc_biguint<19>(ap_const_lv19_20));
}

void mmult_hw::thread_is_idx_7_fu_12599_p2() {
    is_idx_7_fu_12599_p2 = (!ap_const_lv19_1.is_01() || !is_idx_5_reg_11275.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_1) + sc_biguint<19>(is_idx_5_reg_11275.read()));
}

void mmult_hw::thread_j3_mid2_fu_12681_p3() {
    j3_mid2_fu_12681_p3 = (!exitcond5_fu_12675_p2.read()[0].is_01())? sc_lv<4>(): ((exitcond5_fu_12675_p2.read()[0].to_bool())? ap_const_lv4_0: j3_reg_11318.read());
}

void mmult_hw::thread_j_1_fu_12254_p2() {
    j_1_fu_12254_p2 = (!j_reg_11206.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(j_reg_11206.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void mmult_hw::thread_j_2_fu_12615_p2() {
    j_2_fu_12615_p2 = (!j2_reg_11285.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(j2_reg_11285.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void mmult_hw::thread_j_3_fu_18024_p2() {
    j_3_fu_18024_p2 = (!j4_reg_11371.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<4>(): (sc_biguint<4>(j4_reg_11371.read()) + sc_biguint<4>(ap_const_lv4_2));
}

void mmult_hw::thread_j_4_fu_12959_p2() {
    j_4_fu_12959_p2 = (!j3_mid2_fu_12681_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(j3_mid2_fu_12681_p3.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void mmult_hw::thread_last_assign_fu_18018_p2() {
    last_assign_fu_18018_p2 = (!tmp_28_fu_18012_p2.read().is_01() || !ap_const_lv16_A000.is_01())? sc_lv<1>(): sc_lv<1>(tmp_28_fu_18012_p2.read() == ap_const_lv16_A000);
}

void mmult_hw::thread_offset_buf_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        offset_buf_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        offset_buf_V_address0 =  (sc_lv<4>) (tmp_4_fu_11916_p1.read());
    } else {
        offset_buf_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_offset_buf_V_address1() {
    offset_buf_V_address1 =  (sc_lv<4>) (tmp_6_fu_11932_p1.read());
}

void mmult_hw::thread_offset_buf_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        offset_buf_V_ce0 = ap_const_logic_1;
    } else {
        offset_buf_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_offset_buf_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0))) {
        offset_buf_V_ce1 = ap_const_logic_1;
    } else {
        offset_buf_V_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_offset_buf_V_d0() {
    offset_buf_V_d0 = in_stream_data_V_0_data_out.read().range(32-1, 0);
}

void mmult_hw::thread_offset_buf_V_d1() {
    offset_buf_V_d1 = in_stream_data_V_0_data_out.read().range(63, 32);
}

void mmult_hw::thread_offset_buf_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19078.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0))) {
        offset_buf_V_we0 = ap_const_logic_1;
    } else {
        offset_buf_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_offset_buf_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19078.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0))) {
        offset_buf_V_we1 = ap_const_logic_1;
    } else {
        offset_buf_V_we1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_os_idx_2_phi_fu_11364_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_26758.read()))) {
        os_idx_2_phi_fu_11364_p4 = tmp_28_reg_26772.read();
    } else {
        os_idx_2_phi_fu_11364_p4 = os_idx_2_reg_11361.read();
    }
}

void mmult_hw::thread_os_idx_3_fu_17912_p2() {
    os_idx_3_fu_17912_p2 = (!os_idx_reg_11229.read().is_01() || !ap_const_lv16_140.is_01())? sc_lv<16>(): (sc_biguint<16>(os_idx_reg_11229.read()) + sc_biguint<16>(ap_const_lv16_140));
}

void mmult_hw::thread_out_buf_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()))) {
        out_buf_V_address0 =  (sc_lv<10>) (tmp_259_cast_fu_17987_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter7.read()))) {
        out_buf_V_address0 =  (sc_lv<10>) (tmp_20_cast_fu_17870_p1.read());
    } else {
        out_buf_V_address0 =  (sc_lv<10>) ("XXXXXXXXXX");
    }
}

void mmult_hw::thread_out_buf_V_address1() {
    out_buf_V_address1 =  (sc_lv<10>) (tmp_260_cast_fu_18007_p1.read());
}

void mmult_hw::thread_out_buf_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter7.read())))) {
        out_buf_V_ce0 = ap_const_logic_1;
    } else {
        out_buf_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_buf_V_ce1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()))) {
        out_buf_V_ce1 = ap_const_logic_1;
    } else {
        out_buf_V_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_buf_V_d0() {
    out_buf_V_d0 = (!tmp128_cast_fu_17895_p1.read().is_01() || !tmp1_fu_17878_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp128_cast_fu_17895_p1.read()) + sc_biguint<32>(tmp1_fu_17878_p2.read()));
}

void mmult_hw::thread_out_buf_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp3_iter6_exitcond_flatten_reg_21730.read()))) {
        out_buf_V_we0 = ap_const_logic_1;
    } else {
        out_buf_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_stream_TDATA() {
    out_stream_TDATA = out_stream_data_V_1_data_out.read();
}

void mmult_hw::thread_out_stream_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_26758.read())) || 
         (esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter1_exitcond_reg_26758.read())))) {
        out_stream_TDATA_blk_n = out_stream_data_V_1_state.read()[1];
    } else {
        out_stream_TDATA_blk_n = ap_const_logic_1;
    }
}

void mmult_hw::thread_out_stream_TDEST() {
    out_stream_TDEST = out_stream_dest_V_1_data_out.read();
}

void mmult_hw::thread_out_stream_TID() {
    out_stream_TID = out_stream_id_V_1_data_out.read();
}

void mmult_hw::thread_out_stream_TKEEP() {
    out_stream_TKEEP = out_stream_keep_V_1_data_out.read();
}

void mmult_hw::thread_out_stream_TLAST() {
    out_stream_TLAST = out_stream_last_V_1_data_out.read();
}

void mmult_hw::thread_out_stream_TSTRB() {
    out_stream_TSTRB = out_stream_strb_V_1_data_out.read();
}

void mmult_hw::thread_out_stream_TUSER() {
    out_stream_TUSER = out_stream_user_V_1_data_out.read();
}

void mmult_hw::thread_out_stream_TVALID() {
    out_stream_TVALID = out_stream_dest_V_1_state.read()[0];
}

void mmult_hw::thread_out_stream_data_V_1_ack_in() {
    out_stream_data_V_1_ack_in = out_stream_data_V_1_state.read()[1];
}

void mmult_hw::thread_out_stream_data_V_1_ack_out() {
    out_stream_data_V_1_ack_out = out_stream_TREADY.read();
}

void mmult_hw::thread_out_stream_data_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, out_stream_data_V_1_sel.read())) {
        out_stream_data_V_1_data_out = out_stream_data_V_1_payload_B.read();
    } else {
        out_stream_data_V_1_data_out = out_stream_data_V_1_payload_A.read();
    }
}

void mmult_hw::thread_out_stream_data_V_1_load_A() {
    out_stream_data_V_1_load_A = (out_stream_data_V_1_state_cmp_full.read() & ~out_stream_data_V_1_sel_wr.read());
}

void mmult_hw::thread_out_stream_data_V_1_load_B() {
    out_stream_data_V_1_load_B = (out_stream_data_V_1_sel_wr.read() & out_stream_data_V_1_state_cmp_full.read());
}

void mmult_hw::thread_out_stream_data_V_1_sel() {
    out_stream_data_V_1_sel = out_stream_data_V_1_sel_rd.read();
}

void mmult_hw::thread_out_stream_data_V_1_state_cmp_full() {
    out_stream_data_V_1_state_cmp_full =  (sc_logic) ((!out_stream_data_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(out_stream_data_V_1_state.read() != ap_const_lv2_1))[0];
}

void mmult_hw::thread_out_stream_data_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_26758.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0))) {
        out_stream_data_V_1_vld_in = ap_const_logic_1;
    } else {
        out_stream_data_V_1_vld_in = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_stream_data_V_1_vld_out() {
    out_stream_data_V_1_vld_out = out_stream_data_V_1_state.read()[0];
}

void mmult_hw::thread_out_stream_dest_V_1_ack_in() {
    out_stream_dest_V_1_ack_in = out_stream_dest_V_1_state.read()[1];
}

void mmult_hw::thread_out_stream_dest_V_1_ack_out() {
    out_stream_dest_V_1_ack_out = out_stream_TREADY.read();
}

void mmult_hw::thread_out_stream_dest_V_1_data_out() {
    out_stream_dest_V_1_data_out = ap_const_lv5_0;
}

void mmult_hw::thread_out_stream_dest_V_1_sel() {
    out_stream_dest_V_1_sel = out_stream_dest_V_1_sel_rd.read();
}

void mmult_hw::thread_out_stream_dest_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_26758.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0))) {
        out_stream_dest_V_1_vld_in = ap_const_logic_1;
    } else {
        out_stream_dest_V_1_vld_in = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_stream_dest_V_1_vld_out() {
    out_stream_dest_V_1_vld_out = out_stream_dest_V_1_state.read()[0];
}

void mmult_hw::thread_out_stream_id_V_1_ack_in() {
    out_stream_id_V_1_ack_in = out_stream_id_V_1_state.read()[1];
}

void mmult_hw::thread_out_stream_id_V_1_ack_out() {
    out_stream_id_V_1_ack_out = out_stream_TREADY.read();
}

void mmult_hw::thread_out_stream_id_V_1_data_out() {
    out_stream_id_V_1_data_out = ap_const_lv5_0;
}

void mmult_hw::thread_out_stream_id_V_1_sel() {
    out_stream_id_V_1_sel = out_stream_id_V_1_sel_rd.read();
}

void mmult_hw::thread_out_stream_id_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_26758.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0))) {
        out_stream_id_V_1_vld_in = ap_const_logic_1;
    } else {
        out_stream_id_V_1_vld_in = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_stream_id_V_1_vld_out() {
    out_stream_id_V_1_vld_out = out_stream_id_V_1_state.read()[0];
}

void mmult_hw::thread_out_stream_keep_V_1_ack_in() {
    out_stream_keep_V_1_ack_in = out_stream_keep_V_1_state.read()[1];
}

void mmult_hw::thread_out_stream_keep_V_1_ack_out() {
    out_stream_keep_V_1_ack_out = out_stream_TREADY.read();
}

void mmult_hw::thread_out_stream_keep_V_1_data_out() {
    out_stream_keep_V_1_data_out = ap_const_lv8_FF;
}

void mmult_hw::thread_out_stream_keep_V_1_sel() {
    out_stream_keep_V_1_sel = out_stream_keep_V_1_sel_rd.read();
}

void mmult_hw::thread_out_stream_keep_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_26758.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0))) {
        out_stream_keep_V_1_vld_in = ap_const_logic_1;
    } else {
        out_stream_keep_V_1_vld_in = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_stream_keep_V_1_vld_out() {
    out_stream_keep_V_1_vld_out = out_stream_keep_V_1_state.read()[0];
}

void mmult_hw::thread_out_stream_last_V_1_ack_in() {
    out_stream_last_V_1_ack_in = out_stream_last_V_1_state.read()[1];
}

void mmult_hw::thread_out_stream_last_V_1_ack_out() {
    out_stream_last_V_1_ack_out = out_stream_TREADY.read();
}

void mmult_hw::thread_out_stream_last_V_1_data_out() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, out_stream_last_V_1_sel.read())) {
        out_stream_last_V_1_data_out = out_stream_last_V_1_payload_B.read();
    } else {
        out_stream_last_V_1_data_out = out_stream_last_V_1_payload_A.read();
    }
}

void mmult_hw::thread_out_stream_last_V_1_load_A() {
    out_stream_last_V_1_load_A = (out_stream_last_V_1_state_cmp_full.read() & ~out_stream_last_V_1_sel_wr.read());
}

void mmult_hw::thread_out_stream_last_V_1_load_B() {
    out_stream_last_V_1_load_B = (out_stream_last_V_1_sel_wr.read() & out_stream_last_V_1_state_cmp_full.read());
}

void mmult_hw::thread_out_stream_last_V_1_sel() {
    out_stream_last_V_1_sel = out_stream_last_V_1_sel_rd.read();
}

void mmult_hw::thread_out_stream_last_V_1_state_cmp_full() {
    out_stream_last_V_1_state_cmp_full =  (sc_logic) ((!out_stream_last_V_1_state.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(out_stream_last_V_1_state.read() != ap_const_lv2_1))[0];
}

void mmult_hw::thread_out_stream_last_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_26758.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0))) {
        out_stream_last_V_1_vld_in = ap_const_logic_1;
    } else {
        out_stream_last_V_1_vld_in = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_stream_last_V_1_vld_out() {
    out_stream_last_V_1_vld_out = out_stream_last_V_1_state.read()[0];
}

void mmult_hw::thread_out_stream_strb_V_1_ack_in() {
    out_stream_strb_V_1_ack_in = out_stream_strb_V_1_state.read()[1];
}

void mmult_hw::thread_out_stream_strb_V_1_ack_out() {
    out_stream_strb_V_1_ack_out = out_stream_TREADY.read();
}

void mmult_hw::thread_out_stream_strb_V_1_data_out() {
    out_stream_strb_V_1_data_out = ap_const_lv8_FF;
}

void mmult_hw::thread_out_stream_strb_V_1_sel() {
    out_stream_strb_V_1_sel = out_stream_strb_V_1_sel_rd.read();
}

void mmult_hw::thread_out_stream_strb_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_26758.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0))) {
        out_stream_strb_V_1_vld_in = ap_const_logic_1;
    } else {
        out_stream_strb_V_1_vld_in = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_stream_strb_V_1_vld_out() {
    out_stream_strb_V_1_vld_out = out_stream_strb_V_1_state.read()[0];
}

void mmult_hw::thread_out_stream_user_V_1_ack_in() {
    out_stream_user_V_1_ack_in = out_stream_user_V_1_state.read()[1];
}

void mmult_hw::thread_out_stream_user_V_1_ack_out() {
    out_stream_user_V_1_ack_out = out_stream_TREADY.read();
}

void mmult_hw::thread_out_stream_user_V_1_data_out() {
    out_stream_user_V_1_data_out = ap_const_lv4_0;
}

void mmult_hw::thread_out_stream_user_V_1_sel() {
    out_stream_user_V_1_sel = out_stream_user_V_1_sel_rd.read();
}

void mmult_hw::thread_out_stream_user_V_1_vld_in() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_26758.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0))) {
        out_stream_user_V_1_vld_in = ap_const_logic_1;
    } else {
        out_stream_user_V_1_vld_in = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_stream_user_V_1_vld_out() {
    out_stream_user_V_1_vld_out = out_stream_user_V_1_state.read()[0];
}

void mmult_hw::thread_p_shl1_cast_fu_17851_p1() {
    p_shl1_cast_fu_17851_p1 = esl_zext<11,8>(tmp_25_fu_17844_p3.read());
}

void mmult_hw::thread_p_shl2_cast_fu_17944_p1() {
    p_shl2_cast_fu_17944_p1 = esl_zext<11,10>(tmp_27_fu_17936_p3.read());
}

void mmult_hw::thread_p_shl3_cast_fu_17956_p1() {
    p_shl3_cast_fu_17956_p1 = esl_zext<11,8>(tmp_29_fu_17948_p3.read());
}

void mmult_hw::thread_p_shl_cast_fu_17840_p1() {
    p_shl_cast_fu_17840_p1 = esl_zext<11,10>(tmp_16_fu_17833_p3.read());
}

void mmult_hw::thread_t_1_fu_17966_p2() {
    t_1_fu_17966_p2 = (!t_reg_11241.read().is_01() || !ap_const_lv14_40.is_01())? sc_lv<14>(): (sc_biguint<14>(t_reg_11241.read()) + sc_biguint<14>(ap_const_lv14_40));
}

void mmult_hw::thread_tmp100_cast_fu_16751_p1() {
    tmp100_cast_fu_16751_p1 = esl_sext<19,18>(tmp100_fu_16745_p2.read());
}

void mmult_hw::thread_tmp100_fu_16745_p2() {
    tmp100_fu_16745_p2 = (!tmp102_cast_fu_16742_p1.read().is_01() || !tmp101_cast_fu_16739_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp102_cast_fu_16742_p1.read()) + sc_bigint<18>(tmp101_cast_fu_16739_p1.read()));
}

void mmult_hw::thread_tmp101_cast_fu_16739_p1() {
    tmp101_cast_fu_16739_p1 = esl_sext<18,17>(tmp101_reg_26108.read());
}

void mmult_hw::thread_tmp102_cast_fu_16742_p1() {
    tmp102_cast_fu_16742_p1 = esl_sext<18,17>(tmp102_reg_26113.read());
}

void mmult_hw::thread_tmp103_cast_fu_16767_p1() {
    tmp103_cast_fu_16767_p1 = esl_sext<19,18>(tmp103_fu_16761_p2.read());
}

void mmult_hw::thread_tmp103_fu_16761_p2() {
    tmp103_fu_16761_p2 = (!tmp105_cast_fu_16758_p1.read().is_01() || !tmp104_cast_fu_16755_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp105_cast_fu_16758_p1.read()) + sc_bigint<18>(tmp104_cast_fu_16755_p1.read()));
}

void mmult_hw::thread_tmp104_cast_fu_16755_p1() {
    tmp104_cast_fu_16755_p1 = esl_sext<18,17>(tmp104_reg_26118.read());
}

void mmult_hw::thread_tmp105_cast_fu_16758_p1() {
    tmp105_cast_fu_16758_p1 = esl_sext<18,17>(tmp105_reg_26123.read());
}

void mmult_hw::thread_tmp106_cast_fu_17598_p1() {
    tmp106_cast_fu_17598_p1 = esl_sext<20,19>(tmp106_reg_26568.read());
}

void mmult_hw::thread_tmp106_fu_16809_p2() {
    tmp106_fu_16809_p2 = (!tmp110_cast_fu_16805_p1.read().is_01() || !tmp107_cast_fu_16789_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp110_cast_fu_16805_p1.read()) + sc_bigint<19>(tmp107_cast_fu_16789_p1.read()));
}

void mmult_hw::thread_tmp107_cast_fu_16789_p1() {
    tmp107_cast_fu_16789_p1 = esl_sext<19,18>(tmp107_fu_16783_p2.read());
}

void mmult_hw::thread_tmp107_fu_16783_p2() {
    tmp107_fu_16783_p2 = (!tmp109_cast_fu_16780_p1.read().is_01() || !tmp108_cast_fu_16777_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp109_cast_fu_16780_p1.read()) + sc_bigint<18>(tmp108_cast_fu_16777_p1.read()));
}

void mmult_hw::thread_tmp108_cast_fu_16777_p1() {
    tmp108_cast_fu_16777_p1 = esl_sext<18,17>(tmp108_reg_26128.read());
}

void mmult_hw::thread_tmp109_cast_fu_16780_p1() {
    tmp109_cast_fu_16780_p1 = esl_sext<18,17>(tmp109_reg_26133.read());
}

void mmult_hw::thread_tmp10_cast_fu_16289_p1() {
    tmp10_cast_fu_16289_p1 = esl_sext<18,17>(tmp10_reg_25878.read());
}

void mmult_hw::thread_tmp110_cast_fu_16805_p1() {
    tmp110_cast_fu_16805_p1 = esl_sext<19,18>(tmp110_fu_16799_p2.read());
}

void mmult_hw::thread_tmp110_fu_16799_p2() {
    tmp110_fu_16799_p2 = (!tmp112_cast_fu_16796_p1.read().is_01() || !tmp111_cast_fu_16793_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp112_cast_fu_16796_p1.read()) + sc_bigint<18>(tmp111_cast_fu_16793_p1.read()));
}

void mmult_hw::thread_tmp111_cast_fu_16793_p1() {
    tmp111_cast_fu_16793_p1 = esl_sext<18,17>(tmp111_reg_26138.read());
}

void mmult_hw::thread_tmp112_cast_fu_16796_p1() {
    tmp112_cast_fu_16796_p1 = esl_sext<18,17>(tmp112_reg_26143.read());
}

void mmult_hw::thread_tmp113_cast_fu_17623_p1() {
    tmp113_cast_fu_17623_p1 = esl_sext<21,20>(tmp113_fu_17617_p2.read());
}

void mmult_hw::thread_tmp113_fu_17617_p2() {
    tmp113_fu_17617_p2 = (!tmp121_cast_fu_17614_p1.read().is_01() || !tmp114_cast_fu_17611_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp121_cast_fu_17614_p1.read()) + sc_bigint<20>(tmp114_cast_fu_17611_p1.read()));
}

void mmult_hw::thread_tmp114_cast_fu_17611_p1() {
    tmp114_cast_fu_17611_p1 = esl_sext<20,19>(tmp114_reg_26573.read());
}

void mmult_hw::thread_tmp114_fu_16847_p2() {
    tmp114_fu_16847_p2 = (!tmp118_cast_fu_16843_p1.read().is_01() || !tmp115_cast_fu_16827_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp118_cast_fu_16843_p1.read()) + sc_bigint<19>(tmp115_cast_fu_16827_p1.read()));
}

void mmult_hw::thread_tmp115_cast_fu_16827_p1() {
    tmp115_cast_fu_16827_p1 = esl_sext<19,18>(tmp115_fu_16821_p2.read());
}

void mmult_hw::thread_tmp115_fu_16821_p2() {
    tmp115_fu_16821_p2 = (!tmp117_cast_fu_16818_p1.read().is_01() || !tmp116_cast_fu_16815_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp117_cast_fu_16818_p1.read()) + sc_bigint<18>(tmp116_cast_fu_16815_p1.read()));
}

void mmult_hw::thread_tmp116_cast_fu_16815_p1() {
    tmp116_cast_fu_16815_p1 = esl_sext<18,17>(tmp116_reg_26148.read());
}

void mmult_hw::thread_tmp117_cast_fu_16818_p1() {
    tmp117_cast_fu_16818_p1 = esl_sext<18,17>(tmp117_reg_26153.read());
}

void mmult_hw::thread_tmp118_cast_fu_16843_p1() {
    tmp118_cast_fu_16843_p1 = esl_sext<19,18>(tmp118_fu_16837_p2.read());
}

void mmult_hw::thread_tmp118_fu_16837_p2() {
    tmp118_fu_16837_p2 = (!tmp120_cast_fu_16834_p1.read().is_01() || !tmp119_cast_fu_16831_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp120_cast_fu_16834_p1.read()) + sc_bigint<18>(tmp119_cast_fu_16831_p1.read()));
}

void mmult_hw::thread_tmp119_cast_fu_16831_p1() {
    tmp119_cast_fu_16831_p1 = esl_sext<18,17>(tmp119_reg_26158.read());
}

void mmult_hw::thread_tmp11_cast_fu_16292_p1() {
    tmp11_cast_fu_16292_p1 = esl_sext<18,17>(tmp11_reg_25883.read());
}

void mmult_hw::thread_tmp120_cast_fu_16834_p1() {
    tmp120_cast_fu_16834_p1 = esl_sext<18,17>(tmp120_reg_26163.read());
}

void mmult_hw::thread_tmp121_cast_fu_17614_p1() {
    tmp121_cast_fu_17614_p1 = esl_sext<20,19>(tmp121_reg_26578.read());
}

void mmult_hw::thread_tmp121_fu_16885_p2() {
    tmp121_fu_16885_p2 = (!tmp125_cast_fu_16881_p1.read().is_01() || !tmp122_cast_fu_16865_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp125_cast_fu_16881_p1.read()) + sc_bigint<19>(tmp122_cast_fu_16865_p1.read()));
}

void mmult_hw::thread_tmp122_cast_fu_16865_p1() {
    tmp122_cast_fu_16865_p1 = esl_sext<19,18>(tmp122_fu_16859_p2.read());
}

void mmult_hw::thread_tmp122_fu_16859_p2() {
    tmp122_fu_16859_p2 = (!tmp124_cast_fu_16856_p1.read().is_01() || !tmp123_cast_fu_16853_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp124_cast_fu_16856_p1.read()) + sc_bigint<18>(tmp123_cast_fu_16853_p1.read()));
}

void mmult_hw::thread_tmp123_cast_fu_16853_p1() {
    tmp123_cast_fu_16853_p1 = esl_sext<18,17>(tmp123_reg_26168.read());
}

void mmult_hw::thread_tmp124_cast_fu_16856_p1() {
    tmp124_cast_fu_16856_p1 = esl_sext<18,17>(tmp124_reg_26173.read());
}

void mmult_hw::thread_tmp125_cast_fu_16881_p1() {
    tmp125_cast_fu_16881_p1 = esl_sext<19,18>(tmp125_fu_16875_p2.read());
}

void mmult_hw::thread_tmp125_fu_16875_p2() {
    tmp125_fu_16875_p2 = (!tmp127_cast_fu_16872_p1.read().is_01() || !tmp126_cast_fu_16869_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp127_cast_fu_16872_p1.read()) + sc_bigint<18>(tmp126_cast_fu_16869_p1.read()));
}

void mmult_hw::thread_tmp126_cast_fu_16869_p1() {
    tmp126_cast_fu_16869_p1 = esl_sext<18,17>(tmp126_reg_26178.read());
}

void mmult_hw::thread_tmp127_cast_fu_16872_p1() {
    tmp127_cast_fu_16872_p1 = esl_sext<18,17>(tmp127_reg_26183.read());
}

void mmult_hw::thread_tmp128_cast_fu_17895_p1() {
    tmp128_cast_fu_17895_p1 = esl_sext<32,24>(tmp128_fu_17889_p2.read());
}

void mmult_hw::thread_tmp128_fu_17889_p2() {
    tmp128_fu_17889_p2 = (!tmp192_cast_fu_17886_p1.read().is_01() || !tmp129_cast_fu_17883_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp192_cast_fu_17886_p1.read()) + sc_bigint<24>(tmp129_cast_fu_17883_p1.read()));
}

void mmult_hw::thread_tmp129_cast_fu_17883_p1() {
    tmp129_cast_fu_17883_p1 = esl_sext<24,22>(tmp129_reg_26713.read());
}

void mmult_hw::thread_tmp129_fu_17802_p2() {
    tmp129_fu_17802_p2 = (!tmp161_cast_fu_17799_p1.read().is_01() || !tmp130_cast_fu_17796_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(tmp161_cast_fu_17799_p1.read()) + sc_bigint<22>(tmp130_cast_fu_17796_p1.read()));
}

void mmult_hw::thread_tmp12_cast_fu_16349_p1() {
    tmp12_cast_fu_16349_p1 = esl_sext<32,19>(tmp12_fu_16343_p2.read());
}

void mmult_hw::thread_tmp12_fu_16343_p2() {
    tmp12_fu_16343_p2 = (!tmp16_cast_fu_16339_p1.read().is_01() || !tmp13_cast_fu_16323_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp16_cast_fu_16339_p1.read()) + sc_bigint<19>(tmp13_cast_fu_16323_p1.read()));
}

void mmult_hw::thread_tmp130_cast_fu_17796_p1() {
    tmp130_cast_fu_17796_p1 = esl_sext<22,21>(tmp130_reg_26683.read());
}

void mmult_hw::thread_tmp130_fu_17665_p2() {
    tmp130_fu_17665_p2 = (!tmp146_cast_fu_17661_p1.read().is_01() || !tmp131_cast_fu_17645_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp146_cast_fu_17661_p1.read()) + sc_bigint<21>(tmp131_cast_fu_17645_p1.read()));
}

void mmult_hw::thread_tmp131_cast_fu_17645_p1() {
    tmp131_cast_fu_17645_p1 = esl_sext<21,20>(tmp131_fu_17639_p2.read());
}

void mmult_hw::thread_tmp131_fu_17639_p2() {
    tmp131_fu_17639_p2 = (!tmp139_cast_fu_17636_p1.read().is_01() || !tmp132_cast_fu_17633_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp139_cast_fu_17636_p1.read()) + sc_bigint<20>(tmp132_cast_fu_17633_p1.read()));
}

void mmult_hw::thread_tmp132_cast_fu_17633_p1() {
    tmp132_cast_fu_17633_p1 = esl_sext<20,19>(tmp132_reg_26583.read());
}

void mmult_hw::thread_tmp132_fu_16923_p2() {
    tmp132_fu_16923_p2 = (!tmp136_cast_fu_16919_p1.read().is_01() || !tmp133_cast_fu_16903_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp136_cast_fu_16919_p1.read()) + sc_bigint<19>(tmp133_cast_fu_16903_p1.read()));
}

void mmult_hw::thread_tmp133_cast_fu_16903_p1() {
    tmp133_cast_fu_16903_p1 = esl_sext<19,18>(tmp133_fu_16897_p2.read());
}

void mmult_hw::thread_tmp133_fu_16897_p2() {
    tmp133_fu_16897_p2 = (!tmp135_cast_fu_16894_p1.read().is_01() || !tmp134_cast_fu_16891_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp135_cast_fu_16894_p1.read()) + sc_bigint<18>(tmp134_cast_fu_16891_p1.read()));
}

void mmult_hw::thread_tmp134_cast_fu_16891_p1() {
    tmp134_cast_fu_16891_p1 = esl_sext<18,17>(tmp134_reg_26188.read());
}

void mmult_hw::thread_tmp135_cast_fu_16894_p1() {
    tmp135_cast_fu_16894_p1 = esl_sext<18,17>(tmp135_reg_26193.read());
}

void mmult_hw::thread_tmp136_cast_fu_16919_p1() {
    tmp136_cast_fu_16919_p1 = esl_sext<19,18>(tmp136_fu_16913_p2.read());
}

void mmult_hw::thread_tmp136_fu_16913_p2() {
    tmp136_fu_16913_p2 = (!tmp138_cast_fu_16910_p1.read().is_01() || !tmp137_cast_fu_16907_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp138_cast_fu_16910_p1.read()) + sc_bigint<18>(tmp137_cast_fu_16907_p1.read()));
}

void mmult_hw::thread_tmp137_cast_fu_16907_p1() {
    tmp137_cast_fu_16907_p1 = esl_sext<18,17>(tmp137_reg_26198.read());
}

void mmult_hw::thread_tmp138_cast_fu_16910_p1() {
    tmp138_cast_fu_16910_p1 = esl_sext<18,17>(tmp138_reg_26203.read());
}

void mmult_hw::thread_tmp139_cast_fu_17636_p1() {
    tmp139_cast_fu_17636_p1 = esl_sext<20,19>(tmp139_reg_26588.read());
}

void mmult_hw::thread_tmp139_fu_16961_p2() {
    tmp139_fu_16961_p2 = (!tmp143_cast_fu_16957_p1.read().is_01() || !tmp140_cast_fu_16941_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp143_cast_fu_16957_p1.read()) + sc_bigint<19>(tmp140_cast_fu_16941_p1.read()));
}

void mmult_hw::thread_tmp13_cast_fu_16323_p1() {
    tmp13_cast_fu_16323_p1 = esl_sext<19,18>(tmp13_fu_16317_p2.read());
}

void mmult_hw::thread_tmp13_fu_16317_p2() {
    tmp13_fu_16317_p2 = (!tmp15_cast_fu_16314_p1.read().is_01() || !tmp14_cast_fu_16311_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp15_cast_fu_16314_p1.read()) + sc_bigint<18>(tmp14_cast_fu_16311_p1.read()));
}

void mmult_hw::thread_tmp140_cast_fu_16941_p1() {
    tmp140_cast_fu_16941_p1 = esl_sext<19,18>(tmp140_fu_16935_p2.read());
}

void mmult_hw::thread_tmp140_fu_16935_p2() {
    tmp140_fu_16935_p2 = (!tmp142_cast_fu_16932_p1.read().is_01() || !tmp141_cast_fu_16929_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp142_cast_fu_16932_p1.read()) + sc_bigint<18>(tmp141_cast_fu_16929_p1.read()));
}

void mmult_hw::thread_tmp141_cast_fu_16929_p1() {
    tmp141_cast_fu_16929_p1 = esl_sext<18,17>(tmp141_reg_26208.read());
}

void mmult_hw::thread_tmp142_cast_fu_16932_p1() {
    tmp142_cast_fu_16932_p1 = esl_sext<18,17>(tmp142_reg_26213.read());
}

void mmult_hw::thread_tmp143_cast_fu_16957_p1() {
    tmp143_cast_fu_16957_p1 = esl_sext<19,18>(tmp143_fu_16951_p2.read());
}

void mmult_hw::thread_tmp143_fu_16951_p2() {
    tmp143_fu_16951_p2 = (!tmp145_cast_fu_16948_p1.read().is_01() || !tmp144_cast_fu_16945_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp145_cast_fu_16948_p1.read()) + sc_bigint<18>(tmp144_cast_fu_16945_p1.read()));
}

void mmult_hw::thread_tmp144_cast_fu_16945_p1() {
    tmp144_cast_fu_16945_p1 = esl_sext<18,17>(tmp144_reg_26218.read());
}

void mmult_hw::thread_tmp145_cast_fu_16948_p1() {
    tmp145_cast_fu_16948_p1 = esl_sext<18,17>(tmp145_reg_26223.read());
}

void mmult_hw::thread_tmp146_cast_fu_17661_p1() {
    tmp146_cast_fu_17661_p1 = esl_sext<21,20>(tmp146_fu_17655_p2.read());
}

void mmult_hw::thread_tmp146_fu_17655_p2() {
    tmp146_fu_17655_p2 = (!tmp154_cast_fu_17652_p1.read().is_01() || !tmp147_cast_fu_17649_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp154_cast_fu_17652_p1.read()) + sc_bigint<20>(tmp147_cast_fu_17649_p1.read()));
}

void mmult_hw::thread_tmp147_cast_fu_17649_p1() {
    tmp147_cast_fu_17649_p1 = esl_sext<20,19>(tmp147_reg_26593.read());
}

void mmult_hw::thread_tmp147_fu_16999_p2() {
    tmp147_fu_16999_p2 = (!tmp151_cast_fu_16995_p1.read().is_01() || !tmp148_cast_fu_16979_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp151_cast_fu_16995_p1.read()) + sc_bigint<19>(tmp148_cast_fu_16979_p1.read()));
}

void mmult_hw::thread_tmp148_cast_fu_16979_p1() {
    tmp148_cast_fu_16979_p1 = esl_sext<19,18>(tmp148_fu_16973_p2.read());
}

void mmult_hw::thread_tmp148_fu_16973_p2() {
    tmp148_fu_16973_p2 = (!tmp150_cast_fu_16970_p1.read().is_01() || !tmp149_cast_fu_16967_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp150_cast_fu_16970_p1.read()) + sc_bigint<18>(tmp149_cast_fu_16967_p1.read()));
}

void mmult_hw::thread_tmp149_cast_fu_16967_p1() {
    tmp149_cast_fu_16967_p1 = esl_sext<18,17>(tmp149_reg_26228.read());
}

void mmult_hw::thread_tmp14_cast_fu_16311_p1() {
    tmp14_cast_fu_16311_p1 = esl_sext<18,17>(tmp14_reg_25888.read());
}

void mmult_hw::thread_tmp150_cast_fu_16970_p1() {
    tmp150_cast_fu_16970_p1 = esl_sext<18,17>(tmp150_reg_26233.read());
}

void mmult_hw::thread_tmp151_cast_fu_16995_p1() {
    tmp151_cast_fu_16995_p1 = esl_sext<19,18>(tmp151_fu_16989_p2.read());
}

void mmult_hw::thread_tmp151_fu_16989_p2() {
    tmp151_fu_16989_p2 = (!tmp153_cast_fu_16986_p1.read().is_01() || !tmp152_cast_fu_16983_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp153_cast_fu_16986_p1.read()) + sc_bigint<18>(tmp152_cast_fu_16983_p1.read()));
}

void mmult_hw::thread_tmp152_cast_fu_16983_p1() {
    tmp152_cast_fu_16983_p1 = esl_sext<18,17>(tmp152_reg_26238.read());
}

void mmult_hw::thread_tmp153_cast_fu_16986_p1() {
    tmp153_cast_fu_16986_p1 = esl_sext<18,17>(tmp153_reg_26243.read());
}

void mmult_hw::thread_tmp154_cast_fu_17652_p1() {
    tmp154_cast_fu_17652_p1 = esl_sext<20,19>(tmp154_reg_26598.read());
}

void mmult_hw::thread_tmp154_fu_17037_p2() {
    tmp154_fu_17037_p2 = (!tmp158_cast_fu_17033_p1.read().is_01() || !tmp155_cast_fu_17017_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp158_cast_fu_17033_p1.read()) + sc_bigint<19>(tmp155_cast_fu_17017_p1.read()));
}

void mmult_hw::thread_tmp155_cast_fu_17017_p1() {
    tmp155_cast_fu_17017_p1 = esl_sext<19,18>(tmp155_fu_17011_p2.read());
}

void mmult_hw::thread_tmp155_fu_17011_p2() {
    tmp155_fu_17011_p2 = (!tmp157_cast_fu_17008_p1.read().is_01() || !tmp156_cast_fu_17005_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp157_cast_fu_17008_p1.read()) + sc_bigint<18>(tmp156_cast_fu_17005_p1.read()));
}

void mmult_hw::thread_tmp156_cast_fu_17005_p1() {
    tmp156_cast_fu_17005_p1 = esl_sext<18,17>(tmp156_reg_26248.read());
}

void mmult_hw::thread_tmp157_cast_fu_17008_p1() {
    tmp157_cast_fu_17008_p1 = esl_sext<18,17>(tmp157_reg_26253.read());
}

void mmult_hw::thread_tmp158_cast_fu_17033_p1() {
    tmp158_cast_fu_17033_p1 = esl_sext<19,18>(tmp158_fu_17027_p2.read());
}

void mmult_hw::thread_tmp158_fu_17027_p2() {
    tmp158_fu_17027_p2 = (!tmp160_cast_fu_17024_p1.read().is_01() || !tmp159_cast_fu_17021_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp160_cast_fu_17024_p1.read()) + sc_bigint<18>(tmp159_cast_fu_17021_p1.read()));
}

void mmult_hw::thread_tmp159_cast_fu_17021_p1() {
    tmp159_cast_fu_17021_p1 = esl_sext<18,17>(tmp159_reg_26258.read());
}

void mmult_hw::thread_tmp15_cast_fu_16314_p1() {
    tmp15_cast_fu_16314_p1 = esl_sext<18,17>(tmp15_reg_25893.read());
}

void mmult_hw::thread_tmp160_cast_fu_17024_p1() {
    tmp160_cast_fu_17024_p1 = esl_sext<18,17>(tmp160_reg_26263.read());
}

void mmult_hw::thread_tmp161_cast_fu_17799_p1() {
    tmp161_cast_fu_17799_p1 = esl_sext<22,21>(tmp161_reg_26688.read());
}

void mmult_hw::thread_tmp161_fu_17703_p2() {
    tmp161_fu_17703_p2 = (!tmp177_cast_fu_17699_p1.read().is_01() || !tmp162_cast_fu_17683_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp177_cast_fu_17699_p1.read()) + sc_bigint<21>(tmp162_cast_fu_17683_p1.read()));
}

void mmult_hw::thread_tmp162_cast_fu_17683_p1() {
    tmp162_cast_fu_17683_p1 = esl_sext<21,20>(tmp162_fu_17677_p2.read());
}

void mmult_hw::thread_tmp162_fu_17677_p2() {
    tmp162_fu_17677_p2 = (!tmp170_cast_fu_17674_p1.read().is_01() || !tmp163_cast_fu_17671_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp170_cast_fu_17674_p1.read()) + sc_bigint<20>(tmp163_cast_fu_17671_p1.read()));
}

void mmult_hw::thread_tmp163_cast_fu_17671_p1() {
    tmp163_cast_fu_17671_p1 = esl_sext<20,19>(tmp163_reg_26603.read());
}

void mmult_hw::thread_tmp163_fu_17075_p2() {
    tmp163_fu_17075_p2 = (!tmp167_cast_fu_17071_p1.read().is_01() || !tmp164_cast_fu_17055_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp167_cast_fu_17071_p1.read()) + sc_bigint<19>(tmp164_cast_fu_17055_p1.read()));
}

void mmult_hw::thread_tmp164_cast_fu_17055_p1() {
    tmp164_cast_fu_17055_p1 = esl_sext<19,18>(tmp164_fu_17049_p2.read());
}

void mmult_hw::thread_tmp164_fu_17049_p2() {
    tmp164_fu_17049_p2 = (!tmp166_cast_fu_17046_p1.read().is_01() || !tmp165_cast_fu_17043_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp166_cast_fu_17046_p1.read()) + sc_bigint<18>(tmp165_cast_fu_17043_p1.read()));
}

void mmult_hw::thread_tmp165_cast_fu_17043_p1() {
    tmp165_cast_fu_17043_p1 = esl_sext<18,17>(tmp165_reg_26268.read());
}

void mmult_hw::thread_tmp166_cast_fu_17046_p1() {
    tmp166_cast_fu_17046_p1 = esl_sext<18,17>(tmp166_reg_26273.read());
}

void mmult_hw::thread_tmp167_cast_fu_17071_p1() {
    tmp167_cast_fu_17071_p1 = esl_sext<19,18>(tmp167_fu_17065_p2.read());
}

void mmult_hw::thread_tmp167_fu_17065_p2() {
    tmp167_fu_17065_p2 = (!tmp169_cast_fu_17062_p1.read().is_01() || !tmp168_cast_fu_17059_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp169_cast_fu_17062_p1.read()) + sc_bigint<18>(tmp168_cast_fu_17059_p1.read()));
}

void mmult_hw::thread_tmp168_cast_fu_17059_p1() {
    tmp168_cast_fu_17059_p1 = esl_sext<18,17>(tmp168_reg_26278.read());
}

void mmult_hw::thread_tmp169_cast_fu_17062_p1() {
    tmp169_cast_fu_17062_p1 = esl_sext<18,17>(tmp169_reg_26283.read());
}

void mmult_hw::thread_tmp16_cast_fu_16339_p1() {
    tmp16_cast_fu_16339_p1 = esl_sext<19,18>(tmp16_fu_16333_p2.read());
}

void mmult_hw::thread_tmp16_fu_16333_p2() {
    tmp16_fu_16333_p2 = (!tmp18_cast_fu_16330_p1.read().is_01() || !tmp17_cast_fu_16327_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp18_cast_fu_16330_p1.read()) + sc_bigint<18>(tmp17_cast_fu_16327_p1.read()));
}

void mmult_hw::thread_tmp170_cast_fu_17674_p1() {
    tmp170_cast_fu_17674_p1 = esl_sext<20,19>(tmp170_reg_26608.read());
}

void mmult_hw::thread_tmp170_fu_17113_p2() {
    tmp170_fu_17113_p2 = (!tmp174_cast_fu_17109_p1.read().is_01() || !tmp171_cast_fu_17093_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp174_cast_fu_17109_p1.read()) + sc_bigint<19>(tmp171_cast_fu_17093_p1.read()));
}

void mmult_hw::thread_tmp171_cast_fu_17093_p1() {
    tmp171_cast_fu_17093_p1 = esl_sext<19,18>(tmp171_fu_17087_p2.read());
}

void mmult_hw::thread_tmp171_fu_17087_p2() {
    tmp171_fu_17087_p2 = (!tmp173_cast_fu_17084_p1.read().is_01() || !tmp172_cast_fu_17081_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp173_cast_fu_17084_p1.read()) + sc_bigint<18>(tmp172_cast_fu_17081_p1.read()));
}

void mmult_hw::thread_tmp172_cast_fu_17081_p1() {
    tmp172_cast_fu_17081_p1 = esl_sext<18,17>(tmp172_reg_26288.read());
}

void mmult_hw::thread_tmp173_cast_fu_17084_p1() {
    tmp173_cast_fu_17084_p1 = esl_sext<18,17>(tmp173_reg_26293.read());
}

void mmult_hw::thread_tmp174_cast_fu_17109_p1() {
    tmp174_cast_fu_17109_p1 = esl_sext<19,18>(tmp174_fu_17103_p2.read());
}

void mmult_hw::thread_tmp174_fu_17103_p2() {
    tmp174_fu_17103_p2 = (!tmp176_cast_fu_17100_p1.read().is_01() || !tmp175_cast_fu_17097_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp176_cast_fu_17100_p1.read()) + sc_bigint<18>(tmp175_cast_fu_17097_p1.read()));
}

void mmult_hw::thread_tmp175_cast_fu_17097_p1() {
    tmp175_cast_fu_17097_p1 = esl_sext<18,17>(tmp175_reg_26298.read());
}

void mmult_hw::thread_tmp176_cast_fu_17100_p1() {
    tmp176_cast_fu_17100_p1 = esl_sext<18,17>(tmp176_reg_26303.read());
}

void mmult_hw::thread_tmp177_cast_fu_17699_p1() {
    tmp177_cast_fu_17699_p1 = esl_sext<21,20>(tmp177_fu_17693_p2.read());
}

void mmult_hw::thread_tmp177_fu_17693_p2() {
    tmp177_fu_17693_p2 = (!tmp185_cast_fu_17690_p1.read().is_01() || !tmp178_cast_fu_17687_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp185_cast_fu_17690_p1.read()) + sc_bigint<20>(tmp178_cast_fu_17687_p1.read()));
}

void mmult_hw::thread_tmp178_cast_fu_17687_p1() {
    tmp178_cast_fu_17687_p1 = esl_sext<20,19>(tmp178_reg_26613.read());
}

void mmult_hw::thread_tmp178_fu_17151_p2() {
    tmp178_fu_17151_p2 = (!tmp182_cast_fu_17147_p1.read().is_01() || !tmp179_cast_fu_17131_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp182_cast_fu_17147_p1.read()) + sc_bigint<19>(tmp179_cast_fu_17131_p1.read()));
}

void mmult_hw::thread_tmp179_cast_fu_17131_p1() {
    tmp179_cast_fu_17131_p1 = esl_sext<19,18>(tmp179_fu_17125_p2.read());
}

void mmult_hw::thread_tmp179_fu_17125_p2() {
    tmp179_fu_17125_p2 = (!tmp181_cast_fu_17122_p1.read().is_01() || !tmp180_cast_fu_17119_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp181_cast_fu_17122_p1.read()) + sc_bigint<18>(tmp180_cast_fu_17119_p1.read()));
}

void mmult_hw::thread_tmp17_cast_fu_16327_p1() {
    tmp17_cast_fu_16327_p1 = esl_sext<18,17>(tmp17_reg_25898.read());
}

void mmult_hw::thread_tmp180_cast_fu_17119_p1() {
    tmp180_cast_fu_17119_p1 = esl_sext<18,17>(tmp180_reg_26308.read());
}

void mmult_hw::thread_tmp181_cast_fu_17122_p1() {
    tmp181_cast_fu_17122_p1 = esl_sext<18,17>(tmp181_reg_26313.read());
}

void mmult_hw::thread_tmp182_cast_fu_17147_p1() {
    tmp182_cast_fu_17147_p1 = esl_sext<19,18>(tmp182_fu_17141_p2.read());
}

void mmult_hw::thread_tmp182_fu_17141_p2() {
    tmp182_fu_17141_p2 = (!tmp184_cast_fu_17138_p1.read().is_01() || !tmp183_cast_fu_17135_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp184_cast_fu_17138_p1.read()) + sc_bigint<18>(tmp183_cast_fu_17135_p1.read()));
}

void mmult_hw::thread_tmp183_cast_fu_17135_p1() {
    tmp183_cast_fu_17135_p1 = esl_sext<18,17>(tmp183_reg_26318.read());
}

void mmult_hw::thread_tmp184_cast_fu_17138_p1() {
    tmp184_cast_fu_17138_p1 = esl_sext<18,17>(tmp184_reg_26323.read());
}

void mmult_hw::thread_tmp185_cast_fu_17690_p1() {
    tmp185_cast_fu_17690_p1 = esl_sext<20,19>(tmp185_reg_26618.read());
}

void mmult_hw::thread_tmp185_fu_17189_p2() {
    tmp185_fu_17189_p2 = (!tmp189_cast_fu_17185_p1.read().is_01() || !tmp186_cast_fu_17169_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp189_cast_fu_17185_p1.read()) + sc_bigint<19>(tmp186_cast_fu_17169_p1.read()));
}

void mmult_hw::thread_tmp186_cast_fu_17169_p1() {
    tmp186_cast_fu_17169_p1 = esl_sext<19,18>(tmp186_fu_17163_p2.read());
}

void mmult_hw::thread_tmp186_fu_17163_p2() {
    tmp186_fu_17163_p2 = (!tmp188_cast_fu_17160_p1.read().is_01() || !tmp187_cast_fu_17157_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp188_cast_fu_17160_p1.read()) + sc_bigint<18>(tmp187_cast_fu_17157_p1.read()));
}

void mmult_hw::thread_tmp187_cast_fu_17157_p1() {
    tmp187_cast_fu_17157_p1 = esl_sext<18,17>(tmp187_reg_26328.read());
}

void mmult_hw::thread_tmp188_cast_fu_17160_p1() {
    tmp188_cast_fu_17160_p1 = esl_sext<18,17>(tmp188_reg_26333.read());
}

void mmult_hw::thread_tmp189_cast_fu_17185_p1() {
    tmp189_cast_fu_17185_p1 = esl_sext<19,18>(tmp189_fu_17179_p2.read());
}

void mmult_hw::thread_tmp189_fu_17179_p2() {
    tmp189_fu_17179_p2 = (!tmp191_cast_fu_17176_p1.read().is_01() || !tmp190_cast_fu_17173_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp191_cast_fu_17176_p1.read()) + sc_bigint<18>(tmp190_cast_fu_17173_p1.read()));
}

void mmult_hw::thread_tmp18_cast_fu_16330_p1() {
    tmp18_cast_fu_16330_p1 = esl_sext<18,17>(tmp18_reg_25903.read());
}

void mmult_hw::thread_tmp190_cast_fu_17173_p1() {
    tmp190_cast_fu_17173_p1 = esl_sext<18,17>(tmp190_reg_26338.read());
}

void mmult_hw::thread_tmp191_cast_fu_17176_p1() {
    tmp191_cast_fu_17176_p1 = esl_sext<18,17>(tmp191_reg_26343.read());
}

void mmult_hw::thread_tmp192_cast_fu_17886_p1() {
    tmp192_cast_fu_17886_p1 = esl_sext<24,23>(tmp192_reg_26718.read());
}

void mmult_hw::thread_tmp192_fu_17827_p2() {
    tmp192_fu_17827_p2 = (!tmp224_cast_fu_17823_p1.read().is_01() || !tmp193_cast_fu_17808_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(tmp224_cast_fu_17823_p1.read()) + sc_bigint<23>(tmp193_cast_fu_17808_p1.read()));
}

void mmult_hw::thread_tmp193_cast_fu_17808_p1() {
    tmp193_cast_fu_17808_p1 = esl_sext<23,21>(tmp193_reg_26693.read());
}

void mmult_hw::thread_tmp193_fu_17741_p2() {
    tmp193_fu_17741_p2 = (!tmp209_cast_fu_17737_p1.read().is_01() || !tmp194_cast_fu_17721_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp209_cast_fu_17737_p1.read()) + sc_bigint<21>(tmp194_cast_fu_17721_p1.read()));
}

void mmult_hw::thread_tmp194_cast_fu_17721_p1() {
    tmp194_cast_fu_17721_p1 = esl_sext<21,20>(tmp194_fu_17715_p2.read());
}

void mmult_hw::thread_tmp194_fu_17715_p2() {
    tmp194_fu_17715_p2 = (!tmp202_cast_fu_17712_p1.read().is_01() || !tmp195_cast_fu_17709_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp202_cast_fu_17712_p1.read()) + sc_bigint<20>(tmp195_cast_fu_17709_p1.read()));
}

void mmult_hw::thread_tmp195_cast_fu_17709_p1() {
    tmp195_cast_fu_17709_p1 = esl_sext<20,19>(tmp195_reg_26623.read());
}

void mmult_hw::thread_tmp195_fu_17227_p2() {
    tmp195_fu_17227_p2 = (!tmp199_cast_fu_17223_p1.read().is_01() || !tmp196_cast_fu_17207_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp199_cast_fu_17223_p1.read()) + sc_bigint<19>(tmp196_cast_fu_17207_p1.read()));
}

void mmult_hw::thread_tmp196_cast_fu_17207_p1() {
    tmp196_cast_fu_17207_p1 = esl_sext<19,18>(tmp196_fu_17201_p2.read());
}

void mmult_hw::thread_tmp196_fu_17201_p2() {
    tmp196_fu_17201_p2 = (!tmp198_cast_fu_17198_p1.read().is_01() || !tmp197_cast_fu_17195_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp198_cast_fu_17198_p1.read()) + sc_bigint<18>(tmp197_cast_fu_17195_p1.read()));
}

void mmult_hw::thread_tmp197_cast_fu_17195_p1() {
    tmp197_cast_fu_17195_p1 = esl_sext<18,17>(tmp197_reg_26348.read());
}

void mmult_hw::thread_tmp198_cast_fu_17198_p1() {
    tmp198_cast_fu_17198_p1 = esl_sext<18,17>(tmp198_reg_26353.read());
}

void mmult_hw::thread_tmp199_cast_fu_17223_p1() {
    tmp199_cast_fu_17223_p1 = esl_sext<19,18>(tmp199_fu_17217_p2.read());
}

void mmult_hw::thread_tmp199_fu_17217_p2() {
    tmp199_fu_17217_p2 = (!tmp201_cast_fu_17214_p1.read().is_01() || !tmp200_cast_fu_17211_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp201_cast_fu_17214_p1.read()) + sc_bigint<18>(tmp200_cast_fu_17211_p1.read()));
}

void mmult_hw::thread_tmp19_cast_fu_17500_p1() {
    tmp19_cast_fu_17500_p1 = esl_sext<32,20>(tmp19_fu_17494_p2.read());
}

void mmult_hw::thread_tmp19_fu_17494_p2() {
    tmp19_fu_17494_p2 = (!tmp27_cast_fu_17491_p1.read().is_01() || !tmp20_cast_fu_17488_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp27_cast_fu_17491_p1.read()) + sc_bigint<20>(tmp20_cast_fu_17488_p1.read()));
}

void mmult_hw::thread_tmp1_fu_17878_p2() {
    tmp1_fu_17878_p2 = (!tmp65_cast_fu_17875_p1.read().is_01() || !ap_reg_pp3_iter6_tmp2_reg_26668.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp65_cast_fu_17875_p1.read()) + sc_biguint<32>(ap_reg_pp3_iter6_tmp2_reg_26668.read()));
}

void mmult_hw::thread_tmp200_cast_fu_17211_p1() {
    tmp200_cast_fu_17211_p1 = esl_sext<18,17>(tmp200_reg_26358.read());
}

void mmult_hw::thread_tmp201_cast_fu_17214_p1() {
    tmp201_cast_fu_17214_p1 = esl_sext<18,17>(tmp201_reg_26363.read());
}

void mmult_hw::thread_tmp202_cast_fu_17712_p1() {
    tmp202_cast_fu_17712_p1 = esl_sext<20,19>(tmp202_reg_26628.read());
}

void mmult_hw::thread_tmp202_fu_17265_p2() {
    tmp202_fu_17265_p2 = (!tmp206_cast_fu_17261_p1.read().is_01() || !tmp203_cast_fu_17245_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp206_cast_fu_17261_p1.read()) + sc_bigint<19>(tmp203_cast_fu_17245_p1.read()));
}

void mmult_hw::thread_tmp203_cast_fu_17245_p1() {
    tmp203_cast_fu_17245_p1 = esl_sext<19,18>(tmp203_fu_17239_p2.read());
}

void mmult_hw::thread_tmp203_fu_17239_p2() {
    tmp203_fu_17239_p2 = (!tmp205_cast_fu_17236_p1.read().is_01() || !tmp204_cast_fu_17233_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp205_cast_fu_17236_p1.read()) + sc_bigint<18>(tmp204_cast_fu_17233_p1.read()));
}

void mmult_hw::thread_tmp204_cast_fu_17233_p1() {
    tmp204_cast_fu_17233_p1 = esl_sext<18,17>(tmp204_reg_26368.read());
}

void mmult_hw::thread_tmp205_cast_fu_17236_p1() {
    tmp205_cast_fu_17236_p1 = esl_sext<18,17>(tmp205_reg_26373.read());
}

void mmult_hw::thread_tmp206_cast_fu_17261_p1() {
    tmp206_cast_fu_17261_p1 = esl_sext<19,18>(tmp206_fu_17255_p2.read());
}

void mmult_hw::thread_tmp206_fu_17255_p2() {
    tmp206_fu_17255_p2 = (!tmp208_cast_fu_17252_p1.read().is_01() || !tmp207_cast_fu_17249_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp208_cast_fu_17252_p1.read()) + sc_bigint<18>(tmp207_cast_fu_17249_p1.read()));
}

void mmult_hw::thread_tmp207_cast_fu_17249_p1() {
    tmp207_cast_fu_17249_p1 = esl_sext<18,17>(tmp207_reg_26378.read());
}

void mmult_hw::thread_tmp208_cast_fu_17252_p1() {
    tmp208_cast_fu_17252_p1 = esl_sext<18,17>(tmp208_reg_26383.read());
}

void mmult_hw::thread_tmp209_cast_fu_17737_p1() {
    tmp209_cast_fu_17737_p1 = esl_sext<21,20>(tmp209_fu_17731_p2.read());
}

void mmult_hw::thread_tmp209_fu_17731_p2() {
    tmp209_fu_17731_p2 = (!tmp217_cast_fu_17728_p1.read().is_01() || !tmp210_cast_fu_17725_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp217_cast_fu_17728_p1.read()) + sc_bigint<20>(tmp210_cast_fu_17725_p1.read()));
}

void mmult_hw::thread_tmp20_cast_fu_17488_p1() {
    tmp20_cast_fu_17488_p1 = esl_sext<20,19>(tmp20_reg_26513.read());
}

void mmult_hw::thread_tmp20_fu_16391_p2() {
    tmp20_fu_16391_p2 = (!tmp24_cast_fu_16387_p1.read().is_01() || !tmp21_cast_fu_16371_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp24_cast_fu_16387_p1.read()) + sc_bigint<19>(tmp21_cast_fu_16371_p1.read()));
}

void mmult_hw::thread_tmp210_cast_fu_17725_p1() {
    tmp210_cast_fu_17725_p1 = esl_sext<20,19>(tmp210_reg_26633.read());
}

void mmult_hw::thread_tmp210_fu_17303_p2() {
    tmp210_fu_17303_p2 = (!tmp214_cast_fu_17299_p1.read().is_01() || !tmp211_cast_fu_17283_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp214_cast_fu_17299_p1.read()) + sc_bigint<19>(tmp211_cast_fu_17283_p1.read()));
}

void mmult_hw::thread_tmp211_cast_fu_17283_p1() {
    tmp211_cast_fu_17283_p1 = esl_sext<19,18>(tmp211_fu_17277_p2.read());
}

void mmult_hw::thread_tmp211_fu_17277_p2() {
    tmp211_fu_17277_p2 = (!tmp213_cast_fu_17274_p1.read().is_01() || !tmp212_cast_fu_17271_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp213_cast_fu_17274_p1.read()) + sc_bigint<18>(tmp212_cast_fu_17271_p1.read()));
}

void mmult_hw::thread_tmp212_cast_fu_17271_p1() {
    tmp212_cast_fu_17271_p1 = esl_sext<18,17>(tmp212_reg_26388.read());
}

void mmult_hw::thread_tmp213_cast_fu_17274_p1() {
    tmp213_cast_fu_17274_p1 = esl_sext<18,17>(tmp213_reg_26393.read());
}

void mmult_hw::thread_tmp214_cast_fu_17299_p1() {
    tmp214_cast_fu_17299_p1 = esl_sext<19,18>(tmp214_fu_17293_p2.read());
}

void mmult_hw::thread_tmp214_fu_17293_p2() {
    tmp214_fu_17293_p2 = (!tmp216_cast_fu_17290_p1.read().is_01() || !tmp215_cast_fu_17287_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp216_cast_fu_17290_p1.read()) + sc_bigint<18>(tmp215_cast_fu_17287_p1.read()));
}

void mmult_hw::thread_tmp215_cast_fu_17287_p1() {
    tmp215_cast_fu_17287_p1 = esl_sext<18,17>(tmp215_reg_26398.read());
}

void mmult_hw::thread_tmp216_cast_fu_17290_p1() {
    tmp216_cast_fu_17290_p1 = esl_sext<18,17>(tmp216_reg_26403.read());
}

void mmult_hw::thread_tmp217_cast_fu_17728_p1() {
    tmp217_cast_fu_17728_p1 = esl_sext<20,19>(tmp217_reg_26638.read());
}

void mmult_hw::thread_tmp217_fu_17341_p2() {
    tmp217_fu_17341_p2 = (!tmp221_cast_fu_17337_p1.read().is_01() || !tmp218_cast_fu_17321_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp221_cast_fu_17337_p1.read()) + sc_bigint<19>(tmp218_cast_fu_17321_p1.read()));
}

void mmult_hw::thread_tmp218_cast_fu_17321_p1() {
    tmp218_cast_fu_17321_p1 = esl_sext<19,18>(tmp218_fu_17315_p2.read());
}

void mmult_hw::thread_tmp218_fu_17315_p2() {
    tmp218_fu_17315_p2 = (!tmp220_cast_fu_17312_p1.read().is_01() || !tmp219_cast_fu_17309_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp220_cast_fu_17312_p1.read()) + sc_bigint<18>(tmp219_cast_fu_17309_p1.read()));
}

void mmult_hw::thread_tmp219_cast_fu_17309_p1() {
    tmp219_cast_fu_17309_p1 = esl_sext<18,17>(tmp219_reg_26408.read());
}

void mmult_hw::thread_tmp21_cast_fu_16371_p1() {
    tmp21_cast_fu_16371_p1 = esl_sext<19,18>(tmp21_fu_16365_p2.read());
}

void mmult_hw::thread_tmp21_fu_16365_p2() {
    tmp21_fu_16365_p2 = (!tmp23_cast_fu_16362_p1.read().is_01() || !tmp22_cast_fu_16359_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp23_cast_fu_16362_p1.read()) + sc_bigint<18>(tmp22_cast_fu_16359_p1.read()));
}

void mmult_hw::thread_tmp220_cast_fu_17312_p1() {
    tmp220_cast_fu_17312_p1 = esl_sext<18,17>(tmp220_reg_26413.read());
}

void mmult_hw::thread_tmp221_cast_fu_17337_p1() {
    tmp221_cast_fu_17337_p1 = esl_sext<19,18>(tmp221_fu_17331_p2.read());
}

void mmult_hw::thread_tmp221_fu_17331_p2() {
    tmp221_fu_17331_p2 = (!tmp223_cast_fu_17328_p1.read().is_01() || !tmp222_cast_fu_17325_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp223_cast_fu_17328_p1.read()) + sc_bigint<18>(tmp222_cast_fu_17325_p1.read()));
}

void mmult_hw::thread_tmp222_cast_fu_17325_p1() {
    tmp222_cast_fu_17325_p1 = esl_sext<18,17>(tmp222_reg_26418.read());
}

void mmult_hw::thread_tmp223_cast_fu_17328_p1() {
    tmp223_cast_fu_17328_p1 = esl_sext<18,17>(tmp223_reg_26423.read());
}

void mmult_hw::thread_tmp224_cast_fu_17823_p1() {
    tmp224_cast_fu_17823_p1 = esl_sext<23,22>(tmp224_fu_17817_p2.read());
}

void mmult_hw::thread_tmp224_fu_17817_p2() {
    tmp224_fu_17817_p2 = (!tmp240_cast_fu_17814_p1.read().is_01() || !tmp225_cast_fu_17811_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(tmp240_cast_fu_17814_p1.read()) + sc_bigint<22>(tmp225_cast_fu_17811_p1.read()));
}

void mmult_hw::thread_tmp225_cast_fu_17811_p1() {
    tmp225_cast_fu_17811_p1 = esl_sext<22,20>(tmp225_reg_26698.read());
}

void mmult_hw::thread_tmp225_fu_17753_p2() {
    tmp225_fu_17753_p2 = (!tmp233_cast_fu_17750_p1.read().is_01() || !tmp226_cast_fu_17747_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp233_cast_fu_17750_p1.read()) + sc_bigint<20>(tmp226_cast_fu_17747_p1.read()));
}

void mmult_hw::thread_tmp226_cast_fu_17747_p1() {
    tmp226_cast_fu_17747_p1 = esl_sext<20,19>(tmp226_reg_26643.read());
}

void mmult_hw::thread_tmp226_fu_17379_p2() {
    tmp226_fu_17379_p2 = (!tmp230_cast_fu_17375_p1.read().is_01() || !tmp227_cast_fu_17359_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp230_cast_fu_17375_p1.read()) + sc_bigint<19>(tmp227_cast_fu_17359_p1.read()));
}

void mmult_hw::thread_tmp227_cast_fu_17359_p1() {
    tmp227_cast_fu_17359_p1 = esl_sext<19,18>(tmp227_fu_17353_p2.read());
}

void mmult_hw::thread_tmp227_fu_17353_p2() {
    tmp227_fu_17353_p2 = (!tmp229_cast_fu_17350_p1.read().is_01() || !tmp228_cast_fu_17347_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp229_cast_fu_17350_p1.read()) + sc_bigint<18>(tmp228_cast_fu_17347_p1.read()));
}

void mmult_hw::thread_tmp228_cast_fu_17347_p1() {
    tmp228_cast_fu_17347_p1 = esl_sext<18,17>(tmp228_reg_26428.read());
}

void mmult_hw::thread_tmp229_cast_fu_17350_p1() {
    tmp229_cast_fu_17350_p1 = esl_sext<18,17>(tmp229_reg_26433.read());
}

void mmult_hw::thread_tmp22_cast_fu_16359_p1() {
    tmp22_cast_fu_16359_p1 = esl_sext<18,17>(tmp22_reg_25908.read());
}

void mmult_hw::thread_tmp230_cast_fu_17375_p1() {
    tmp230_cast_fu_17375_p1 = esl_sext<19,18>(tmp230_fu_17369_p2.read());
}

void mmult_hw::thread_tmp230_fu_17369_p2() {
    tmp230_fu_17369_p2 = (!tmp232_cast_fu_17366_p1.read().is_01() || !tmp231_cast_fu_17363_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp232_cast_fu_17366_p1.read()) + sc_bigint<18>(tmp231_cast_fu_17363_p1.read()));
}

void mmult_hw::thread_tmp231_cast_fu_17363_p1() {
    tmp231_cast_fu_17363_p1 = esl_sext<18,17>(tmp231_reg_26438.read());
}

void mmult_hw::thread_tmp232_cast_fu_17366_p1() {
    tmp232_cast_fu_17366_p1 = esl_sext<18,17>(tmp232_reg_26443.read());
}

void mmult_hw::thread_tmp233_cast_fu_17750_p1() {
    tmp233_cast_fu_17750_p1 = esl_sext<20,19>(tmp233_reg_26648.read());
}

void mmult_hw::thread_tmp233_fu_17417_p2() {
    tmp233_fu_17417_p2 = (!tmp237_cast_fu_17413_p1.read().is_01() || !tmp234_cast_fu_17397_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp237_cast_fu_17413_p1.read()) + sc_bigint<19>(tmp234_cast_fu_17397_p1.read()));
}

void mmult_hw::thread_tmp234_cast_fu_17397_p1() {
    tmp234_cast_fu_17397_p1 = esl_sext<19,18>(tmp234_fu_17391_p2.read());
}

void mmult_hw::thread_tmp234_fu_17391_p2() {
    tmp234_fu_17391_p2 = (!tmp236_cast_fu_17388_p1.read().is_01() || !tmp235_cast_fu_17385_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp236_cast_fu_17388_p1.read()) + sc_bigint<18>(tmp235_cast_fu_17385_p1.read()));
}

void mmult_hw::thread_tmp235_cast_fu_17385_p1() {
    tmp235_cast_fu_17385_p1 = esl_sext<18,17>(tmp235_reg_26448.read());
}

void mmult_hw::thread_tmp236_cast_fu_17388_p1() {
    tmp236_cast_fu_17388_p1 = esl_sext<18,17>(tmp236_reg_26453.read());
}

void mmult_hw::thread_tmp237_cast_fu_17413_p1() {
    tmp237_cast_fu_17413_p1 = esl_sext<19,18>(tmp237_fu_17407_p2.read());
}

void mmult_hw::thread_tmp237_fu_17407_p2() {
    tmp237_fu_17407_p2 = (!tmp239_cast_fu_17404_p1.read().is_01() || !tmp238_cast_fu_17401_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp239_cast_fu_17404_p1.read()) + sc_bigint<18>(tmp238_cast_fu_17401_p1.read()));
}

void mmult_hw::thread_tmp238_cast_fu_17401_p1() {
    tmp238_cast_fu_17401_p1 = esl_sext<18,17>(tmp238_reg_26458.read());
}

void mmult_hw::thread_tmp239_cast_fu_17404_p1() {
    tmp239_cast_fu_17404_p1 = esl_sext<18,17>(tmp239_reg_26463.read());
}

void mmult_hw::thread_tmp23_cast_fu_16362_p1() {
    tmp23_cast_fu_16362_p1 = esl_sext<18,17>(tmp23_reg_25913.read());
}

void mmult_hw::thread_tmp240_cast_fu_17814_p1() {
    tmp240_cast_fu_17814_p1 = esl_sext<22,21>(tmp240_reg_26703.read());
}

void mmult_hw::thread_tmp240_fu_17778_p2() {
    tmp240_fu_17778_p2 = (!tmp248_cast_fu_17774_p1.read().is_01() || !tmp241_cast_fu_17759_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp248_cast_fu_17774_p1.read()) + sc_bigint<21>(tmp241_cast_fu_17759_p1.read()));
}

void mmult_hw::thread_tmp241_cast_fu_17759_p1() {
    tmp241_cast_fu_17759_p1 = esl_sext<21,19>(tmp241_reg_26653.read());
}

void mmult_hw::thread_tmp241_fu_17455_p2() {
    tmp241_fu_17455_p2 = (!tmp245_cast_fu_17451_p1.read().is_01() || !tmp242_cast_fu_17435_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp245_cast_fu_17451_p1.read()) + sc_bigint<19>(tmp242_cast_fu_17435_p1.read()));
}

void mmult_hw::thread_tmp242_cast_fu_17435_p1() {
    tmp242_cast_fu_17435_p1 = esl_sext<19,18>(tmp242_fu_17429_p2.read());
}

void mmult_hw::thread_tmp242_fu_17429_p2() {
    tmp242_fu_17429_p2 = (!tmp244_cast_fu_17426_p1.read().is_01() || !tmp243_cast_fu_17423_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp244_cast_fu_17426_p1.read()) + sc_bigint<18>(tmp243_cast_fu_17423_p1.read()));
}

void mmult_hw::thread_tmp243_cast_fu_17423_p1() {
    tmp243_cast_fu_17423_p1 = esl_sext<18,17>(tmp243_reg_26468.read());
}

void mmult_hw::thread_tmp244_cast_fu_17426_p1() {
    tmp244_cast_fu_17426_p1 = esl_sext<18,17>(tmp244_reg_26473.read());
}

void mmult_hw::thread_tmp245_cast_fu_17451_p1() {
    tmp245_cast_fu_17451_p1 = esl_sext<19,18>(tmp245_fu_17445_p2.read());
}

void mmult_hw::thread_tmp245_fu_17445_p2() {
    tmp245_fu_17445_p2 = (!tmp247_cast_fu_17442_p1.read().is_01() || !tmp246_cast_fu_17439_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp247_cast_fu_17442_p1.read()) + sc_bigint<18>(tmp246_cast_fu_17439_p1.read()));
}

void mmult_hw::thread_tmp246_cast_fu_17439_p1() {
    tmp246_cast_fu_17439_p1 = esl_sext<18,17>(tmp246_reg_26478.read());
}

void mmult_hw::thread_tmp247_cast_fu_17442_p1() {
    tmp247_cast_fu_17442_p1 = esl_sext<18,17>(tmp247_reg_26483.read());
}

void mmult_hw::thread_tmp248_cast_fu_17774_p1() {
    tmp248_cast_fu_17774_p1 = esl_sext<21,20>(tmp248_fu_17768_p2.read());
}

void mmult_hw::thread_tmp248_fu_17768_p2() {
    tmp248_fu_17768_p2 = (!tmp252_cast_fu_17765_p1.read().is_01() || !tmp249_cast_fu_17762_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp252_cast_fu_17765_p1.read()) + sc_bigint<20>(tmp249_cast_fu_17762_p1.read()));
}

void mmult_hw::thread_tmp249_cast_fu_17762_p1() {
    tmp249_cast_fu_17762_p1 = esl_sext<20,18>(tmp249_reg_26658.read());
}

void mmult_hw::thread_tmp249_fu_17467_p2() {
    tmp249_fu_17467_p2 = (!tmp251_cast_fu_17464_p1.read().is_01() || !tmp250_cast_fu_17461_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp251_cast_fu_17464_p1.read()) + sc_bigint<18>(tmp250_cast_fu_17461_p1.read()));
}

void mmult_hw::thread_tmp24_cast_fu_16387_p1() {
    tmp24_cast_fu_16387_p1 = esl_sext<19,18>(tmp24_fu_16381_p2.read());
}

void mmult_hw::thread_tmp24_fu_16381_p2() {
    tmp24_fu_16381_p2 = (!tmp26_cast_fu_16378_p1.read().is_01() || !tmp25_cast_fu_16375_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp26_cast_fu_16378_p1.read()) + sc_bigint<18>(tmp25_cast_fu_16375_p1.read()));
}

void mmult_hw::thread_tmp250_cast_fu_17461_p1() {
    tmp250_cast_fu_17461_p1 = esl_sext<18,17>(tmp250_reg_26488.read());
}

void mmult_hw::thread_tmp251_cast_fu_17464_p1() {
    tmp251_cast_fu_17464_p1 = esl_sext<18,17>(tmp251_reg_26493.read());
}

void mmult_hw::thread_tmp252_cast_fu_17765_p1() {
    tmp252_cast_fu_17765_p1 = esl_sext<20,19>(tmp252_reg_26663.read());
}

void mmult_hw::thread_tmp252_fu_17482_p2() {
    tmp252_fu_17482_p2 = (!tmp254_cast_fu_17479_p1.read().is_01() || !tmp253_cast_fu_17473_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp254_cast_fu_17479_p1.read()) + sc_bigint<19>(tmp253_cast_fu_17473_p1.read()));
}

void mmult_hw::thread_tmp253_cast_fu_17473_p1() {
    tmp253_cast_fu_17473_p1 = esl_sext<19,17>(tmp253_reg_26498.read());
}

void mmult_hw::thread_tmp254_cast_fu_17479_p1() {
    tmp254_cast_fu_17479_p1 = esl_sext<19,18>(grp_fu_19069_p3.read());
}

void mmult_hw::thread_tmp25_cast_fu_16375_p1() {
    tmp25_cast_fu_16375_p1 = esl_sext<18,17>(tmp25_reg_25918.read());
}

void mmult_hw::thread_tmp26_cast_fu_16378_p1() {
    tmp26_cast_fu_16378_p1 = esl_sext<18,17>(tmp26_reg_25923.read());
}

void mmult_hw::thread_tmp27_cast_fu_17491_p1() {
    tmp27_cast_fu_17491_p1 = esl_sext<20,19>(tmp27_reg_26518.read());
}

void mmult_hw::thread_tmp27_fu_16429_p2() {
    tmp27_fu_16429_p2 = (!tmp31_cast_fu_16425_p1.read().is_01() || !tmp28_cast_fu_16409_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp31_cast_fu_16425_p1.read()) + sc_bigint<19>(tmp28_cast_fu_16409_p1.read()));
}

void mmult_hw::thread_tmp28_cast_fu_16409_p1() {
    tmp28_cast_fu_16409_p1 = esl_sext<19,18>(tmp28_fu_16403_p2.read());
}

void mmult_hw::thread_tmp28_fu_16403_p2() {
    tmp28_fu_16403_p2 = (!tmp30_cast_fu_16400_p1.read().is_01() || !tmp29_cast_fu_16397_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp30_cast_fu_16400_p1.read()) + sc_bigint<18>(tmp29_cast_fu_16397_p1.read()));
}

void mmult_hw::thread_tmp29_cast_fu_16397_p1() {
    tmp29_cast_fu_16397_p1 = esl_sext<18,17>(tmp29_reg_25928.read());
}

void mmult_hw::thread_tmp2_fu_17551_p2() {
    tmp2_fu_17551_p2 = (!tmp34_cast_fu_17547_p1.read().is_01() || !tmp3_fu_17504_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp34_cast_fu_17547_p1.read()) + sc_biguint<32>(tmp3_fu_17504_p2.read()));
}

void mmult_hw::thread_tmp30_cast_fu_16400_p1() {
    tmp30_cast_fu_16400_p1 = esl_sext<18,17>(tmp30_reg_25933.read());
}

void mmult_hw::thread_tmp31_cast_fu_16425_p1() {
    tmp31_cast_fu_16425_p1 = esl_sext<19,18>(tmp31_fu_16419_p2.read());
}

void mmult_hw::thread_tmp31_fu_16419_p2() {
    tmp31_fu_16419_p2 = (!tmp33_cast_fu_16416_p1.read().is_01() || !tmp32_cast_fu_16413_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp33_cast_fu_16416_p1.read()) + sc_bigint<18>(tmp32_cast_fu_16413_p1.read()));
}

void mmult_hw::thread_tmp32_cast_fu_16413_p1() {
    tmp32_cast_fu_16413_p1 = esl_sext<18,17>(tmp32_reg_25938.read());
}

void mmult_hw::thread_tmp33_cast_fu_16416_p1() {
    tmp33_cast_fu_16416_p1 = esl_sext<18,17>(tmp33_reg_25943.read());
}

void mmult_hw::thread_tmp34_cast_fu_17547_p1() {
    tmp34_cast_fu_17547_p1 = esl_sext<32,21>(tmp34_fu_17541_p2.read());
}

void mmult_hw::thread_tmp34_fu_17541_p2() {
    tmp34_fu_17541_p2 = (!tmp50_cast_fu_17537_p1.read().is_01() || !tmp35_cast_fu_17521_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp50_cast_fu_17537_p1.read()) + sc_bigint<21>(tmp35_cast_fu_17521_p1.read()));
}

void mmult_hw::thread_tmp35_cast_fu_17521_p1() {
    tmp35_cast_fu_17521_p1 = esl_sext<21,20>(tmp35_fu_17515_p2.read());
}

void mmult_hw::thread_tmp35_fu_17515_p2() {
    tmp35_fu_17515_p2 = (!tmp43_cast_fu_17512_p1.read().is_01() || !tmp36_cast_fu_17509_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp43_cast_fu_17512_p1.read()) + sc_bigint<20>(tmp36_cast_fu_17509_p1.read()));
}

void mmult_hw::thread_tmp36_cast_fu_17509_p1() {
    tmp36_cast_fu_17509_p1 = esl_sext<20,19>(tmp36_reg_26523.read());
}

void mmult_hw::thread_tmp36_fu_16467_p2() {
    tmp36_fu_16467_p2 = (!tmp40_cast_fu_16463_p1.read().is_01() || !tmp37_cast_fu_16447_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp40_cast_fu_16463_p1.read()) + sc_bigint<19>(tmp37_cast_fu_16447_p1.read()));
}

void mmult_hw::thread_tmp37_cast_fu_16447_p1() {
    tmp37_cast_fu_16447_p1 = esl_sext<19,18>(tmp37_fu_16441_p2.read());
}

void mmult_hw::thread_tmp37_fu_16441_p2() {
    tmp37_fu_16441_p2 = (!tmp39_cast_fu_16438_p1.read().is_01() || !tmp38_cast_fu_16435_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp39_cast_fu_16438_p1.read()) + sc_bigint<18>(tmp38_cast_fu_16435_p1.read()));
}

void mmult_hw::thread_tmp38_cast_fu_16435_p1() {
    tmp38_cast_fu_16435_p1 = esl_sext<18,17>(tmp38_reg_25948.read());
}

void mmult_hw::thread_tmp39_cast_fu_16438_p1() {
    tmp39_cast_fu_16438_p1 = esl_sext<18,17>(tmp39_reg_25953.read());
}

void mmult_hw::thread_tmp3_fu_17504_p2() {
    tmp3_fu_17504_p2 = (!tmp19_cast_fu_17500_p1.read().is_01() || !tmp4_reg_26508.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp19_cast_fu_17500_p1.read()) + sc_biguint<32>(tmp4_reg_26508.read()));
}

void mmult_hw::thread_tmp40_cast_fu_16463_p1() {
    tmp40_cast_fu_16463_p1 = esl_sext<19,18>(tmp40_fu_16457_p2.read());
}

void mmult_hw::thread_tmp40_fu_16457_p2() {
    tmp40_fu_16457_p2 = (!tmp42_cast_fu_16454_p1.read().is_01() || !tmp41_cast_fu_16451_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp42_cast_fu_16454_p1.read()) + sc_bigint<18>(tmp41_cast_fu_16451_p1.read()));
}

void mmult_hw::thread_tmp41_cast_fu_16451_p1() {
    tmp41_cast_fu_16451_p1 = esl_sext<18,17>(tmp41_reg_25958.read());
}

void mmult_hw::thread_tmp42_cast_fu_16454_p1() {
    tmp42_cast_fu_16454_p1 = esl_sext<18,17>(tmp42_reg_25963.read());
}

void mmult_hw::thread_tmp43_cast_fu_17512_p1() {
    tmp43_cast_fu_17512_p1 = esl_sext<20,19>(tmp43_reg_26528.read());
}

void mmult_hw::thread_tmp43_fu_16505_p2() {
    tmp43_fu_16505_p2 = (!tmp47_cast_fu_16501_p1.read().is_01() || !tmp44_cast_fu_16485_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp47_cast_fu_16501_p1.read()) + sc_bigint<19>(tmp44_cast_fu_16485_p1.read()));
}

void mmult_hw::thread_tmp44_cast_fu_16485_p1() {
    tmp44_cast_fu_16485_p1 = esl_sext<19,18>(tmp44_fu_16479_p2.read());
}

void mmult_hw::thread_tmp44_fu_16479_p2() {
    tmp44_fu_16479_p2 = (!tmp46_cast_fu_16476_p1.read().is_01() || !tmp45_cast_fu_16473_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp46_cast_fu_16476_p1.read()) + sc_bigint<18>(tmp45_cast_fu_16473_p1.read()));
}

void mmult_hw::thread_tmp45_cast_fu_16473_p1() {
    tmp45_cast_fu_16473_p1 = esl_sext<18,17>(tmp45_reg_25968.read());
}

void mmult_hw::thread_tmp46_cast_fu_16476_p1() {
    tmp46_cast_fu_16476_p1 = esl_sext<18,17>(tmp46_reg_25973.read());
}

void mmult_hw::thread_tmp47_cast_fu_16501_p1() {
    tmp47_cast_fu_16501_p1 = esl_sext<19,18>(tmp47_fu_16495_p2.read());
}

void mmult_hw::thread_tmp47_fu_16495_p2() {
    tmp47_fu_16495_p2 = (!tmp49_cast_fu_16492_p1.read().is_01() || !tmp48_cast_fu_16489_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp49_cast_fu_16492_p1.read()) + sc_bigint<18>(tmp48_cast_fu_16489_p1.read()));
}

void mmult_hw::thread_tmp48_cast_fu_16489_p1() {
    tmp48_cast_fu_16489_p1 = esl_sext<18,17>(tmp48_reg_25978.read());
}

void mmult_hw::thread_tmp49_cast_fu_16492_p1() {
    tmp49_cast_fu_16492_p1 = esl_sext<18,17>(tmp49_reg_25983.read());
}

void mmult_hw::thread_tmp4_fu_16353_p2() {
    tmp4_fu_16353_p2 = (!tmp12_cast_fu_16349_p1.read().is_01() || !tmp5_fu_16305_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp12_cast_fu_16349_p1.read()) + sc_biguint<32>(tmp5_fu_16305_p2.read()));
}

void mmult_hw::thread_tmp50_cast_fu_17537_p1() {
    tmp50_cast_fu_17537_p1 = esl_sext<21,20>(tmp50_fu_17531_p2.read());
}

void mmult_hw::thread_tmp50_fu_17531_p2() {
    tmp50_fu_17531_p2 = (!tmp58_cast_fu_17528_p1.read().is_01() || !tmp51_cast_fu_17525_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp58_cast_fu_17528_p1.read()) + sc_bigint<20>(tmp51_cast_fu_17525_p1.read()));
}

void mmult_hw::thread_tmp51_cast_fu_17525_p1() {
    tmp51_cast_fu_17525_p1 = esl_sext<20,19>(tmp51_reg_26533.read());
}

void mmult_hw::thread_tmp51_fu_16543_p2() {
    tmp51_fu_16543_p2 = (!tmp55_cast_fu_16539_p1.read().is_01() || !tmp52_cast_fu_16523_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp55_cast_fu_16539_p1.read()) + sc_bigint<19>(tmp52_cast_fu_16523_p1.read()));
}

void mmult_hw::thread_tmp52_cast_fu_16523_p1() {
    tmp52_cast_fu_16523_p1 = esl_sext<19,18>(tmp52_fu_16517_p2.read());
}

void mmult_hw::thread_tmp52_fu_16517_p2() {
    tmp52_fu_16517_p2 = (!tmp54_cast_fu_16514_p1.read().is_01() || !tmp53_cast_fu_16511_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp54_cast_fu_16514_p1.read()) + sc_bigint<18>(tmp53_cast_fu_16511_p1.read()));
}

void mmult_hw::thread_tmp53_cast_fu_16511_p1() {
    tmp53_cast_fu_16511_p1 = esl_sext<18,17>(tmp53_reg_25988.read());
}

void mmult_hw::thread_tmp54_cast_fu_16514_p1() {
    tmp54_cast_fu_16514_p1 = esl_sext<18,17>(tmp54_reg_25993.read());
}

void mmult_hw::thread_tmp55_cast_fu_16539_p1() {
    tmp55_cast_fu_16539_p1 = esl_sext<19,18>(tmp55_fu_16533_p2.read());
}

void mmult_hw::thread_tmp55_fu_16533_p2() {
    tmp55_fu_16533_p2 = (!tmp57_cast_fu_16530_p1.read().is_01() || !tmp56_cast_fu_16527_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp57_cast_fu_16530_p1.read()) + sc_bigint<18>(tmp56_cast_fu_16527_p1.read()));
}

void mmult_hw::thread_tmp56_cast_fu_16527_p1() {
    tmp56_cast_fu_16527_p1 = esl_sext<18,17>(tmp56_reg_25998.read());
}

void mmult_hw::thread_tmp57_cast_fu_16530_p1() {
    tmp57_cast_fu_16530_p1 = esl_sext<18,17>(tmp57_reg_26003.read());
}

void mmult_hw::thread_tmp58_cast_fu_17528_p1() {
    tmp58_cast_fu_17528_p1 = esl_sext<20,19>(tmp58_reg_26538.read());
}

void mmult_hw::thread_tmp58_fu_16581_p2() {
    tmp58_fu_16581_p2 = (!tmp62_cast_fu_16577_p1.read().is_01() || !tmp59_cast_fu_16561_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp62_cast_fu_16577_p1.read()) + sc_bigint<19>(tmp59_cast_fu_16561_p1.read()));
}

void mmult_hw::thread_tmp59_cast_fu_16561_p1() {
    tmp59_cast_fu_16561_p1 = esl_sext<19,18>(tmp59_fu_16555_p2.read());
}

void mmult_hw::thread_tmp59_fu_16555_p2() {
    tmp59_fu_16555_p2 = (!tmp61_cast_fu_16552_p1.read().is_01() || !tmp60_cast_fu_16549_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp61_cast_fu_16552_p1.read()) + sc_bigint<18>(tmp60_cast_fu_16549_p1.read()));
}

}

