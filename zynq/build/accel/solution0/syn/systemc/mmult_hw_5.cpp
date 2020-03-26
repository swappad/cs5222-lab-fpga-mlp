#include "mmult_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mmult_hw::thread_in_buf_20_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_1_V_address0 = in_buf_20_1_V_addr_reg_20900.read();
    } else {
        in_buf_20_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_20_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_20_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_1_V_d0() {
    in_buf_20_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_20_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14))) {
        in_buf_20_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_2_V_address0 = in_buf_20_2_V_addr_reg_21060.read();
    } else {
        in_buf_20_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_20_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_20_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_2_V_d0() {
    in_buf_20_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_20_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14))) {
        in_buf_20_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_3_V_address0 = in_buf_20_3_V_addr_reg_21220.read();
    } else {
        in_buf_20_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_20_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_20_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_3_V_d0() {
    in_buf_20_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_20_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14))) {
        in_buf_20_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_4_V_address0 = in_buf_20_4_V_addr_reg_21380.read();
    } else {
        in_buf_20_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_20_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_20_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_4_V_d0() {
    in_buf_20_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_20_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14))) {
        in_buf_20_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_5_V_address0 = in_buf_20_5_V_addr_reg_21540.read();
    } else {
        in_buf_20_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_20_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_20_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_5_V_d0() {
    in_buf_20_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_20_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14))) {
        in_buf_20_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_6_V_address0 = in_buf_20_6_V_addr_reg_21700.read();
    } else {
        in_buf_20_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_20_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_20_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_6_V_d0() {
    in_buf_20_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_20_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14))) {
        in_buf_20_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_7_V_address0 = in_buf_20_7_V_addr_reg_21860.read();
    } else {
        in_buf_20_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_20_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_20_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_7_V_d0() {
    in_buf_20_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_20_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14))) {
        in_buf_20_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_0_V_address0 = in_buf_21_0_V_addr_reg_20745.read();
    } else {
        in_buf_21_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_21_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_21_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15))) {
        in_buf_21_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_1_V_address0 = in_buf_21_1_V_addr_reg_20905.read();
    } else {
        in_buf_21_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15))) {
        in_buf_21_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_2_V_address0 = in_buf_21_2_V_addr_reg_21065.read();
    } else {
        in_buf_21_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15))) {
        in_buf_21_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_3_V_address0 = in_buf_21_3_V_addr_reg_21225.read();
    } else {
        in_buf_21_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15))) {
        in_buf_21_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_4_V_address0 = in_buf_21_4_V_addr_reg_21385.read();
    } else {
        in_buf_21_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15))) {
        in_buf_21_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_5_V_address0 = in_buf_21_5_V_addr_reg_21545.read();
    } else {
        in_buf_21_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15))) {
        in_buf_21_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_6_V_address0 = in_buf_21_6_V_addr_reg_21705.read();
    } else {
        in_buf_21_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15))) {
        in_buf_21_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_21_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_21_7_V_address0 = in_buf_21_7_V_addr_reg_21865.read();
    } else {
        in_buf_21_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_21_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15))) {
        in_buf_21_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_21_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_0_V_address0 = in_buf_22_0_V_addr_reg_20750.read();
    } else {
        in_buf_22_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_22_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_22_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16))) {
        in_buf_22_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_1_V_address0 = in_buf_22_1_V_addr_reg_20910.read();
    } else {
        in_buf_22_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16))) {
        in_buf_22_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_2_V_address0 = in_buf_22_2_V_addr_reg_21070.read();
    } else {
        in_buf_22_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16))) {
        in_buf_22_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_3_V_address0 = in_buf_22_3_V_addr_reg_21230.read();
    } else {
        in_buf_22_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16))) {
        in_buf_22_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_4_V_address0 = in_buf_22_4_V_addr_reg_21390.read();
    } else {
        in_buf_22_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16))) {
        in_buf_22_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_5_V_address0 = in_buf_22_5_V_addr_reg_21550.read();
    } else {
        in_buf_22_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16))) {
        in_buf_22_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_6_V_address0 = in_buf_22_6_V_addr_reg_21710.read();
    } else {
        in_buf_22_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16))) {
        in_buf_22_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_22_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_22_7_V_address0 = in_buf_22_7_V_addr_reg_21870.read();
    } else {
        in_buf_22_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_22_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16))) {
        in_buf_22_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_22_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_0_V_address0 = in_buf_23_0_V_addr_reg_20755.read();
    } else {
        in_buf_23_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_23_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_23_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17))) {
        in_buf_23_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_1_V_address0 = in_buf_23_1_V_addr_reg_20915.read();
    } else {
        in_buf_23_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17))) {
        in_buf_23_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_2_V_address0 = in_buf_23_2_V_addr_reg_21075.read();
    } else {
        in_buf_23_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17))) {
        in_buf_23_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_3_V_address0 = in_buf_23_3_V_addr_reg_21235.read();
    } else {
        in_buf_23_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17))) {
        in_buf_23_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_4_V_address0 = in_buf_23_4_V_addr_reg_21395.read();
    } else {
        in_buf_23_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17))) {
        in_buf_23_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_5_V_address0 = in_buf_23_5_V_addr_reg_21555.read();
    } else {
        in_buf_23_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17))) {
        in_buf_23_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_6_V_address0 = in_buf_23_6_V_addr_reg_21715.read();
    } else {
        in_buf_23_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17))) {
        in_buf_23_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_23_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_23_7_V_address0 = in_buf_23_7_V_addr_reg_21875.read();
    } else {
        in_buf_23_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_23_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17))) {
        in_buf_23_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_23_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_0_V_address0 = in_buf_24_0_V_addr_reg_20760.read();
    } else {
        in_buf_24_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_24_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_24_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18))) {
        in_buf_24_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_1_V_address0 = in_buf_24_1_V_addr_reg_20920.read();
    } else {
        in_buf_24_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18))) {
        in_buf_24_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_2_V_address0 = in_buf_24_2_V_addr_reg_21080.read();
    } else {
        in_buf_24_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18))) {
        in_buf_24_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_3_V_address0 = in_buf_24_3_V_addr_reg_21240.read();
    } else {
        in_buf_24_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18))) {
        in_buf_24_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_4_V_address0 = in_buf_24_4_V_addr_reg_21400.read();
    } else {
        in_buf_24_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18))) {
        in_buf_24_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_5_V_address0 = in_buf_24_5_V_addr_reg_21560.read();
    } else {
        in_buf_24_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18))) {
        in_buf_24_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_6_V_address0 = in_buf_24_6_V_addr_reg_21720.read();
    } else {
        in_buf_24_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18))) {
        in_buf_24_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_24_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_24_7_V_address0 = in_buf_24_7_V_addr_reg_21880.read();
    } else {
        in_buf_24_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_24_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18))) {
        in_buf_24_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_24_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_0_V_address0 = in_buf_25_0_V_addr_reg_20765.read();
    } else {
        in_buf_25_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_25_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_25_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19))) {
        in_buf_25_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_1_V_address0 = in_buf_25_1_V_addr_reg_20925.read();
    } else {
        in_buf_25_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19))) {
        in_buf_25_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_2_V_address0 = in_buf_25_2_V_addr_reg_21085.read();
    } else {
        in_buf_25_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19))) {
        in_buf_25_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_3_V_address0 = in_buf_25_3_V_addr_reg_21245.read();
    } else {
        in_buf_25_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19))) {
        in_buf_25_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_4_V_address0 = in_buf_25_4_V_addr_reg_21405.read();
    } else {
        in_buf_25_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19))) {
        in_buf_25_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_5_V_address0 = in_buf_25_5_V_addr_reg_21565.read();
    } else {
        in_buf_25_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19))) {
        in_buf_25_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_6_V_address0 = in_buf_25_6_V_addr_reg_21725.read();
    } else {
        in_buf_25_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19))) {
        in_buf_25_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_25_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_25_7_V_address0 = in_buf_25_7_V_addr_reg_21885.read();
    } else {
        in_buf_25_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_25_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19))) {
        in_buf_25_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_25_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_0_V_address0 = in_buf_26_0_V_addr_reg_20770.read();
    } else {
        in_buf_26_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_26_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_26_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A))) {
        in_buf_26_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_1_V_address0 = in_buf_26_1_V_addr_reg_20930.read();
    } else {
        in_buf_26_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A))) {
        in_buf_26_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_2_V_address0 = in_buf_26_2_V_addr_reg_21090.read();
    } else {
        in_buf_26_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A))) {
        in_buf_26_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_3_V_address0 = in_buf_26_3_V_addr_reg_21250.read();
    } else {
        in_buf_26_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A))) {
        in_buf_26_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_4_V_address0 = in_buf_26_4_V_addr_reg_21410.read();
    } else {
        in_buf_26_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A))) {
        in_buf_26_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_5_V_address0 = in_buf_26_5_V_addr_reg_21570.read();
    } else {
        in_buf_26_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A))) {
        in_buf_26_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_6_V_address0 = in_buf_26_6_V_addr_reg_21730.read();
    } else {
        in_buf_26_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A))) {
        in_buf_26_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_26_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_26_7_V_address0 = in_buf_26_7_V_addr_reg_21890.read();
    } else {
        in_buf_26_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_26_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A))) {
        in_buf_26_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_26_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_0_V_address0 = in_buf_27_0_V_addr_reg_20775.read();
    } else {
        in_buf_27_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_27_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_27_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B))) {
        in_buf_27_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_1_V_address0 = in_buf_27_1_V_addr_reg_20935.read();
    } else {
        in_buf_27_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B))) {
        in_buf_27_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_2_V_address0 = in_buf_27_2_V_addr_reg_21095.read();
    } else {
        in_buf_27_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B))) {
        in_buf_27_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_3_V_address0 = in_buf_27_3_V_addr_reg_21255.read();
    } else {
        in_buf_27_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B))) {
        in_buf_27_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_4_V_address0 = in_buf_27_4_V_addr_reg_21415.read();
    } else {
        in_buf_27_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B))) {
        in_buf_27_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_5_V_address0 = in_buf_27_5_V_addr_reg_21575.read();
    } else {
        in_buf_27_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B))) {
        in_buf_27_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_6_V_address0 = in_buf_27_6_V_addr_reg_21735.read();
    } else {
        in_buf_27_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B))) {
        in_buf_27_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_27_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_27_7_V_address0 = in_buf_27_7_V_addr_reg_21895.read();
    } else {
        in_buf_27_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_27_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B))) {
        in_buf_27_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_27_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_0_V_address0 = in_buf_28_0_V_addr_reg_20780.read();
    } else {
        in_buf_28_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_28_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_28_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C))) {
        in_buf_28_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_1_V_address0 = in_buf_28_1_V_addr_reg_20940.read();
    } else {
        in_buf_28_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C))) {
        in_buf_28_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_2_V_address0 = in_buf_28_2_V_addr_reg_21100.read();
    } else {
        in_buf_28_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C))) {
        in_buf_28_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_3_V_address0 = in_buf_28_3_V_addr_reg_21260.read();
    } else {
        in_buf_28_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C))) {
        in_buf_28_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_4_V_address0 = in_buf_28_4_V_addr_reg_21420.read();
    } else {
        in_buf_28_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C))) {
        in_buf_28_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_5_V_address0 = in_buf_28_5_V_addr_reg_21580.read();
    } else {
        in_buf_28_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C))) {
        in_buf_28_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_6_V_address0 = in_buf_28_6_V_addr_reg_21740.read();
    } else {
        in_buf_28_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C))) {
        in_buf_28_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_28_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_28_7_V_address0 = in_buf_28_7_V_addr_reg_21900.read();
    } else {
        in_buf_28_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_28_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C))) {
        in_buf_28_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_28_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_0_V_address0 = in_buf_29_0_V_addr_reg_20785.read();
    } else {
        in_buf_29_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_29_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_29_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D))) {
        in_buf_29_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_1_V_address0 = in_buf_29_1_V_addr_reg_20945.read();
    } else {
        in_buf_29_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D))) {
        in_buf_29_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_2_V_address0 = in_buf_29_2_V_addr_reg_21105.read();
    } else {
        in_buf_29_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D))) {
        in_buf_29_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_3_V_address0 = in_buf_29_3_V_addr_reg_21265.read();
    } else {
        in_buf_29_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D))) {
        in_buf_29_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_4_V_address0 = in_buf_29_4_V_addr_reg_21425.read();
    } else {
        in_buf_29_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D))) {
        in_buf_29_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_5_V_address0 = in_buf_29_5_V_addr_reg_21585.read();
    } else {
        in_buf_29_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D))) {
        in_buf_29_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_6_V_address0 = in_buf_29_6_V_addr_reg_21745.read();
    } else {
        in_buf_29_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D))) {
        in_buf_29_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_29_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_29_7_V_address0 = in_buf_29_7_V_addr_reg_21905.read();
    } else {
        in_buf_29_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_29_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D))) {
        in_buf_29_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_29_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_0_V_address0 = in_buf_2_0_V_addr_reg_20650.read();
    } else {
        in_buf_2_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_2_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_2_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2))) {
        in_buf_2_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_1_V_address0 = in_buf_2_1_V_addr_reg_20810.read();
    } else {
        in_buf_2_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2))) {
        in_buf_2_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_2_V_address0 = in_buf_2_2_V_addr_reg_20970.read();
    } else {
        in_buf_2_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2))) {
        in_buf_2_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_3_V_address0 = in_buf_2_3_V_addr_reg_21130.read();
    } else {
        in_buf_2_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2))) {
        in_buf_2_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_4_V_address0 = in_buf_2_4_V_addr_reg_21290.read();
    } else {
        in_buf_2_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2))) {
        in_buf_2_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_5_V_address0 = in_buf_2_5_V_addr_reg_21450.read();
    } else {
        in_buf_2_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2))) {
        in_buf_2_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_6_V_address0 = in_buf_2_6_V_addr_reg_21610.read();
    } else {
        in_buf_2_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2))) {
        in_buf_2_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_2_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_2_7_V_address0 = in_buf_2_7_V_addr_reg_21770.read();
    } else {
        in_buf_2_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_2_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2))) {
        in_buf_2_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_2_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_0_V_address0 = in_buf_30_0_V_addr_reg_20790.read();
    } else {
        in_buf_30_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_30_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_30_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_30_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_1_V_address0 = in_buf_30_1_V_addr_reg_20950.read();
    } else {
        in_buf_30_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_30_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_2_V_address0 = in_buf_30_2_V_addr_reg_21110.read();
    } else {
        in_buf_30_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_30_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_3_V_address0 = in_buf_30_3_V_addr_reg_21270.read();
    } else {
        in_buf_30_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_30_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_4_V_address0 = in_buf_30_4_V_addr_reg_21430.read();
    } else {
        in_buf_30_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_30_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_5_V_address0 = in_buf_30_5_V_addr_reg_21590.read();
    } else {
        in_buf_30_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_30_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_6_V_address0 = in_buf_30_6_V_addr_reg_21750.read();
    } else {
        in_buf_30_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_30_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_30_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_30_7_V_address0 = in_buf_30_7_V_addr_reg_21910.read();
    } else {
        in_buf_30_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_30_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_30_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_30_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_0_V_address0 = in_buf_31_0_V_addr_reg_20795.read();
    } else {
        in_buf_31_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_31_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_31_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_31_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_1_V_address0 = in_buf_31_1_V_addr_reg_20955.read();
    } else {
        in_buf_31_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_31_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_2_V_address0 = in_buf_31_2_V_addr_reg_21115.read();
    } else {
        in_buf_31_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_31_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_3_V_address0 = in_buf_31_3_V_addr_reg_21275.read();
    } else {
        in_buf_31_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_31_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_4_V_address0 = in_buf_31_4_V_addr_reg_21435.read();
    } else {
        in_buf_31_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_31_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_5_V_address0 = in_buf_31_5_V_addr_reg_21595.read();
    } else {
        in_buf_31_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_31_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_6_V_address0 = in_buf_31_6_V_addr_reg_21755.read();
    } else {
        in_buf_31_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_31_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_31_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_fu_12793_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_31_7_V_address0 = in_buf_31_7_V_addr_reg_21915.read();
    } else {
        in_buf_31_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_31_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1E))) {
        in_buf_31_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_31_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_0_V_address0 = in_buf_3_0_V_addr_reg_20655.read();
    } else {
        in_buf_3_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_3_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_3_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3))) {
        in_buf_3_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_1_V_address0 = in_buf_3_1_V_addr_reg_20815.read();
    } else {
        in_buf_3_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3))) {
        in_buf_3_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_2_V_address0 = in_buf_3_2_V_addr_reg_20975.read();
    } else {
        in_buf_3_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3))) {
        in_buf_3_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_3_V_address0 = in_buf_3_3_V_addr_reg_21135.read();
    } else {
        in_buf_3_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3))) {
        in_buf_3_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_4_V_address0 = in_buf_3_4_V_addr_reg_21295.read();
    } else {
        in_buf_3_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3))) {
        in_buf_3_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_5_V_address0 = in_buf_3_5_V_addr_reg_21455.read();
    } else {
        in_buf_3_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3))) {
        in_buf_3_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_6_V_address0 = in_buf_3_6_V_addr_reg_21615.read();
    } else {
        in_buf_3_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3))) {
        in_buf_3_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_3_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_3_7_V_address0 = in_buf_3_7_V_addr_reg_21775.read();
    } else {
        in_buf_3_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_3_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_3))) {
        in_buf_3_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_3_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_0_V_address0 = in_buf_4_0_V_addr_reg_20660.read();
    } else {
        in_buf_4_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_4_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_4_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4))) {
        in_buf_4_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_1_V_address0 = in_buf_4_1_V_addr_reg_20820.read();
    } else {
        in_buf_4_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4))) {
        in_buf_4_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_2_V_address0 = in_buf_4_2_V_addr_reg_20980.read();
    } else {
        in_buf_4_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4))) {
        in_buf_4_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_3_V_address0 = in_buf_4_3_V_addr_reg_21140.read();
    } else {
        in_buf_4_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4))) {
        in_buf_4_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_4_V_address0 = in_buf_4_4_V_addr_reg_21300.read();
    } else {
        in_buf_4_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4))) {
        in_buf_4_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_5_V_address0 = in_buf_4_5_V_addr_reg_21460.read();
    } else {
        in_buf_4_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4))) {
        in_buf_4_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_6_V_address0 = in_buf_4_6_V_addr_reg_21620.read();
    } else {
        in_buf_4_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4))) {
        in_buf_4_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_4_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_4_7_V_address0 = in_buf_4_7_V_addr_reg_21780.read();
    } else {
        in_buf_4_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_4_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_4))) {
        in_buf_4_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_4_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_0_V_address0 = in_buf_5_0_V_addr_reg_20665.read();
    } else {
        in_buf_5_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_5_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_5_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5))) {
        in_buf_5_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_1_V_address0 = in_buf_5_1_V_addr_reg_20825.read();
    } else {
        in_buf_5_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5))) {
        in_buf_5_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_2_V_address0 = in_buf_5_2_V_addr_reg_20985.read();
    } else {
        in_buf_5_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5))) {
        in_buf_5_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_3_V_address0 = in_buf_5_3_V_addr_reg_21145.read();
    } else {
        in_buf_5_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5))) {
        in_buf_5_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_4_V_address0 = in_buf_5_4_V_addr_reg_21305.read();
    } else {
        in_buf_5_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5))) {
        in_buf_5_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_5_V_address0 = in_buf_5_5_V_addr_reg_21465.read();
    } else {
        in_buf_5_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5))) {
        in_buf_5_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_6_V_address0 = in_buf_5_6_V_addr_reg_21625.read();
    } else {
        in_buf_5_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5))) {
        in_buf_5_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_5_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_5_7_V_address0 = in_buf_5_7_V_addr_reg_21785.read();
    } else {
        in_buf_5_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_5_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_5))) {
        in_buf_5_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_5_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_0_V_address0 = in_buf_6_0_V_addr_reg_20670.read();
    } else {
        in_buf_6_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_6_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_6_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6))) {
        in_buf_6_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_1_V_address0 = in_buf_6_1_V_addr_reg_20830.read();
    } else {
        in_buf_6_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6))) {
        in_buf_6_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_2_V_address0 = in_buf_6_2_V_addr_reg_20990.read();
    } else {
        in_buf_6_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6))) {
        in_buf_6_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_3_V_address0 = in_buf_6_3_V_addr_reg_21150.read();
    } else {
        in_buf_6_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6))) {
        in_buf_6_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_4_V_address0 = in_buf_6_4_V_addr_reg_21310.read();
    } else {
        in_buf_6_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6))) {
        in_buf_6_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_5_V_address0 = in_buf_6_5_V_addr_reg_21470.read();
    } else {
        in_buf_6_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6))) {
        in_buf_6_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_6_V_address0 = in_buf_6_6_V_addr_reg_21630.read();
    } else {
        in_buf_6_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6))) {
        in_buf_6_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_6_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_6_7_V_address0 = in_buf_6_7_V_addr_reg_21790.read();
    } else {
        in_buf_6_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_6_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_6))) {
        in_buf_6_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_6_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_0_V_address0 = in_buf_7_0_V_addr_reg_20675.read();
    } else {
        in_buf_7_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_7_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_7_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7))) {
        in_buf_7_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_1_V_address0 = in_buf_7_1_V_addr_reg_20835.read();
    } else {
        in_buf_7_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7))) {
        in_buf_7_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_2_V_address0 = in_buf_7_2_V_addr_reg_20995.read();
    } else {
        in_buf_7_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7))) {
        in_buf_7_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_3_V_address0 = in_buf_7_3_V_addr_reg_21155.read();
    } else {
        in_buf_7_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7))) {
        in_buf_7_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_4_V_address0 = in_buf_7_4_V_addr_reg_21315.read();
    } else {
        in_buf_7_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7))) {
        in_buf_7_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_5_V_address0 = in_buf_7_5_V_addr_reg_21475.read();
    } else {
        in_buf_7_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7))) {
        in_buf_7_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_6_V_address0 = in_buf_7_6_V_addr_reg_21635.read();
    } else {
        in_buf_7_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7))) {
        in_buf_7_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_7_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_7_7_V_address0 = in_buf_7_7_V_addr_reg_21795.read();
    } else {
        in_buf_7_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_7_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_7))) {
        in_buf_7_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_7_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_0_V_address0 = in_buf_8_0_V_addr_reg_20680.read();
    } else {
        in_buf_8_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_8_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_8_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8))) {
        in_buf_8_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_1_V_address0 = in_buf_8_1_V_addr_reg_20840.read();
    } else {
        in_buf_8_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8))) {
        in_buf_8_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_2_V_address0 = in_buf_8_2_V_addr_reg_21000.read();
    } else {
        in_buf_8_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8))) {
        in_buf_8_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_3_V_address0 = in_buf_8_3_V_addr_reg_21160.read();
    } else {
        in_buf_8_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8))) {
        in_buf_8_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_4_V_address0 = in_buf_8_4_V_addr_reg_21320.read();
    } else {
        in_buf_8_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8))) {
        in_buf_8_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_5_V_address0 = in_buf_8_5_V_addr_reg_21480.read();
    } else {
        in_buf_8_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8))) {
        in_buf_8_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_6_V_address0 = in_buf_8_6_V_addr_reg_21640.read();
    } else {
        in_buf_8_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8))) {
        in_buf_8_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_8_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_8_7_V_address0 = in_buf_8_7_V_addr_reg_21800.read();
    } else {
        in_buf_8_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_8_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_8))) {
        in_buf_8_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_8_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_0_V_address0 = in_buf_9_0_V_addr_reg_20685.read();
    } else {
        in_buf_9_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_9_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_9_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9))) {
        in_buf_9_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_1_V_address0 = in_buf_9_1_V_addr_reg_20845.read();
    } else {
        in_buf_9_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9))) {
        in_buf_9_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_2_V_address0 = in_buf_9_2_V_addr_reg_21005.read();
    } else {
        in_buf_9_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9))) {
        in_buf_9_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_3_V_address0 = in_buf_9_3_V_addr_reg_21165.read();
    } else {
        in_buf_9_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9))) {
        in_buf_9_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_4_V_address0 = in_buf_9_4_V_addr_reg_21325.read();
    } else {
        in_buf_9_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9))) {
        in_buf_9_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_5_V_address0 = in_buf_9_5_V_addr_reg_21485.read();
    } else {
        in_buf_9_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9))) {
        in_buf_9_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_6_V_address0 = in_buf_9_6_V_addr_reg_21645.read();
    } else {
        in_buf_9_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9))) {
        in_buf_9_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_9_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_9_7_V_address0 = in_buf_9_7_V_addr_reg_21805.read();
    } else {
        in_buf_9_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_9_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_9))) {
        in_buf_9_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_9_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_stream_TDATA_blk_n() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19226.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20594.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21920.read())))) {
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
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19226.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20594.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21920.read()) && 
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
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19226.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20594.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21920.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_stream_dest_V_0_ack_out = ap_const_logic_1;
    } else {
        in_stream_dest_V_0_ack_out = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_stream_dest_V_0_vld_in() {
    in_stream_dest_V_0_vld_in = in_stream_TVALID.read();
}

void mmult_hw::thread_indvar_flatten_next_fu_12759_p2() {
    indvar_flatten_next_fu_12759_p2 = (!indvar_flatten_reg_11424.read().is_01() || !ap_const_lv11_1.is_01())? sc_lv<11>(): (sc_biguint<11>(indvar_flatten_reg_11424.read()) + sc_biguint<11>(ap_const_lv11_1));
}

void mmult_hw::thread_indvars_iv_next1_fu_12392_p2() {
    indvars_iv_next1_fu_12392_p2 = (!indvars_iv1_reg_11277.read().is_01() || !ap_const_lv9_20.is_01())? sc_lv<9>(): (sc_biguint<9>(indvars_iv1_reg_11277.read()) + sc_biguint<9>(ap_const_lv9_20));
}

void mmult_hw::thread_indvars_iv_next_fu_18188_p2() {
    indvars_iv_next_fu_18188_p2 = (!indvars_iv_reg_11333.read().is_01() || !ap_const_lv11_10.is_01())? sc_lv<11>(): (sc_biguint<11>(indvars_iv_reg_11333.read()) + sc_biguint<11>(ap_const_lv11_10));
}

void mmult_hw::thread_is_idx_4_fu_12406_p2() {
    is_idx_4_fu_12406_p2 = (!is_idx_3_reg_11345.read().is_01() || !ap_const_lv19_1000.is_01())? sc_lv<19>(): (sc_biguint<19>(is_idx_3_reg_11345.read()) + sc_biguint<19>(ap_const_lv19_1000));
}

void mmult_hw::thread_is_idx_6_fu_12424_p2() {
    is_idx_6_fu_12424_p2 = (!indvars_iv940_in_reg_11381.read().is_01() || !ap_const_lv19_20.is_01())? sc_lv<19>(): (sc_biguint<19>(indvars_iv940_in_reg_11381.read()) + sc_biguint<19>(ap_const_lv19_20));
}

void mmult_hw::thread_is_idx_7_fu_12695_p2() {
    is_idx_7_fu_12695_p2 = (!ap_const_lv19_1.is_01() || !is_idx_5_reg_11403.read().is_01())? sc_lv<19>(): (sc_biguint<19>(ap_const_lv19_1) + sc_biguint<19>(is_idx_5_reg_11403.read()));
}

void mmult_hw::thread_ix0_V_cast_fu_17787_p1() {
    ix0_V_cast_fu_17787_p1 = esl_zext<2,1>(tmp_34_reg_28604.read());
}

void mmult_hw::thread_ix1_V_fu_17790_p3() {
    ix1_V_fu_17790_p3 = (!tmp_35_reg_28609.read()[0].is_01())? sc_lv<2>(): ((tmp_35_reg_28609.read()[0].to_bool())? ap_const_lv2_3: ap_const_lv2_2);
}

void mmult_hw::thread_ix2_V_fu_17797_p3() {
    ix2_V_fu_17797_p3 = (!tmp_36_reg_28614.read()[0].is_01())? sc_lv<3>(): ((tmp_36_reg_28614.read()[0].to_bool())? ap_const_lv3_5: ap_const_lv3_4);
}

void mmult_hw::thread_ix3_V_cast_cast_fu_17804_p3() {
    ix3_V_cast_cast_fu_17804_p3 = (!tmp_37_reg_28620.read()[0].is_01())? sc_lv<3>(): ((tmp_37_reg_28620.read()[0].to_bool())? ap_const_lv3_7: ap_const_lv3_6);
}

void mmult_hw::thread_ix4_V_fu_18000_p3() {
    ix4_V_fu_18000_p3 = (!tmp_38_reg_28661.read()[0].is_01())? sc_lv<4>(): ((tmp_38_reg_28661.read()[0].to_bool())? ap_const_lv4_9: ap_const_lv4_8);
}

void mmult_hw::thread_ix5_V_cast_fu_17950_p1() {
    ix5_V_cast_fu_17950_p1 = esl_zext<3,2>(ix5_V_reg_28631.read());
}

void mmult_hw::thread_ix5_V_fu_17811_p3() {
    ix5_V_fu_17811_p3 = (!tmp_39_reg_28626.read()[0].is_01())? sc_lv<2>(): ((tmp_39_reg_28626.read()[0].to_bool())? ix1_V_fu_17790_p3.read(): ix0_V_cast_fu_17787_p1.read());
}

void mmult_hw::thread_ix6_V_fu_17834_p3() {
    ix6_V_fu_17834_p3 = (!tmp_40_fu_17828_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_40_fu_17828_p2.read()[0].to_bool())? ix3_V_cast_cast_fu_17804_p3.read(): ix2_V_fu_17797_p3.read());
}

