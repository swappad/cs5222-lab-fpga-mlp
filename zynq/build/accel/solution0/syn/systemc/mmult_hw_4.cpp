#include "mmult_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mmult_hw::thread_ap_CS_fsm_pp0_stage0() {
    ap_CS_fsm_pp0_stage0 = ap_CS_fsm.read()[1];
}

void mmult_hw::thread_ap_CS_fsm_pp1_stage0() {
    ap_CS_fsm_pp1_stage0 = ap_CS_fsm.read()[4];
}

void mmult_hw::thread_ap_CS_fsm_pp2_stage0() {
    ap_CS_fsm_pp2_stage0 = ap_CS_fsm.read()[8];
}

void mmult_hw::thread_ap_CS_fsm_pp3_stage0() {
    ap_CS_fsm_pp3_stage0 = ap_CS_fsm.read()[10];
}

void mmult_hw::thread_ap_CS_fsm_pp4_stage0() {
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[13];
}

void mmult_hw::thread_ap_CS_fsm_state1() {
    ap_CS_fsm_state1 = ap_CS_fsm.read()[0];
}

void mmult_hw::thread_ap_CS_fsm_state10() {
    ap_CS_fsm_state10 = ap_CS_fsm.read()[7];
}

void mmult_hw::thread_ap_CS_fsm_state13() {
    ap_CS_fsm_state13 = ap_CS_fsm.read()[9];
}

void mmult_hw::thread_ap_CS_fsm_state22() {
    ap_CS_fsm_state22 = ap_CS_fsm.read()[11];
}

void mmult_hw::thread_ap_CS_fsm_state23() {
    ap_CS_fsm_state23 = ap_CS_fsm.read()[12];
}

void mmult_hw::thread_ap_CS_fsm_state27() {
    ap_CS_fsm_state27 = ap_CS_fsm.read()[14];
}

void mmult_hw::thread_ap_CS_fsm_state4() {
    ap_CS_fsm_state4 = ap_CS_fsm.read()[2];
}

void mmult_hw::thread_ap_CS_fsm_state5() {
    ap_CS_fsm_state5 = ap_CS_fsm.read()[3];
}

void mmult_hw::thread_ap_CS_fsm_state8() {
    ap_CS_fsm_state8 = ap_CS_fsm.read()[5];
}

void mmult_hw::thread_ap_CS_fsm_state9() {
    ap_CS_fsm_state9 = ap_CS_fsm.read()[6];
}

