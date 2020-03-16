#include "mmult_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mmult_hw::thread_weight_buf_7_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7))) {
        weight_buf_7_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_1_V_address0 = weight_buf_7_1_V_a_reg_19301.read();
    } else {
        weight_buf_7_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7))) {
        weight_buf_7_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_7_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_2_V_address0 = weight_buf_7_2_V_a_reg_19461.read();
    } else {
        weight_buf_7_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7))) {
        weight_buf_7_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_3_V_address0 = weight_buf_7_3_V_a_reg_19621.read();
    } else {
        weight_buf_7_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7))) {
        weight_buf_7_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_7_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_4_V_address0 = weight_buf_7_4_V_a_reg_19781.read();
    } else {
        weight_buf_7_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7))) {
        weight_buf_7_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_5_V_address0 = weight_buf_7_5_V_a_reg_19941.read();
    } else {
        weight_buf_7_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7))) {
        weight_buf_7_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_7_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_6_V_address0 = weight_buf_7_6_V_a_reg_20101.read();
    } else {
        weight_buf_7_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7))) {
        weight_buf_7_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_7_V_address0 = weight_buf_7_7_V_a_reg_20261.read();
    } else {
        weight_buf_7_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7))) {
        weight_buf_7_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_7_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_8_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_0_V_address0 = weight_buf_8_0_V_a_reg_19146.read();
    } else {
        weight_buf_8_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_8_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_8_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8))) {
        weight_buf_8_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_1_V_address0 = weight_buf_8_1_V_a_reg_19306.read();
    } else {
        weight_buf_8_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8))) {
        weight_buf_8_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_8_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_2_V_address0 = weight_buf_8_2_V_a_reg_19466.read();
    } else {
        weight_buf_8_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8))) {
        weight_buf_8_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_3_V_address0 = weight_buf_8_3_V_a_reg_19626.read();
    } else {
        weight_buf_8_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8))) {
        weight_buf_8_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_8_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_4_V_address0 = weight_buf_8_4_V_a_reg_19786.read();
    } else {
        weight_buf_8_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8))) {
        weight_buf_8_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_5_V_address0 = weight_buf_8_5_V_a_reg_19946.read();
    } else {
        weight_buf_8_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8))) {
        weight_buf_8_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_8_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_6_V_address0 = weight_buf_8_6_V_a_reg_20106.read();
    } else {
        weight_buf_8_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8))) {
        weight_buf_8_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_8_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_8_7_V_address0 = weight_buf_8_7_V_a_reg_20266.read();
    } else {
        weight_buf_8_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_8_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8))) {
        weight_buf_8_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_8_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_9_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_0_V_address0 = weight_buf_9_0_V_a_reg_19151.read();
    } else {
        weight_buf_9_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_9_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_9_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9))) {
        weight_buf_9_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_1_V_address0 = weight_buf_9_1_V_a_reg_19311.read();
    } else {
        weight_buf_9_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9))) {
        weight_buf_9_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_9_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_2_V_address0 = weight_buf_9_2_V_a_reg_19471.read();
    } else {
        weight_buf_9_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9))) {
        weight_buf_9_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_3_V_address0 = weight_buf_9_3_V_a_reg_19631.read();
    } else {
        weight_buf_9_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9))) {
        weight_buf_9_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_9_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_4_V_address0 = weight_buf_9_4_V_a_reg_19791.read();
    } else {
        weight_buf_9_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9))) {
        weight_buf_9_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_5_V_address0 = weight_buf_9_5_V_a_reg_19951.read();
    } else {
        weight_buf_9_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9))) {
        weight_buf_9_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_9_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_6_V_address0 = weight_buf_9_6_V_a_reg_20111.read();
    } else {
        weight_buf_9_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9))) {
        weight_buf_9_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_9_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_9_7_V_address0 = weight_buf_9_7_V_a_reg_20271.read();
    } else {
        weight_buf_9_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_9_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9))) {
        weight_buf_9_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_9_7_V_we0 = ap_const_logic_0;
    }
}

}