void mmult_hw::thread_ix7_V_cast_fu_17964_p1() {
    ix7_V_cast_fu_17964_p1 = esl_zext<4,3>(ix7_V_fu_17957_p3.read());
}

void mmult_hw::thread_ix7_V_fu_17957_p3() {
    ix7_V_fu_17957_p3 = (!tmp_42_fu_17953_p2.read()[0].is_01())? sc_lv<3>(): ((tmp_42_fu_17953_p2.read()[0].to_bool())? ix6_V_reg_28636.read(): ix5_V_cast_fu_17950_p1.read());
}

void mmult_hw::thread_j3_mid2_fu_12771_p3() {
    j3_mid2_fu_12771_p3 = (!tmp_43_fu_12765_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_43_fu_12765_p2.read()[0].to_bool())? ap_const_lv4_0: j3_phi_fu_11450_p4.read());
}

void mmult_hw::thread_j3_phi_fu_11450_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_21938.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        j3_phi_fu_11450_p4 = j_3_reg_22231.read();
    } else {
        j3_phi_fu_11450_p4 = j3_reg_11446.read();
    }
}

void mmult_hw::thread_j_1_fu_12350_p2() {
    j_1_fu_12350_p2 = (!j_reg_11322.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(j_reg_11322.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void mmult_hw::thread_j_2_fu_12711_p2() {
    j_2_fu_12711_p2 = (!j2_reg_11413.read().is_01() || !ap_const_lv9_8.is_01())? sc_lv<9>(): (sc_biguint<9>(j2_reg_11413.read()) + sc_biguint<9>(ap_const_lv9_8));
}

void mmult_hw::thread_j_3_fu_12798_p2() {
    j_3_fu_12798_p2 = (!j3_mid2_fu_12771_p3.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(j3_mid2_fu_12771_p3.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void mmult_hw::thread_last_assign_fu_18063_p2() {
    last_assign_fu_18063_p2 = (!tmp_33_fu_18057_p2.read().is_01() || !ap_const_lv11_3FF.is_01())? sc_lv<1>(): sc_lv<1>(tmp_33_fu_18057_p2.read() == ap_const_lv11_3FF);
}

void mmult_hw::thread_newSel10_fu_17649_p3() {
    newSel10_fu_17649_p3 = (!or_cond3_reg_28507.read()[0].is_01())? sc_lv<32>(): ((or_cond3_reg_28507.read()[0].to_bool())? newSel6_fu_17643_p3.read(): out_tmp_9_V_12_fu_2384.read());
}

void mmult_hw::thread_newSel11_fu_17663_p3() {
    newSel11_fu_17663_p3 = (!sel_tmp8_reg_28491.read()[0].is_01())? sc_lv<32>(): ((sel_tmp8_reg_28491.read()[0].to_bool())? ap_reg_pp3_iter9_out_tmp_0_V_reg_28446.read(): out_tmp_9_V_10_fu_2380.read());
}

void mmult_hw::thread_newSel12_fu_17532_p3() {
    newSel12_fu_17532_p3 = (!sel_tmp9_fu_17505_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp9_fu_17505_p2.read()[0].to_bool())? out_tmp_9_V_8_fu_2376.read(): out_tmp_0_V_reg_28446.read());
}

void mmult_hw::thread_newSel13_fu_17539_p3() {
    newSel13_fu_17539_p3 = (!or_cond_fu_17510_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond_fu_17510_p2.read()[0].to_bool())? out_tmp_9_V_8_fu_2376.read(): newSel12_fu_17532_p3.read());
}

void mmult_hw::thread_newSel14_fu_17676_p3() {
    newSel14_fu_17676_p3 = (!sel_tmp9_reg_28497.read()[0].is_01())? sc_lv<32>(): ((sel_tmp9_reg_28497.read()[0].to_bool())? ap_reg_pp3_iter9_out_tmp_0_V_reg_28446.read(): out_tmp_9_V_6_fu_2372.read());
}

void mmult_hw::thread_newSel1_fu_17872_p3() {
    newSel1_fu_17872_p3 = (!sel_tmp1_fu_17842_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp1_fu_17842_p2.read()[0].to_bool())? out_tmp_9_V_23_reg_28592.read(): ap_reg_pp3_iter10_out_tmp_9_V_20_reg_28524.read());
}

void mmult_hw::thread_newSel2_fu_17623_p3() {
    newSel2_fu_17623_p3 = (!sel_tmp4_reg_28484.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_reg_28484.read()[0].to_bool())? ap_reg_pp3_iter9_out_tmp_0_V_reg_28446.read(): out_tmp_9_V_14_fu_2388.read());
}

void mmult_hw::thread_newSel3_fu_17918_p3() {
    newSel3_fu_17918_p3 = (!ap_reg_pp3_iter11_sel_tmp_reg_28473.read()[0].is_01())? sc_lv<32>(): ((ap_reg_pp3_iter11_sel_tmp_reg_28473.read()[0].to_bool())? out_tmp_9_V_17_fu_2400.read(): ap_reg_pp3_iter11_out_tmp_0_V_reg_28446.read());
}

void mmult_hw::thread_newSel4_fu_17629_p3() {
    newSel4_fu_17629_p3 = (!or_cond3_reg_28507.read()[0].is_01())? sc_lv<32>(): ((or_cond3_reg_28507.read()[0].to_bool())? out_tmp_9_V_14_fu_2388.read(): newSel2_fu_17623_p3.read());
}

void mmult_hw::thread_newSel5_fu_17931_p3() {
    newSel5_fu_17931_p3 = (!ap_reg_pp3_iter11_sel_tmp_reg_28473.read()[0].is_01())? sc_lv<32>(): ((ap_reg_pp3_iter11_sel_tmp_reg_28473.read()[0].to_bool())? ap_reg_pp3_iter11_out_tmp_0_V_reg_28446.read(): out_tmp_9_V_16_fu_2396.read());
}

void mmult_hw::thread_newSel6_fu_17643_p3() {
    newSel6_fu_17643_p3 = (!sel_tmp8_reg_28491.read()[0].is_01())? sc_lv<32>(): ((sel_tmp8_reg_28491.read()[0].to_bool())? out_tmp_9_V_12_fu_2384.read(): ap_reg_pp3_iter9_out_tmp_0_V_reg_28446.read());
}

void mmult_hw::thread_newSel7_fu_17595_p3() {
    newSel7_fu_17595_p3 = (!sel_tmp4_reg_28484.read()[0].is_01())? sc_lv<32>(): ((sel_tmp4_reg_28484.read()[0].to_bool())? out_tmp_9_V_15_fu_2392.read(): ap_reg_pp3_iter9_out_tmp_0_V_reg_28446.read());
}

void mmult_hw::thread_newSel8_fu_17601_p3() {
    newSel8_fu_17601_p3 = (!or_cond3_reg_28507.read()[0].is_01())? sc_lv<32>(): ((or_cond3_reg_28507.read()[0].to_bool())? out_tmp_9_V_15_fu_2392.read(): newSel7_fu_17595_p3.read());
}

void mmult_hw::thread_newSel9_fu_17608_p3() {
    newSel9_fu_17608_p3 = (!or_cond5_reg_28515.read()[0].is_01())? sc_lv<32>(): ((or_cond5_reg_28515.read()[0].to_bool())? out_tmp_9_V_15_fu_2392.read(): newSel8_fu_17601_p3.read());
}

void mmult_hw::thread_newSel_fu_17860_p3() {
    newSel_fu_17860_p3 = (!sel_tmp5_fu_17854_p2.read()[0].is_01())? sc_lv<32>(): ((sel_tmp5_fu_17854_p2.read()[0].to_bool())? out_tmp_9_V_24_reg_28598.read(): out_tmp_9_V_21_reg_28586.read());
}

void mmult_hw::thread_offset_buf_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        offset_buf_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00000000.read(), ap_const_boolean_0))) {
        offset_buf_V_address0 =  (sc_lv<4>) (tmp_2_fu_12012_p1.read());
    } else {
        offset_buf_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_offset_buf_V_address1() {
    offset_buf_V_address1 =  (sc_lv<4>) (tmp_4_fu_12028_p1.read());
}

void mmult_hw::thread_offset_buf_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())))) {
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19226.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0))) {
        offset_buf_V_we0 = ap_const_logic_1;
    } else {
        offset_buf_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_offset_buf_V_we1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp0_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19226.read()) && 
         esl_seteq<1,1,1>(ap_block_pp0_stage0_flag00011001.read(), ap_const_boolean_0))) {
        offset_buf_V_we1 = ap_const_logic_1;
    } else {
        offset_buf_V_we1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_or_cond1_fu_17866_p2() {
    or_cond1_fu_17866_p2 = (sel_tmp5_fu_17854_p2.read() | sel_tmp3_fu_17848_p2.read());
}

void mmult_hw::thread_or_cond2_fu_17514_p2() {
    or_cond2_fu_17514_p2 = (sel_tmp9_fu_17505_p2.read() | sel_tmp7_fu_17500_p2.read());
}

void mmult_hw::thread_or_cond3_fu_17520_p2() {
    or_cond3_fu_17520_p2 = (sel_tmp8_fu_17495_p2.read() | sel_tmp6_fu_17490_p2.read());
}

void mmult_hw::thread_or_cond4_fu_17581_p2() {
    or_cond4_fu_17581_p2 = (sel_tmp4_reg_28484.read() | sel_tmp2_reg_28479.read());
}

void mmult_hw::thread_or_cond5_fu_17526_p2() {
    or_cond5_fu_17526_p2 = (or_cond_fu_17510_p2.read() | or_cond2_fu_17514_p2.read());
}

void mmult_hw::thread_or_cond6_fu_17585_p2() {
    or_cond6_fu_17585_p2 = (or_cond3_reg_28507.read() | or_cond4_fu_17581_p2.read());
}

void mmult_hw::thread_or_cond7_fu_17590_p2() {
    or_cond7_fu_17590_p2 = (or_cond5_reg_28515.read() | or_cond6_fu_17585_p2.read());
}

void mmult_hw::thread_or_cond_fu_17510_p2() {
    or_cond_fu_17510_p2 = (sel_tmp11_reg_28466.read() | sel_tmp10_reg_28460.read());
}

void mmult_hw::thread_os_idx_1_phi_fu_11460_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_28682.read()))) {
        os_idx_1_phi_fu_11460_p4 = tmp_33_reg_28706.read();
    } else {
        os_idx_1_phi_fu_11460_p4 = os_idx_1_reg_11457.read();
    }
}