void mmult_hw::thread_ap_block_pp0_stage0_flag00000000() {
    ap_block_pp0_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp0_stage0_flag00011001() {
    ap_block_pp0_stage0_flag00011001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19078.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_pp0_stage0_flag00011011() {
    ap_block_pp0_stage0_flag00011011 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19078.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_pp1_stage0_flag00000000() {
    ap_block_pp1_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp1_stage0_flag00011001() {
    ap_block_pp1_stage0_flag00011001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20386.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_pp1_stage0_flag00011011() {
    ap_block_pp1_stage0_flag00011011 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20386.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_pp2_stage0_flag00000000() {
    ap_block_pp2_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp2_stage0_flag00011001() {
    ap_block_pp2_stage0_flag00011001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21712.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_pp2_stage0_flag00011011() {
    ap_block_pp2_stage0_flag00011011 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21712.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_pp3_stage0_flag00000000() {
    ap_block_pp3_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp3_stage0_flag00011001() {
    ap_block_pp3_stage0_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp3_stage0_flag00011011() {
    ap_block_pp3_stage0_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp4_stage0_flag00000000() {
    ap_block_pp4_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp4_stage0_flag00001001() {
    ap_block_pp4_stage0_flag00001001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp4_stage0_flag00011001() {
    ap_block_pp4_stage0_flag00011001 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state25_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state26_io.read())));
}

void mmult_hw::thread_ap_block_pp4_stage0_flag00011011() {
    ap_block_pp4_stage0_flag00011011 = ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state25_io.read())) || (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter2.read()) && 
  esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state26_io.read())));
}

void mmult_hw::thread_ap_block_state11_pp2_stage0_iter0() {
    ap_block_state11_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state12_pp2_stage0_iter1() {
    ap_block_state12_pp2_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21712.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_state14_pp3_stage0_iter0() {
    ap_block_state14_pp3_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state15_pp3_stage0_iter1() {
    ap_block_state15_pp3_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state16_pp3_stage0_iter2() {
    ap_block_state16_pp3_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state17_pp3_stage0_iter3() {
    ap_block_state17_pp3_stage0_iter3 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state18_pp3_stage0_iter4() {
    ap_block_state18_pp3_stage0_iter4 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state19_pp3_stage0_iter5() {
    ap_block_state19_pp3_stage0_iter5 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state20_pp3_stage0_iter6() {
    ap_block_state20_pp3_stage0_iter6 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state21_pp3_stage0_iter7() {
    ap_block_state21_pp3_stage0_iter7 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state24_pp4_stage0_iter0() {
    ap_block_state24_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state25_io() {
    ap_block_state25_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_26758.read()) && esl_seteq<1,1,1>(ap_const_logic_0, out_stream_data_V_1_ack_in.read()));
}

void mmult_hw::thread_ap_block_state25_pp4_stage0_iter1() {
    ap_block_state25_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state26_io() {
    ap_block_state26_io = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter1_exitcond_reg_26758.read()) && esl_seteq<1,1,1>(ap_const_logic_0, out_stream_data_V_1_ack_in.read()));
}

void mmult_hw::thread_ap_block_state26_pp4_stage0_iter2() {
    ap_block_state26_pp4_stage0_iter2 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19078.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_state6_pp1_stage0_iter0() {
    ap_block_state6_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state7_pp1_stage0_iter1() {
    ap_block_state7_pp1_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20386.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_state9() {
    ap_block_state9 = (esl_seteq<1,1,1>(ap_const_logic_0, out_stream_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_last_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_id_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_dest_V_1_ack_in.read()));
}

void mmult_hw::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_11904_p2.read())) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_condition_pp1_exit_iter0_state6() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond3_fu_12232_p2.read())) {
        ap_condition_pp1_exit_iter0_state6 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state6 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_condition_pp2_exit_iter0_state11() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond6_fu_12594_p2.read())) {
        ap_condition_pp2_exit_iter0_state11 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state11 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_condition_pp3_exit_iter0_state14() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_fu_12657_p2.read())) {
        ap_condition_pp3_exit_iter0_state14 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state14 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_condition_pp4_exit_iter0_state24() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_17972_p2.read())) {
        ap_condition_pp4_exit_iter0_state24 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state24 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, out_stream_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_last_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_id_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_dest_V_1_ack_in.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_13_fu_12302_p3.read()))) {
        ap_done = ap_const_logic_1;
    } else {
        ap_done = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_enable_pp0() {
    ap_enable_pp0 = (ap_idle_pp0.read() ^ ap_const_logic_1);
}

void mmult_hw::thread_ap_enable_pp1() {
    ap_enable_pp1 = (ap_idle_pp1.read() ^ ap_const_logic_1);
}

void mmult_hw::thread_ap_enable_pp2() {
    ap_enable_pp2 = (ap_idle_pp2.read() ^ ap_const_logic_1);
}

void mmult_hw::thread_ap_enable_pp3() {
    ap_enable_pp3 = (ap_idle_pp3.read() ^ ap_const_logic_1);
}

void mmult_hw::thread_ap_enable_pp4() {
    ap_enable_pp4 = (ap_idle_pp4.read() ^ ap_const_logic_1);
}

void mmult_hw::thread_ap_idle() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_start.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state1.read()))) {
        ap_idle = ap_const_logic_1;
    } else {
        ap_idle = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_idle_pp0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp0_iter1.read()))) {
        ap_idle_pp0 = ap_const_logic_1;
    } else {
        ap_idle_pp0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_idle_pp1() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp1_iter1.read()))) {
        ap_idle_pp1 = ap_const_logic_1;
    } else {
        ap_idle_pp1 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_idle_pp2() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp2_iter1.read()))) {
        ap_idle_pp2 = ap_const_logic_1;
    } else {
        ap_idle_pp2 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_idle_pp3() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter5.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter6.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter7.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter2.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, out_stream_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_last_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_id_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_dest_V_1_ack_in.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_13_fu_12302_p3.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void mmult_hw::thread_exitcond1_fu_11904_p2() {
    exitcond1_fu_11904_p2 = (!is_idx_reg_11138.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(is_idx_reg_11138.read() == ap_const_lv3_5);
}

void mmult_hw::thread_exitcond2_fu_11954_p2() {
    exitcond2_fu_11954_p2 = (!i2_reg_11185.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i2_reg_11185.read() == ap_const_lv4_A);
}

void mmult_hw::thread_exitcond3_fu_12232_p2() {
    exitcond3_fu_12232_p2 = (!is_idx_2_reg_11196.read().is_01() || !indvars_iv1_reg_11161.read().is_01())? sc_lv<1>(): sc_lv<1>(is_idx_2_reg_11196.read() == indvars_iv1_reg_11161.read());
}

void mmult_hw::thread_exitcond4_fu_12316_p2() {
    exitcond4_fu_12316_p2 = (!i3_reg_11264.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(i3_reg_11264.read() == ap_const_lv7_40);
}

void mmult_hw::thread_exitcond5_fu_12675_p2() {
    exitcond5_fu_12675_p2 = (!j3_reg_11318.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(j3_reg_11318.read() == ap_const_lv4_A);
}

void mmult_hw::thread_exitcond6_fu_12594_p2() {
    exitcond6_fu_12594_p2 = (!is_idx_5_reg_11275.read().is_01() || !is_idx_6_reg_20426.read().is_01())? sc_lv<1>(): sc_lv<1>(is_idx_5_reg_11275.read() == is_idx_6_reg_20426.read());
}

void mmult_hw::thread_exitcond7_fu_17918_p2() {
    exitcond7_fu_17918_p2 = (!i5_reg_11350.read().is_01() || !ap_const_lv7_40.is_01())? sc_lv<1>(): sc_lv<1>(i5_reg_11350.read() == ap_const_lv7_40);
}

void mmult_hw::thread_exitcond_flatten_fu_12657_p2() {
    exitcond_flatten_fu_12657_p2 = (!indvar_flatten_reg_11296.read().is_01() || !ap_const_lv10_280.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_11296.read() == ap_const_lv10_280);
}

void mmult_hw::thread_exitcond_fu_17972_p2() {
    exitcond_fu_17972_p2 = (!os_idx_2_phi_fu_11364_p4.read().is_01() || !indvars_iv_reg_11329.read().is_01())? sc_lv<1>(): sc_lv<1>(os_idx_2_phi_fu_11364_p4.read() == indvars_iv_reg_11329.read());
}

void mmult_hw::thread_grp_fu_13477_p0() {
    grp_fu_13477_p0 =  (sc_lv<8>) (grp_fu_13477_p00.read());
}

void mmult_hw::thread_grp_fu_13477_p00() {
    grp_fu_13477_p00 = esl_zext<16,8>(in_buf_0_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13487_p0() {
    grp_fu_13487_p0 =  (sc_lv<8>) (grp_fu_13487_p00.read());
}

void mmult_hw::thread_grp_fu_13487_p00() {
    grp_fu_13487_p00 = esl_zext<16,8>(in_buf_0_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13497_p0() {
    grp_fu_13497_p0 =  (sc_lv<8>) (grp_fu_13497_p00.read());
}

void mmult_hw::thread_grp_fu_13497_p00() {
    grp_fu_13497_p00 = esl_zext<16,8>(in_buf_0_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13507_p0() {
    grp_fu_13507_p0 =  (sc_lv<8>) (grp_fu_13507_p00.read());
}

void mmult_hw::thread_grp_fu_13507_p00() {
    grp_fu_13507_p00 = esl_zext<16,8>(in_buf_0_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13517_p0() {
    grp_fu_13517_p0 =  (sc_lv<8>) (grp_fu_13517_p00.read());
}

void mmult_hw::thread_grp_fu_13517_p00() {
    grp_fu_13517_p00 = esl_zext<16,8>(in_buf_1_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13527_p0() {
    grp_fu_13527_p0 =  (sc_lv<8>) (grp_fu_13527_p00.read());
}

void mmult_hw::thread_grp_fu_13527_p00() {
    grp_fu_13527_p00 = esl_zext<16,8>(in_buf_1_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13537_p0() {
    grp_fu_13537_p0 =  (sc_lv<8>) (grp_fu_13537_p00.read());
}

void mmult_hw::thread_grp_fu_13537_p00() {
    grp_fu_13537_p00 = esl_zext<16,8>(in_buf_1_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13547_p0() {
    grp_fu_13547_p0 =  (sc_lv<8>) (grp_fu_13547_p00.read());
}

void mmult_hw::thread_grp_fu_13547_p00() {
    grp_fu_13547_p00 = esl_zext<16,8>(in_buf_1_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13557_p0() {
    grp_fu_13557_p0 =  (sc_lv<8>) (grp_fu_13557_p00.read());
}

void mmult_hw::thread_grp_fu_13557_p00() {
    grp_fu_13557_p00 = esl_zext<16,8>(in_buf_2_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13567_p0() {
    grp_fu_13567_p0 =  (sc_lv<8>) (grp_fu_13567_p00.read());
}

void mmult_hw::thread_grp_fu_13567_p00() {
    grp_fu_13567_p00 = esl_zext<16,8>(in_buf_2_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13577_p0() {
    grp_fu_13577_p0 =  (sc_lv<8>) (grp_fu_13577_p00.read());
}

void mmult_hw::thread_grp_fu_13577_p00() {
    grp_fu_13577_p00 = esl_zext<16,8>(in_buf_2_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13587_p0() {
    grp_fu_13587_p0 =  (sc_lv<8>) (grp_fu_13587_p00.read());
}

void mmult_hw::thread_grp_fu_13587_p00() {
    grp_fu_13587_p00 = esl_zext<16,8>(in_buf_2_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13597_p0() {
    grp_fu_13597_p0 =  (sc_lv<8>) (grp_fu_13597_p00.read());
}

void mmult_hw::thread_grp_fu_13597_p00() {
    grp_fu_13597_p00 = esl_zext<16,8>(in_buf_3_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13607_p0() {
    grp_fu_13607_p0 =  (sc_lv<8>) (grp_fu_13607_p00.read());
}

void mmult_hw::thread_grp_fu_13607_p00() {
    grp_fu_13607_p00 = esl_zext<16,8>(in_buf_3_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13617_p0() {
    grp_fu_13617_p0 =  (sc_lv<8>) (grp_fu_13617_p00.read());
}

void mmult_hw::thread_grp_fu_13617_p00() {
    grp_fu_13617_p00 = esl_zext<16,8>(in_buf_3_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13627_p0() {
    grp_fu_13627_p0 =  (sc_lv<8>) (grp_fu_13627_p00.read());
}

void mmult_hw::thread_grp_fu_13627_p00() {
    grp_fu_13627_p00 = esl_zext<16,8>(in_buf_3_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13637_p0() {
    grp_fu_13637_p0 =  (sc_lv<8>) (grp_fu_13637_p00.read());
}

void mmult_hw::thread_grp_fu_13637_p00() {
    grp_fu_13637_p00 = esl_zext<16,8>(in_buf_4_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13647_p0() {
    grp_fu_13647_p0 =  (sc_lv<8>) (grp_fu_13647_p00.read());
}

void mmult_hw::thread_grp_fu_13647_p00() {
    grp_fu_13647_p00 = esl_zext<16,8>(in_buf_4_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13657_p0() {
    grp_fu_13657_p0 =  (sc_lv<8>) (grp_fu_13657_p00.read());
}

void mmult_hw::thread_grp_fu_13657_p00() {
    grp_fu_13657_p00 = esl_zext<16,8>(in_buf_4_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13667_p0() {
    grp_fu_13667_p0 =  (sc_lv<8>) (grp_fu_13667_p00.read());
}

void mmult_hw::thread_grp_fu_13667_p00() {
    grp_fu_13667_p00 = esl_zext<16,8>(in_buf_4_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13677_p0() {
    grp_fu_13677_p0 =  (sc_lv<8>) (grp_fu_13677_p00.read());
}

void mmult_hw::thread_grp_fu_13677_p00() {
    grp_fu_13677_p00 = esl_zext<16,8>(in_buf_5_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13687_p0() {
    grp_fu_13687_p0 =  (sc_lv<8>) (grp_fu_13687_p00.read());
}

void mmult_hw::thread_grp_fu_13687_p00() {
    grp_fu_13687_p00 = esl_zext<16,8>(in_buf_5_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13697_p0() {
    grp_fu_13697_p0 =  (sc_lv<8>) (grp_fu_13697_p00.read());
}

void mmult_hw::thread_grp_fu_13697_p00() {
    grp_fu_13697_p00 = esl_zext<16,8>(in_buf_5_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13707_p0() {
    grp_fu_13707_p0 =  (sc_lv<8>) (grp_fu_13707_p00.read());
}

void mmult_hw::thread_grp_fu_13707_p00() {
    grp_fu_13707_p00 = esl_zext<16,8>(in_buf_5_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13717_p0() {
    grp_fu_13717_p0 =  (sc_lv<8>) (grp_fu_13717_p00.read());
}

void mmult_hw::thread_grp_fu_13717_p00() {
    grp_fu_13717_p00 = esl_zext<16,8>(in_buf_6_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13727_p0() {
    grp_fu_13727_p0 =  (sc_lv<8>) (grp_fu_13727_p00.read());
}

void mmult_hw::thread_grp_fu_13727_p00() {
    grp_fu_13727_p00 = esl_zext<16,8>(in_buf_6_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13737_p0() {
    grp_fu_13737_p0 =  (sc_lv<8>) (grp_fu_13737_p00.read());
}

void mmult_hw::thread_grp_fu_13737_p00() {
    grp_fu_13737_p00 = esl_zext<16,8>(in_buf_6_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13747_p0() {
    grp_fu_13747_p0 =  (sc_lv<8>) (grp_fu_13747_p00.read());
}

void mmult_hw::thread_grp_fu_13747_p00() {
    grp_fu_13747_p00 = esl_zext<16,8>(in_buf_6_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13757_p0() {
    grp_fu_13757_p0 =  (sc_lv<8>) (grp_fu_13757_p00.read());
}

void mmult_hw::thread_grp_fu_13757_p00() {
    grp_fu_13757_p00 = esl_zext<16,8>(in_buf_7_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13767_p0() {
    grp_fu_13767_p0 =  (sc_lv<8>) (grp_fu_13767_p00.read());
}

void mmult_hw::thread_grp_fu_13767_p00() {
    grp_fu_13767_p00 = esl_zext<16,8>(in_buf_7_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13777_p0() {
    grp_fu_13777_p0 =  (sc_lv<8>) (grp_fu_13777_p00.read());
}

void mmult_hw::thread_grp_fu_13777_p00() {
    grp_fu_13777_p00 = esl_zext<16,8>(in_buf_7_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13787_p0() {
    grp_fu_13787_p0 =  (sc_lv<8>) (grp_fu_13787_p00.read());
}

void mmult_hw::thread_grp_fu_13787_p00() {
    grp_fu_13787_p00 = esl_zext<16,8>(in_buf_7_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13797_p0() {
    grp_fu_13797_p0 =  (sc_lv<8>) (grp_fu_13797_p00.read());
}

void mmult_hw::thread_grp_fu_13797_p00() {
    grp_fu_13797_p00 = esl_zext<16,8>(in_buf_8_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13807_p0() {
    grp_fu_13807_p0 =  (sc_lv<8>) (grp_fu_13807_p00.read());
}

void mmult_hw::thread_grp_fu_13807_p00() {
    grp_fu_13807_p00 = esl_zext<16,8>(in_buf_8_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13817_p0() {
    grp_fu_13817_p0 =  (sc_lv<8>) (grp_fu_13817_p00.read());
}

void mmult_hw::thread_grp_fu_13817_p00() {
    grp_fu_13817_p00 = esl_zext<16,8>(in_buf_8_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13827_p0() {
    grp_fu_13827_p0 =  (sc_lv<8>) (grp_fu_13827_p00.read());
}

void mmult_hw::thread_grp_fu_13827_p00() {
    grp_fu_13827_p00 = esl_zext<16,8>(in_buf_8_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13837_p0() {
    grp_fu_13837_p0 =  (sc_lv<8>) (grp_fu_13837_p00.read());
}

void mmult_hw::thread_grp_fu_13837_p00() {
    grp_fu_13837_p00 = esl_zext<16,8>(in_buf_9_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13847_p0() {
    grp_fu_13847_p0 =  (sc_lv<8>) (grp_fu_13847_p00.read());
}

void mmult_hw::thread_grp_fu_13847_p00() {
    grp_fu_13847_p00 = esl_zext<16,8>(in_buf_9_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13857_p0() {
    grp_fu_13857_p0 =  (sc_lv<8>) (grp_fu_13857_p00.read());
}

void mmult_hw::thread_grp_fu_13857_p00() {
    grp_fu_13857_p00 = esl_zext<16,8>(in_buf_9_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13867_p0() {
    grp_fu_13867_p0 =  (sc_lv<8>) (grp_fu_13867_p00.read());
}

void mmult_hw::thread_grp_fu_13867_p00() {
    grp_fu_13867_p00 = esl_zext<16,8>(in_buf_9_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13877_p0() {
    grp_fu_13877_p0 =  (sc_lv<8>) (grp_fu_13877_p00.read());
}

void mmult_hw::thread_grp_fu_13877_p00() {
    grp_fu_13877_p00 = esl_zext<16,8>(in_buf_10_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13887_p0() {
    grp_fu_13887_p0 =  (sc_lv<8>) (grp_fu_13887_p00.read());
}

void mmult_hw::thread_grp_fu_13887_p00() {
    grp_fu_13887_p00 = esl_zext<16,8>(in_buf_10_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13897_p0() {
    grp_fu_13897_p0 =  (sc_lv<8>) (grp_fu_13897_p00.read());
}

void mmult_hw::thread_grp_fu_13897_p00() {
    grp_fu_13897_p00 = esl_zext<16,8>(in_buf_10_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13907_p0() {
    grp_fu_13907_p0 =  (sc_lv<8>) (grp_fu_13907_p00.read());
}

void mmult_hw::thread_grp_fu_13907_p00() {
    grp_fu_13907_p00 = esl_zext<16,8>(in_buf_10_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13917_p0() {
    grp_fu_13917_p0 =  (sc_lv<8>) (grp_fu_13917_p00.read());
}

void mmult_hw::thread_grp_fu_13917_p00() {
    grp_fu_13917_p00 = esl_zext<16,8>(in_buf_11_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13927_p0() {
    grp_fu_13927_p0 =  (sc_lv<8>) (grp_fu_13927_p00.read());
}

void mmult_hw::thread_grp_fu_13927_p00() {
    grp_fu_13927_p00 = esl_zext<16,8>(in_buf_11_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13937_p0() {
    grp_fu_13937_p0 =  (sc_lv<8>) (grp_fu_13937_p00.read());
}

void mmult_hw::thread_grp_fu_13937_p00() {
    grp_fu_13937_p00 = esl_zext<16,8>(in_buf_11_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13947_p0() {
    grp_fu_13947_p0 =  (sc_lv<8>) (grp_fu_13947_p00.read());
}

void mmult_hw::thread_grp_fu_13947_p00() {
    grp_fu_13947_p00 = esl_zext<16,8>(in_buf_11_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13957_p0() {
    grp_fu_13957_p0 =  (sc_lv<8>) (grp_fu_13957_p00.read());
}

void mmult_hw::thread_grp_fu_13957_p00() {
    grp_fu_13957_p00 = esl_zext<16,8>(in_buf_12_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_13967_p0() {
    grp_fu_13967_p0 =  (sc_lv<8>) (grp_fu_13967_p00.read());
}

void mmult_hw::thread_grp_fu_13967_p00() {
    grp_fu_13967_p00 = esl_zext<16,8>(in_buf_12_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_13977_p0() {
    grp_fu_13977_p0 =  (sc_lv<8>) (grp_fu_13977_p00.read());
}

void mmult_hw::thread_grp_fu_13977_p00() {
    grp_fu_13977_p00 = esl_zext<16,8>(in_buf_12_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_13987_p0() {
    grp_fu_13987_p0 =  (sc_lv<8>) (grp_fu_13987_p00.read());
}

void mmult_hw::thread_grp_fu_13987_p00() {
    grp_fu_13987_p00 = esl_zext<16,8>(in_buf_12_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_13997_p0() {
    grp_fu_13997_p0 =  (sc_lv<8>) (grp_fu_13997_p00.read());
}

void mmult_hw::thread_grp_fu_13997_p00() {
    grp_fu_13997_p00 = esl_zext<16,8>(in_buf_13_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14007_p0() {
    grp_fu_14007_p0 =  (sc_lv<8>) (grp_fu_14007_p00.read());
}

void mmult_hw::thread_grp_fu_14007_p00() {
    grp_fu_14007_p00 = esl_zext<16,8>(in_buf_13_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14017_p0() {
    grp_fu_14017_p0 =  (sc_lv<8>) (grp_fu_14017_p00.read());
}

void mmult_hw::thread_grp_fu_14017_p00() {
    grp_fu_14017_p00 = esl_zext<16,8>(in_buf_13_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14027_p0() {
    grp_fu_14027_p0 =  (sc_lv<8>) (grp_fu_14027_p00.read());
}

void mmult_hw::thread_grp_fu_14027_p00() {
    grp_fu_14027_p00 = esl_zext<16,8>(in_buf_13_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14037_p0() {
    grp_fu_14037_p0 =  (sc_lv<8>) (grp_fu_14037_p00.read());
}

void mmult_hw::thread_grp_fu_14037_p00() {
    grp_fu_14037_p00 = esl_zext<16,8>(in_buf_14_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14047_p0() {
    grp_fu_14047_p0 =  (sc_lv<8>) (grp_fu_14047_p00.read());
}

void mmult_hw::thread_grp_fu_14047_p00() {
    grp_fu_14047_p00 = esl_zext<16,8>(in_buf_14_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14057_p0() {
    grp_fu_14057_p0 =  (sc_lv<8>) (grp_fu_14057_p00.read());
}

void mmult_hw::thread_grp_fu_14057_p00() {
    grp_fu_14057_p00 = esl_zext<16,8>(in_buf_14_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14067_p0() {
    grp_fu_14067_p0 =  (sc_lv<8>) (grp_fu_14067_p00.read());
}

void mmult_hw::thread_grp_fu_14067_p00() {
    grp_fu_14067_p00 = esl_zext<16,8>(in_buf_14_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14077_p0() {
    grp_fu_14077_p0 =  (sc_lv<8>) (grp_fu_14077_p00.read());
}

void mmult_hw::thread_grp_fu_14077_p00() {
    grp_fu_14077_p00 = esl_zext<16,8>(in_buf_15_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14087_p0() {
    grp_fu_14087_p0 =  (sc_lv<8>) (grp_fu_14087_p00.read());
}

void mmult_hw::thread_grp_fu_14087_p00() {
    grp_fu_14087_p00 = esl_zext<16,8>(in_buf_15_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14097_p0() {
    grp_fu_14097_p0 =  (sc_lv<8>) (grp_fu_14097_p00.read());
}

void mmult_hw::thread_grp_fu_14097_p00() {
    grp_fu_14097_p00 = esl_zext<16,8>(in_buf_15_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14107_p0() {
    grp_fu_14107_p0 =  (sc_lv<8>) (grp_fu_14107_p00.read());
}

void mmult_hw::thread_grp_fu_14107_p00() {
    grp_fu_14107_p00 = esl_zext<16,8>(in_buf_15_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14117_p0() {
    grp_fu_14117_p0 =  (sc_lv<8>) (grp_fu_14117_p00.read());
}

void mmult_hw::thread_grp_fu_14117_p00() {
    grp_fu_14117_p00 = esl_zext<16,8>(in_buf_16_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14127_p0() {
    grp_fu_14127_p0 =  (sc_lv<8>) (grp_fu_14127_p00.read());
}

void mmult_hw::thread_grp_fu_14127_p00() {
    grp_fu_14127_p00 = esl_zext<16,8>(in_buf_16_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14137_p0() {
    grp_fu_14137_p0 =  (sc_lv<8>) (grp_fu_14137_p00.read());
}

void mmult_hw::thread_grp_fu_14137_p00() {
    grp_fu_14137_p00 = esl_zext<16,8>(in_buf_16_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14147_p0() {
    grp_fu_14147_p0 =  (sc_lv<8>) (grp_fu_14147_p00.read());
}

void mmult_hw::thread_grp_fu_14147_p00() {
    grp_fu_14147_p00 = esl_zext<16,8>(in_buf_16_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14157_p0() {
    grp_fu_14157_p0 =  (sc_lv<8>) (grp_fu_14157_p00.read());
}

void mmult_hw::thread_grp_fu_14157_p00() {
    grp_fu_14157_p00 = esl_zext<16,8>(in_buf_17_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14167_p0() {
    grp_fu_14167_p0 =  (sc_lv<8>) (grp_fu_14167_p00.read());
}

void mmult_hw::thread_grp_fu_14167_p00() {
    grp_fu_14167_p00 = esl_zext<16,8>(in_buf_17_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14177_p0() {
    grp_fu_14177_p0 =  (sc_lv<8>) (grp_fu_14177_p00.read());
}

void mmult_hw::thread_grp_fu_14177_p00() {
    grp_fu_14177_p00 = esl_zext<16,8>(in_buf_17_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14187_p0() {
    grp_fu_14187_p0 =  (sc_lv<8>) (grp_fu_14187_p00.read());
}

void mmult_hw::thread_grp_fu_14187_p00() {
    grp_fu_14187_p00 = esl_zext<16,8>(in_buf_17_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14197_p0() {
    grp_fu_14197_p0 =  (sc_lv<8>) (grp_fu_14197_p00.read());
}

void mmult_hw::thread_grp_fu_14197_p00() {
    grp_fu_14197_p00 = esl_zext<16,8>(in_buf_18_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14207_p0() {
    grp_fu_14207_p0 =  (sc_lv<8>) (grp_fu_14207_p00.read());
}

void mmult_hw::thread_grp_fu_14207_p00() {
    grp_fu_14207_p00 = esl_zext<16,8>(in_buf_18_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14217_p0() {
    grp_fu_14217_p0 =  (sc_lv<8>) (grp_fu_14217_p00.read());
}

void mmult_hw::thread_grp_fu_14217_p00() {
    grp_fu_14217_p00 = esl_zext<16,8>(in_buf_18_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14227_p0() {
    grp_fu_14227_p0 =  (sc_lv<8>) (grp_fu_14227_p00.read());
}

void mmult_hw::thread_grp_fu_14227_p00() {
    grp_fu_14227_p00 = esl_zext<16,8>(in_buf_18_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14237_p0() {
    grp_fu_14237_p0 =  (sc_lv<8>) (grp_fu_14237_p00.read());
}

void mmult_hw::thread_grp_fu_14237_p00() {
    grp_fu_14237_p00 = esl_zext<16,8>(in_buf_19_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14247_p0() {
    grp_fu_14247_p0 =  (sc_lv<8>) (grp_fu_14247_p00.read());
}

void mmult_hw::thread_grp_fu_14247_p00() {
    grp_fu_14247_p00 = esl_zext<16,8>(in_buf_19_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14257_p0() {
    grp_fu_14257_p0 =  (sc_lv<8>) (grp_fu_14257_p00.read());
}

void mmult_hw::thread_grp_fu_14257_p00() {
    grp_fu_14257_p00 = esl_zext<16,8>(in_buf_19_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14267_p0() {
    grp_fu_14267_p0 =  (sc_lv<8>) (grp_fu_14267_p00.read());
}

void mmult_hw::thread_grp_fu_14267_p00() {
    grp_fu_14267_p00 = esl_zext<16,8>(in_buf_19_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14277_p0() {
    grp_fu_14277_p0 =  (sc_lv<8>) (grp_fu_14277_p00.read());
}

void mmult_hw::thread_grp_fu_14277_p00() {
    grp_fu_14277_p00 = esl_zext<16,8>(in_buf_20_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14287_p0() {
    grp_fu_14287_p0 =  (sc_lv<8>) (grp_fu_14287_p00.read());
}

void mmult_hw::thread_grp_fu_14287_p00() {
    grp_fu_14287_p00 = esl_zext<16,8>(in_buf_20_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14297_p0() {
    grp_fu_14297_p0 =  (sc_lv<8>) (grp_fu_14297_p00.read());
}

void mmult_hw::thread_grp_fu_14297_p00() {
    grp_fu_14297_p00 = esl_zext<16,8>(in_buf_20_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14307_p0() {
    grp_fu_14307_p0 =  (sc_lv<8>) (grp_fu_14307_p00.read());
}

void mmult_hw::thread_grp_fu_14307_p00() {
    grp_fu_14307_p00 = esl_zext<16,8>(in_buf_20_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14317_p0() {
    grp_fu_14317_p0 =  (sc_lv<8>) (grp_fu_14317_p00.read());
}

void mmult_hw::thread_grp_fu_14317_p00() {
    grp_fu_14317_p00 = esl_zext<16,8>(in_buf_21_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14327_p0() {
    grp_fu_14327_p0 =  (sc_lv<8>) (grp_fu_14327_p00.read());
}

void mmult_hw::thread_grp_fu_14327_p00() {
    grp_fu_14327_p00 = esl_zext<16,8>(in_buf_21_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14337_p0() {
    grp_fu_14337_p0 =  (sc_lv<8>) (grp_fu_14337_p00.read());
}

void mmult_hw::thread_grp_fu_14337_p00() {
    grp_fu_14337_p00 = esl_zext<16,8>(in_buf_21_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14347_p0() {
    grp_fu_14347_p0 =  (sc_lv<8>) (grp_fu_14347_p00.read());
}

void mmult_hw::thread_grp_fu_14347_p00() {
    grp_fu_14347_p00 = esl_zext<16,8>(in_buf_21_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14357_p0() {
    grp_fu_14357_p0 =  (sc_lv<8>) (grp_fu_14357_p00.read());
}

void mmult_hw::thread_grp_fu_14357_p00() {
    grp_fu_14357_p00 = esl_zext<16,8>(in_buf_22_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14367_p0() {
    grp_fu_14367_p0 =  (sc_lv<8>) (grp_fu_14367_p00.read());
}

void mmult_hw::thread_grp_fu_14367_p00() {
    grp_fu_14367_p00 = esl_zext<16,8>(in_buf_22_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14377_p0() {
    grp_fu_14377_p0 =  (sc_lv<8>) (grp_fu_14377_p00.read());
}

void mmult_hw::thread_grp_fu_14377_p00() {
    grp_fu_14377_p00 = esl_zext<16,8>(in_buf_22_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14387_p0() {
    grp_fu_14387_p0 =  (sc_lv<8>) (grp_fu_14387_p00.read());
}

void mmult_hw::thread_grp_fu_14387_p00() {
    grp_fu_14387_p00 = esl_zext<16,8>(in_buf_22_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14397_p0() {
    grp_fu_14397_p0 =  (sc_lv<8>) (grp_fu_14397_p00.read());
}

void mmult_hw::thread_grp_fu_14397_p00() {
    grp_fu_14397_p00 = esl_zext<16,8>(in_buf_23_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14407_p0() {
    grp_fu_14407_p0 =  (sc_lv<8>) (grp_fu_14407_p00.read());
}

void mmult_hw::thread_grp_fu_14407_p00() {
    grp_fu_14407_p00 = esl_zext<16,8>(in_buf_23_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14417_p0() {
    grp_fu_14417_p0 =  (sc_lv<8>) (grp_fu_14417_p00.read());
}

void mmult_hw::thread_grp_fu_14417_p00() {
    grp_fu_14417_p00 = esl_zext<16,8>(in_buf_23_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14427_p0() {
    grp_fu_14427_p0 =  (sc_lv<8>) (grp_fu_14427_p00.read());
}

void mmult_hw::thread_grp_fu_14427_p00() {
    grp_fu_14427_p00 = esl_zext<16,8>(in_buf_23_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14437_p0() {
    grp_fu_14437_p0 =  (sc_lv<8>) (grp_fu_14437_p00.read());
}

void mmult_hw::thread_grp_fu_14437_p00() {
    grp_fu_14437_p00 = esl_zext<16,8>(in_buf_24_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14447_p0() {
    grp_fu_14447_p0 =  (sc_lv<8>) (grp_fu_14447_p00.read());
}

void mmult_hw::thread_grp_fu_14447_p00() {
    grp_fu_14447_p00 = esl_zext<16,8>(in_buf_24_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14457_p0() {
    grp_fu_14457_p0 =  (sc_lv<8>) (grp_fu_14457_p00.read());
}

void mmult_hw::thread_grp_fu_14457_p00() {
    grp_fu_14457_p00 = esl_zext<16,8>(in_buf_24_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14467_p0() {
    grp_fu_14467_p0 =  (sc_lv<8>) (grp_fu_14467_p00.read());
}

void mmult_hw::thread_grp_fu_14467_p00() {
    grp_fu_14467_p00 = esl_zext<16,8>(in_buf_24_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14477_p0() {
    grp_fu_14477_p0 =  (sc_lv<8>) (grp_fu_14477_p00.read());
}

void mmult_hw::thread_grp_fu_14477_p00() {
    grp_fu_14477_p00 = esl_zext<16,8>(in_buf_25_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14487_p0() {
    grp_fu_14487_p0 =  (sc_lv<8>) (grp_fu_14487_p00.read());
}

void mmult_hw::thread_grp_fu_14487_p00() {
    grp_fu_14487_p00 = esl_zext<16,8>(in_buf_25_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14497_p0() {
    grp_fu_14497_p0 =  (sc_lv<8>) (grp_fu_14497_p00.read());
}

void mmult_hw::thread_grp_fu_14497_p00() {
    grp_fu_14497_p00 = esl_zext<16,8>(in_buf_25_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14507_p0() {
    grp_fu_14507_p0 =  (sc_lv<8>) (grp_fu_14507_p00.read());
}

void mmult_hw::thread_grp_fu_14507_p00() {
    grp_fu_14507_p00 = esl_zext<16,8>(in_buf_25_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14517_p0() {
    grp_fu_14517_p0 =  (sc_lv<8>) (grp_fu_14517_p00.read());
}

void mmult_hw::thread_grp_fu_14517_p00() {
    grp_fu_14517_p00 = esl_zext<16,8>(in_buf_26_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14527_p0() {
    grp_fu_14527_p0 =  (sc_lv<8>) (grp_fu_14527_p00.read());
}

void mmult_hw::thread_grp_fu_14527_p00() {
    grp_fu_14527_p00 = esl_zext<16,8>(in_buf_26_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14537_p0() {
    grp_fu_14537_p0 =  (sc_lv<8>) (grp_fu_14537_p00.read());
}

void mmult_hw::thread_grp_fu_14537_p00() {
    grp_fu_14537_p00 = esl_zext<16,8>(in_buf_26_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14547_p0() {
    grp_fu_14547_p0 =  (sc_lv<8>) (grp_fu_14547_p00.read());
}

void mmult_hw::thread_grp_fu_14547_p00() {
    grp_fu_14547_p00 = esl_zext<16,8>(in_buf_26_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14557_p0() {
    grp_fu_14557_p0 =  (sc_lv<8>) (grp_fu_14557_p00.read());
}

void mmult_hw::thread_grp_fu_14557_p00() {
    grp_fu_14557_p00 = esl_zext<16,8>(in_buf_27_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14567_p0() {
    grp_fu_14567_p0 =  (sc_lv<8>) (grp_fu_14567_p00.read());
}

void mmult_hw::thread_grp_fu_14567_p00() {
    grp_fu_14567_p00 = esl_zext<16,8>(in_buf_27_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14577_p0() {
    grp_fu_14577_p0 =  (sc_lv<8>) (grp_fu_14577_p00.read());
}

void mmult_hw::thread_grp_fu_14577_p00() {
    grp_fu_14577_p00 = esl_zext<16,8>(in_buf_27_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14587_p0() {
    grp_fu_14587_p0 =  (sc_lv<8>) (grp_fu_14587_p00.read());
}

void mmult_hw::thread_grp_fu_14587_p00() {
    grp_fu_14587_p00 = esl_zext<16,8>(in_buf_27_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14597_p0() {
    grp_fu_14597_p0 =  (sc_lv<8>) (grp_fu_14597_p00.read());
}

void mmult_hw::thread_grp_fu_14597_p00() {
    grp_fu_14597_p00 = esl_zext<16,8>(in_buf_28_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14607_p0() {
    grp_fu_14607_p0 =  (sc_lv<8>) (grp_fu_14607_p00.read());
}

void mmult_hw::thread_grp_fu_14607_p00() {
    grp_fu_14607_p00 = esl_zext<16,8>(in_buf_28_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14617_p0() {
    grp_fu_14617_p0 =  (sc_lv<8>) (grp_fu_14617_p00.read());
}

void mmult_hw::thread_grp_fu_14617_p00() {
    grp_fu_14617_p00 = esl_zext<16,8>(in_buf_28_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14627_p0() {
    grp_fu_14627_p0 =  (sc_lv<8>) (grp_fu_14627_p00.read());
}

void mmult_hw::thread_grp_fu_14627_p00() {
    grp_fu_14627_p00 = esl_zext<16,8>(in_buf_28_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14637_p0() {
    grp_fu_14637_p0 =  (sc_lv<8>) (grp_fu_14637_p00.read());
}

void mmult_hw::thread_grp_fu_14637_p00() {
    grp_fu_14637_p00 = esl_zext<16,8>(in_buf_29_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14647_p0() {
    grp_fu_14647_p0 =  (sc_lv<8>) (grp_fu_14647_p00.read());
}

void mmult_hw::thread_grp_fu_14647_p00() {
    grp_fu_14647_p00 = esl_zext<16,8>(in_buf_29_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14657_p0() {
    grp_fu_14657_p0 =  (sc_lv<8>) (grp_fu_14657_p00.read());
}

void mmult_hw::thread_grp_fu_14657_p00() {
    grp_fu_14657_p00 = esl_zext<16,8>(in_buf_29_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14667_p0() {
    grp_fu_14667_p0 =  (sc_lv<8>) (grp_fu_14667_p00.read());
}

void mmult_hw::thread_grp_fu_14667_p00() {
    grp_fu_14667_p00 = esl_zext<16,8>(in_buf_29_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14677_p0() {
    grp_fu_14677_p0 =  (sc_lv<8>) (grp_fu_14677_p00.read());
}

void mmult_hw::thread_grp_fu_14677_p00() {
    grp_fu_14677_p00 = esl_zext<16,8>(in_buf_30_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14687_p0() {
    grp_fu_14687_p0 =  (sc_lv<8>) (grp_fu_14687_p00.read());
}

void mmult_hw::thread_grp_fu_14687_p00() {
    grp_fu_14687_p00 = esl_zext<16,8>(in_buf_30_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14697_p0() {
    grp_fu_14697_p0 =  (sc_lv<8>) (grp_fu_14697_p00.read());
}

void mmult_hw::thread_grp_fu_14697_p00() {
    grp_fu_14697_p00 = esl_zext<16,8>(in_buf_30_5_V_q0.read());
}

void mmult_hw::thread_grp_fu_14707_p0() {
    grp_fu_14707_p0 =  (sc_lv<8>) (grp_fu_14707_p00.read());
}

void mmult_hw::thread_grp_fu_14707_p00() {
    grp_fu_14707_p00 = esl_zext<16,8>(in_buf_30_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_14717_p0() {
    grp_fu_14717_p0 =  (sc_lv<8>) (grp_fu_14717_p00.read());
}

void mmult_hw::thread_grp_fu_14717_p00() {
    grp_fu_14717_p00 = esl_zext<16,8>(in_buf_31_1_V_q0.read());
}

void mmult_hw::thread_grp_fu_14727_p0() {
    grp_fu_14727_p0 =  (sc_lv<8>) (grp_fu_14727_p00.read());
}

void mmult_hw::thread_grp_fu_14727_p00() {
    grp_fu_14727_p00 = esl_zext<16,8>(in_buf_31_3_V_q0.read());
}

void mmult_hw::thread_grp_fu_14737_p0() {
    grp_fu_14737_p0 =  (sc_lv<8>) (grp_fu_14737_p00.read());
}

void mmult_hw::thread_grp_fu_14737_p00() {
    grp_fu_14737_p00 = esl_zext<16,8>(in_buf_31_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18045_p0() {
    grp_fu_18045_p0 =  (sc_lv<8>) (grp_fu_18045_p00.read());
}

void mmult_hw::thread_grp_fu_18045_p00() {
    grp_fu_18045_p00 = esl_zext<16,8>(in_buf_0_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18053_p0() {
    grp_fu_18053_p0 =  (sc_lv<8>) (grp_fu_18053_p00.read());
}

void mmult_hw::thread_grp_fu_18053_p00() {
    grp_fu_18053_p00 = esl_zext<16,8>(in_buf_0_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18061_p0() {
    grp_fu_18061_p0 =  (sc_lv<8>) (grp_fu_18061_p00.read());
}

void mmult_hw::thread_grp_fu_18061_p00() {
    grp_fu_18061_p00 = esl_zext<16,8>(in_buf_0_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18069_p0() {
    grp_fu_18069_p0 =  (sc_lv<8>) (grp_fu_18069_p00.read());
}

void mmult_hw::thread_grp_fu_18069_p00() {
    grp_fu_18069_p00 = esl_zext<16,8>(in_buf_0_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18077_p0() {
    grp_fu_18077_p0 =  (sc_lv<8>) (grp_fu_18077_p00.read());
}

void mmult_hw::thread_grp_fu_18077_p00() {
    grp_fu_18077_p00 = esl_zext<16,8>(in_buf_1_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18085_p0() {
    grp_fu_18085_p0 =  (sc_lv<8>) (grp_fu_18085_p00.read());
}

void mmult_hw::thread_grp_fu_18085_p00() {
    grp_fu_18085_p00 = esl_zext<16,8>(in_buf_1_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18093_p0() {
    grp_fu_18093_p0 =  (sc_lv<8>) (grp_fu_18093_p00.read());
}

void mmult_hw::thread_grp_fu_18093_p00() {
    grp_fu_18093_p00 = esl_zext<16,8>(in_buf_1_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18101_p0() {
    grp_fu_18101_p0 =  (sc_lv<8>) (grp_fu_18101_p00.read());
}

void mmult_hw::thread_grp_fu_18101_p00() {
    grp_fu_18101_p00 = esl_zext<16,8>(in_buf_1_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18109_p0() {
    grp_fu_18109_p0 =  (sc_lv<8>) (grp_fu_18109_p00.read());
}

void mmult_hw::thread_grp_fu_18109_p00() {
    grp_fu_18109_p00 = esl_zext<16,8>(in_buf_2_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18117_p0() {
    grp_fu_18117_p0 =  (sc_lv<8>) (grp_fu_18117_p00.read());
}

void mmult_hw::thread_grp_fu_18117_p00() {
    grp_fu_18117_p00 = esl_zext<16,8>(in_buf_2_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18125_p0() {
    grp_fu_18125_p0 =  (sc_lv<8>) (grp_fu_18125_p00.read());
}

void mmult_hw::thread_grp_fu_18125_p00() {
    grp_fu_18125_p00 = esl_zext<16,8>(in_buf_2_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18133_p0() {
    grp_fu_18133_p0 =  (sc_lv<8>) (grp_fu_18133_p00.read());
}

void mmult_hw::thread_grp_fu_18133_p00() {
    grp_fu_18133_p00 = esl_zext<16,8>(in_buf_2_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18141_p0() {
    grp_fu_18141_p0 =  (sc_lv<8>) (grp_fu_18141_p00.read());
}

void mmult_hw::thread_grp_fu_18141_p00() {
    grp_fu_18141_p00 = esl_zext<16,8>(in_buf_3_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18149_p0() {
    grp_fu_18149_p0 =  (sc_lv<8>) (grp_fu_18149_p00.read());
}

void mmult_hw::thread_grp_fu_18149_p00() {
    grp_fu_18149_p00 = esl_zext<16,8>(in_buf_3_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18157_p0() {
    grp_fu_18157_p0 =  (sc_lv<8>) (grp_fu_18157_p00.read());
}

void mmult_hw::thread_grp_fu_18157_p00() {
    grp_fu_18157_p00 = esl_zext<16,8>(in_buf_3_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18165_p0() {
    grp_fu_18165_p0 =  (sc_lv<8>) (grp_fu_18165_p00.read());
}

void mmult_hw::thread_grp_fu_18165_p00() {
    grp_fu_18165_p00 = esl_zext<16,8>(in_buf_3_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18173_p0() {
    grp_fu_18173_p0 =  (sc_lv<8>) (grp_fu_18173_p00.read());
}

void mmult_hw::thread_grp_fu_18173_p00() {
    grp_fu_18173_p00 = esl_zext<16,8>(in_buf_4_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18181_p0() {
    grp_fu_18181_p0 =  (sc_lv<8>) (grp_fu_18181_p00.read());
}

void mmult_hw::thread_grp_fu_18181_p00() {
    grp_fu_18181_p00 = esl_zext<16,8>(in_buf_4_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18189_p0() {
    grp_fu_18189_p0 =  (sc_lv<8>) (grp_fu_18189_p00.read());
}

void mmult_hw::thread_grp_fu_18189_p00() {
    grp_fu_18189_p00 = esl_zext<16,8>(in_buf_4_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18197_p0() {
    grp_fu_18197_p0 =  (sc_lv<8>) (grp_fu_18197_p00.read());
}

void mmult_hw::thread_grp_fu_18197_p00() {
    grp_fu_18197_p00 = esl_zext<16,8>(in_buf_4_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18205_p0() {
    grp_fu_18205_p0 =  (sc_lv<8>) (grp_fu_18205_p00.read());
}

void mmult_hw::thread_grp_fu_18205_p00() {
    grp_fu_18205_p00 = esl_zext<16,8>(in_buf_5_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18213_p0() {
    grp_fu_18213_p0 =  (sc_lv<8>) (grp_fu_18213_p00.read());
}

void mmult_hw::thread_grp_fu_18213_p00() {
    grp_fu_18213_p00 = esl_zext<16,8>(in_buf_5_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18221_p0() {
    grp_fu_18221_p0 =  (sc_lv<8>) (grp_fu_18221_p00.read());
}

void mmult_hw::thread_grp_fu_18221_p00() {
    grp_fu_18221_p00 = esl_zext<16,8>(in_buf_5_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18229_p0() {
    grp_fu_18229_p0 =  (sc_lv<8>) (grp_fu_18229_p00.read());
}

void mmult_hw::thread_grp_fu_18229_p00() {
    grp_fu_18229_p00 = esl_zext<16,8>(in_buf_5_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18237_p0() {
    grp_fu_18237_p0 =  (sc_lv<8>) (grp_fu_18237_p00.read());
}

void mmult_hw::thread_grp_fu_18237_p00() {
    grp_fu_18237_p00 = esl_zext<16,8>(in_buf_6_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18245_p0() {
    grp_fu_18245_p0 =  (sc_lv<8>) (grp_fu_18245_p00.read());
}

void mmult_hw::thread_grp_fu_18245_p00() {
    grp_fu_18245_p00 = esl_zext<16,8>(in_buf_6_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18253_p0() {
    grp_fu_18253_p0 =  (sc_lv<8>) (grp_fu_18253_p00.read());
}

void mmult_hw::thread_grp_fu_18253_p00() {
    grp_fu_18253_p00 = esl_zext<16,8>(in_buf_6_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18261_p0() {
    grp_fu_18261_p0 =  (sc_lv<8>) (grp_fu_18261_p00.read());
}

void mmult_hw::thread_grp_fu_18261_p00() {
    grp_fu_18261_p00 = esl_zext<16,8>(in_buf_6_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18269_p0() {
    grp_fu_18269_p0 =  (sc_lv<8>) (grp_fu_18269_p00.read());
}

void mmult_hw::thread_grp_fu_18269_p00() {
    grp_fu_18269_p00 = esl_zext<16,8>(in_buf_7_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18277_p0() {
    grp_fu_18277_p0 =  (sc_lv<8>) (grp_fu_18277_p00.read());
}

void mmult_hw::thread_grp_fu_18277_p00() {
    grp_fu_18277_p00 = esl_zext<16,8>(in_buf_7_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18285_p0() {
    grp_fu_18285_p0 =  (sc_lv<8>) (grp_fu_18285_p00.read());
}

void mmult_hw::thread_grp_fu_18285_p00() {
    grp_fu_18285_p00 = esl_zext<16,8>(in_buf_7_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18293_p0() {
    grp_fu_18293_p0 =  (sc_lv<8>) (grp_fu_18293_p00.read());
}

void mmult_hw::thread_grp_fu_18293_p00() {
    grp_fu_18293_p00 = esl_zext<16,8>(in_buf_7_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18301_p0() {
    grp_fu_18301_p0 =  (sc_lv<8>) (grp_fu_18301_p00.read());
}

void mmult_hw::thread_grp_fu_18301_p00() {
    grp_fu_18301_p00 = esl_zext<16,8>(in_buf_8_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18309_p0() {
    grp_fu_18309_p0 =  (sc_lv<8>) (grp_fu_18309_p00.read());
}

void mmult_hw::thread_grp_fu_18309_p00() {
    grp_fu_18309_p00 = esl_zext<16,8>(in_buf_8_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18317_p0() {
    grp_fu_18317_p0 =  (sc_lv<8>) (grp_fu_18317_p00.read());
}

void mmult_hw::thread_grp_fu_18317_p00() {
    grp_fu_18317_p00 = esl_zext<16,8>(in_buf_8_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18325_p0() {
    grp_fu_18325_p0 =  (sc_lv<8>) (grp_fu_18325_p00.read());
}

void mmult_hw::thread_grp_fu_18325_p00() {
    grp_fu_18325_p00 = esl_zext<16,8>(in_buf_8_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18333_p0() {
    grp_fu_18333_p0 =  (sc_lv<8>) (grp_fu_18333_p00.read());
}

void mmult_hw::thread_grp_fu_18333_p00() {
    grp_fu_18333_p00 = esl_zext<16,8>(in_buf_9_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18341_p0() {
    grp_fu_18341_p0 =  (sc_lv<8>) (grp_fu_18341_p00.read());
}

void mmult_hw::thread_grp_fu_18341_p00() {
    grp_fu_18341_p00 = esl_zext<16,8>(in_buf_9_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18349_p0() {
    grp_fu_18349_p0 =  (sc_lv<8>) (grp_fu_18349_p00.read());
}

void mmult_hw::thread_grp_fu_18349_p00() {
    grp_fu_18349_p00 = esl_zext<16,8>(in_buf_9_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18357_p0() {
    grp_fu_18357_p0 =  (sc_lv<8>) (grp_fu_18357_p00.read());
}

void mmult_hw::thread_grp_fu_18357_p00() {
    grp_fu_18357_p00 = esl_zext<16,8>(in_buf_9_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18365_p0() {
    grp_fu_18365_p0 =  (sc_lv<8>) (grp_fu_18365_p00.read());
}

void mmult_hw::thread_grp_fu_18365_p00() {
    grp_fu_18365_p00 = esl_zext<16,8>(in_buf_10_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18373_p0() {
    grp_fu_18373_p0 =  (sc_lv<8>) (grp_fu_18373_p00.read());
}

void mmult_hw::thread_grp_fu_18373_p00() {
    grp_fu_18373_p00 = esl_zext<16,8>(in_buf_10_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18381_p0() {
    grp_fu_18381_p0 =  (sc_lv<8>) (grp_fu_18381_p00.read());
}

void mmult_hw::thread_grp_fu_18381_p00() {
    grp_fu_18381_p00 = esl_zext<16,8>(in_buf_10_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18389_p0() {
    grp_fu_18389_p0 =  (sc_lv<8>) (grp_fu_18389_p00.read());
}

void mmult_hw::thread_grp_fu_18389_p00() {
    grp_fu_18389_p00 = esl_zext<16,8>(in_buf_10_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18397_p0() {
    grp_fu_18397_p0 =  (sc_lv<8>) (grp_fu_18397_p00.read());
}

void mmult_hw::thread_grp_fu_18397_p00() {
    grp_fu_18397_p00 = esl_zext<16,8>(in_buf_11_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18405_p0() {
    grp_fu_18405_p0 =  (sc_lv<8>) (grp_fu_18405_p00.read());
}

void mmult_hw::thread_grp_fu_18405_p00() {
    grp_fu_18405_p00 = esl_zext<16,8>(in_buf_11_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18413_p0() {
    grp_fu_18413_p0 =  (sc_lv<8>) (grp_fu_18413_p00.read());
}

void mmult_hw::thread_grp_fu_18413_p00() {
    grp_fu_18413_p00 = esl_zext<16,8>(in_buf_11_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18421_p0() {
    grp_fu_18421_p0 =  (sc_lv<8>) (grp_fu_18421_p00.read());
}

void mmult_hw::thread_grp_fu_18421_p00() {
    grp_fu_18421_p00 = esl_zext<16,8>(in_buf_11_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18429_p0() {
    grp_fu_18429_p0 =  (sc_lv<8>) (grp_fu_18429_p00.read());
}

void mmult_hw::thread_grp_fu_18429_p00() {
    grp_fu_18429_p00 = esl_zext<16,8>(in_buf_12_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18437_p0() {
    grp_fu_18437_p0 =  (sc_lv<8>) (grp_fu_18437_p00.read());
}

void mmult_hw::thread_grp_fu_18437_p00() {
    grp_fu_18437_p00 = esl_zext<16,8>(in_buf_12_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18445_p0() {
    grp_fu_18445_p0 =  (sc_lv<8>) (grp_fu_18445_p00.read());
}

void mmult_hw::thread_grp_fu_18445_p00() {
    grp_fu_18445_p00 = esl_zext<16,8>(in_buf_12_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18453_p0() {
    grp_fu_18453_p0 =  (sc_lv<8>) (grp_fu_18453_p00.read());
}

void mmult_hw::thread_grp_fu_18453_p00() {
    grp_fu_18453_p00 = esl_zext<16,8>(in_buf_12_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18461_p0() {
    grp_fu_18461_p0 =  (sc_lv<8>) (grp_fu_18461_p00.read());
}

void mmult_hw::thread_grp_fu_18461_p00() {
    grp_fu_18461_p00 = esl_zext<16,8>(in_buf_13_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18469_p0() {
    grp_fu_18469_p0 =  (sc_lv<8>) (grp_fu_18469_p00.read());
}

void mmult_hw::thread_grp_fu_18469_p00() {
    grp_fu_18469_p00 = esl_zext<16,8>(in_buf_13_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18477_p0() {
    grp_fu_18477_p0 =  (sc_lv<8>) (grp_fu_18477_p00.read());
}

void mmult_hw::thread_grp_fu_18477_p00() {
    grp_fu_18477_p00 = esl_zext<16,8>(in_buf_13_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18485_p0() {
    grp_fu_18485_p0 =  (sc_lv<8>) (grp_fu_18485_p00.read());
}

void mmult_hw::thread_grp_fu_18485_p00() {
    grp_fu_18485_p00 = esl_zext<16,8>(in_buf_13_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18493_p0() {
    grp_fu_18493_p0 =  (sc_lv<8>) (grp_fu_18493_p00.read());
}

void mmult_hw::thread_grp_fu_18493_p00() {
    grp_fu_18493_p00 = esl_zext<16,8>(in_buf_14_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18501_p0() {
    grp_fu_18501_p0 =  (sc_lv<8>) (grp_fu_18501_p00.read());
}

void mmult_hw::thread_grp_fu_18501_p00() {
    grp_fu_18501_p00 = esl_zext<16,8>(in_buf_14_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18509_p0() {
    grp_fu_18509_p0 =  (sc_lv<8>) (grp_fu_18509_p00.read());
}

void mmult_hw::thread_grp_fu_18509_p00() {
    grp_fu_18509_p00 = esl_zext<16,8>(in_buf_14_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18517_p0() {
    grp_fu_18517_p0 =  (sc_lv<8>) (grp_fu_18517_p00.read());
}

void mmult_hw::thread_grp_fu_18517_p00() {
    grp_fu_18517_p00 = esl_zext<16,8>(in_buf_14_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18525_p0() {
    grp_fu_18525_p0 =  (sc_lv<8>) (grp_fu_18525_p00.read());
}

void mmult_hw::thread_grp_fu_18525_p00() {
    grp_fu_18525_p00 = esl_zext<16,8>(in_buf_15_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18533_p0() {
    grp_fu_18533_p0 =  (sc_lv<8>) (grp_fu_18533_p00.read());
}

void mmult_hw::thread_grp_fu_18533_p00() {
    grp_fu_18533_p00 = esl_zext<16,8>(in_buf_15_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18541_p0() {
    grp_fu_18541_p0 =  (sc_lv<8>) (grp_fu_18541_p00.read());
}

void mmult_hw::thread_grp_fu_18541_p00() {
    grp_fu_18541_p00 = esl_zext<16,8>(in_buf_15_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18549_p0() {
    grp_fu_18549_p0 =  (sc_lv<8>) (grp_fu_18549_p00.read());
}

void mmult_hw::thread_grp_fu_18549_p00() {
    grp_fu_18549_p00 = esl_zext<16,8>(in_buf_15_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18557_p0() {
    grp_fu_18557_p0 =  (sc_lv<8>) (grp_fu_18557_p00.read());
}

void mmult_hw::thread_grp_fu_18557_p00() {
    grp_fu_18557_p00 = esl_zext<16,8>(in_buf_16_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18565_p0() {
    grp_fu_18565_p0 =  (sc_lv<8>) (grp_fu_18565_p00.read());
}

void mmult_hw::thread_grp_fu_18565_p00() {
    grp_fu_18565_p00 = esl_zext<16,8>(in_buf_16_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18573_p0() {
    grp_fu_18573_p0 =  (sc_lv<8>) (grp_fu_18573_p00.read());
}

void mmult_hw::thread_grp_fu_18573_p00() {
    grp_fu_18573_p00 = esl_zext<16,8>(in_buf_16_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18581_p0() {
    grp_fu_18581_p0 =  (sc_lv<8>) (grp_fu_18581_p00.read());
}

void mmult_hw::thread_grp_fu_18581_p00() {
    grp_fu_18581_p00 = esl_zext<16,8>(in_buf_16_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18589_p0() {
    grp_fu_18589_p0 =  (sc_lv<8>) (grp_fu_18589_p00.read());
}

void mmult_hw::thread_grp_fu_18589_p00() {
    grp_fu_18589_p00 = esl_zext<16,8>(in_buf_17_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18597_p0() {
    grp_fu_18597_p0 =  (sc_lv<8>) (grp_fu_18597_p00.read());
}

void mmult_hw::thread_grp_fu_18597_p00() {
    grp_fu_18597_p00 = esl_zext<16,8>(in_buf_17_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18605_p0() {
    grp_fu_18605_p0 =  (sc_lv<8>) (grp_fu_18605_p00.read());
}

void mmult_hw::thread_grp_fu_18605_p00() {
    grp_fu_18605_p00 = esl_zext<16,8>(in_buf_17_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18613_p0() {
    grp_fu_18613_p0 =  (sc_lv<8>) (grp_fu_18613_p00.read());
}

void mmult_hw::thread_grp_fu_18613_p00() {
    grp_fu_18613_p00 = esl_zext<16,8>(in_buf_17_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18621_p0() {
    grp_fu_18621_p0 =  (sc_lv<8>) (grp_fu_18621_p00.read());
}

void mmult_hw::thread_grp_fu_18621_p00() {
    grp_fu_18621_p00 = esl_zext<16,8>(in_buf_18_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18629_p0() {
    grp_fu_18629_p0 =  (sc_lv<8>) (grp_fu_18629_p00.read());
}

void mmult_hw::thread_grp_fu_18629_p00() {
    grp_fu_18629_p00 = esl_zext<16,8>(in_buf_18_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18637_p0() {
    grp_fu_18637_p0 =  (sc_lv<8>) (grp_fu_18637_p00.read());
}

void mmult_hw::thread_grp_fu_18637_p00() {
    grp_fu_18637_p00 = esl_zext<16,8>(in_buf_18_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18645_p0() {
    grp_fu_18645_p0 =  (sc_lv<8>) (grp_fu_18645_p00.read());
}

void mmult_hw::thread_grp_fu_18645_p00() {
    grp_fu_18645_p00 = esl_zext<16,8>(in_buf_18_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18653_p0() {
    grp_fu_18653_p0 =  (sc_lv<8>) (grp_fu_18653_p00.read());
}

void mmult_hw::thread_grp_fu_18653_p00() {
    grp_fu_18653_p00 = esl_zext<16,8>(in_buf_19_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18661_p0() {
    grp_fu_18661_p0 =  (sc_lv<8>) (grp_fu_18661_p00.read());
}

void mmult_hw::thread_grp_fu_18661_p00() {
    grp_fu_18661_p00 = esl_zext<16,8>(in_buf_19_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18669_p0() {
    grp_fu_18669_p0 =  (sc_lv<8>) (grp_fu_18669_p00.read());
}

void mmult_hw::thread_grp_fu_18669_p00() {
    grp_fu_18669_p00 = esl_zext<16,8>(in_buf_19_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18677_p0() {
    grp_fu_18677_p0 =  (sc_lv<8>) (grp_fu_18677_p00.read());
}

void mmult_hw::thread_grp_fu_18677_p00() {
    grp_fu_18677_p00 = esl_zext<16,8>(in_buf_19_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18685_p0() {
    grp_fu_18685_p0 =  (sc_lv<8>) (grp_fu_18685_p00.read());
}

void mmult_hw::thread_grp_fu_18685_p00() {
    grp_fu_18685_p00 = esl_zext<16,8>(in_buf_20_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18693_p0() {
    grp_fu_18693_p0 =  (sc_lv<8>) (grp_fu_18693_p00.read());
}

void mmult_hw::thread_grp_fu_18693_p00() {
    grp_fu_18693_p00 = esl_zext<16,8>(in_buf_20_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18701_p0() {
    grp_fu_18701_p0 =  (sc_lv<8>) (grp_fu_18701_p00.read());
}

void mmult_hw::thread_grp_fu_18701_p00() {
    grp_fu_18701_p00 = esl_zext<16,8>(in_buf_20_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18709_p0() {
    grp_fu_18709_p0 =  (sc_lv<8>) (grp_fu_18709_p00.read());
}

void mmult_hw::thread_grp_fu_18709_p00() {
    grp_fu_18709_p00 = esl_zext<16,8>(in_buf_20_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18717_p0() {
    grp_fu_18717_p0 =  (sc_lv<8>) (grp_fu_18717_p00.read());
}

void mmult_hw::thread_grp_fu_18717_p00() {
    grp_fu_18717_p00 = esl_zext<16,8>(in_buf_21_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18725_p0() {
    grp_fu_18725_p0 =  (sc_lv<8>) (grp_fu_18725_p00.read());
}

void mmult_hw::thread_grp_fu_18725_p00() {
    grp_fu_18725_p00 = esl_zext<16,8>(in_buf_21_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18733_p0() {
    grp_fu_18733_p0 =  (sc_lv<8>) (grp_fu_18733_p00.read());
}

void mmult_hw::thread_grp_fu_18733_p00() {
    grp_fu_18733_p00 = esl_zext<16,8>(in_buf_21_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18741_p0() {
    grp_fu_18741_p0 =  (sc_lv<8>) (grp_fu_18741_p00.read());
}

void mmult_hw::thread_grp_fu_18741_p00() {
    grp_fu_18741_p00 = esl_zext<16,8>(in_buf_21_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18749_p0() {
    grp_fu_18749_p0 =  (sc_lv<8>) (grp_fu_18749_p00.read());
}

void mmult_hw::thread_grp_fu_18749_p00() {
    grp_fu_18749_p00 = esl_zext<16,8>(in_buf_22_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18757_p0() {
    grp_fu_18757_p0 =  (sc_lv<8>) (grp_fu_18757_p00.read());
}

void mmult_hw::thread_grp_fu_18757_p00() {
    grp_fu_18757_p00 = esl_zext<16,8>(in_buf_22_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18765_p0() {
    grp_fu_18765_p0 =  (sc_lv<8>) (grp_fu_18765_p00.read());
}

void mmult_hw::thread_grp_fu_18765_p00() {
    grp_fu_18765_p00 = esl_zext<16,8>(in_buf_22_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18773_p0() {
    grp_fu_18773_p0 =  (sc_lv<8>) (grp_fu_18773_p00.read());
}

void mmult_hw::thread_grp_fu_18773_p00() {
    grp_fu_18773_p00 = esl_zext<16,8>(in_buf_22_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18781_p0() {
    grp_fu_18781_p0 =  (sc_lv<8>) (grp_fu_18781_p00.read());
}

void mmult_hw::thread_grp_fu_18781_p00() {
    grp_fu_18781_p00 = esl_zext<16,8>(in_buf_23_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18789_p0() {
    grp_fu_18789_p0 =  (sc_lv<8>) (grp_fu_18789_p00.read());
}

void mmult_hw::thread_grp_fu_18789_p00() {
    grp_fu_18789_p00 = esl_zext<16,8>(in_buf_23_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18797_p0() {
    grp_fu_18797_p0 =  (sc_lv<8>) (grp_fu_18797_p00.read());
}

void mmult_hw::thread_grp_fu_18797_p00() {
    grp_fu_18797_p00 = esl_zext<16,8>(in_buf_23_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18805_p0() {
    grp_fu_18805_p0 =  (sc_lv<8>) (grp_fu_18805_p00.read());
}

void mmult_hw::thread_grp_fu_18805_p00() {
    grp_fu_18805_p00 = esl_zext<16,8>(in_buf_23_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18813_p0() {
    grp_fu_18813_p0 =  (sc_lv<8>) (grp_fu_18813_p00.read());
}

void mmult_hw::thread_grp_fu_18813_p00() {
    grp_fu_18813_p00 = esl_zext<16,8>(in_buf_24_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18821_p0() {
    grp_fu_18821_p0 =  (sc_lv<8>) (grp_fu_18821_p00.read());
}

void mmult_hw::thread_grp_fu_18821_p00() {
    grp_fu_18821_p00 = esl_zext<16,8>(in_buf_24_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18829_p0() {
    grp_fu_18829_p0 =  (sc_lv<8>) (grp_fu_18829_p00.read());
}

void mmult_hw::thread_grp_fu_18829_p00() {
    grp_fu_18829_p00 = esl_zext<16,8>(in_buf_24_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18837_p0() {
    grp_fu_18837_p0 =  (sc_lv<8>) (grp_fu_18837_p00.read());
}

void mmult_hw::thread_grp_fu_18837_p00() {
    grp_fu_18837_p00 = esl_zext<16,8>(in_buf_24_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18845_p0() {
    grp_fu_18845_p0 =  (sc_lv<8>) (grp_fu_18845_p00.read());
}

void mmult_hw::thread_grp_fu_18845_p00() {
    grp_fu_18845_p00 = esl_zext<16,8>(in_buf_25_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18853_p0() {
    grp_fu_18853_p0 =  (sc_lv<8>) (grp_fu_18853_p00.read());
}

void mmult_hw::thread_grp_fu_18853_p00() {
    grp_fu_18853_p00 = esl_zext<16,8>(in_buf_25_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18861_p0() {
    grp_fu_18861_p0 =  (sc_lv<8>) (grp_fu_18861_p00.read());
}

void mmult_hw::thread_grp_fu_18861_p00() {
    grp_fu_18861_p00 = esl_zext<16,8>(in_buf_25_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18869_p0() {
    grp_fu_18869_p0 =  (sc_lv<8>) (grp_fu_18869_p00.read());
}

void mmult_hw::thread_grp_fu_18869_p00() {
    grp_fu_18869_p00 = esl_zext<16,8>(in_buf_25_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18877_p0() {
    grp_fu_18877_p0 =  (sc_lv<8>) (grp_fu_18877_p00.read());
}

void mmult_hw::thread_grp_fu_18877_p00() {
    grp_fu_18877_p00 = esl_zext<16,8>(in_buf_26_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18885_p0() {
    grp_fu_18885_p0 =  (sc_lv<8>) (grp_fu_18885_p00.read());
}

void mmult_hw::thread_grp_fu_18885_p00() {
    grp_fu_18885_p00 = esl_zext<16,8>(in_buf_26_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18893_p0() {
    grp_fu_18893_p0 =  (sc_lv<8>) (grp_fu_18893_p00.read());
}

void mmult_hw::thread_grp_fu_18893_p00() {
    grp_fu_18893_p00 = esl_zext<16,8>(in_buf_26_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18901_p0() {
    grp_fu_18901_p0 =  (sc_lv<8>) (grp_fu_18901_p00.read());
}

void mmult_hw::thread_grp_fu_18901_p00() {
    grp_fu_18901_p00 = esl_zext<16,8>(in_buf_26_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18909_p0() {
    grp_fu_18909_p0 =  (sc_lv<8>) (grp_fu_18909_p00.read());
}

void mmult_hw::thread_grp_fu_18909_p00() {
    grp_fu_18909_p00 = esl_zext<16,8>(in_buf_27_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18917_p0() {
    grp_fu_18917_p0 =  (sc_lv<8>) (grp_fu_18917_p00.read());
}

void mmult_hw::thread_grp_fu_18917_p00() {
    grp_fu_18917_p00 = esl_zext<16,8>(in_buf_27_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18925_p0() {
    grp_fu_18925_p0 =  (sc_lv<8>) (grp_fu_18925_p00.read());
}

void mmult_hw::thread_grp_fu_18925_p00() {
    grp_fu_18925_p00 = esl_zext<16,8>(in_buf_27_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18933_p0() {
    grp_fu_18933_p0 =  (sc_lv<8>) (grp_fu_18933_p00.read());
}

void mmult_hw::thread_grp_fu_18933_p00() {
    grp_fu_18933_p00 = esl_zext<16,8>(in_buf_27_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18941_p0() {
    grp_fu_18941_p0 =  (sc_lv<8>) (grp_fu_18941_p00.read());
}

void mmult_hw::thread_grp_fu_18941_p00() {
    grp_fu_18941_p00 = esl_zext<16,8>(in_buf_28_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18949_p0() {
    grp_fu_18949_p0 =  (sc_lv<8>) (grp_fu_18949_p00.read());
}

void mmult_hw::thread_grp_fu_18949_p00() {
    grp_fu_18949_p00 = esl_zext<16,8>(in_buf_28_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18957_p0() {
    grp_fu_18957_p0 =  (sc_lv<8>) (grp_fu_18957_p00.read());
}

void mmult_hw::thread_grp_fu_18957_p00() {
    grp_fu_18957_p00 = esl_zext<16,8>(in_buf_28_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18965_p0() {
    grp_fu_18965_p0 =  (sc_lv<8>) (grp_fu_18965_p00.read());
}

void mmult_hw::thread_grp_fu_18965_p00() {
    grp_fu_18965_p00 = esl_zext<16,8>(in_buf_28_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_18973_p0() {
    grp_fu_18973_p0 =  (sc_lv<8>) (grp_fu_18973_p00.read());
}

void mmult_hw::thread_grp_fu_18973_p00() {
    grp_fu_18973_p00 = esl_zext<16,8>(in_buf_29_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_18981_p0() {
    grp_fu_18981_p0 =  (sc_lv<8>) (grp_fu_18981_p00.read());
}

void mmult_hw::thread_grp_fu_18981_p00() {
    grp_fu_18981_p00 = esl_zext<16,8>(in_buf_29_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_18989_p0() {
    grp_fu_18989_p0 =  (sc_lv<8>) (grp_fu_18989_p00.read());
}

void mmult_hw::thread_grp_fu_18989_p00() {
    grp_fu_18989_p00 = esl_zext<16,8>(in_buf_29_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_18997_p0() {
    grp_fu_18997_p0 =  (sc_lv<8>) (grp_fu_18997_p00.read());
}

void mmult_hw::thread_grp_fu_18997_p00() {
    grp_fu_18997_p00 = esl_zext<16,8>(in_buf_29_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_19005_p0() {
    grp_fu_19005_p0 =  (sc_lv<8>) (grp_fu_19005_p00.read());
}

void mmult_hw::thread_grp_fu_19005_p00() {
    grp_fu_19005_p00 = esl_zext<16,8>(in_buf_30_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_19013_p0() {
    grp_fu_19013_p0 =  (sc_lv<8>) (grp_fu_19013_p00.read());
}

void mmult_hw::thread_grp_fu_19013_p00() {
    grp_fu_19013_p00 = esl_zext<16,8>(in_buf_30_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_19021_p0() {
    grp_fu_19021_p0 =  (sc_lv<8>) (grp_fu_19021_p00.read());
}

void mmult_hw::thread_grp_fu_19021_p00() {
    grp_fu_19021_p00 = esl_zext<16,8>(in_buf_30_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_19029_p0() {
    grp_fu_19029_p0 =  (sc_lv<8>) (grp_fu_19029_p00.read());
}

void mmult_hw::thread_grp_fu_19029_p00() {
    grp_fu_19029_p00 = esl_zext<16,8>(in_buf_30_6_V_q0.read());
}

void mmult_hw::thread_grp_fu_19037_p0() {
    grp_fu_19037_p0 =  (sc_lv<8>) (grp_fu_19037_p00.read());
}

void mmult_hw::thread_grp_fu_19037_p00() {
    grp_fu_19037_p00 = esl_zext<16,8>(in_buf_31_0_V_q0.read());
}

void mmult_hw::thread_grp_fu_19045_p0() {
    grp_fu_19045_p0 =  (sc_lv<8>) (grp_fu_19045_p00.read());
}

void mmult_hw::thread_grp_fu_19045_p00() {
    grp_fu_19045_p00 = esl_zext<16,8>(in_buf_31_2_V_q0.read());
}

void mmult_hw::thread_grp_fu_19053_p0() {
    grp_fu_19053_p0 =  (sc_lv<8>) (grp_fu_19053_p00.read());
}

void mmult_hw::thread_grp_fu_19053_p00() {
    grp_fu_19053_p00 = esl_zext<16,8>(in_buf_31_4_V_q0.read());
}

void mmult_hw::thread_grp_fu_19061_p0() {
    grp_fu_19061_p0 =  (sc_lv<8>) (grp_fu_19061_p00.read());
}

void mmult_hw::thread_grp_fu_19061_p00() {
    grp_fu_19061_p00 = esl_zext<16,8>(in_buf_31_7_V_q0.read());
}

void mmult_hw::thread_grp_fu_19069_p0() {
    grp_fu_19069_p0 =  (sc_lv<8>) (grp_fu_19069_p00.read());
}

void mmult_hw::thread_grp_fu_19069_p00() {
    grp_fu_19069_p00 = esl_zext<16,8>(in_buf_31_5_V_load_reg_25858.read());
}

void mmult_hw::thread_i4_phi_fu_11311_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_21730.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        i4_phi_fu_11311_p4 = tmp_23_mid2_v_reg_21744.read();
    } else {
        i4_phi_fu_11311_p4 = i4_reg_11307.read();
    }
}

void mmult_hw::thread_i_1_fu_11948_p2() {
    i_1_fu_11948_p2 = (!ap_const_lv4_2.is_01() || !i_reg_11149.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_2) + sc_biguint<4>(i_reg_11149.read()));
}

void mmult_hw::thread_i_2_fu_11960_p2() {
    i_2_fu_11960_p2 = (!i2_reg_11185.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i2_reg_11185.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void mmult_hw::thread_i_3_fu_12322_p2() {
    i_3_fu_12322_p2 = (!i3_reg_11264.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i3_reg_11264.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void mmult_hw::thread_i_4_fu_12669_p2() {
    i_4_fu_12669_p2 = (!i4_phi_fu_11311_p4.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i4_phi_fu_11311_p4.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void mmult_hw::thread_i_5_fu_17924_p2() {
    i_5_fu_17924_p2 = (!i5_reg_11350.read().is_01() || !ap_const_lv7_1.is_01())? sc_lv<7>(): (sc_biguint<7>(i5_reg_11350.read()) + sc_biguint<7>(ap_const_lv7_1));
}

void mmult_hw::thread_in_buf_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_0_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_0_V_address0 = in_buf_0_0_V_addr_reg_20432.read();
    } else {
        in_buf_0_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_0_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_0_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0))) {
        in_buf_0_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_1_V_address0 = in_buf_0_1_V_addr_reg_20592.read();
    } else {
        in_buf_0_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_0_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_0_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_1_V_d0() {
    in_buf_0_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_0_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0))) {
        in_buf_0_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_0_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_2_V_address0 = in_buf_0_2_V_addr_reg_20752.read();
    } else {
        in_buf_0_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_0_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_0_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_2_V_d0() {
    in_buf_0_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_0_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0))) {
        in_buf_0_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_3_V_address0 = in_buf_0_3_V_addr_reg_20912.read();
    } else {
        in_buf_0_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_0_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_0_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_3_V_d0() {
    in_buf_0_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_0_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0))) {
        in_buf_0_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_0_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_4_V_address0 = in_buf_0_4_V_addr_reg_21072.read();
    } else {
        in_buf_0_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_0_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_0_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_4_V_d0() {
    in_buf_0_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_0_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0))) {
        in_buf_0_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_5_V_address0 = in_buf_0_5_V_addr_reg_21232.read();
    } else {
        in_buf_0_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_0_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_0_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_5_V_d0() {
    in_buf_0_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_0_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0))) {
        in_buf_0_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_0_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_6_V_address0 = in_buf_0_6_V_addr_reg_21392.read();
    } else {
        in_buf_0_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_0_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_0_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_6_V_d0() {
    in_buf_0_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_0_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0))) {
        in_buf_0_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_7_V_address0 = in_buf_0_7_V_addr_reg_21552.read();
    } else {
        in_buf_0_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_0_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_0_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_7_V_d0() {
    in_buf_0_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_0_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_0))) {
        in_buf_0_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_10_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_0_V_address0 = in_buf_10_0_V_addr_reg_20482.read();
    } else {
        in_buf_10_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_10_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_10_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A))) {
        in_buf_10_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_1_V_address0 = in_buf_10_1_V_addr_reg_20642.read();
    } else {
        in_buf_10_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_10_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_10_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_1_V_d0() {
    in_buf_10_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_10_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A))) {
        in_buf_10_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_10_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_2_V_address0 = in_buf_10_2_V_addr_reg_20802.read();
    } else {
        in_buf_10_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_10_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_10_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_2_V_d0() {
    in_buf_10_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_10_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A))) {
        in_buf_10_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_3_V_address0 = in_buf_10_3_V_addr_reg_20962.read();
    } else {
        in_buf_10_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_10_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_10_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_3_V_d0() {
    in_buf_10_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_10_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A))) {
        in_buf_10_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_10_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_4_V_address0 = in_buf_10_4_V_addr_reg_21122.read();
    } else {
        in_buf_10_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_10_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_10_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_4_V_d0() {
    in_buf_10_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_10_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A))) {
        in_buf_10_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_5_V_address0 = in_buf_10_5_V_addr_reg_21282.read();
    } else {
        in_buf_10_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_10_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_10_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_5_V_d0() {
    in_buf_10_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_10_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A))) {
        in_buf_10_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_10_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_6_V_address0 = in_buf_10_6_V_addr_reg_21442.read();
    } else {
        in_buf_10_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_10_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_10_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_6_V_d0() {
    in_buf_10_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_10_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A))) {
        in_buf_10_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_7_V_address0 = in_buf_10_7_V_addr_reg_21602.read();
    } else {
        in_buf_10_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_10_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_10_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_7_V_d0() {
    in_buf_10_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_10_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_A))) {
        in_buf_10_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_11_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_0_V_address0 = in_buf_11_0_V_addr_reg_20487.read();
    } else {
        in_buf_11_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_11_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_11_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B))) {
        in_buf_11_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_1_V_address0 = in_buf_11_1_V_addr_reg_20647.read();
    } else {
        in_buf_11_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_11_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_11_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_1_V_d0() {
    in_buf_11_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_11_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B))) {
        in_buf_11_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_11_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_2_V_address0 = in_buf_11_2_V_addr_reg_20807.read();
    } else {
        in_buf_11_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_11_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_11_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_2_V_d0() {
    in_buf_11_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_11_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B))) {
        in_buf_11_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_3_V_address0 = in_buf_11_3_V_addr_reg_20967.read();
    } else {
        in_buf_11_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_11_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_11_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_3_V_d0() {
    in_buf_11_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_11_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B))) {
        in_buf_11_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_11_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_4_V_address0 = in_buf_11_4_V_addr_reg_21127.read();
    } else {
        in_buf_11_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_11_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_11_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_4_V_d0() {
    in_buf_11_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_11_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B))) {
        in_buf_11_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_5_V_address0 = in_buf_11_5_V_addr_reg_21287.read();
    } else {
        in_buf_11_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_11_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_11_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_5_V_d0() {
    in_buf_11_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_11_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B))) {
        in_buf_11_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_11_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_6_V_address0 = in_buf_11_6_V_addr_reg_21447.read();
    } else {
        in_buf_11_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_11_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_11_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_6_V_d0() {
    in_buf_11_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_11_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B))) {
        in_buf_11_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_7_V_address0 = in_buf_11_7_V_addr_reg_21607.read();
    } else {
        in_buf_11_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_11_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_11_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_7_V_d0() {
    in_buf_11_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_11_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_B))) {
        in_buf_11_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_12_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_0_V_address0 = in_buf_12_0_V_addr_reg_20492.read();
    } else {
        in_buf_12_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_12_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_12_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C))) {
        in_buf_12_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_1_V_address0 = in_buf_12_1_V_addr_reg_20652.read();
    } else {
        in_buf_12_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_12_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_12_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_1_V_d0() {
    in_buf_12_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_12_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C))) {
        in_buf_12_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_12_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_2_V_address0 = in_buf_12_2_V_addr_reg_20812.read();
    } else {
        in_buf_12_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_12_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_12_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_2_V_d0() {
    in_buf_12_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_12_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C))) {
        in_buf_12_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_3_V_address0 = in_buf_12_3_V_addr_reg_20972.read();
    } else {
        in_buf_12_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_12_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_12_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_3_V_d0() {
    in_buf_12_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_12_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C))) {
        in_buf_12_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_12_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_4_V_address0 = in_buf_12_4_V_addr_reg_21132.read();
    } else {
        in_buf_12_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_12_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_12_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_4_V_d0() {
    in_buf_12_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_12_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C))) {
        in_buf_12_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_5_V_address0 = in_buf_12_5_V_addr_reg_21292.read();
    } else {
        in_buf_12_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_12_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_12_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_5_V_d0() {
    in_buf_12_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_12_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C))) {
        in_buf_12_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_12_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_6_V_address0 = in_buf_12_6_V_addr_reg_21452.read();
    } else {
        in_buf_12_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_12_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_12_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_6_V_d0() {
    in_buf_12_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_12_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C))) {
        in_buf_12_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_7_V_address0 = in_buf_12_7_V_addr_reg_21612.read();
    } else {
        in_buf_12_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_12_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_12_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_7_V_d0() {
    in_buf_12_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_12_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_C))) {
        in_buf_12_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_13_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_0_V_address0 = in_buf_13_0_V_addr_reg_20497.read();
    } else {
        in_buf_13_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_13_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_13_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D))) {
        in_buf_13_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_1_V_address0 = in_buf_13_1_V_addr_reg_20657.read();
    } else {
        in_buf_13_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_13_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_13_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_1_V_d0() {
    in_buf_13_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_13_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D))) {
        in_buf_13_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_13_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_2_V_address0 = in_buf_13_2_V_addr_reg_20817.read();
    } else {
        in_buf_13_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_13_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_13_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_2_V_d0() {
    in_buf_13_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_13_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D))) {
        in_buf_13_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_3_V_address0 = in_buf_13_3_V_addr_reg_20977.read();
    } else {
        in_buf_13_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_13_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_13_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_3_V_d0() {
    in_buf_13_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_13_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D))) {
        in_buf_13_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_13_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_4_V_address0 = in_buf_13_4_V_addr_reg_21137.read();
    } else {
        in_buf_13_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_13_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_13_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_4_V_d0() {
    in_buf_13_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_13_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D))) {
        in_buf_13_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_5_V_address0 = in_buf_13_5_V_addr_reg_21297.read();
    } else {
        in_buf_13_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_13_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_13_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_5_V_d0() {
    in_buf_13_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_13_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D))) {
        in_buf_13_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_13_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_6_V_address0 = in_buf_13_6_V_addr_reg_21457.read();
    } else {
        in_buf_13_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_13_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_13_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_6_V_d0() {
    in_buf_13_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_13_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D))) {
        in_buf_13_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_7_V_address0 = in_buf_13_7_V_addr_reg_21617.read();
    } else {
        in_buf_13_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_13_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_13_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_7_V_d0() {
    in_buf_13_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_13_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_D))) {
        in_buf_13_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_14_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_0_V_address0 = in_buf_14_0_V_addr_reg_20502.read();
    } else {
        in_buf_14_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_14_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_14_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E))) {
        in_buf_14_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_1_V_address0 = in_buf_14_1_V_addr_reg_20662.read();
    } else {
        in_buf_14_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_14_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_14_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_1_V_d0() {
    in_buf_14_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_14_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E))) {
        in_buf_14_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_14_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_2_V_address0 = in_buf_14_2_V_addr_reg_20822.read();
    } else {
        in_buf_14_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_14_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_14_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_2_V_d0() {
    in_buf_14_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_14_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E))) {
        in_buf_14_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_3_V_address0 = in_buf_14_3_V_addr_reg_20982.read();
    } else {
        in_buf_14_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_14_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_14_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_3_V_d0() {
    in_buf_14_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_14_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E))) {
        in_buf_14_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_14_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_4_V_address0 = in_buf_14_4_V_addr_reg_21142.read();
    } else {
        in_buf_14_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_14_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_14_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_4_V_d0() {
    in_buf_14_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_14_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E))) {
        in_buf_14_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_5_V_address0 = in_buf_14_5_V_addr_reg_21302.read();
    } else {
        in_buf_14_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_14_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_14_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_5_V_d0() {
    in_buf_14_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_14_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E))) {
        in_buf_14_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_14_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_6_V_address0 = in_buf_14_6_V_addr_reg_21462.read();
    } else {
        in_buf_14_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_14_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_14_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_6_V_d0() {
    in_buf_14_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_14_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E))) {
        in_buf_14_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_7_V_address0 = in_buf_14_7_V_addr_reg_21622.read();
    } else {
        in_buf_14_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_14_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_14_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_7_V_d0() {
    in_buf_14_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_14_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_E))) {
        in_buf_14_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_15_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_0_V_address0 = in_buf_15_0_V_addr_reg_20507.read();
    } else {
        in_buf_15_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_15_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_15_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F))) {
        in_buf_15_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_1_V_address0 = in_buf_15_1_V_addr_reg_20667.read();
    } else {
        in_buf_15_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_15_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_15_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_1_V_d0() {
    in_buf_15_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_15_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F))) {
        in_buf_15_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_15_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_2_V_address0 = in_buf_15_2_V_addr_reg_20827.read();
    } else {
        in_buf_15_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_15_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_15_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_2_V_d0() {
    in_buf_15_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_15_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F))) {
        in_buf_15_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_3_V_address0 = in_buf_15_3_V_addr_reg_20987.read();
    } else {
        in_buf_15_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_15_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_15_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_3_V_d0() {
    in_buf_15_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_15_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F))) {
        in_buf_15_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_15_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_4_V_address0 = in_buf_15_4_V_addr_reg_21147.read();
    } else {
        in_buf_15_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_15_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_15_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_4_V_d0() {
    in_buf_15_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_15_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F))) {
        in_buf_15_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_5_V_address0 = in_buf_15_5_V_addr_reg_21307.read();
    } else {
        in_buf_15_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_15_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_15_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_5_V_d0() {
    in_buf_15_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_15_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F))) {
        in_buf_15_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_15_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_6_V_address0 = in_buf_15_6_V_addr_reg_21467.read();
    } else {
        in_buf_15_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_15_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_15_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_6_V_d0() {
    in_buf_15_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_15_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F))) {
        in_buf_15_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_7_V_address0 = in_buf_15_7_V_addr_reg_21627.read();
    } else {
        in_buf_15_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_15_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_15_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_7_V_d0() {
    in_buf_15_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_15_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_F))) {
        in_buf_15_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_16_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_0_V_address0 = in_buf_16_0_V_addr_reg_20512.read();
    } else {
        in_buf_16_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_16_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_16_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10))) {
        in_buf_16_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_1_V_address0 = in_buf_16_1_V_addr_reg_20672.read();
    } else {
        in_buf_16_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_16_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_16_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_1_V_d0() {
    in_buf_16_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_16_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10))) {
        in_buf_16_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_16_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_2_V_address0 = in_buf_16_2_V_addr_reg_20832.read();
    } else {
        in_buf_16_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_16_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_16_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_2_V_d0() {
    in_buf_16_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_16_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10))) {
        in_buf_16_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_3_V_address0 = in_buf_16_3_V_addr_reg_20992.read();
    } else {
        in_buf_16_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_16_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_16_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_3_V_d0() {
    in_buf_16_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_16_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10))) {
        in_buf_16_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_16_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_4_V_address0 = in_buf_16_4_V_addr_reg_21152.read();
    } else {
        in_buf_16_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_16_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_16_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_4_V_d0() {
    in_buf_16_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_16_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10))) {
        in_buf_16_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_5_V_address0 = in_buf_16_5_V_addr_reg_21312.read();
    } else {
        in_buf_16_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_16_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_16_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_5_V_d0() {
    in_buf_16_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_16_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10))) {
        in_buf_16_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_16_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_6_V_address0 = in_buf_16_6_V_addr_reg_21472.read();
    } else {
        in_buf_16_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_16_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_16_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_6_V_d0() {
    in_buf_16_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_16_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10))) {
        in_buf_16_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_7_V_address0 = in_buf_16_7_V_addr_reg_21632.read();
    } else {
        in_buf_16_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_16_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_16_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_7_V_d0() {
    in_buf_16_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_16_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_10))) {
        in_buf_16_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_17_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_0_V_address0 = in_buf_17_0_V_addr_reg_20517.read();
    } else {
        in_buf_17_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_17_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_17_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11))) {
        in_buf_17_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_1_V_address0 = in_buf_17_1_V_addr_reg_20677.read();
    } else {
        in_buf_17_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_17_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_17_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_1_V_d0() {
    in_buf_17_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_17_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11))) {
        in_buf_17_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_17_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_2_V_address0 = in_buf_17_2_V_addr_reg_20837.read();
    } else {
        in_buf_17_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_17_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_17_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_2_V_d0() {
    in_buf_17_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_17_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11))) {
        in_buf_17_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_3_V_address0 = in_buf_17_3_V_addr_reg_20997.read();
    } else {
        in_buf_17_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_17_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_17_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_3_V_d0() {
    in_buf_17_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_17_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11))) {
        in_buf_17_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_17_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_4_V_address0 = in_buf_17_4_V_addr_reg_21157.read();
    } else {
        in_buf_17_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_17_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_17_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_4_V_d0() {
    in_buf_17_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_17_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11))) {
        in_buf_17_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_5_V_address0 = in_buf_17_5_V_addr_reg_21317.read();
    } else {
        in_buf_17_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_17_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_17_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_5_V_d0() {
    in_buf_17_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_17_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11))) {
        in_buf_17_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_17_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_6_V_address0 = in_buf_17_6_V_addr_reg_21477.read();
    } else {
        in_buf_17_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_17_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_17_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_6_V_d0() {
    in_buf_17_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_17_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11))) {
        in_buf_17_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_7_V_address0 = in_buf_17_7_V_addr_reg_21637.read();
    } else {
        in_buf_17_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_17_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_17_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_7_V_d0() {
    in_buf_17_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_17_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_11))) {
        in_buf_17_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_18_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_0_V_address0 = in_buf_18_0_V_addr_reg_20522.read();
    } else {
        in_buf_18_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_18_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_18_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12))) {
        in_buf_18_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_1_V_address0 = in_buf_18_1_V_addr_reg_20682.read();
    } else {
        in_buf_18_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_18_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_18_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_1_V_d0() {
    in_buf_18_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_18_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12))) {
        in_buf_18_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_18_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_2_V_address0 = in_buf_18_2_V_addr_reg_20842.read();
    } else {
        in_buf_18_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_18_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_18_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_2_V_d0() {
    in_buf_18_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_18_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12))) {
        in_buf_18_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_3_V_address0 = in_buf_18_3_V_addr_reg_21002.read();
    } else {
        in_buf_18_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_18_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_18_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_3_V_d0() {
    in_buf_18_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_18_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12))) {
        in_buf_18_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_18_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_4_V_address0 = in_buf_18_4_V_addr_reg_21162.read();
    } else {
        in_buf_18_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_18_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_18_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_4_V_d0() {
    in_buf_18_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_18_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12))) {
        in_buf_18_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_5_V_address0 = in_buf_18_5_V_addr_reg_21322.read();
    } else {
        in_buf_18_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_18_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_18_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_5_V_d0() {
    in_buf_18_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_18_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12))) {
        in_buf_18_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_18_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_6_V_address0 = in_buf_18_6_V_addr_reg_21482.read();
    } else {
        in_buf_18_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_18_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_18_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_6_V_d0() {
    in_buf_18_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_18_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12))) {
        in_buf_18_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_7_V_address0 = in_buf_18_7_V_addr_reg_21642.read();
    } else {
        in_buf_18_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_18_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_18_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_7_V_d0() {
    in_buf_18_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_18_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_12))) {
        in_buf_18_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_19_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_0_V_address0 = in_buf_19_0_V_addr_reg_20527.read();
    } else {
        in_buf_19_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_19_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_19_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13))) {
        in_buf_19_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_1_V_address0 = in_buf_19_1_V_addr_reg_20687.read();
    } else {
        in_buf_19_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_19_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_19_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_1_V_d0() {
    in_buf_19_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_19_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13))) {
        in_buf_19_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_19_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_2_V_address0 = in_buf_19_2_V_addr_reg_20847.read();
    } else {
        in_buf_19_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_19_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_19_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_2_V_d0() {
    in_buf_19_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_19_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13))) {
        in_buf_19_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_3_V_address0 = in_buf_19_3_V_addr_reg_21007.read();
    } else {
        in_buf_19_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_19_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_19_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_3_V_d0() {
    in_buf_19_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_19_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13))) {
        in_buf_19_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_19_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_4_V_address0 = in_buf_19_4_V_addr_reg_21167.read();
    } else {
        in_buf_19_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_19_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_19_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_4_V_d0() {
    in_buf_19_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_19_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13))) {
        in_buf_19_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_5_V_address0 = in_buf_19_5_V_addr_reg_21327.read();
    } else {
        in_buf_19_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_19_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_19_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_5_V_d0() {
    in_buf_19_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_19_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13))) {
        in_buf_19_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_19_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_6_V_address0 = in_buf_19_6_V_addr_reg_21487.read();
    } else {
        in_buf_19_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_19_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_19_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_6_V_d0() {
    in_buf_19_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_19_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13))) {
        in_buf_19_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_7_V_address0 = in_buf_19_7_V_addr_reg_21647.read();
    } else {
        in_buf_19_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_19_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_19_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_7_V_d0() {
    in_buf_19_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_19_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_13))) {
        in_buf_19_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_1_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_0_V_address0 = in_buf_1_0_V_addr_reg_20437.read();
    } else {
        in_buf_1_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_1_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_1_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1))) {
        in_buf_1_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_1_V_address0 = in_buf_1_1_V_addr_reg_20597.read();
    } else {
        in_buf_1_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_1_1_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_1_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_1_V_d0() {
    in_buf_1_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_in_buf_1_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1))) {
        in_buf_1_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_1_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_2_V_address0 = in_buf_1_2_V_addr_reg_20757.read();
    } else {
        in_buf_1_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_1_2_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_1_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_2_V_d0() {
    in_buf_1_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_in_buf_1_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1))) {
        in_buf_1_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_3_V_address0 = in_buf_1_3_V_addr_reg_20917.read();
    } else {
        in_buf_1_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_1_3_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_1_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_3_V_d0() {
    in_buf_1_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_in_buf_1_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1))) {
        in_buf_1_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_1_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_4_V_address0 = in_buf_1_4_V_addr_reg_21077.read();
    } else {
        in_buf_1_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_1_4_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_1_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_4_V_d0() {
    in_buf_1_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_in_buf_1_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1))) {
        in_buf_1_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_5_V_address0 = in_buf_1_5_V_addr_reg_21237.read();
    } else {
        in_buf_1_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_1_5_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_1_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_5_V_d0() {
    in_buf_1_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_in_buf_1_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1))) {
        in_buf_1_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_1_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_6_V_address0 = in_buf_1_6_V_addr_reg_21397.read();
    } else {
        in_buf_1_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_1_6_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_1_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_6_V_d0() {
    in_buf_1_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_in_buf_1_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1))) {
        in_buf_1_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_7_V_address0 = in_buf_1_7_V_addr_reg_21557.read();
    } else {
        in_buf_1_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_1_7_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_1_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_7_V_d0() {
    in_buf_1_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_in_buf_1_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_1))) {
        in_buf_1_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_20_0_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_0_V_address0 = in_buf_20_0_V_addr_reg_20532.read();
    } else {
        in_buf_20_0_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        in_buf_20_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_20_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14))) {
        in_buf_20_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_1_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_1_V_address0 = in_buf_20_1_V_addr_reg_20692.read();
    } else {
        in_buf_20_1_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14))) {
        in_buf_20_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_20_2_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_2_V_address0 = in_buf_20_2_V_addr_reg_20852.read();
    } else {
        in_buf_20_2_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14))) {
        in_buf_20_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_3_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_3_V_address0 = in_buf_20_3_V_addr_reg_21012.read();
    } else {
        in_buf_20_3_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14))) {
        in_buf_20_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_20_4_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_4_V_address0 = in_buf_20_4_V_addr_reg_21172.read();
    } else {
        in_buf_20_4_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14))) {
        in_buf_20_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_5_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_5_V_address0 = in_buf_20_5_V_addr_reg_21332.read();
    } else {
        in_buf_20_5_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14))) {
        in_buf_20_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        in_buf_20_6_V_address0 =  (sc_lv<6>) (ap_reg_pp3_iter1_tmp_23_mid2_reg_21751.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_6_V_address0 = in_buf_20_6_V_addr_reg_21492.read();
    } else {
        in_buf_20_6_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14))) {
        in_buf_20_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_7_V_address0 =  (sc_lv<6>) (tmp_23_mid2_fu_12697_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_7_V_address0 = in_buf_20_7_V_addr_reg_21652.read();
    } else {
        in_buf_20_7_V_address0 = "XXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21721.read(), ap_const_lv6_14))) {
        in_buf_20_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_7_V_we0 = ap_const_logic_0;
    }
}

}