void mmult_hw::thread_os_idx_2_fu_18025_p2() {
    os_idx_2_fu_18025_p2 = (!os_idx_reg_11357.read().is_01() || !ap_const_lv11_10.is_01())? sc_lv<11>(): (sc_biguint<11>(os_idx_reg_11357.read()) + sc_biguint<11>(ap_const_lv11_10));
}

void mmult_hw::thread_out_buf_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage3_flag00000000.read(), ap_const_boolean_0))) {
        out_buf_V_address0 =  (sc_lv<7>) (tmp_32_fu_18130_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage2_flag00000000.read(), ap_const_boolean_0))) {
        out_buf_V_address0 =  (sc_lv<7>) (tmp_28_fu_18110_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()))) {
        out_buf_V_address0 =  (sc_lv<7>) (tmp_24_fu_18090_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()))) {
        out_buf_V_address0 =  (sc_lv<7>) (tmp_18_fu_18041_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter13.read()))) {
        out_buf_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter12_tmp_14_mid2_reg_21966.read());
    } else {
        out_buf_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_out_buf_V_address1() {
    if (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())) {
        if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
             esl_seteq<1,1,1>(ap_block_pp4_stage3_flag00000000.read(), ap_const_boolean_0))) {
            out_buf_V_address1 =  (sc_lv<7>) (tmp_30_fu_18120_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp4_stage2_flag00000000.read(), ap_const_boolean_0))) {
            out_buf_V_address1 =  (sc_lv<7>) (tmp_26_fu_18100_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0))) {
            out_buf_V_address1 =  (sc_lv<7>) (tmp_22_fu_18080_p1.read());
        } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
                    esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0))) {
            out_buf_V_address1 =  (sc_lv<7>) (tmp_20_fu_18052_p1.read());
        } else {
            out_buf_V_address1 = "XXXXXXX";
        }
    } else {
        out_buf_V_address1 = "XXXXXXX";
    }
}

void mmult_hw::thread_out_buf_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter13.read())))) {
        out_buf_V_ce0 = ap_const_logic_1;
    } else {
        out_buf_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_buf_V_ce1() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage2.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage2_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage3.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage3_flag00011001.read(), ap_const_boolean_0)))) {
        out_buf_V_ce1 = ap_const_logic_1;
    } else {
        out_buf_V_ce1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_buf_V_d0() {
    out_buf_V_d0 = (!tmp_44_fu_18012_p2.read()[0].is_01())? sc_lv<4>(): ((tmp_44_fu_18012_p2.read()[0].to_bool())? ix4_V_fu_18000_p3.read(): ix7_V_cast_reg_28667.read());
}

void mmult_hw::thread_out_buf_V_we0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter13.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, ap_reg_pp3_iter12_ifzero_reg_23137.read()))) {
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
          esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_28682.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp4_stage1_flag00000000.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter1_exitcond_reg_28682.read())))) {
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_28682.read()) && 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_28682.read()) && 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_28682.read()) && 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_28682.read()) && 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_28682.read()) && 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_28682.read()) && 
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
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_28682.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00011001.read(), ap_const_boolean_0))) {
        out_stream_user_V_1_vld_in = ap_const_logic_1;
    } else {
        out_stream_user_V_1_vld_in = ap_const_logic_0;
    }
}

void mmult_hw::thread_out_stream_user_V_1_vld_out() {
    out_stream_user_V_1_vld_out = out_stream_user_V_1_state.read()[0];
}

void mmult_hw::thread_out_tmp_0_V_fu_17456_p2() {
    out_tmp_0_V_fu_17456_p2 = (!tmp127_fu_17409_p2.read().is_01() || !tmp568_cast_fu_17452_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp127_fu_17409_p2.read()) + sc_bigint<32>(tmp568_cast_fu_17452_p1.read()));
}

void mmult_hw::thread_out_tmp_9_V_19_fu_17669_p3() {
    out_tmp_9_V_19_fu_17669_p3 = (!or_cond5_reg_28515.read()[0].is_01())? sc_lv<32>(): ((or_cond5_reg_28515.read()[0].to_bool())? out_tmp_9_V_10_fu_2380.read(): newSel11_fu_17663_p3.read());
}

void mmult_hw::thread_out_tmp_9_V_20_fu_17547_p3() {
    out_tmp_9_V_20_fu_17547_p3 = (!or_cond5_fu_17526_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond5_fu_17526_p2.read()[0].to_bool())? newSel13_fu_17539_p3.read(): out_tmp_9_V_8_fu_2376.read());
}

void mmult_hw::thread_out_tmp_9_V_21_fu_17682_p3() {
    out_tmp_9_V_21_fu_17682_p3 = (!or_cond_reg_28502.read()[0].is_01())? sc_lv<32>(): ((or_cond_reg_28502.read()[0].to_bool())? out_tmp_9_V_6_fu_2372.read(): newSel14_fu_17676_p3.read());
}

void mmult_hw::thread_out_tmp_9_V_22_fu_17689_p3() {
    out_tmp_9_V_22_fu_17689_p3 = (!ap_reg_pp3_iter9_sel_tmp10_reg_28460.read()[0].is_01())? sc_lv<32>(): ((ap_reg_pp3_iter9_sel_tmp10_reg_28460.read()[0].to_bool())? ap_reg_pp3_iter9_out_tmp_0_V_reg_28446.read(): out_tmp_9_V_4_fu_2368.read());
}

void mmult_hw::thread_out_tmp_9_V_23_fu_17695_p3() {
    out_tmp_9_V_23_fu_17695_p3 = (!ap_reg_pp3_iter9_sel_tmp11_reg_28466.read()[0].is_01())? sc_lv<32>(): ((ap_reg_pp3_iter9_sel_tmp11_reg_28466.read()[0].to_bool())? out_tmp_9_V_4_fu_2368.read(): out_tmp_9_V_22_fu_17689_p3.read());
}

void mmult_hw::thread_out_tmp_9_V_24_fu_17702_p3() {
    out_tmp_9_V_24_fu_17702_p3 = (!ap_reg_pp3_iter9_sel_tmp11_reg_28466.read()[0].is_01())? sc_lv<32>(): ((ap_reg_pp3_iter9_sel_tmp11_reg_28466.read()[0].to_bool())? ap_reg_pp3_iter9_out_tmp_0_V_reg_28446.read(): out_tmp_9_V_1_fu_2364.read());
}

void mmult_hw::thread_out_tmp_9_V_2_fu_17924_p3() {
    out_tmp_9_V_2_fu_17924_p3 = (!ap_reg_pp3_iter11_or_cond7_reg_28532.read()[0].is_01())? sc_lv<32>(): ((ap_reg_pp3_iter11_or_cond7_reg_28532.read()[0].to_bool())? out_tmp_9_V_17_fu_2400.read(): newSel3_fu_17918_p3.read());
}

void mmult_hw::thread_out_tmp_9_V_3_fu_17937_p3() {
    out_tmp_9_V_3_fu_17937_p3 = (!ap_reg_pp3_iter11_or_cond7_reg_28532.read()[0].is_01())? sc_lv<32>(): ((ap_reg_pp3_iter11_or_cond7_reg_28532.read()[0].to_bool())? out_tmp_9_V_16_fu_2396.read(): newSel5_fu_17931_p3.read());
}

void mmult_hw::thread_out_tmp_9_V_5_fu_17615_p3() {
    out_tmp_9_V_5_fu_17615_p3 = (!or_cond7_fu_17590_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond7_fu_17590_p2.read()[0].to_bool())? newSel9_fu_17608_p3.read(): out_tmp_9_V_15_fu_2392.read());
}

void mmult_hw::thread_out_tmp_9_V_7_fu_17636_p3() {
    out_tmp_9_V_7_fu_17636_p3 = (!or_cond5_reg_28515.read()[0].is_01())? sc_lv<32>(): ((or_cond5_reg_28515.read()[0].to_bool())? out_tmp_9_V_14_fu_2388.read(): newSel4_fu_17629_p3.read());
}

void mmult_hw::thread_out_tmp_9_V_9_fu_17656_p3() {
    out_tmp_9_V_9_fu_17656_p3 = (!or_cond5_reg_28515.read()[0].is_01())? sc_lv<32>(): ((or_cond5_reg_28515.read()[0].to_bool())? out_tmp_9_V_12_fu_2384.read(): newSel10_fu_17649_p3.read());
}

void mmult_hw::thread_out_tmp_9_V_fu_17878_p3() {
    out_tmp_9_V_fu_17878_p3 = (!or_cond1_fu_17866_p2.read()[0].is_01())? sc_lv<32>(): ((or_cond1_fu_17866_p2.read()[0].to_bool())? newSel_fu_17860_p3.read(): newSel1_fu_17872_p3.read());
}

void mmult_hw::thread_out_tmp_V_load_10_ph_fu_17731_p3() {
    out_tmp_V_load_10_ph_fu_17731_p3 = (!tmp_34_fu_17708_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_34_fu_17708_p2.read()[0].to_bool())? out_tmp_9_V_23_fu_17695_p3.read(): out_tmp_9_V_24_fu_17702_p3.read());
}

void mmult_hw::thread_out_tmp_V_load_11_ph_fu_17739_p3() {
    out_tmp_V_load_11_ph_fu_17739_p3 = (!tmp_35_fu_17714_p2.read()[0].is_01())? sc_lv<32>(): ((tmp_35_fu_17714_p2.read()[0].to_bool())? out_tmp_9_V_20_reg_28524.read(): out_tmp_9_V_21_fu_17682_p3.read());
}

void mmult_hw::thread_out_tmp_V_load_12_ph_fu_17818_p3() {
    out_tmp_V_load_12_ph_fu_17818_p3 = (!tmp_36_reg_28614.read()[0].is_01())? sc_lv<32>(): ((tmp_36_reg_28614.read()[0].to_bool())? out_tmp_9_V_9_reg_28572.read(): out_tmp_9_V_19_reg_28579.read());
}

void mmult_hw::thread_out_tmp_V_load_13_ph_fu_17823_p3() {
    out_tmp_V_load_13_ph_fu_17823_p3 = (!tmp_37_reg_28620.read()[0].is_01())? sc_lv<32>(): ((tmp_37_reg_28620.read()[0].to_bool())? out_tmp_9_V_5_reg_28538.read(): out_tmp_9_V_7_reg_28565.read());
}

void mmult_hw::thread_out_tmp_V_load_15_ph_fu_17890_p17() {
    out_tmp_V_load_15_ph_fu_17890_p17 = esl_zext<4,3>(ix6_V_fu_17834_p3.read());
}

void mmult_hw::thread_out_tmp_V_load_16_ph_fu_17968_p17() {
    out_tmp_V_load_16_ph_fu_17968_p17 = esl_zext<4,3>(ix7_V_fu_17957_p3.read());
}

void mmult_hw::thread_out_tmp_V_load_17_ph_fu_18007_p3() {
    out_tmp_V_load_17_ph_fu_18007_p3 = (!tmp_38_reg_28661.read()[0].is_01())? sc_lv<32>(): ((tmp_38_reg_28661.read()[0].to_bool())? out_tmp_9_V_2_reg_28651.read(): out_tmp_9_V_3_reg_28656.read());
}

void mmult_hw::thread_p_Result_s_24_fu_18177_p1() {
    p_Result_s_24_fu_18177_p1 = esl_zext<64,60>(tmp_258_fu_18157_p9.read());
}

void mmult_hw::thread_sel_tmp10_fu_17462_p2() {
    sel_tmp10_fu_17462_p2 = (!ap_reg_pp3_iter7_j3_mid2_reg_21947.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_pp3_iter7_j3_mid2_reg_21947.read() == ap_const_lv4_1);
}

void mmult_hw::thread_sel_tmp11_fu_17467_p2() {
    sel_tmp11_fu_17467_p2 = (!ap_reg_pp3_iter7_j3_mid2_reg_21947.read().is_01() || !ap_const_lv4_0.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_pp3_iter7_j3_mid2_reg_21947.read() == ap_const_lv4_0);
}

void mmult_hw::thread_sel_tmp1_fu_17842_p2() {
    sel_tmp1_fu_17842_p2 = (!ix5_V_fu_17811_p3.read().is_01() || !ap_const_lv2_1.is_01())? sc_lv<1>(): sc_lv<1>(ix5_V_fu_17811_p3.read() == ap_const_lv2_1);
}

void mmult_hw::thread_sel_tmp2_fu_17480_p2() {
    sel_tmp2_fu_17480_p2 = (!ap_reg_pp3_iter8_j3_mid2_reg_21947.read().is_01() || !ap_const_lv4_7.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_pp3_iter8_j3_mid2_reg_21947.read() == ap_const_lv4_7);
}

void mmult_hw::thread_sel_tmp3_fu_17848_p2() {
    sel_tmp3_fu_17848_p2 = (!ix5_V_fu_17811_p3.read().is_01() || !ap_const_lv2_2.is_01())? sc_lv<1>(): sc_lv<1>(ix5_V_fu_17811_p3.read() == ap_const_lv2_2);
}

void mmult_hw::thread_sel_tmp4_fu_17485_p2() {
    sel_tmp4_fu_17485_p2 = (!ap_reg_pp3_iter8_j3_mid2_reg_21947.read().is_01() || !ap_const_lv4_6.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_pp3_iter8_j3_mid2_reg_21947.read() == ap_const_lv4_6);
}

void mmult_hw::thread_sel_tmp5_fu_17854_p2() {
    sel_tmp5_fu_17854_p2 = (!ix5_V_fu_17811_p3.read().is_01() || !ap_const_lv2_0.is_01())? sc_lv<1>(): sc_lv<1>(ix5_V_fu_17811_p3.read() == ap_const_lv2_0);
}

void mmult_hw::thread_sel_tmp6_fu_17490_p2() {
    sel_tmp6_fu_17490_p2 = (!ap_reg_pp3_iter8_j3_mid2_reg_21947.read().is_01() || !ap_const_lv4_5.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_pp3_iter8_j3_mid2_reg_21947.read() == ap_const_lv4_5);
}

void mmult_hw::thread_sel_tmp7_fu_17500_p2() {
    sel_tmp7_fu_17500_p2 = (!ap_reg_pp3_iter8_j3_mid2_reg_21947.read().is_01() || !ap_const_lv4_3.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_pp3_iter8_j3_mid2_reg_21947.read() == ap_const_lv4_3);
}

void mmult_hw::thread_sel_tmp8_fu_17495_p2() {
    sel_tmp8_fu_17495_p2 = (!ap_reg_pp3_iter8_j3_mid2_reg_21947.read().is_01() || !ap_const_lv4_4.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_pp3_iter8_j3_mid2_reg_21947.read() == ap_const_lv4_4);
}

void mmult_hw::thread_sel_tmp9_fu_17505_p2() {
    sel_tmp9_fu_17505_p2 = (!ap_reg_pp3_iter8_j3_mid2_reg_21947.read().is_01() || !ap_const_lv4_2.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_pp3_iter8_j3_mid2_reg_21947.read() == ap_const_lv4_2);
}

void mmult_hw::thread_sel_tmp_fu_17475_p2() {
    sel_tmp_fu_17475_p2 = (!ap_reg_pp3_iter8_j3_mid2_reg_21947.read().is_01() || !ap_const_lv4_8.is_01())? sc_lv<1>(): sc_lv<1>(ap_reg_pp3_iter8_j3_mid2_reg_21947.read() == ap_const_lv4_8);
}

void mmult_hw::thread_t_1_fu_18182_p2() {
    t_1_fu_18182_p2 = (!t_reg_11369.read().is_01() || !ap_const_lv14_80.is_01())? sc_lv<14>(): (sc_biguint<14>(t_reg_11369.read()) + sc_biguint<14>(ap_const_lv14_80));
}

void mmult_hw::thread_tmp100_fu_16358_p2() {
    tmp100_fu_16358_p2 = (!tmp544_cast_fu_16352_p1.read().is_01() || !tmp545_cast_fu_16355_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp544_cast_fu_16352_p1.read()) + sc_bigint<18>(tmp545_cast_fu_16355_p1.read()));
}

void mmult_hw::thread_tmp101_fu_16368_p2() {
    tmp101_fu_16368_p2 = (!tmp540_cast_fu_16348_p1.read().is_01() || !tmp543_cast_fu_16364_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp540_cast_fu_16348_p1.read()) + sc_bigint<19>(tmp543_cast_fu_16364_p1.read()));
}

void mmult_hw::thread_tmp104_fu_16380_p2() {
    tmp104_fu_16380_p2 = (!tmp548_cast_fu_16374_p1.read().is_01() || !tmp549_cast_fu_16377_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp548_cast_fu_16374_p1.read()) + sc_bigint<18>(tmp549_cast_fu_16377_p1.read()));
}

void mmult_hw::thread_tmp107_fu_16396_p2() {
    tmp107_fu_16396_p2 = (!tmp551_cast_fu_16390_p1.read().is_01() || !tmp552_cast_fu_16393_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp551_cast_fu_16390_p1.read()) + sc_bigint<18>(tmp552_cast_fu_16393_p1.read()));
}

void mmult_hw::thread_tmp108_fu_16406_p2() {
    tmp108_fu_16406_p2 = (!tmp547_cast_fu_16386_p1.read().is_01() || !tmp550_cast_fu_16402_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp547_cast_fu_16386_p1.read()) + sc_bigint<19>(tmp550_cast_fu_16402_p1.read()));
}

void mmult_hw::thread_tmp109_fu_17209_p2() {
    tmp109_fu_17209_p2 = (!tmp539_cast_fu_17203_p1.read().is_01() || !tmp546_cast_fu_17206_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp539_cast_fu_17203_p1.read()) + sc_bigint<20>(tmp546_cast_fu_17206_p1.read()));
}

void mmult_hw::thread_tmp10_fu_15914_p2() {
    tmp10_fu_15914_p2 = (!tmp454_cast_fu_15908_p1.read().is_01() || !tmp455_cast_fu_15911_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp454_cast_fu_15908_p1.read()) + sc_bigint<18>(tmp455_cast_fu_15911_p1.read()));
}

void mmult_hw::thread_tmp112_fu_16418_p2() {
    tmp112_fu_16418_p2 = (!tmp556_cast_fu_16412_p1.read().is_01() || !tmp557_cast_fu_16415_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp556_cast_fu_16412_p1.read()) + sc_bigint<18>(tmp557_cast_fu_16415_p1.read()));
}

void mmult_hw::thread_tmp115_fu_16434_p2() {
    tmp115_fu_16434_p2 = (!tmp559_cast_fu_16428_p1.read().is_01() || !tmp560_cast_fu_16431_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp559_cast_fu_16428_p1.read()) + sc_bigint<18>(tmp560_cast_fu_16431_p1.read()));
}

void mmult_hw::thread_tmp116_fu_16444_p2() {
    tmp116_fu_16444_p2 = (!tmp555_cast_fu_16424_p1.read().is_01() || !tmp558_cast_fu_16440_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp555_cast_fu_16424_p1.read()) + sc_bigint<19>(tmp558_cast_fu_16440_p1.read()));
}

void mmult_hw::thread_tmp119_fu_16456_p2() {
    tmp119_fu_16456_p2 = (!tmp563_cast_fu_16450_p1.read().is_01() || !tmp564_cast_fu_16453_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp563_cast_fu_16450_p1.read()) + sc_bigint<18>(tmp564_cast_fu_16453_p1.read()));
}

void mmult_hw::thread_tmp122_fu_16472_p2() {
    tmp122_fu_16472_p2 = (!tmp566_cast_fu_16466_p1.read().is_01() || !tmp567_cast_fu_16469_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp566_cast_fu_16466_p1.read()) + sc_bigint<18>(tmp567_cast_fu_16469_p1.read()));
}

void mmult_hw::thread_tmp123_fu_16482_p2() {
    tmp123_fu_16482_p2 = (!tmp562_cast_fu_16462_p1.read().is_01() || !tmp565_cast_fu_16478_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp562_cast_fu_16462_p1.read()) + sc_bigint<19>(tmp565_cast_fu_16478_p1.read()));
}

void mmult_hw::thread_tmp124_fu_17225_p2() {
    tmp124_fu_17225_p2 = (!tmp554_cast_fu_17219_p1.read().is_01() || !tmp561_cast_fu_17222_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp554_cast_fu_17219_p1.read()) + sc_bigint<20>(tmp561_cast_fu_17222_p1.read()));
}

void mmult_hw::thread_tmp125_fu_17235_p2() {
    tmp125_fu_17235_p2 = (!tmp538_cast_fu_17215_p1.read().is_01() || !tmp553_cast_fu_17231_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp538_cast_fu_17215_p1.read()) + sc_bigint<21>(tmp553_cast_fu_17231_p1.read()));
}

void mmult_hw::thread_tmp126_fu_17399_p2() {
    tmp126_fu_17399_p2 = (!tmp506_cast_fu_17393_p1.read().is_01() || !tmp537_cast_fu_17396_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(tmp506_cast_fu_17393_p1.read()) + sc_bigint<22>(tmp537_cast_fu_17396_p1.read()));
}

void mmult_hw::thread_tmp127_fu_17409_p2() {
    tmp127_fu_17409_p2 = (!tmp63_reg_28411.read().is_01() || !tmp505_cast_fu_17405_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp63_reg_28411.read()) + sc_bigint<32>(tmp505_cast_fu_17405_p1.read()));
}

void mmult_hw::thread_tmp130_fu_16494_p2() {
    tmp130_fu_16494_p2 = (!tmp574_cast_fu_16488_p1.read().is_01() || !tmp575_cast_fu_16491_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp574_cast_fu_16488_p1.read()) + sc_bigint<18>(tmp575_cast_fu_16491_p1.read()));
}

void mmult_hw::thread_tmp133_fu_16510_p2() {
    tmp133_fu_16510_p2 = (!tmp577_cast_fu_16504_p1.read().is_01() || !tmp578_cast_fu_16507_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp577_cast_fu_16504_p1.read()) + sc_bigint<18>(tmp578_cast_fu_16507_p1.read()));
}

void mmult_hw::thread_tmp134_fu_16520_p2() {
    tmp134_fu_16520_p2 = (!tmp573_cast_fu_16500_p1.read().is_01() || !tmp576_cast_fu_16516_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp573_cast_fu_16500_p1.read()) + sc_bigint<19>(tmp576_cast_fu_16516_p1.read()));
}

void mmult_hw::thread_tmp137_fu_16532_p2() {
    tmp137_fu_16532_p2 = (!tmp581_cast_fu_16526_p1.read().is_01() || !tmp582_cast_fu_16529_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp581_cast_fu_16526_p1.read()) + sc_bigint<18>(tmp582_cast_fu_16529_p1.read()));
}

void mmult_hw::thread_tmp13_fu_15930_p2() {
    tmp13_fu_15930_p2 = (!tmp457_cast_fu_15924_p1.read().is_01() || !tmp458_cast_fu_15927_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp457_cast_fu_15924_p1.read()) + sc_bigint<18>(tmp458_cast_fu_15927_p1.read()));
}

void mmult_hw::thread_tmp140_fu_16548_p2() {
    tmp140_fu_16548_p2 = (!tmp584_cast_fu_16542_p1.read().is_01() || !tmp585_cast_fu_16545_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp584_cast_fu_16542_p1.read()) + sc_bigint<18>(tmp585_cast_fu_16545_p1.read()));
}

void mmult_hw::thread_tmp141_fu_16558_p2() {
    tmp141_fu_16558_p2 = (!tmp580_cast_fu_16538_p1.read().is_01() || !tmp583_cast_fu_16554_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp580_cast_fu_16538_p1.read()) + sc_bigint<19>(tmp583_cast_fu_16554_p1.read()));
}

void mmult_hw::thread_tmp142_fu_17247_p2() {
    tmp142_fu_17247_p2 = (!tmp572_cast_fu_17241_p1.read().is_01() || !tmp579_cast_fu_17244_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp572_cast_fu_17241_p1.read()) + sc_bigint<20>(tmp579_cast_fu_17244_p1.read()));
}

void mmult_hw::thread_tmp145_fu_16570_p2() {
    tmp145_fu_16570_p2 = (!tmp589_cast_fu_16564_p1.read().is_01() || !tmp590_cast_fu_16567_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp589_cast_fu_16564_p1.read()) + sc_bigint<18>(tmp590_cast_fu_16567_p1.read()));
}

void mmult_hw::thread_tmp148_fu_16586_p2() {
    tmp148_fu_16586_p2 = (!tmp592_cast_fu_16580_p1.read().is_01() || !tmp593_cast_fu_16583_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp592_cast_fu_16580_p1.read()) + sc_bigint<18>(tmp593_cast_fu_16583_p1.read()));
}

void mmult_hw::thread_tmp149_fu_16596_p2() {
    tmp149_fu_16596_p2 = (!tmp588_cast_fu_16576_p1.read().is_01() || !tmp591_cast_fu_16592_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp588_cast_fu_16576_p1.read()) + sc_bigint<19>(tmp591_cast_fu_16592_p1.read()));
}

void mmult_hw::thread_tmp14_fu_15940_p2() {
    tmp14_fu_15940_p2 = (!tmp453_cast_fu_15920_p1.read().is_01() || !tmp456_cast_fu_15936_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp453_cast_fu_15920_p1.read()) + sc_bigint<19>(tmp456_cast_fu_15936_p1.read()));
}

void mmult_hw::thread_tmp152_fu_16608_p2() {
    tmp152_fu_16608_p2 = (!tmp596_cast_fu_16602_p1.read().is_01() || !tmp597_cast_fu_16605_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp596_cast_fu_16602_p1.read()) + sc_bigint<18>(tmp597_cast_fu_16605_p1.read()));
}

void mmult_hw::thread_tmp155_fu_16624_p2() {
    tmp155_fu_16624_p2 = (!tmp599_cast_fu_16618_p1.read().is_01() || !tmp600_cast_fu_16621_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp599_cast_fu_16618_p1.read()) + sc_bigint<18>(tmp600_cast_fu_16621_p1.read()));
}

void mmult_hw::thread_tmp156_fu_16634_p2() {
    tmp156_fu_16634_p2 = (!tmp595_cast_fu_16614_p1.read().is_01() || !tmp598_cast_fu_16630_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp595_cast_fu_16614_p1.read()) + sc_bigint<19>(tmp598_cast_fu_16630_p1.read()));
}

void mmult_hw::thread_tmp157_fu_17263_p2() {
    tmp157_fu_17263_p2 = (!tmp587_cast_fu_17257_p1.read().is_01() || !tmp594_cast_fu_17260_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp587_cast_fu_17257_p1.read()) + sc_bigint<20>(tmp594_cast_fu_17260_p1.read()));
}

void mmult_hw::thread_tmp158_fu_17273_p2() {
    tmp158_fu_17273_p2 = (!tmp571_cast_fu_17253_p1.read().is_01() || !tmp586_cast_fu_17269_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp571_cast_fu_17253_p1.read()) + sc_bigint<21>(tmp586_cast_fu_17269_p1.read()));
}

void mmult_hw::thread_tmp15_fu_15950_p2() {
    tmp15_fu_15950_p2 = (!tmp7_fu_15902_p2.read().is_01() || !tmp452_cast_fu_15946_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp7_fu_15902_p2.read()) + sc_bigint<32>(tmp452_cast_fu_15946_p1.read()));
}

void mmult_hw::thread_tmp161_fu_16646_p2() {
    tmp161_fu_16646_p2 = (!tmp605_cast_fu_16640_p1.read().is_01() || !tmp606_cast_fu_16643_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp605_cast_fu_16640_p1.read()) + sc_bigint<18>(tmp606_cast_fu_16643_p1.read()));
}

void mmult_hw::thread_tmp164_fu_16662_p2() {
    tmp164_fu_16662_p2 = (!tmp608_cast_fu_16656_p1.read().is_01() || !tmp609_cast_fu_16659_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp608_cast_fu_16656_p1.read()) + sc_bigint<18>(tmp609_cast_fu_16659_p1.read()));
}

void mmult_hw::thread_tmp165_fu_16672_p2() {
    tmp165_fu_16672_p2 = (!tmp604_cast_fu_16652_p1.read().is_01() || !tmp607_cast_fu_16668_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp604_cast_fu_16652_p1.read()) + sc_bigint<19>(tmp607_cast_fu_16668_p1.read()));
}

void mmult_hw::thread_tmp168_fu_16684_p2() {
    tmp168_fu_16684_p2 = (!tmp612_cast_fu_16678_p1.read().is_01() || !tmp613_cast_fu_16681_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp612_cast_fu_16678_p1.read()) + sc_bigint<18>(tmp613_cast_fu_16681_p1.read()));
}

void mmult_hw::thread_tmp171_fu_16700_p2() {
    tmp171_fu_16700_p2 = (!tmp615_cast_fu_16694_p1.read().is_01() || !tmp616_cast_fu_16697_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp615_cast_fu_16694_p1.read()) + sc_bigint<18>(tmp616_cast_fu_16697_p1.read()));
}

void mmult_hw::thread_tmp172_fu_16710_p2() {
    tmp172_fu_16710_p2 = (!tmp611_cast_fu_16690_p1.read().is_01() || !tmp614_cast_fu_16706_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp611_cast_fu_16690_p1.read()) + sc_bigint<19>(tmp614_cast_fu_16706_p1.read()));
}

void mmult_hw::thread_tmp173_fu_17285_p2() {
    tmp173_fu_17285_p2 = (!tmp603_cast_fu_17279_p1.read().is_01() || !tmp610_cast_fu_17282_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp603_cast_fu_17279_p1.read()) + sc_bigint<20>(tmp610_cast_fu_17282_p1.read()));
}

void mmult_hw::thread_tmp176_fu_16722_p2() {
    tmp176_fu_16722_p2 = (!tmp620_cast_fu_16716_p1.read().is_01() || !tmp621_cast_fu_16719_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp620_cast_fu_16716_p1.read()) + sc_bigint<18>(tmp621_cast_fu_16719_p1.read()));
}

void mmult_hw::thread_tmp179_fu_16738_p2() {
    tmp179_fu_16738_p2 = (!tmp623_cast_fu_16732_p1.read().is_01() || !tmp624_cast_fu_16735_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp623_cast_fu_16732_p1.read()) + sc_bigint<18>(tmp624_cast_fu_16735_p1.read()));
}

void mmult_hw::thread_tmp180_fu_16748_p2() {
    tmp180_fu_16748_p2 = (!tmp619_cast_fu_16728_p1.read().is_01() || !tmp622_cast_fu_16744_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp619_cast_fu_16728_p1.read()) + sc_bigint<19>(tmp622_cast_fu_16744_p1.read()));
}

void mmult_hw::thread_tmp183_fu_16760_p2() {
    tmp183_fu_16760_p2 = (!tmp627_cast_fu_16754_p1.read().is_01() || !tmp628_cast_fu_16757_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp627_cast_fu_16754_p1.read()) + sc_bigint<18>(tmp628_cast_fu_16757_p1.read()));
}

void mmult_hw::thread_tmp186_fu_16776_p2() {
    tmp186_fu_16776_p2 = (!tmp630_cast_fu_16770_p1.read().is_01() || !tmp631_cast_fu_16773_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp630_cast_fu_16770_p1.read()) + sc_bigint<18>(tmp631_cast_fu_16773_p1.read()));
}

void mmult_hw::thread_tmp187_fu_16786_p2() {
    tmp187_fu_16786_p2 = (!tmp626_cast_fu_16766_p1.read().is_01() || !tmp629_cast_fu_16782_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp626_cast_fu_16766_p1.read()) + sc_bigint<19>(tmp629_cast_fu_16782_p1.read()));
}

void mmult_hw::thread_tmp188_fu_17301_p2() {
    tmp188_fu_17301_p2 = (!tmp618_cast_fu_17295_p1.read().is_01() || !tmp625_cast_fu_17298_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp618_cast_fu_17295_p1.read()) + sc_bigint<20>(tmp625_cast_fu_17298_p1.read()));
}

void mmult_hw::thread_tmp189_fu_17311_p2() {
    tmp189_fu_17311_p2 = (!tmp602_cast_fu_17291_p1.read().is_01() || !tmp617_cast_fu_17307_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp602_cast_fu_17291_p1.read()) + sc_bigint<21>(tmp617_cast_fu_17307_p1.read()));
}

void mmult_hw::thread_tmp18_fu_15962_p2() {
    tmp18_fu_15962_p2 = (!tmp462_cast_fu_15956_p1.read().is_01() || !tmp463_cast_fu_15959_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp462_cast_fu_15956_p1.read()) + sc_bigint<18>(tmp463_cast_fu_15959_p1.read()));
}

void mmult_hw::thread_tmp190_fu_17420_p2() {
    tmp190_fu_17420_p2 = (!tmp570_cast_fu_17414_p1.read().is_01() || !tmp601_cast_fu_17417_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(tmp570_cast_fu_17414_p1.read()) + sc_bigint<22>(tmp601_cast_fu_17417_p1.read()));
}

void mmult_hw::thread_tmp193_fu_16798_p2() {
    tmp193_fu_16798_p2 = (!tmp637_cast_fu_16792_p1.read().is_01() || !tmp638_cast_fu_16795_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp637_cast_fu_16792_p1.read()) + sc_bigint<18>(tmp638_cast_fu_16795_p1.read()));
}

void mmult_hw::thread_tmp196_fu_16814_p2() {
    tmp196_fu_16814_p2 = (!tmp640_cast_fu_16808_p1.read().is_01() || !tmp641_cast_fu_16811_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp640_cast_fu_16808_p1.read()) + sc_bigint<18>(tmp641_cast_fu_16811_p1.read()));
}

void mmult_hw::thread_tmp197_fu_16824_p2() {
    tmp197_fu_16824_p2 = (!tmp636_cast_fu_16804_p1.read().is_01() || !tmp639_cast_fu_16820_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp636_cast_fu_16804_p1.read()) + sc_bigint<19>(tmp639_cast_fu_16820_p1.read()));
}

void mmult_hw::thread_tmp200_fu_16836_p2() {
    tmp200_fu_16836_p2 = (!tmp644_cast_fu_16830_p1.read().is_01() || !tmp645_cast_fu_16833_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp644_cast_fu_16830_p1.read()) + sc_bigint<18>(tmp645_cast_fu_16833_p1.read()));
}

void mmult_hw::thread_tmp203_fu_16852_p2() {
    tmp203_fu_16852_p2 = (!tmp647_cast_fu_16846_p1.read().is_01() || !tmp648_cast_fu_16849_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp647_cast_fu_16846_p1.read()) + sc_bigint<18>(tmp648_cast_fu_16849_p1.read()));
}

void mmult_hw::thread_tmp204_fu_16862_p2() {
    tmp204_fu_16862_p2 = (!tmp643_cast_fu_16842_p1.read().is_01() || !tmp646_cast_fu_16858_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp643_cast_fu_16842_p1.read()) + sc_bigint<19>(tmp646_cast_fu_16858_p1.read()));
}

void mmult_hw::thread_tmp205_fu_17323_p2() {
    tmp205_fu_17323_p2 = (!tmp635_cast_fu_17317_p1.read().is_01() || !tmp642_cast_fu_17320_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp635_cast_fu_17317_p1.read()) + sc_bigint<20>(tmp642_cast_fu_17320_p1.read()));
}

void mmult_hw::thread_tmp208_fu_16874_p2() {
    tmp208_fu_16874_p2 = (!tmp652_cast_fu_16868_p1.read().is_01() || !tmp653_cast_fu_16871_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp652_cast_fu_16868_p1.read()) + sc_bigint<18>(tmp653_cast_fu_16871_p1.read()));
}

void mmult_hw::thread_tmp211_fu_16890_p2() {
    tmp211_fu_16890_p2 = (!tmp655_cast_fu_16884_p1.read().is_01() || !tmp656_cast_fu_16887_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp655_cast_fu_16884_p1.read()) + sc_bigint<18>(tmp656_cast_fu_16887_p1.read()));
}

void mmult_hw::thread_tmp212_fu_16900_p2() {
    tmp212_fu_16900_p2 = (!tmp651_cast_fu_16880_p1.read().is_01() || !tmp654_cast_fu_16896_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp651_cast_fu_16880_p1.read()) + sc_bigint<19>(tmp654_cast_fu_16896_p1.read()));
}

void mmult_hw::thread_tmp215_fu_16912_p2() {
    tmp215_fu_16912_p2 = (!tmp659_cast_fu_16906_p1.read().is_01() || !tmp660_cast_fu_16909_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp659_cast_fu_16906_p1.read()) + sc_bigint<18>(tmp660_cast_fu_16909_p1.read()));
}

void mmult_hw::thread_tmp218_fu_16928_p2() {
    tmp218_fu_16928_p2 = (!tmp662_cast_fu_16922_p1.read().is_01() || !tmp663_cast_fu_16925_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp662_cast_fu_16922_p1.read()) + sc_bigint<18>(tmp663_cast_fu_16925_p1.read()));
}

void mmult_hw::thread_tmp219_fu_16938_p2() {
    tmp219_fu_16938_p2 = (!tmp658_cast_fu_16918_p1.read().is_01() || !tmp661_cast_fu_16934_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp658_cast_fu_16918_p1.read()) + sc_bigint<19>(tmp661_cast_fu_16934_p1.read()));
}

void mmult_hw::thread_tmp21_fu_15978_p2() {
    tmp21_fu_15978_p2 = (!tmp465_cast_fu_15972_p1.read().is_01() || !tmp466_cast_fu_15975_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp465_cast_fu_15972_p1.read()) + sc_bigint<18>(tmp466_cast_fu_15975_p1.read()));
}

void mmult_hw::thread_tmp220_fu_17339_p2() {
    tmp220_fu_17339_p2 = (!tmp650_cast_fu_17333_p1.read().is_01() || !tmp657_cast_fu_17336_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp650_cast_fu_17333_p1.read()) + sc_bigint<20>(tmp657_cast_fu_17336_p1.read()));
}

void mmult_hw::thread_tmp221_fu_17349_p2() {
    tmp221_fu_17349_p2 = (!tmp634_cast_fu_17329_p1.read().is_01() || !tmp649_cast_fu_17345_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp634_cast_fu_17329_p1.read()) + sc_bigint<21>(tmp649_cast_fu_17345_p1.read()));
}

void mmult_hw::thread_tmp224_fu_16950_p2() {
    tmp224_fu_16950_p2 = (!tmp668_cast_fu_16944_p1.read().is_01() || !tmp669_cast_fu_16947_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp668_cast_fu_16944_p1.read()) + sc_bigint<18>(tmp669_cast_fu_16947_p1.read()));
}

void mmult_hw::thread_tmp227_fu_16966_p2() {
    tmp227_fu_16966_p2 = (!tmp671_cast_fu_16960_p1.read().is_01() || !tmp672_cast_fu_16963_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp671_cast_fu_16960_p1.read()) + sc_bigint<18>(tmp672_cast_fu_16963_p1.read()));
}

void mmult_hw::thread_tmp228_fu_16976_p2() {
    tmp228_fu_16976_p2 = (!tmp667_cast_fu_16956_p1.read().is_01() || !tmp670_cast_fu_16972_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp667_cast_fu_16956_p1.read()) + sc_bigint<19>(tmp670_cast_fu_16972_p1.read()));
}

void mmult_hw::thread_tmp22_fu_15988_p2() {
    tmp22_fu_15988_p2 = (!tmp461_cast_fu_15968_p1.read().is_01() || !tmp464_cast_fu_15984_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp461_cast_fu_15968_p1.read()) + sc_bigint<19>(tmp464_cast_fu_15984_p1.read()));
}

void mmult_hw::thread_tmp231_fu_16988_p2() {
    tmp231_fu_16988_p2 = (!tmp675_cast_fu_16982_p1.read().is_01() || !tmp676_cast_fu_16985_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp675_cast_fu_16982_p1.read()) + sc_bigint<18>(tmp676_cast_fu_16985_p1.read()));
}

void mmult_hw::thread_tmp234_fu_17004_p2() {
    tmp234_fu_17004_p2 = (!tmp678_cast_fu_16998_p1.read().is_01() || !tmp679_cast_fu_17001_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp678_cast_fu_16998_p1.read()) + sc_bigint<18>(tmp679_cast_fu_17001_p1.read()));
}

void mmult_hw::thread_tmp235_fu_17014_p2() {
    tmp235_fu_17014_p2 = (!tmp674_cast_fu_16994_p1.read().is_01() || !tmp677_cast_fu_17010_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp674_cast_fu_16994_p1.read()) + sc_bigint<19>(tmp677_cast_fu_17010_p1.read()));
}

void mmult_hw::thread_tmp236_fu_17361_p2() {
    tmp236_fu_17361_p2 = (!tmp666_cast_fu_17355_p1.read().is_01() || !tmp673_cast_fu_17358_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp666_cast_fu_17355_p1.read()) + sc_bigint<20>(tmp673_cast_fu_17358_p1.read()));
}

void mmult_hw::thread_tmp239_fu_17026_p2() {
    tmp239_fu_17026_p2 = (!tmp683_cast_fu_17020_p1.read().is_01() || !tmp684_cast_fu_17023_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp683_cast_fu_17020_p1.read()) + sc_bigint<18>(tmp684_cast_fu_17023_p1.read()));
}

void mmult_hw::thread_tmp242_fu_17042_p2() {
    tmp242_fu_17042_p2 = (!tmp686_cast_fu_17036_p1.read().is_01() || !tmp687_cast_fu_17039_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp686_cast_fu_17036_p1.read()) + sc_bigint<18>(tmp687_cast_fu_17039_p1.read()));
}

void mmult_hw::thread_tmp243_fu_17052_p2() {
    tmp243_fu_17052_p2 = (!tmp682_cast_fu_17032_p1.read().is_01() || !tmp685_cast_fu_17048_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp682_cast_fu_17032_p1.read()) + sc_bigint<19>(tmp685_cast_fu_17048_p1.read()));
}

void mmult_hw::thread_tmp246_fu_17064_p2() {
    tmp246_fu_17064_p2 = (!tmp690_cast_fu_17058_p1.read().is_01() || !tmp691_cast_fu_17061_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp690_cast_fu_17058_p1.read()) + sc_bigint<18>(tmp691_cast_fu_17061_p1.read()));
}

void mmult_hw::thread_tmp250_fu_17080_p2() {
    tmp250_fu_17080_p2 = (!tmp693_cast_fu_17074_p1.read().is_01() || !tmp694_cast_fu_17077_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp693_cast_fu_17074_p1.read()) + sc_bigint<19>(tmp694_cast_fu_17077_p1.read()));
}

void mmult_hw::thread_tmp251_fu_17090_p2() {
    tmp251_fu_17090_p2 = (!tmp689_cast_fu_17070_p1.read().is_01() || !tmp692_cast_fu_17086_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp689_cast_fu_17070_p1.read()) + sc_bigint<20>(tmp692_cast_fu_17086_p1.read()));
}

void mmult_hw::thread_tmp252_fu_17377_p2() {
    tmp252_fu_17377_p2 = (!tmp681_cast_fu_17371_p1.read().is_01() || !tmp688_cast_fu_17374_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp681_cast_fu_17371_p1.read()) + sc_bigint<21>(tmp688_cast_fu_17374_p1.read()));
}

void mmult_hw::thread_tmp253_fu_17387_p2() {
    tmp253_fu_17387_p2 = (!tmp665_cast_fu_17367_p1.read().is_01() || !tmp680_cast_fu_17383_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(tmp665_cast_fu_17367_p1.read()) + sc_bigint<22>(tmp680_cast_fu_17383_p1.read()));
}

void mmult_hw::thread_tmp254_fu_17436_p2() {
    tmp254_fu_17436_p2 = (!tmp633_cast_fu_17430_p1.read().is_01() || !tmp664_cast_fu_17433_p1.read().is_01())? sc_lv<23>(): (sc_bigint<23>(tmp633_cast_fu_17430_p1.read()) + sc_bigint<23>(tmp664_cast_fu_17433_p1.read()));
}

void mmult_hw::thread_tmp255_fu_17446_p2() {
    tmp255_fu_17446_p2 = (!tmp569_cast_fu_17426_p1.read().is_01() || !tmp632_cast_fu_17442_p1.read().is_01())? sc_lv<24>(): (sc_bigint<24>(tmp569_cast_fu_17426_p1.read()) + sc_bigint<24>(tmp632_cast_fu_17442_p1.read()));
}

void mmult_hw::thread_tmp25_fu_16000_p2() {
    tmp25_fu_16000_p2 = (!tmp469_cast_fu_15994_p1.read().is_01() || !tmp470_cast_fu_15997_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp469_cast_fu_15994_p1.read()) + sc_bigint<18>(tmp470_cast_fu_15997_p1.read()));
}

void mmult_hw::thread_tmp28_fu_16016_p2() {
    tmp28_fu_16016_p2 = (!tmp472_cast_fu_16010_p1.read().is_01() || !tmp473_cast_fu_16013_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp472_cast_fu_16010_p1.read()) + sc_bigint<18>(tmp473_cast_fu_16013_p1.read()));
}

void mmult_hw::thread_tmp29_fu_16026_p2() {
    tmp29_fu_16026_p2 = (!tmp468_cast_fu_16006_p1.read().is_01() || !tmp471_cast_fu_16022_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp468_cast_fu_16006_p1.read()) + sc_bigint<19>(tmp471_cast_fu_16022_p1.read()));
}

void mmult_hw::thread_tmp30_fu_17102_p2() {
    tmp30_fu_17102_p2 = (!tmp460_cast_fu_17096_p1.read().is_01() || !tmp467_cast_fu_17099_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp460_cast_fu_17096_p1.read()) + sc_bigint<20>(tmp467_cast_fu_17099_p1.read()));
}

void mmult_hw::thread_tmp31_fu_17112_p2() {
    tmp31_fu_17112_p2 = (!tmp15_reg_28256.read().is_01() || !tmp459_cast_fu_17108_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp15_reg_28256.read()) + sc_bigint<32>(tmp459_cast_fu_17108_p1.read()));
}

void mmult_hw::thread_tmp34_fu_16038_p2() {
    tmp34_fu_16038_p2 = (!tmp478_cast_fu_16032_p1.read().is_01() || !tmp479_cast_fu_16035_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp478_cast_fu_16032_p1.read()) + sc_bigint<18>(tmp479_cast_fu_16035_p1.read()));
}

void mmult_hw::thread_tmp37_fu_16054_p2() {
    tmp37_fu_16054_p2 = (!tmp481_cast_fu_16048_p1.read().is_01() || !tmp482_cast_fu_16051_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp481_cast_fu_16048_p1.read()) + sc_bigint<18>(tmp482_cast_fu_16051_p1.read()));
}

void mmult_hw::thread_tmp38_fu_16064_p2() {
    tmp38_fu_16064_p2 = (!tmp477_cast_fu_16044_p1.read().is_01() || !tmp480_cast_fu_16060_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp477_cast_fu_16044_p1.read()) + sc_bigint<19>(tmp480_cast_fu_16060_p1.read()));
}

void mmult_hw::thread_tmp3_fu_15881_p2() {
    tmp3_fu_15881_p2 = (!tmp1_reg_27616.read().is_01() || !tmp448_cast_fu_15878_p1.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp1_reg_27616.read()) + sc_bigint<32>(tmp448_cast_fu_15878_p1.read()));
}

void mmult_hw::thread_tmp41_fu_16076_p2() {
    tmp41_fu_16076_p2 = (!tmp485_cast_fu_16070_p1.read().is_01() || !tmp486_cast_fu_16073_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp485_cast_fu_16070_p1.read()) + sc_bigint<18>(tmp486_cast_fu_16073_p1.read()));
}

void mmult_hw::thread_tmp448_cast_fu_15878_p1() {
    tmp448_cast_fu_15878_p1 = esl_sext<32,17>(tmp2_reg_27621.read());
}

void mmult_hw::thread_tmp449_cast_fu_15898_p1() {
    tmp449_cast_fu_15898_p1 = esl_sext<32,18>(tmp6_fu_15892_p2.read());
}

void mmult_hw::thread_tmp44_fu_16092_p2() {
    tmp44_fu_16092_p2 = (!tmp488_cast_fu_16086_p1.read().is_01() || !tmp489_cast_fu_16089_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp488_cast_fu_16086_p1.read()) + sc_bigint<18>(tmp489_cast_fu_16089_p1.read()));
}

void mmult_hw::thread_tmp450_cast_fu_15886_p1() {
    tmp450_cast_fu_15886_p1 = esl_sext<18,17>(tmp4_reg_27626.read());
}

void mmult_hw::thread_tmp451_cast_fu_15889_p1() {
    tmp451_cast_fu_15889_p1 = esl_sext<18,17>(tmp5_reg_27631.read());
}

void mmult_hw::thread_tmp452_cast_fu_15946_p1() {
    tmp452_cast_fu_15946_p1 = esl_sext<32,19>(tmp14_fu_15940_p2.read());
}

void mmult_hw::thread_tmp453_cast_fu_15920_p1() {
    tmp453_cast_fu_15920_p1 = esl_sext<19,18>(tmp10_fu_15914_p2.read());
}

void mmult_hw::thread_tmp454_cast_fu_15908_p1() {
    tmp454_cast_fu_15908_p1 = esl_sext<18,17>(tmp8_reg_27636.read());
}

void mmult_hw::thread_tmp455_cast_fu_15911_p1() {
    tmp455_cast_fu_15911_p1 = esl_sext<18,17>(tmp9_reg_27641.read());
}

void mmult_hw::thread_tmp456_cast_fu_15936_p1() {
    tmp456_cast_fu_15936_p1 = esl_sext<19,18>(tmp13_fu_15930_p2.read());
}

void mmult_hw::thread_tmp457_cast_fu_15924_p1() {
    tmp457_cast_fu_15924_p1 = esl_sext<18,17>(tmp11_reg_27646.read());
}

void mmult_hw::thread_tmp458_cast_fu_15927_p1() {
    tmp458_cast_fu_15927_p1 = esl_sext<18,17>(tmp12_reg_27651.read());
}

void mmult_hw::thread_tmp459_cast_fu_17108_p1() {
    tmp459_cast_fu_17108_p1 = esl_sext<32,20>(tmp30_fu_17102_p2.read());
}

void mmult_hw::thread_tmp45_fu_16102_p2() {
    tmp45_fu_16102_p2 = (!tmp484_cast_fu_16082_p1.read().is_01() || !tmp487_cast_fu_16098_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp484_cast_fu_16082_p1.read()) + sc_bigint<19>(tmp487_cast_fu_16098_p1.read()));
}

void mmult_hw::thread_tmp460_cast_fu_17096_p1() {
    tmp460_cast_fu_17096_p1 = esl_sext<20,19>(tmp22_reg_28261.read());
}

void mmult_hw::thread_tmp461_cast_fu_15968_p1() {
    tmp461_cast_fu_15968_p1 = esl_sext<19,18>(tmp18_fu_15962_p2.read());
}

void mmult_hw::thread_tmp462_cast_fu_15956_p1() {
    tmp462_cast_fu_15956_p1 = esl_sext<18,17>(tmp16_reg_27656.read());
}

void mmult_hw::thread_tmp463_cast_fu_15959_p1() {
    tmp463_cast_fu_15959_p1 = esl_sext<18,17>(tmp17_reg_27661.read());
}

void mmult_hw::thread_tmp464_cast_fu_15984_p1() {
    tmp464_cast_fu_15984_p1 = esl_sext<19,18>(tmp21_fu_15978_p2.read());
}

void mmult_hw::thread_tmp465_cast_fu_15972_p1() {
    tmp465_cast_fu_15972_p1 = esl_sext<18,17>(tmp19_reg_27666.read());
}

void mmult_hw::thread_tmp466_cast_fu_15975_p1() {
    tmp466_cast_fu_15975_p1 = esl_sext<18,17>(tmp20_reg_27671.read());
}

void mmult_hw::thread_tmp467_cast_fu_17099_p1() {
    tmp467_cast_fu_17099_p1 = esl_sext<20,19>(tmp29_reg_28266.read());
}

void mmult_hw::thread_tmp468_cast_fu_16006_p1() {
    tmp468_cast_fu_16006_p1 = esl_sext<19,18>(tmp25_fu_16000_p2.read());
}

void mmult_hw::thread_tmp469_cast_fu_15994_p1() {
    tmp469_cast_fu_15994_p1 = esl_sext<18,17>(tmp23_reg_27676.read());
}

void mmult_hw::thread_tmp46_fu_17123_p2() {
    tmp46_fu_17123_p2 = (!tmp476_cast_fu_17117_p1.read().is_01() || !tmp483_cast_fu_17120_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp476_cast_fu_17117_p1.read()) + sc_bigint<20>(tmp483_cast_fu_17120_p1.read()));
}

void mmult_hw::thread_tmp470_cast_fu_15997_p1() {
    tmp470_cast_fu_15997_p1 = esl_sext<18,17>(tmp24_reg_27681.read());
}

void mmult_hw::thread_tmp471_cast_fu_16022_p1() {
    tmp471_cast_fu_16022_p1 = esl_sext<19,18>(tmp28_fu_16016_p2.read());
}

void mmult_hw::thread_tmp472_cast_fu_16010_p1() {
    tmp472_cast_fu_16010_p1 = esl_sext<18,17>(tmp26_reg_27686.read());
}

void mmult_hw::thread_tmp473_cast_fu_16013_p1() {
    tmp473_cast_fu_16013_p1 = esl_sext<18,17>(tmp27_reg_27691.read());
}

void mmult_hw::thread_tmp474_cast_fu_17155_p1() {
    tmp474_cast_fu_17155_p1 = esl_sext<32,21>(tmp62_fu_17149_p2.read());
}

void mmult_hw::thread_tmp475_cast_fu_17129_p1() {
    tmp475_cast_fu_17129_p1 = esl_sext<21,20>(tmp46_fu_17123_p2.read());
}

void mmult_hw::thread_tmp476_cast_fu_17117_p1() {
    tmp476_cast_fu_17117_p1 = esl_sext<20,19>(tmp38_reg_28271.read());
}

void mmult_hw::thread_tmp477_cast_fu_16044_p1() {
    tmp477_cast_fu_16044_p1 = esl_sext<19,18>(tmp34_fu_16038_p2.read());
}

void mmult_hw::thread_tmp478_cast_fu_16032_p1() {
    tmp478_cast_fu_16032_p1 = esl_sext<18,17>(tmp32_reg_27696.read());
}

void mmult_hw::thread_tmp479_cast_fu_16035_p1() {
    tmp479_cast_fu_16035_p1 = esl_sext<18,17>(tmp33_reg_27701.read());
}

void mmult_hw::thread_tmp480_cast_fu_16060_p1() {
    tmp480_cast_fu_16060_p1 = esl_sext<19,18>(tmp37_fu_16054_p2.read());
}

void mmult_hw::thread_tmp481_cast_fu_16048_p1() {
    tmp481_cast_fu_16048_p1 = esl_sext<18,17>(tmp35_reg_27706.read());
}

void mmult_hw::thread_tmp482_cast_fu_16051_p1() {
    tmp482_cast_fu_16051_p1 = esl_sext<18,17>(tmp36_reg_27711.read());
}

void mmult_hw::thread_tmp483_cast_fu_17120_p1() {
    tmp483_cast_fu_17120_p1 = esl_sext<20,19>(tmp45_reg_28276.read());
}

void mmult_hw::thread_tmp484_cast_fu_16082_p1() {
    tmp484_cast_fu_16082_p1 = esl_sext<19,18>(tmp41_fu_16076_p2.read());
}

void mmult_hw::thread_tmp485_cast_fu_16070_p1() {
    tmp485_cast_fu_16070_p1 = esl_sext<18,17>(tmp39_reg_27716.read());
}

void mmult_hw::thread_tmp486_cast_fu_16073_p1() {
    tmp486_cast_fu_16073_p1 = esl_sext<18,17>(tmp40_reg_27721.read());
}

void mmult_hw::thread_tmp487_cast_fu_16098_p1() {
    tmp487_cast_fu_16098_p1 = esl_sext<19,18>(tmp44_fu_16092_p2.read());
}

void mmult_hw::thread_tmp488_cast_fu_16086_p1() {
    tmp488_cast_fu_16086_p1 = esl_sext<18,17>(tmp42_reg_27726.read());
}

void mmult_hw::thread_tmp489_cast_fu_16089_p1() {
    tmp489_cast_fu_16089_p1 = esl_sext<18,17>(tmp43_reg_27731.read());
}

void mmult_hw::thread_tmp490_cast_fu_17145_p1() {
    tmp490_cast_fu_17145_p1 = esl_sext<21,20>(tmp61_fu_17139_p2.read());
}

void mmult_hw::thread_tmp491_cast_fu_17133_p1() {
    tmp491_cast_fu_17133_p1 = esl_sext<20,19>(tmp53_reg_28281.read());
}

void mmult_hw::thread_tmp492_cast_fu_16120_p1() {
    tmp492_cast_fu_16120_p1 = esl_sext<19,18>(tmp49_fu_16114_p2.read());
}

void mmult_hw::thread_tmp493_cast_fu_16108_p1() {
    tmp493_cast_fu_16108_p1 = esl_sext<18,17>(tmp47_reg_27736.read());
}

void mmult_hw::thread_tmp494_cast_fu_16111_p1() {
    tmp494_cast_fu_16111_p1 = esl_sext<18,17>(tmp48_reg_27741.read());
}

void mmult_hw::thread_tmp495_cast_fu_16136_p1() {
    tmp495_cast_fu_16136_p1 = esl_sext<19,18>(tmp52_fu_16130_p2.read());
}

void mmult_hw::thread_tmp496_cast_fu_16124_p1() {
    tmp496_cast_fu_16124_p1 = esl_sext<18,17>(tmp50_reg_27746.read());
}

void mmult_hw::thread_tmp497_cast_fu_16127_p1() {
    tmp497_cast_fu_16127_p1 = esl_sext<18,17>(tmp51_reg_27751.read());
}

void mmult_hw::thread_tmp498_cast_fu_17136_p1() {
    tmp498_cast_fu_17136_p1 = esl_sext<20,19>(tmp60_reg_28286.read());
}

void mmult_hw::thread_tmp499_cast_fu_16158_p1() {
    tmp499_cast_fu_16158_p1 = esl_sext<19,18>(tmp56_fu_16152_p2.read());
}

void mmult_hw::thread_tmp49_fu_16114_p2() {
    tmp49_fu_16114_p2 = (!tmp493_cast_fu_16108_p1.read().is_01() || !tmp494_cast_fu_16111_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp493_cast_fu_16108_p1.read()) + sc_bigint<18>(tmp494_cast_fu_16111_p1.read()));
}

void mmult_hw::thread_tmp500_cast_fu_16146_p1() {
    tmp500_cast_fu_16146_p1 = esl_sext<18,17>(tmp54_reg_27756.read());
}

void mmult_hw::thread_tmp501_cast_fu_16149_p1() {
    tmp501_cast_fu_16149_p1 = esl_sext<18,17>(tmp55_reg_27761.read());
}

void mmult_hw::thread_tmp502_cast_fu_16174_p1() {
    tmp502_cast_fu_16174_p1 = esl_sext<19,18>(tmp59_fu_16168_p2.read());
}

void mmult_hw::thread_tmp503_cast_fu_16162_p1() {
    tmp503_cast_fu_16162_p1 = esl_sext<18,17>(tmp57_reg_27766.read());
}

void mmult_hw::thread_tmp504_cast_fu_16165_p1() {
    tmp504_cast_fu_16165_p1 = esl_sext<18,17>(tmp58_reg_27771.read());
}

void mmult_hw::thread_tmp505_cast_fu_17405_p1() {
    tmp505_cast_fu_17405_p1 = esl_sext<32,22>(tmp126_fu_17399_p2.read());
}

void mmult_hw::thread_tmp506_cast_fu_17393_p1() {
    tmp506_cast_fu_17393_p1 = esl_sext<22,21>(tmp94_reg_28416.read());
}

void mmult_hw::thread_tmp507_cast_fu_17177_p1() {
    tmp507_cast_fu_17177_p1 = esl_sext<21,20>(tmp78_fu_17171_p2.read());
}

void mmult_hw::thread_tmp508_cast_fu_17165_p1() {
    tmp508_cast_fu_17165_p1 = esl_sext<20,19>(tmp70_reg_28291.read());
}

void mmult_hw::thread_tmp509_cast_fu_16196_p1() {
    tmp509_cast_fu_16196_p1 = esl_sext<19,18>(tmp66_fu_16190_p2.read());
}

void mmult_hw::thread_tmp510_cast_fu_16184_p1() {
    tmp510_cast_fu_16184_p1 = esl_sext<18,17>(tmp64_reg_27776.read());
}

void mmult_hw::thread_tmp511_cast_fu_16187_p1() {
    tmp511_cast_fu_16187_p1 = esl_sext<18,17>(tmp65_reg_27781.read());
}

void mmult_hw::thread_tmp512_cast_fu_16212_p1() {
    tmp512_cast_fu_16212_p1 = esl_sext<19,18>(tmp69_fu_16206_p2.read());
}

void mmult_hw::thread_tmp513_cast_fu_16200_p1() {
    tmp513_cast_fu_16200_p1 = esl_sext<18,17>(tmp67_reg_27786.read());
}

void mmult_hw::thread_tmp514_cast_fu_16203_p1() {
    tmp514_cast_fu_16203_p1 = esl_sext<18,17>(tmp68_reg_27791.read());
}

void mmult_hw::thread_tmp515_cast_fu_17168_p1() {
    tmp515_cast_fu_17168_p1 = esl_sext<20,19>(tmp77_reg_28296.read());
}

void mmult_hw::thread_tmp516_cast_fu_16234_p1() {
    tmp516_cast_fu_16234_p1 = esl_sext<19,18>(tmp73_fu_16228_p2.read());
}

void mmult_hw::thread_tmp517_cast_fu_16222_p1() {
    tmp517_cast_fu_16222_p1 = esl_sext<18,17>(tmp71_reg_27796.read());
}

void mmult_hw::thread_tmp518_cast_fu_16225_p1() {
    tmp518_cast_fu_16225_p1 = esl_sext<18,17>(tmp72_reg_27801.read());
}

void mmult_hw::thread_tmp519_cast_fu_16250_p1() {
    tmp519_cast_fu_16250_p1 = esl_sext<19,18>(tmp76_fu_16244_p2.read());
}

void mmult_hw::thread_tmp520_cast_fu_16238_p1() {
    tmp520_cast_fu_16238_p1 = esl_sext<18,17>(tmp74_reg_27806.read());
}

void mmult_hw::thread_tmp521_cast_fu_16241_p1() {
    tmp521_cast_fu_16241_p1 = esl_sext<18,17>(tmp75_reg_27811.read());
}

void mmult_hw::thread_tmp522_cast_fu_17193_p1() {
    tmp522_cast_fu_17193_p1 = esl_sext<21,20>(tmp93_fu_17187_p2.read());
}

void mmult_hw::thread_tmp523_cast_fu_17181_p1() {
    tmp523_cast_fu_17181_p1 = esl_sext<20,19>(tmp85_reg_28301.read());
}

void mmult_hw::thread_tmp524_cast_fu_16272_p1() {
    tmp524_cast_fu_16272_p1 = esl_sext<19,18>(tmp81_fu_16266_p2.read());
}

void mmult_hw::thread_tmp525_cast_fu_16260_p1() {
    tmp525_cast_fu_16260_p1 = esl_sext<18,17>(tmp79_reg_27816.read());
}

void mmult_hw::thread_tmp526_cast_fu_16263_p1() {
    tmp526_cast_fu_16263_p1 = esl_sext<18,17>(tmp80_reg_27821.read());
}

void mmult_hw::thread_tmp527_cast_fu_16288_p1() {
    tmp527_cast_fu_16288_p1 = esl_sext<19,18>(tmp84_fu_16282_p2.read());
}

void mmult_hw::thread_tmp528_cast_fu_16276_p1() {
    tmp528_cast_fu_16276_p1 = esl_sext<18,17>(tmp82_reg_27826.read());
}

void mmult_hw::thread_tmp529_cast_fu_16279_p1() {
    tmp529_cast_fu_16279_p1 = esl_sext<18,17>(tmp83_reg_27831.read());
}

void mmult_hw::thread_tmp52_fu_16130_p2() {
    tmp52_fu_16130_p2 = (!tmp496_cast_fu_16124_p1.read().is_01() || !tmp497_cast_fu_16127_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp496_cast_fu_16124_p1.read()) + sc_bigint<18>(tmp497_cast_fu_16127_p1.read()));
}

void mmult_hw::thread_tmp530_cast_fu_17184_p1() {
    tmp530_cast_fu_17184_p1 = esl_sext<20,19>(tmp92_reg_28306.read());
}

void mmult_hw::thread_tmp531_cast_fu_16310_p1() {
    tmp531_cast_fu_16310_p1 = esl_sext<19,18>(tmp88_fu_16304_p2.read());
}

void mmult_hw::thread_tmp532_cast_fu_16298_p1() {
    tmp532_cast_fu_16298_p1 = esl_sext<18,17>(tmp86_reg_27836.read());
}

void mmult_hw::thread_tmp533_cast_fu_16301_p1() {
    tmp533_cast_fu_16301_p1 = esl_sext<18,17>(tmp87_reg_27841.read());
}

void mmult_hw::thread_tmp534_cast_fu_16326_p1() {
    tmp534_cast_fu_16326_p1 = esl_sext<19,18>(tmp91_fu_16320_p2.read());
}

void mmult_hw::thread_tmp535_cast_fu_16314_p1() {
    tmp535_cast_fu_16314_p1 = esl_sext<18,17>(tmp89_reg_27846.read());
}

void mmult_hw::thread_tmp536_cast_fu_16317_p1() {
    tmp536_cast_fu_16317_p1 = esl_sext<18,17>(tmp90_reg_27851.read());
}

void mmult_hw::thread_tmp537_cast_fu_17396_p1() {
    tmp537_cast_fu_17396_p1 = esl_sext<22,21>(tmp125_reg_28421.read());
}

void mmult_hw::thread_tmp538_cast_fu_17215_p1() {
    tmp538_cast_fu_17215_p1 = esl_sext<21,20>(tmp109_fu_17209_p2.read());
}

void mmult_hw::thread_tmp539_cast_fu_17203_p1() {
    tmp539_cast_fu_17203_p1 = esl_sext<20,19>(tmp101_reg_28311.read());
}

void mmult_hw::thread_tmp53_fu_16140_p2() {
    tmp53_fu_16140_p2 = (!tmp492_cast_fu_16120_p1.read().is_01() || !tmp495_cast_fu_16136_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp492_cast_fu_16120_p1.read()) + sc_bigint<19>(tmp495_cast_fu_16136_p1.read()));
}

void mmult_hw::thread_tmp540_cast_fu_16348_p1() {
    tmp540_cast_fu_16348_p1 = esl_sext<19,18>(tmp97_fu_16342_p2.read());
}

void mmult_hw::thread_tmp541_cast_fu_16336_p1() {
    tmp541_cast_fu_16336_p1 = esl_sext<18,17>(tmp95_reg_27856.read());
}

void mmult_hw::thread_tmp542_cast_fu_16339_p1() {
    tmp542_cast_fu_16339_p1 = esl_sext<18,17>(tmp96_reg_27861.read());
}

void mmult_hw::thread_tmp543_cast_fu_16364_p1() {
    tmp543_cast_fu_16364_p1 = esl_sext<19,18>(tmp100_fu_16358_p2.read());
}

void mmult_hw::thread_tmp544_cast_fu_16352_p1() {
    tmp544_cast_fu_16352_p1 = esl_sext<18,17>(tmp98_reg_27866.read());
}

void mmult_hw::thread_tmp545_cast_fu_16355_p1() {
    tmp545_cast_fu_16355_p1 = esl_sext<18,17>(tmp99_reg_27871.read());
}

void mmult_hw::thread_tmp546_cast_fu_17206_p1() {
    tmp546_cast_fu_17206_p1 = esl_sext<20,19>(tmp108_reg_28316.read());
}

void mmult_hw::thread_tmp547_cast_fu_16386_p1() {
    tmp547_cast_fu_16386_p1 = esl_sext<19,18>(tmp104_fu_16380_p2.read());
}

void mmult_hw::thread_tmp548_cast_fu_16374_p1() {
    tmp548_cast_fu_16374_p1 = esl_sext<18,17>(tmp102_reg_27876.read());
}

void mmult_hw::thread_tmp549_cast_fu_16377_p1() {
    tmp549_cast_fu_16377_p1 = esl_sext<18,17>(tmp103_reg_27881.read());
}

void mmult_hw::thread_tmp550_cast_fu_16402_p1() {
    tmp550_cast_fu_16402_p1 = esl_sext<19,18>(tmp107_fu_16396_p2.read());
}

void mmult_hw::thread_tmp551_cast_fu_16390_p1() {
    tmp551_cast_fu_16390_p1 = esl_sext<18,17>(tmp105_reg_27886.read());
}

void mmult_hw::thread_tmp552_cast_fu_16393_p1() {
    tmp552_cast_fu_16393_p1 = esl_sext<18,17>(tmp106_reg_27891.read());
}

void mmult_hw::thread_tmp553_cast_fu_17231_p1() {
    tmp553_cast_fu_17231_p1 = esl_sext<21,20>(tmp124_fu_17225_p2.read());
}

void mmult_hw::thread_tmp554_cast_fu_17219_p1() {
    tmp554_cast_fu_17219_p1 = esl_sext<20,19>(tmp116_reg_28321.read());
}

void mmult_hw::thread_tmp555_cast_fu_16424_p1() {
    tmp555_cast_fu_16424_p1 = esl_sext<19,18>(tmp112_fu_16418_p2.read());
}

void mmult_hw::thread_tmp556_cast_fu_16412_p1() {
    tmp556_cast_fu_16412_p1 = esl_sext<18,17>(tmp110_reg_27896.read());
}

void mmult_hw::thread_tmp557_cast_fu_16415_p1() {
    tmp557_cast_fu_16415_p1 = esl_sext<18,17>(tmp111_reg_27901.read());
}

void mmult_hw::thread_tmp558_cast_fu_16440_p1() {
    tmp558_cast_fu_16440_p1 = esl_sext<19,18>(tmp115_fu_16434_p2.read());
}

void mmult_hw::thread_tmp559_cast_fu_16428_p1() {
    tmp559_cast_fu_16428_p1 = esl_sext<18,17>(tmp113_reg_27906.read());
}

void mmult_hw::thread_tmp560_cast_fu_16431_p1() {
    tmp560_cast_fu_16431_p1 = esl_sext<18,17>(tmp114_reg_27911.read());
}

void mmult_hw::thread_tmp561_cast_fu_17222_p1() {
    tmp561_cast_fu_17222_p1 = esl_sext<20,19>(tmp123_reg_28326.read());
}

void mmult_hw::thread_tmp562_cast_fu_16462_p1() {
    tmp562_cast_fu_16462_p1 = esl_sext<19,18>(tmp119_fu_16456_p2.read());
}

void mmult_hw::thread_tmp563_cast_fu_16450_p1() {
    tmp563_cast_fu_16450_p1 = esl_sext<18,17>(tmp117_reg_27916.read());
}

}

