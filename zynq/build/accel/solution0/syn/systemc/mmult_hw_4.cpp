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
    ap_CS_fsm_pp4_stage0 = ap_CS_fsm.read()[12];
}

void mmult_hw::thread_ap_CS_fsm_pp4_stage1() {
    ap_CS_fsm_pp4_stage1 = ap_CS_fsm.read()[13];
}

void mmult_hw::thread_ap_CS_fsm_pp4_stage2() {
    ap_CS_fsm_pp4_stage2 = ap_CS_fsm.read()[14];
}

void mmult_hw::thread_ap_CS_fsm_pp4_stage3() {
    ap_CS_fsm_pp4_stage3 = ap_CS_fsm.read()[15];
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

void mmult_hw::thread_ap_CS_fsm_state28() {
    ap_CS_fsm_state28 = ap_CS_fsm.read()[11];
}

void mmult_hw::thread_ap_CS_fsm_state35() {
    ap_CS_fsm_state35 = ap_CS_fsm.read()[16];
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
    ap_block_pp0_stage0_flag00011001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19226.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_pp0_stage0_flag00011011() {
    ap_block_pp0_stage0_flag00011011 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp0_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19226.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_pp1_stage0_flag00000000() {
    ap_block_pp1_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp1_stage0_flag00011001() {
    ap_block_pp1_stage0_flag00011001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20594.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_pp1_stage0_flag00011011() {
    ap_block_pp1_stage0_flag00011011 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20594.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_pp2_stage0_flag00000000() {
    ap_block_pp2_stage0_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp2_stage0_flag00011001() {
    ap_block_pp2_stage0_flag00011001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21920.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_pp2_stage0_flag00011011() {
    ap_block_pp2_stage0_flag00011011 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21920.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
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
    ap_block_pp4_stage0_flag00011001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state33_io.read()));
}

void mmult_hw::thread_ap_block_pp4_stage0_flag00011011() {
    ap_block_pp4_stage0_flag00011011 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state33_io.read()));
}

void mmult_hw::thread_ap_block_pp4_stage1_flag00000000() {
    ap_block_pp4_stage1_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp4_stage1_flag00001001() {
    ap_block_pp4_stage1_flag00001001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp4_stage1_flag00011001() {
    ap_block_pp4_stage1_flag00011001 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state34_io.read()));
}

void mmult_hw::thread_ap_block_pp4_stage1_flag00011011() {
    ap_block_pp4_stage1_flag00011011 = (esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && esl_seteq<1,1,1>(ap_const_boolean_1, ap_block_state34_io.read()));
}

void mmult_hw::thread_ap_block_pp4_stage2_flag00000000() {
    ap_block_pp4_stage2_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp4_stage2_flag00011001() {
    ap_block_pp4_stage2_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp4_stage2_flag00011011() {
    ap_block_pp4_stage2_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp4_stage3_flag00000000() {
    ap_block_pp4_stage3_flag00000000 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp4_stage3_flag00011001() {
    ap_block_pp4_stage3_flag00011001 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_pp4_stage3_flag00011011() {
    ap_block_pp4_stage3_flag00011011 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state11_pp2_stage0_iter0() {
    ap_block_state11_pp2_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state12_pp2_stage0_iter1() {
    ap_block_state12_pp2_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond6_reg_21920.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
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

void mmult_hw::thread_ap_block_state22_pp3_stage0_iter8() {
    ap_block_state22_pp3_stage0_iter8 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state23_pp3_stage0_iter9() {
    ap_block_state23_pp3_stage0_iter9 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state24_pp3_stage0_iter10() {
    ap_block_state24_pp3_stage0_iter10 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state25_pp3_stage0_iter11() {
    ap_block_state25_pp3_stage0_iter11 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state26_pp3_stage0_iter12() {
    ap_block_state26_pp3_stage0_iter12 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state27_pp3_stage0_iter13() {
    ap_block_state27_pp3_stage0_iter13 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state29_pp4_stage0_iter0() {
    ap_block_state29_pp4_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state2_pp0_stage0_iter0() {
    ap_block_state2_pp0_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state30_pp4_stage1_iter0() {
    ap_block_state30_pp4_stage1_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state31_pp4_stage2_iter0() {
    ap_block_state31_pp4_stage2_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state32_pp4_stage3_iter0() {
    ap_block_state32_pp4_stage3_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state33_io() {
    ap_block_state33_io = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_28682.read()) && esl_seteq<1,1,1>(ap_const_logic_0, out_stream_data_V_1_ack_in.read()));
}

void mmult_hw::thread_ap_block_state33_pp4_stage0_iter1() {
    ap_block_state33_pp4_stage0_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state34_io() {
    ap_block_state34_io = (esl_seteq<1,1,1>(ap_const_lv1_0, ap_reg_pp4_iter1_exitcond_reg_28682.read()) && esl_seteq<1,1,1>(ap_const_logic_0, out_stream_data_V_1_ack_in.read()));
}

void mmult_hw::thread_ap_block_state34_pp4_stage1_iter1() {
    ap_block_state34_pp4_stage1_iter1 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state3_pp0_stage0_iter1() {
    ap_block_state3_pp0_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond1_reg_19226.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_state6_pp1_stage0_iter0() {
    ap_block_state6_pp1_stage0_iter0 = !esl_seteq<1,1,1>(ap_const_boolean_1, ap_const_boolean_1);
}

void mmult_hw::thread_ap_block_state7_pp1_stage0_iter1() {
    ap_block_state7_pp1_stage0_iter1 = (esl_seteq<1,1,1>(ap_const_lv1_0, exitcond3_reg_20594.read()) && esl_seteq<1,1,1>(ap_const_logic_0, in_stream_data_V_0_vld_out.read()));
}

void mmult_hw::thread_ap_block_state9() {
    ap_block_state9 = (esl_seteq<1,1,1>(ap_const_logic_0, out_stream_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_last_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_id_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_dest_V_1_ack_in.read()));
}

void mmult_hw::thread_ap_condition_pp0_exit_iter0_state2() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond1_fu_12000_p2.read())) {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_1;
    } else {
        ap_condition_pp0_exit_iter0_state2 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_condition_pp1_exit_iter0_state6() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond3_fu_12328_p2.read())) {
        ap_condition_pp1_exit_iter0_state6 = ap_const_logic_1;
    } else {
        ap_condition_pp1_exit_iter0_state6 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_condition_pp2_exit_iter0_state11() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond6_fu_12690_p2.read())) {
        ap_condition_pp2_exit_iter0_state11 = ap_const_logic_1;
    } else {
        ap_condition_pp2_exit_iter0_state11 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_condition_pp3_exit_iter0_state14() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_flatten_fu_12753_p2.read())) {
        ap_condition_pp3_exit_iter0_state14 = ap_const_logic_1;
    } else {
        ap_condition_pp3_exit_iter0_state14 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_condition_pp4_exit_iter0_state29() {
    if (esl_seteq<1,1,1>(ap_const_lv1_1, exitcond_fu_18031_p2.read())) {
        ap_condition_pp4_exit_iter0_state29 = ap_const_logic_1;
    } else {
        ap_condition_pp4_exit_iter0_state29 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_done() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, out_stream_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_last_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_id_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_dest_V_1_ack_in.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_13_fu_12398_p3.read()))) {
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
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter7.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter8.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter9.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter10.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter11.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter12.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp3_iter13.read()))) {
        ap_idle_pp3 = ap_const_logic_1;
    } else {
        ap_idle_pp3 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_idle_pp4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_0, ap_enable_reg_pp4_iter1.read()))) {
        ap_idle_pp4 = ap_const_logic_1;
    } else {
        ap_idle_pp4 = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_ready() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_state9.read()) && 
         !(esl_seteq<1,1,1>(ap_const_logic_0, out_stream_data_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_keep_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_strb_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_user_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_last_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_id_V_1_ack_in.read()) || esl_seteq<1,1,1>(ap_const_logic_0, out_stream_dest_V_1_ack_in.read())) && 
         esl_seteq<1,1,1>(ap_const_lv1_1, tmp_13_fu_12398_p3.read()))) {
        ap_ready = ap_const_logic_1;
    } else {
        ap_ready = ap_const_logic_0;
    }
}

void mmult_hw::thread_ap_rst_n_inv() {
    ap_rst_n_inv =  (sc_logic) (~ap_rst_n.read());
}

void mmult_hw::thread_exitcond1_fu_12000_p2() {
    exitcond1_fu_12000_p2 = (!is_idx_reg_11254.read().is_01() || !ap_const_lv3_5.is_01())? sc_lv<1>(): sc_lv<1>(is_idx_reg_11254.read() == ap_const_lv3_5);
}

void mmult_hw::thread_exitcond2_fu_12050_p2() {
    exitcond2_fu_12050_p2 = (!i2_reg_11301.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(i2_reg_11301.read() == ap_const_lv4_A);
}

void mmult_hw::thread_exitcond3_fu_12328_p2() {
    exitcond3_fu_12328_p2 = (!is_idx_2_reg_11312.read().is_01() || !indvars_iv1_reg_11277.read().is_01())? sc_lv<1>(): sc_lv<1>(is_idx_2_reg_11312.read() == indvars_iv1_reg_11277.read());
}

void mmult_hw::thread_exitcond4_fu_12412_p2() {
    exitcond4_fu_12412_p2 = (!i3_reg_11392.read().is_01() || !ap_const_lv8_80.is_01())? sc_lv<1>(): sc_lv<1>(i3_reg_11392.read() == ap_const_lv8_80);
}

void mmult_hw::thread_exitcond6_fu_12690_p2() {
    exitcond6_fu_12690_p2 = (!is_idx_5_reg_11403.read().is_01() || !is_idx_6_reg_20634.read().is_01())? sc_lv<1>(): sc_lv<1>(is_idx_5_reg_11403.read() == is_idx_6_reg_20634.read());
}

void mmult_hw::thread_exitcond_flatten_fu_12753_p2() {
    exitcond_flatten_fu_12753_p2 = (!indvar_flatten_reg_11424.read().is_01() || !ap_const_lv11_500.is_01())? sc_lv<1>(): sc_lv<1>(indvar_flatten_reg_11424.read() == ap_const_lv11_500);
}

void mmult_hw::thread_exitcond_fu_18031_p2() {
    exitcond_fu_18031_p2 = (!os_idx_1_phi_fu_11460_p4.read().is_01() || !indvars_iv_reg_11333.read().is_01())? sc_lv<1>(): sc_lv<1>(os_idx_1_phi_fu_11460_p4.read() == indvars_iv_reg_11333.read());
}

void mmult_hw::thread_extLd1_fu_18138_p1() {
    extLd1_fu_18138_p1 = esl_zext<8,4>(out_buf_V_load_1_reg_28726.read());
}

void mmult_hw::thread_extLd2_fu_18141_p1() {
    extLd2_fu_18141_p1 = esl_zext<8,4>(out_buf_V_load_2_reg_28741.read());
}

void mmult_hw::thread_extLd3_fu_18144_p1() {
    extLd3_fu_18144_p1 = esl_zext<8,4>(out_buf_V_load_3_reg_28746.read());
}

void mmult_hw::thread_extLd4_fu_18147_p1() {
    extLd4_fu_18147_p1 = esl_zext<8,4>(out_buf_V_load_4_reg_28761.read());
}

void mmult_hw::thread_extLd5_fu_18150_p1() {
    extLd5_fu_18150_p1 = esl_zext<8,4>(out_buf_V_load_5_reg_28766.read());
}

void mmult_hw::thread_extLd6_fu_18153_p1() {
    extLd6_fu_18153_p1 = esl_zext<8,4>(out_buf_V_q1.read());
}

void mmult_hw::thread_extLd_fu_18135_p1() {
    extLd_fu_18135_p1 = esl_zext<8,4>(out_buf_V_load_reg_28721.read());
}

void mmult_hw::thread_grp_fu_12820_p1() {
    grp_fu_12820_p1 =  (sc_lv<8>) (grp_fu_12820_p10.read());
}

void mmult_hw::thread_grp_fu_12820_p10() {
    grp_fu_12820_p10 = esl_zext<16,8>(in_buf_31_7_V_load_reg_22867.read());
}

void mmult_hw::thread_grp_fu_13208_p1() {
    grp_fu_13208_p1 =  (sc_lv<8>) (grp_fu_13208_p10.read());
}

void mmult_hw::thread_grp_fu_13208_p10() {
    grp_fu_13208_p10 = esl_zext<16,8>(in_buf_0_0_V_load_reg_23141.read());
}

void mmult_hw::thread_grp_fu_13218_p1() {
    grp_fu_13218_p1 =  (sc_lv<8>) (grp_fu_13218_p10.read());
}

void mmult_hw::thread_grp_fu_13218_p10() {
    grp_fu_13218_p10 = esl_zext<16,8>(in_buf_0_1_V_load_reg_23146.read());
}

void mmult_hw::thread_grp_fu_13228_p1() {
    grp_fu_13228_p1 =  (sc_lv<8>) (grp_fu_13228_p10.read());
}

void mmult_hw::thread_grp_fu_13228_p10() {
    grp_fu_13228_p10 = esl_zext<16,8>(in_buf_0_3_V_load_reg_23151.read());
}

void mmult_hw::thread_grp_fu_13238_p1() {
    grp_fu_13238_p1 =  (sc_lv<8>) (grp_fu_13238_p10.read());
}

void mmult_hw::thread_grp_fu_13238_p10() {
    grp_fu_13238_p10 = esl_zext<16,8>(in_buf_0_5_V_load_reg_23156.read());
}

void mmult_hw::thread_grp_fu_13248_p1() {
    grp_fu_13248_p1 =  (sc_lv<8>) (grp_fu_13248_p10.read());
}

void mmult_hw::thread_grp_fu_13248_p10() {
    grp_fu_13248_p10 = esl_zext<16,8>(in_buf_0_7_V_load_reg_23161.read());
}

void mmult_hw::thread_grp_fu_13258_p1() {
    grp_fu_13258_p1 =  (sc_lv<8>) (grp_fu_13258_p10.read());
}

void mmult_hw::thread_grp_fu_13258_p10() {
    grp_fu_13258_p10 = esl_zext<16,8>(in_buf_1_1_V_load_reg_23166.read());
}

void mmult_hw::thread_grp_fu_13268_p1() {
    grp_fu_13268_p1 =  (sc_lv<8>) (grp_fu_13268_p10.read());
}

void mmult_hw::thread_grp_fu_13268_p10() {
    grp_fu_13268_p10 = esl_zext<16,8>(in_buf_1_3_V_load_reg_23171.read());
}

void mmult_hw::thread_grp_fu_13278_p1() {
    grp_fu_13278_p1 =  (sc_lv<8>) (grp_fu_13278_p10.read());
}

void mmult_hw::thread_grp_fu_13278_p10() {
    grp_fu_13278_p10 = esl_zext<16,8>(in_buf_1_5_V_load_reg_23176.read());
}

void mmult_hw::thread_grp_fu_13288_p1() {
    grp_fu_13288_p1 =  (sc_lv<8>) (grp_fu_13288_p10.read());
}

void mmult_hw::thread_grp_fu_13288_p10() {
    grp_fu_13288_p10 = esl_zext<16,8>(in_buf_1_7_V_load_reg_23181.read());
}

void mmult_hw::thread_grp_fu_13298_p1() {
    grp_fu_13298_p1 =  (sc_lv<8>) (grp_fu_13298_p10.read());
}

void mmult_hw::thread_grp_fu_13298_p10() {
    grp_fu_13298_p10 = esl_zext<16,8>(in_buf_2_1_V_load_reg_23186.read());
}

void mmult_hw::thread_grp_fu_13308_p1() {
    grp_fu_13308_p1 =  (sc_lv<8>) (grp_fu_13308_p10.read());
}

void mmult_hw::thread_grp_fu_13308_p10() {
    grp_fu_13308_p10 = esl_zext<16,8>(in_buf_2_3_V_load_reg_23191.read());
}

void mmult_hw::thread_grp_fu_13318_p1() {
    grp_fu_13318_p1 =  (sc_lv<8>) (grp_fu_13318_p10.read());
}

void mmult_hw::thread_grp_fu_13318_p10() {
    grp_fu_13318_p10 = esl_zext<16,8>(in_buf_2_5_V_load_reg_23196.read());
}

void mmult_hw::thread_grp_fu_13328_p1() {
    grp_fu_13328_p1 =  (sc_lv<8>) (grp_fu_13328_p10.read());
}

void mmult_hw::thread_grp_fu_13328_p10() {
    grp_fu_13328_p10 = esl_zext<16,8>(in_buf_2_7_V_load_reg_23201.read());
}

void mmult_hw::thread_grp_fu_13338_p1() {
    grp_fu_13338_p1 =  (sc_lv<8>) (grp_fu_13338_p10.read());
}

void mmult_hw::thread_grp_fu_13338_p10() {
    grp_fu_13338_p10 = esl_zext<16,8>(in_buf_3_1_V_load_reg_23206.read());
}

void mmult_hw::thread_grp_fu_13348_p1() {
    grp_fu_13348_p1 =  (sc_lv<8>) (grp_fu_13348_p10.read());
}

void mmult_hw::thread_grp_fu_13348_p10() {
    grp_fu_13348_p10 = esl_zext<16,8>(in_buf_3_3_V_load_reg_23211.read());
}

void mmult_hw::thread_grp_fu_13358_p1() {
    grp_fu_13358_p1 =  (sc_lv<8>) (grp_fu_13358_p10.read());
}

void mmult_hw::thread_grp_fu_13358_p10() {
    grp_fu_13358_p10 = esl_zext<16,8>(in_buf_3_5_V_load_reg_23216.read());
}

void mmult_hw::thread_grp_fu_13368_p1() {
    grp_fu_13368_p1 =  (sc_lv<8>) (grp_fu_13368_p10.read());
}

void mmult_hw::thread_grp_fu_13368_p10() {
    grp_fu_13368_p10 = esl_zext<16,8>(in_buf_3_7_V_load_reg_23221.read());
}

void mmult_hw::thread_grp_fu_13378_p1() {
    grp_fu_13378_p1 =  (sc_lv<8>) (grp_fu_13378_p10.read());
}

void mmult_hw::thread_grp_fu_13378_p10() {
    grp_fu_13378_p10 = esl_zext<16,8>(in_buf_4_1_V_load_reg_23226.read());
}

void mmult_hw::thread_grp_fu_13388_p1() {
    grp_fu_13388_p1 =  (sc_lv<8>) (grp_fu_13388_p10.read());
}

void mmult_hw::thread_grp_fu_13388_p10() {
    grp_fu_13388_p10 = esl_zext<16,8>(in_buf_4_3_V_load_reg_23231.read());
}

void mmult_hw::thread_grp_fu_13398_p1() {
    grp_fu_13398_p1 =  (sc_lv<8>) (grp_fu_13398_p10.read());
}

void mmult_hw::thread_grp_fu_13398_p10() {
    grp_fu_13398_p10 = esl_zext<16,8>(in_buf_4_5_V_load_reg_23236.read());
}

void mmult_hw::thread_grp_fu_13408_p1() {
    grp_fu_13408_p1 =  (sc_lv<8>) (grp_fu_13408_p10.read());
}

void mmult_hw::thread_grp_fu_13408_p10() {
    grp_fu_13408_p10 = esl_zext<16,8>(in_buf_4_7_V_load_reg_23241.read());
}

void mmult_hw::thread_grp_fu_13418_p1() {
    grp_fu_13418_p1 =  (sc_lv<8>) (grp_fu_13418_p10.read());
}

void mmult_hw::thread_grp_fu_13418_p10() {
    grp_fu_13418_p10 = esl_zext<16,8>(in_buf_5_1_V_load_reg_23246.read());
}

void mmult_hw::thread_grp_fu_13428_p1() {
    grp_fu_13428_p1 =  (sc_lv<8>) (grp_fu_13428_p10.read());
}

void mmult_hw::thread_grp_fu_13428_p10() {
    grp_fu_13428_p10 = esl_zext<16,8>(in_buf_5_3_V_load_reg_23251.read());
}

void mmult_hw::thread_grp_fu_13438_p1() {
    grp_fu_13438_p1 =  (sc_lv<8>) (grp_fu_13438_p10.read());
}

void mmult_hw::thread_grp_fu_13438_p10() {
    grp_fu_13438_p10 = esl_zext<16,8>(in_buf_5_5_V_load_reg_23256.read());
}

void mmult_hw::thread_grp_fu_13448_p1() {
    grp_fu_13448_p1 =  (sc_lv<8>) (grp_fu_13448_p10.read());
}

void mmult_hw::thread_grp_fu_13448_p10() {
    grp_fu_13448_p10 = esl_zext<16,8>(in_buf_5_7_V_load_reg_23261.read());
}

void mmult_hw::thread_grp_fu_13458_p1() {
    grp_fu_13458_p1 =  (sc_lv<8>) (grp_fu_13458_p10.read());
}

void mmult_hw::thread_grp_fu_13458_p10() {
    grp_fu_13458_p10 = esl_zext<16,8>(in_buf_6_1_V_load_reg_23266.read());
}

void mmult_hw::thread_grp_fu_13468_p1() {
    grp_fu_13468_p1 =  (sc_lv<8>) (grp_fu_13468_p10.read());
}

void mmult_hw::thread_grp_fu_13468_p10() {
    grp_fu_13468_p10 = esl_zext<16,8>(in_buf_6_3_V_load_reg_23271.read());
}

void mmult_hw::thread_grp_fu_13478_p1() {
    grp_fu_13478_p1 =  (sc_lv<8>) (grp_fu_13478_p10.read());
}

void mmult_hw::thread_grp_fu_13478_p10() {
    grp_fu_13478_p10 = esl_zext<16,8>(in_buf_6_5_V_load_reg_23276.read());
}

void mmult_hw::thread_grp_fu_13488_p1() {
    grp_fu_13488_p1 =  (sc_lv<8>) (grp_fu_13488_p10.read());
}

void mmult_hw::thread_grp_fu_13488_p10() {
    grp_fu_13488_p10 = esl_zext<16,8>(in_buf_6_7_V_load_reg_23281.read());
}

void mmult_hw::thread_grp_fu_13498_p1() {
    grp_fu_13498_p1 =  (sc_lv<8>) (grp_fu_13498_p10.read());
}

void mmult_hw::thread_grp_fu_13498_p10() {
    grp_fu_13498_p10 = esl_zext<16,8>(in_buf_7_1_V_load_reg_23286.read());
}

void mmult_hw::thread_grp_fu_13508_p1() {
    grp_fu_13508_p1 =  (sc_lv<8>) (grp_fu_13508_p10.read());
}

void mmult_hw::thread_grp_fu_13508_p10() {
    grp_fu_13508_p10 = esl_zext<16,8>(in_buf_7_3_V_load_reg_23291.read());
}

void mmult_hw::thread_grp_fu_13518_p1() {
    grp_fu_13518_p1 =  (sc_lv<8>) (grp_fu_13518_p10.read());
}

void mmult_hw::thread_grp_fu_13518_p10() {
    grp_fu_13518_p10 = esl_zext<16,8>(in_buf_7_5_V_load_reg_23296.read());
}

void mmult_hw::thread_grp_fu_13528_p1() {
    grp_fu_13528_p1 =  (sc_lv<8>) (grp_fu_13528_p10.read());
}

void mmult_hw::thread_grp_fu_13528_p10() {
    grp_fu_13528_p10 = esl_zext<16,8>(in_buf_7_7_V_load_reg_23301.read());
}

void mmult_hw::thread_grp_fu_13538_p1() {
    grp_fu_13538_p1 =  (sc_lv<8>) (grp_fu_13538_p10.read());
}

void mmult_hw::thread_grp_fu_13538_p10() {
    grp_fu_13538_p10 = esl_zext<16,8>(in_buf_8_1_V_load_reg_23306.read());
}

void mmult_hw::thread_grp_fu_13548_p1() {
    grp_fu_13548_p1 =  (sc_lv<8>) (grp_fu_13548_p10.read());
}

void mmult_hw::thread_grp_fu_13548_p10() {
    grp_fu_13548_p10 = esl_zext<16,8>(in_buf_8_3_V_load_reg_23311.read());
}

void mmult_hw::thread_grp_fu_13558_p1() {
    grp_fu_13558_p1 =  (sc_lv<8>) (grp_fu_13558_p10.read());
}

void mmult_hw::thread_grp_fu_13558_p10() {
    grp_fu_13558_p10 = esl_zext<16,8>(in_buf_8_5_V_load_reg_23316.read());
}

void mmult_hw::thread_grp_fu_13568_p1() {
    grp_fu_13568_p1 =  (sc_lv<8>) (grp_fu_13568_p10.read());
}

void mmult_hw::thread_grp_fu_13568_p10() {
    grp_fu_13568_p10 = esl_zext<16,8>(in_buf_8_7_V_load_reg_23321.read());
}

void mmult_hw::thread_grp_fu_13578_p1() {
    grp_fu_13578_p1 =  (sc_lv<8>) (grp_fu_13578_p10.read());
}

void mmult_hw::thread_grp_fu_13578_p10() {
    grp_fu_13578_p10 = esl_zext<16,8>(in_buf_9_1_V_load_reg_23326.read());
}

void mmult_hw::thread_grp_fu_13588_p1() {
    grp_fu_13588_p1 =  (sc_lv<8>) (grp_fu_13588_p10.read());
}

void mmult_hw::thread_grp_fu_13588_p10() {
    grp_fu_13588_p10 = esl_zext<16,8>(in_buf_9_3_V_load_reg_23331.read());
}

void mmult_hw::thread_grp_fu_13598_p1() {
    grp_fu_13598_p1 =  (sc_lv<8>) (grp_fu_13598_p10.read());
}

void mmult_hw::thread_grp_fu_13598_p10() {
    grp_fu_13598_p10 = esl_zext<16,8>(in_buf_9_5_V_load_reg_23336.read());
}

void mmult_hw::thread_grp_fu_13608_p1() {
    grp_fu_13608_p1 =  (sc_lv<8>) (grp_fu_13608_p10.read());
}

void mmult_hw::thread_grp_fu_13608_p10() {
    grp_fu_13608_p10 = esl_zext<16,8>(in_buf_9_7_V_load_reg_23341.read());
}

void mmult_hw::thread_grp_fu_13618_p1() {
    grp_fu_13618_p1 =  (sc_lv<8>) (grp_fu_13618_p10.read());
}

void mmult_hw::thread_grp_fu_13618_p10() {
    grp_fu_13618_p10 = esl_zext<16,8>(in_buf_10_1_V_load_reg_23346.read());
}

void mmult_hw::thread_grp_fu_13628_p1() {
    grp_fu_13628_p1 =  (sc_lv<8>) (grp_fu_13628_p10.read());
}

void mmult_hw::thread_grp_fu_13628_p10() {
    grp_fu_13628_p10 = esl_zext<16,8>(in_buf_10_3_V_load_reg_23351.read());
}

void mmult_hw::thread_grp_fu_13638_p1() {
    grp_fu_13638_p1 =  (sc_lv<8>) (grp_fu_13638_p10.read());
}

void mmult_hw::thread_grp_fu_13638_p10() {
    grp_fu_13638_p10 = esl_zext<16,8>(in_buf_10_5_V_load_reg_23356.read());
}

void mmult_hw::thread_grp_fu_13648_p1() {
    grp_fu_13648_p1 =  (sc_lv<8>) (grp_fu_13648_p10.read());
}

void mmult_hw::thread_grp_fu_13648_p10() {
    grp_fu_13648_p10 = esl_zext<16,8>(in_buf_10_7_V_load_reg_23361.read());
}

void mmult_hw::thread_grp_fu_13658_p1() {
    grp_fu_13658_p1 =  (sc_lv<8>) (grp_fu_13658_p10.read());
}

void mmult_hw::thread_grp_fu_13658_p10() {
    grp_fu_13658_p10 = esl_zext<16,8>(in_buf_11_1_V_load_reg_23366.read());
}

void mmult_hw::thread_grp_fu_13668_p1() {
    grp_fu_13668_p1 =  (sc_lv<8>) (grp_fu_13668_p10.read());
}

void mmult_hw::thread_grp_fu_13668_p10() {
    grp_fu_13668_p10 = esl_zext<16,8>(in_buf_11_3_V_load_reg_23371.read());
}

void mmult_hw::thread_grp_fu_13678_p1() {
    grp_fu_13678_p1 =  (sc_lv<8>) (grp_fu_13678_p10.read());
}

void mmult_hw::thread_grp_fu_13678_p10() {
    grp_fu_13678_p10 = esl_zext<16,8>(in_buf_11_5_V_load_reg_23376.read());
}

void mmult_hw::thread_grp_fu_13688_p1() {
    grp_fu_13688_p1 =  (sc_lv<8>) (grp_fu_13688_p10.read());
}

void mmult_hw::thread_grp_fu_13688_p10() {
    grp_fu_13688_p10 = esl_zext<16,8>(in_buf_11_7_V_load_reg_23381.read());
}

void mmult_hw::thread_grp_fu_13698_p1() {
    grp_fu_13698_p1 =  (sc_lv<8>) (grp_fu_13698_p10.read());
}

void mmult_hw::thread_grp_fu_13698_p10() {
    grp_fu_13698_p10 = esl_zext<16,8>(in_buf_12_1_V_load_reg_23386.read());
}

void mmult_hw::thread_grp_fu_13708_p1() {
    grp_fu_13708_p1 =  (sc_lv<8>) (grp_fu_13708_p10.read());
}

void mmult_hw::thread_grp_fu_13708_p10() {
    grp_fu_13708_p10 = esl_zext<16,8>(in_buf_12_3_V_load_reg_23391.read());
}

void mmult_hw::thread_grp_fu_13718_p1() {
    grp_fu_13718_p1 =  (sc_lv<8>) (grp_fu_13718_p10.read());
}

void mmult_hw::thread_grp_fu_13718_p10() {
    grp_fu_13718_p10 = esl_zext<16,8>(in_buf_12_5_V_load_reg_23396.read());
}

void mmult_hw::thread_grp_fu_13728_p1() {
    grp_fu_13728_p1 =  (sc_lv<8>) (grp_fu_13728_p10.read());
}

void mmult_hw::thread_grp_fu_13728_p10() {
    grp_fu_13728_p10 = esl_zext<16,8>(in_buf_12_7_V_load_reg_23401.read());
}

void mmult_hw::thread_grp_fu_13738_p1() {
    grp_fu_13738_p1 =  (sc_lv<8>) (grp_fu_13738_p10.read());
}

void mmult_hw::thread_grp_fu_13738_p10() {
    grp_fu_13738_p10 = esl_zext<16,8>(in_buf_13_1_V_load_reg_23406.read());
}

void mmult_hw::thread_grp_fu_13748_p1() {
    grp_fu_13748_p1 =  (sc_lv<8>) (grp_fu_13748_p10.read());
}

void mmult_hw::thread_grp_fu_13748_p10() {
    grp_fu_13748_p10 = esl_zext<16,8>(in_buf_13_3_V_load_reg_23411.read());
}

void mmult_hw::thread_grp_fu_13758_p1() {
    grp_fu_13758_p1 =  (sc_lv<8>) (grp_fu_13758_p10.read());
}

void mmult_hw::thread_grp_fu_13758_p10() {
    grp_fu_13758_p10 = esl_zext<16,8>(in_buf_13_5_V_load_reg_23416.read());
}

void mmult_hw::thread_grp_fu_13768_p1() {
    grp_fu_13768_p1 =  (sc_lv<8>) (grp_fu_13768_p10.read());
}

void mmult_hw::thread_grp_fu_13768_p10() {
    grp_fu_13768_p10 = esl_zext<16,8>(in_buf_13_7_V_load_reg_23421.read());
}

void mmult_hw::thread_grp_fu_13778_p1() {
    grp_fu_13778_p1 =  (sc_lv<8>) (grp_fu_13778_p10.read());
}

void mmult_hw::thread_grp_fu_13778_p10() {
    grp_fu_13778_p10 = esl_zext<16,8>(in_buf_14_1_V_load_reg_23426.read());
}

void mmult_hw::thread_grp_fu_13788_p1() {
    grp_fu_13788_p1 =  (sc_lv<8>) (grp_fu_13788_p10.read());
}

void mmult_hw::thread_grp_fu_13788_p10() {
    grp_fu_13788_p10 = esl_zext<16,8>(in_buf_14_3_V_load_reg_23431.read());
}

void mmult_hw::thread_grp_fu_13798_p1() {
    grp_fu_13798_p1 =  (sc_lv<8>) (grp_fu_13798_p10.read());
}

void mmult_hw::thread_grp_fu_13798_p10() {
    grp_fu_13798_p10 = esl_zext<16,8>(in_buf_14_5_V_load_reg_23436.read());
}

void mmult_hw::thread_grp_fu_13808_p1() {
    grp_fu_13808_p1 =  (sc_lv<8>) (grp_fu_13808_p10.read());
}

void mmult_hw::thread_grp_fu_13808_p10() {
    grp_fu_13808_p10 = esl_zext<16,8>(in_buf_14_7_V_load_reg_23441.read());
}

void mmult_hw::thread_grp_fu_13818_p1() {
    grp_fu_13818_p1 =  (sc_lv<8>) (grp_fu_13818_p10.read());
}

void mmult_hw::thread_grp_fu_13818_p10() {
    grp_fu_13818_p10 = esl_zext<16,8>(in_buf_15_1_V_load_reg_23446.read());
}

void mmult_hw::thread_grp_fu_13828_p1() {
    grp_fu_13828_p1 =  (sc_lv<8>) (grp_fu_13828_p10.read());
}

void mmult_hw::thread_grp_fu_13828_p10() {
    grp_fu_13828_p10 = esl_zext<16,8>(in_buf_15_3_V_load_reg_23451.read());
}

void mmult_hw::thread_grp_fu_13838_p1() {
    grp_fu_13838_p1 =  (sc_lv<8>) (grp_fu_13838_p10.read());
}

void mmult_hw::thread_grp_fu_13838_p10() {
    grp_fu_13838_p10 = esl_zext<16,8>(in_buf_16_0_V_load_reg_23461.read());
}

void mmult_hw::thread_grp_fu_13848_p1() {
    grp_fu_13848_p1 =  (sc_lv<8>) (grp_fu_13848_p10.read());
}

void mmult_hw::thread_grp_fu_13848_p10() {
    grp_fu_13848_p10 = esl_zext<16,8>(in_buf_16_2_V_load_reg_23466.read());
}

void mmult_hw::thread_grp_fu_13858_p1() {
    grp_fu_13858_p1 =  (sc_lv<8>) (grp_fu_13858_p10.read());
}

void mmult_hw::thread_grp_fu_13858_p10() {
    grp_fu_13858_p10 = esl_zext<16,8>(in_buf_16_4_V_load_reg_23471.read());
}

void mmult_hw::thread_grp_fu_13868_p1() {
    grp_fu_13868_p1 =  (sc_lv<8>) (grp_fu_13868_p10.read());
}

void mmult_hw::thread_grp_fu_13868_p10() {
    grp_fu_13868_p10 = esl_zext<16,8>(in_buf_16_6_V_load_reg_23476.read());
}

void mmult_hw::thread_grp_fu_13878_p1() {
    grp_fu_13878_p1 =  (sc_lv<8>) (grp_fu_13878_p10.read());
}

void mmult_hw::thread_grp_fu_13878_p10() {
    grp_fu_13878_p10 = esl_zext<16,8>(in_buf_17_0_V_load_reg_23481.read());
}

void mmult_hw::thread_grp_fu_13888_p1() {
    grp_fu_13888_p1 =  (sc_lv<8>) (grp_fu_13888_p10.read());
}

void mmult_hw::thread_grp_fu_13888_p10() {
    grp_fu_13888_p10 = esl_zext<16,8>(in_buf_17_2_V_load_reg_23486.read());
}

void mmult_hw::thread_grp_fu_13898_p1() {
    grp_fu_13898_p1 =  (sc_lv<8>) (grp_fu_13898_p10.read());
}

void mmult_hw::thread_grp_fu_13898_p10() {
    grp_fu_13898_p10 = esl_zext<16,8>(in_buf_17_4_V_load_reg_23491.read());
}

void mmult_hw::thread_grp_fu_13908_p1() {
    grp_fu_13908_p1 =  (sc_lv<8>) (grp_fu_13908_p10.read());
}

void mmult_hw::thread_grp_fu_13908_p10() {
    grp_fu_13908_p10 = esl_zext<16,8>(in_buf_17_6_V_load_reg_23496.read());
}

void mmult_hw::thread_grp_fu_13918_p1() {
    grp_fu_13918_p1 =  (sc_lv<8>) (grp_fu_13918_p10.read());
}

void mmult_hw::thread_grp_fu_13918_p10() {
    grp_fu_13918_p10 = esl_zext<16,8>(in_buf_18_0_V_load_reg_23501.read());
}

void mmult_hw::thread_grp_fu_13928_p1() {
    grp_fu_13928_p1 =  (sc_lv<8>) (grp_fu_13928_p10.read());
}

void mmult_hw::thread_grp_fu_13928_p10() {
    grp_fu_13928_p10 = esl_zext<16,8>(in_buf_18_2_V_load_reg_23506.read());
}

void mmult_hw::thread_grp_fu_13938_p1() {
    grp_fu_13938_p1 =  (sc_lv<8>) (grp_fu_13938_p10.read());
}

void mmult_hw::thread_grp_fu_13938_p10() {
    grp_fu_13938_p10 = esl_zext<16,8>(in_buf_18_4_V_load_reg_23511.read());
}

void mmult_hw::thread_grp_fu_13948_p1() {
    grp_fu_13948_p1 =  (sc_lv<8>) (grp_fu_13948_p10.read());
}

void mmult_hw::thread_grp_fu_13948_p10() {
    grp_fu_13948_p10 = esl_zext<16,8>(in_buf_18_6_V_load_reg_23516.read());
}

void mmult_hw::thread_grp_fu_13958_p1() {
    grp_fu_13958_p1 =  (sc_lv<8>) (grp_fu_13958_p10.read());
}

void mmult_hw::thread_grp_fu_13958_p10() {
    grp_fu_13958_p10 = esl_zext<16,8>(in_buf_19_0_V_load_reg_23521.read());
}

void mmult_hw::thread_grp_fu_13968_p1() {
    grp_fu_13968_p1 =  (sc_lv<8>) (grp_fu_13968_p10.read());
}

void mmult_hw::thread_grp_fu_13968_p10() {
    grp_fu_13968_p10 = esl_zext<16,8>(in_buf_19_2_V_load_reg_23526.read());
}

void mmult_hw::thread_grp_fu_13978_p1() {
    grp_fu_13978_p1 =  (sc_lv<8>) (grp_fu_13978_p10.read());
}

void mmult_hw::thread_grp_fu_13978_p10() {
    grp_fu_13978_p10 = esl_zext<16,8>(in_buf_19_4_V_load_reg_23531.read());
}

void mmult_hw::thread_grp_fu_13988_p1() {
    grp_fu_13988_p1 =  (sc_lv<8>) (grp_fu_13988_p10.read());
}

void mmult_hw::thread_grp_fu_13988_p10() {
    grp_fu_13988_p10 = esl_zext<16,8>(in_buf_19_6_V_load_reg_23536.read());
}

void mmult_hw::thread_grp_fu_13998_p1() {
    grp_fu_13998_p1 =  (sc_lv<8>) (grp_fu_13998_p10.read());
}

void mmult_hw::thread_grp_fu_13998_p10() {
    grp_fu_13998_p10 = esl_zext<16,8>(in_buf_20_0_V_load_reg_23541.read());
}

void mmult_hw::thread_grp_fu_14008_p1() {
    grp_fu_14008_p1 =  (sc_lv<8>) (grp_fu_14008_p10.read());
}

void mmult_hw::thread_grp_fu_14008_p10() {
    grp_fu_14008_p10 = esl_zext<16,8>(in_buf_20_2_V_load_reg_23546.read());
}

void mmult_hw::thread_grp_fu_14018_p1() {
    grp_fu_14018_p1 =  (sc_lv<8>) (grp_fu_14018_p10.read());
}

void mmult_hw::thread_grp_fu_14018_p10() {
    grp_fu_14018_p10 = esl_zext<16,8>(in_buf_20_4_V_load_reg_23551.read());
}

void mmult_hw::thread_grp_fu_14028_p1() {
    grp_fu_14028_p1 =  (sc_lv<8>) (grp_fu_14028_p10.read());
}

void mmult_hw::thread_grp_fu_14028_p10() {
    grp_fu_14028_p10 = esl_zext<16,8>(in_buf_20_6_V_load_reg_23556.read());
}

void mmult_hw::thread_grp_fu_14038_p1() {
    grp_fu_14038_p1 =  (sc_lv<8>) (grp_fu_14038_p10.read());
}

void mmult_hw::thread_grp_fu_14038_p10() {
    grp_fu_14038_p10 = esl_zext<16,8>(in_buf_21_0_V_load_reg_23561.read());
}

void mmult_hw::thread_grp_fu_14048_p1() {
    grp_fu_14048_p1 =  (sc_lv<8>) (grp_fu_14048_p10.read());
}

void mmult_hw::thread_grp_fu_14048_p10() {
    grp_fu_14048_p10 = esl_zext<16,8>(in_buf_21_2_V_load_reg_23566.read());
}

void mmult_hw::thread_grp_fu_14058_p1() {
    grp_fu_14058_p1 =  (sc_lv<8>) (grp_fu_14058_p10.read());
}

void mmult_hw::thread_grp_fu_14058_p10() {
    grp_fu_14058_p10 = esl_zext<16,8>(in_buf_21_4_V_load_reg_23571.read());
}

void mmult_hw::thread_grp_fu_14068_p1() {
    grp_fu_14068_p1 =  (sc_lv<8>) (grp_fu_14068_p10.read());
}

void mmult_hw::thread_grp_fu_14068_p10() {
    grp_fu_14068_p10 = esl_zext<16,8>(in_buf_21_6_V_load_reg_23576.read());
}

void mmult_hw::thread_grp_fu_14078_p1() {
    grp_fu_14078_p1 =  (sc_lv<8>) (grp_fu_14078_p10.read());
}

void mmult_hw::thread_grp_fu_14078_p10() {
    grp_fu_14078_p10 = esl_zext<16,8>(in_buf_22_0_V_load_reg_23581.read());
}

void mmult_hw::thread_grp_fu_14088_p1() {
    grp_fu_14088_p1 =  (sc_lv<8>) (grp_fu_14088_p10.read());
}

void mmult_hw::thread_grp_fu_14088_p10() {
    grp_fu_14088_p10 = esl_zext<16,8>(in_buf_22_2_V_load_reg_23586.read());
}

void mmult_hw::thread_grp_fu_14098_p1() {
    grp_fu_14098_p1 =  (sc_lv<8>) (grp_fu_14098_p10.read());
}

void mmult_hw::thread_grp_fu_14098_p10() {
    grp_fu_14098_p10 = esl_zext<16,8>(in_buf_22_4_V_load_reg_23591.read());
}

void mmult_hw::thread_grp_fu_14108_p1() {
    grp_fu_14108_p1 =  (sc_lv<8>) (grp_fu_14108_p10.read());
}

void mmult_hw::thread_grp_fu_14108_p10() {
    grp_fu_14108_p10 = esl_zext<16,8>(in_buf_22_6_V_load_reg_23596.read());
}

void mmult_hw::thread_grp_fu_14118_p1() {
    grp_fu_14118_p1 =  (sc_lv<8>) (grp_fu_14118_p10.read());
}

void mmult_hw::thread_grp_fu_14118_p10() {
    grp_fu_14118_p10 = esl_zext<16,8>(in_buf_23_0_V_load_reg_23601.read());
}

void mmult_hw::thread_grp_fu_14128_p1() {
    grp_fu_14128_p1 =  (sc_lv<8>) (grp_fu_14128_p10.read());
}

void mmult_hw::thread_grp_fu_14128_p10() {
    grp_fu_14128_p10 = esl_zext<16,8>(in_buf_23_2_V_load_reg_23606.read());
}

void mmult_hw::thread_grp_fu_14138_p1() {
    grp_fu_14138_p1 =  (sc_lv<8>) (grp_fu_14138_p10.read());
}

void mmult_hw::thread_grp_fu_14138_p10() {
    grp_fu_14138_p10 = esl_zext<16,8>(in_buf_23_4_V_load_reg_23611.read());
}

void mmult_hw::thread_grp_fu_14148_p1() {
    grp_fu_14148_p1 =  (sc_lv<8>) (grp_fu_14148_p10.read());
}

void mmult_hw::thread_grp_fu_14148_p10() {
    grp_fu_14148_p10 = esl_zext<16,8>(in_buf_23_6_V_load_reg_23616.read());
}

void mmult_hw::thread_grp_fu_14158_p1() {
    grp_fu_14158_p1 =  (sc_lv<8>) (grp_fu_14158_p10.read());
}

void mmult_hw::thread_grp_fu_14158_p10() {
    grp_fu_14158_p10 = esl_zext<16,8>(in_buf_24_0_V_load_reg_23621.read());
}

void mmult_hw::thread_grp_fu_14168_p1() {
    grp_fu_14168_p1 =  (sc_lv<8>) (grp_fu_14168_p10.read());
}

void mmult_hw::thread_grp_fu_14168_p10() {
    grp_fu_14168_p10 = esl_zext<16,8>(in_buf_24_2_V_load_reg_23626.read());
}

void mmult_hw::thread_grp_fu_14178_p1() {
    grp_fu_14178_p1 =  (sc_lv<8>) (grp_fu_14178_p10.read());
}

void mmult_hw::thread_grp_fu_14178_p10() {
    grp_fu_14178_p10 = esl_zext<16,8>(in_buf_24_4_V_load_reg_23631.read());
}

void mmult_hw::thread_grp_fu_14188_p1() {
    grp_fu_14188_p1 =  (sc_lv<8>) (grp_fu_14188_p10.read());
}

void mmult_hw::thread_grp_fu_14188_p10() {
    grp_fu_14188_p10 = esl_zext<16,8>(in_buf_24_6_V_load_reg_23636.read());
}

void mmult_hw::thread_grp_fu_14198_p1() {
    grp_fu_14198_p1 =  (sc_lv<8>) (grp_fu_14198_p10.read());
}

void mmult_hw::thread_grp_fu_14198_p10() {
    grp_fu_14198_p10 = esl_zext<16,8>(in_buf_25_0_V_load_reg_23641.read());
}

void mmult_hw::thread_grp_fu_14208_p1() {
    grp_fu_14208_p1 =  (sc_lv<8>) (grp_fu_14208_p10.read());
}

void mmult_hw::thread_grp_fu_14208_p10() {
    grp_fu_14208_p10 = esl_zext<16,8>(in_buf_25_2_V_load_reg_23646.read());
}

void mmult_hw::thread_grp_fu_14218_p1() {
    grp_fu_14218_p1 =  (sc_lv<8>) (grp_fu_14218_p10.read());
}

void mmult_hw::thread_grp_fu_14218_p10() {
    grp_fu_14218_p10 = esl_zext<16,8>(in_buf_25_4_V_load_reg_23651.read());
}

void mmult_hw::thread_grp_fu_14228_p1() {
    grp_fu_14228_p1 =  (sc_lv<8>) (grp_fu_14228_p10.read());
}

void mmult_hw::thread_grp_fu_14228_p10() {
    grp_fu_14228_p10 = esl_zext<16,8>(in_buf_25_6_V_load_reg_23656.read());
}

void mmult_hw::thread_grp_fu_14238_p1() {
    grp_fu_14238_p1 =  (sc_lv<8>) (grp_fu_14238_p10.read());
}

void mmult_hw::thread_grp_fu_14238_p10() {
    grp_fu_14238_p10 = esl_zext<16,8>(in_buf_26_0_V_load_reg_23661.read());
}

void mmult_hw::thread_grp_fu_14248_p1() {
    grp_fu_14248_p1 =  (sc_lv<8>) (grp_fu_14248_p10.read());
}

void mmult_hw::thread_grp_fu_14248_p10() {
    grp_fu_14248_p10 = esl_zext<16,8>(in_buf_26_2_V_load_reg_23666.read());
}

void mmult_hw::thread_grp_fu_14258_p1() {
    grp_fu_14258_p1 =  (sc_lv<8>) (grp_fu_14258_p10.read());
}

void mmult_hw::thread_grp_fu_14258_p10() {
    grp_fu_14258_p10 = esl_zext<16,8>(in_buf_26_4_V_load_reg_23671.read());
}

void mmult_hw::thread_grp_fu_14268_p1() {
    grp_fu_14268_p1 =  (sc_lv<8>) (grp_fu_14268_p10.read());
}

void mmult_hw::thread_grp_fu_14268_p10() {
    grp_fu_14268_p10 = esl_zext<16,8>(in_buf_26_6_V_load_reg_23676.read());
}

void mmult_hw::thread_grp_fu_14278_p1() {
    grp_fu_14278_p1 =  (sc_lv<8>) (grp_fu_14278_p10.read());
}

void mmult_hw::thread_grp_fu_14278_p10() {
    grp_fu_14278_p10 = esl_zext<16,8>(in_buf_27_0_V_load_reg_23681.read());
}

void mmult_hw::thread_grp_fu_14288_p1() {
    grp_fu_14288_p1 =  (sc_lv<8>) (grp_fu_14288_p10.read());
}

void mmult_hw::thread_grp_fu_14288_p10() {
    grp_fu_14288_p10 = esl_zext<16,8>(in_buf_27_2_V_load_reg_23686.read());
}

void mmult_hw::thread_grp_fu_14298_p1() {
    grp_fu_14298_p1 =  (sc_lv<8>) (grp_fu_14298_p10.read());
}

void mmult_hw::thread_grp_fu_14298_p10() {
    grp_fu_14298_p10 = esl_zext<16,8>(in_buf_27_4_V_load_reg_23691.read());
}

void mmult_hw::thread_grp_fu_14308_p1() {
    grp_fu_14308_p1 =  (sc_lv<8>) (grp_fu_14308_p10.read());
}

void mmult_hw::thread_grp_fu_14308_p10() {
    grp_fu_14308_p10 = esl_zext<16,8>(in_buf_27_6_V_load_reg_23696.read());
}

void mmult_hw::thread_grp_fu_14318_p1() {
    grp_fu_14318_p1 =  (sc_lv<8>) (grp_fu_14318_p10.read());
}

void mmult_hw::thread_grp_fu_14318_p10() {
    grp_fu_14318_p10 = esl_zext<16,8>(in_buf_28_0_V_load_reg_23701.read());
}

void mmult_hw::thread_grp_fu_14328_p1() {
    grp_fu_14328_p1 =  (sc_lv<8>) (grp_fu_14328_p10.read());
}

void mmult_hw::thread_grp_fu_14328_p10() {
    grp_fu_14328_p10 = esl_zext<16,8>(in_buf_28_2_V_load_reg_23706.read());
}

void mmult_hw::thread_grp_fu_14338_p1() {
    grp_fu_14338_p1 =  (sc_lv<8>) (grp_fu_14338_p10.read());
}

void mmult_hw::thread_grp_fu_14338_p10() {
    grp_fu_14338_p10 = esl_zext<16,8>(in_buf_28_4_V_load_reg_23711.read());
}

void mmult_hw::thread_grp_fu_14348_p1() {
    grp_fu_14348_p1 =  (sc_lv<8>) (grp_fu_14348_p10.read());
}

void mmult_hw::thread_grp_fu_14348_p10() {
    grp_fu_14348_p10 = esl_zext<16,8>(in_buf_28_6_V_load_reg_23716.read());
}

void mmult_hw::thread_grp_fu_14358_p1() {
    grp_fu_14358_p1 =  (sc_lv<8>) (grp_fu_14358_p10.read());
}

void mmult_hw::thread_grp_fu_14358_p10() {
    grp_fu_14358_p10 = esl_zext<16,8>(in_buf_29_0_V_load_reg_23721.read());
}

void mmult_hw::thread_grp_fu_14368_p1() {
    grp_fu_14368_p1 =  (sc_lv<8>) (grp_fu_14368_p10.read());
}

void mmult_hw::thread_grp_fu_14368_p10() {
    grp_fu_14368_p10 = esl_zext<16,8>(in_buf_29_2_V_load_reg_23726.read());
}

void mmult_hw::thread_grp_fu_14378_p1() {
    grp_fu_14378_p1 =  (sc_lv<8>) (grp_fu_14378_p10.read());
}

void mmult_hw::thread_grp_fu_14378_p10() {
    grp_fu_14378_p10 = esl_zext<16,8>(in_buf_29_4_V_load_reg_23731.read());
}

void mmult_hw::thread_grp_fu_14388_p1() {
    grp_fu_14388_p1 =  (sc_lv<8>) (grp_fu_14388_p10.read());
}

void mmult_hw::thread_grp_fu_14388_p10() {
    grp_fu_14388_p10 = esl_zext<16,8>(in_buf_29_6_V_load_reg_23736.read());
}

void mmult_hw::thread_grp_fu_14398_p1() {
    grp_fu_14398_p1 =  (sc_lv<8>) (grp_fu_14398_p10.read());
}

void mmult_hw::thread_grp_fu_14398_p10() {
    grp_fu_14398_p10 = esl_zext<16,8>(in_buf_30_0_V_load_reg_23741.read());
}

void mmult_hw::thread_grp_fu_14408_p1() {
    grp_fu_14408_p1 =  (sc_lv<8>) (grp_fu_14408_p10.read());
}

void mmult_hw::thread_grp_fu_14408_p10() {
    grp_fu_14408_p10 = esl_zext<16,8>(in_buf_30_2_V_load_reg_23746.read());
}

void mmult_hw::thread_grp_fu_14418_p1() {
    grp_fu_14418_p1 =  (sc_lv<8>) (grp_fu_14418_p10.read());
}

void mmult_hw::thread_grp_fu_14418_p10() {
    grp_fu_14418_p10 = esl_zext<16,8>(in_buf_30_4_V_load_reg_23751.read());
}

void mmult_hw::thread_grp_fu_14428_p1() {
    grp_fu_14428_p1 =  (sc_lv<8>) (grp_fu_14428_p10.read());
}

void mmult_hw::thread_grp_fu_14428_p10() {
    grp_fu_14428_p10 = esl_zext<16,8>(in_buf_30_6_V_load_reg_23756.read());
}

void mmult_hw::thread_grp_fu_14438_p1() {
    grp_fu_14438_p1 =  (sc_lv<8>) (grp_fu_14438_p10.read());
}

void mmult_hw::thread_grp_fu_14438_p10() {
    grp_fu_14438_p10 = esl_zext<16,8>(in_buf_31_0_V_load_reg_23761.read());
}

void mmult_hw::thread_grp_fu_14448_p1() {
    grp_fu_14448_p1 =  (sc_lv<8>) (grp_fu_14448_p10.read());
}

void mmult_hw::thread_grp_fu_14448_p10() {
    grp_fu_14448_p10 = esl_zext<16,8>(in_buf_31_2_V_load_reg_23766.read());
}

void mmult_hw::thread_grp_fu_14458_p1() {
    grp_fu_14458_p1 =  (sc_lv<8>) (grp_fu_14458_p10.read());
}

void mmult_hw::thread_grp_fu_14458_p10() {
    grp_fu_14458_p10 = esl_zext<16,8>(in_buf_31_4_V_load_reg_23771.read());
}

void mmult_hw::thread_grp_fu_18194_p1() {
    grp_fu_18194_p1 =  (sc_lv<8>) (grp_fu_18194_p10.read());
}

void mmult_hw::thread_grp_fu_18194_p10() {
    grp_fu_18194_p10 = esl_zext<16,8>(in_buf_15_5_V_load_reg_25041.read());
}

void mmult_hw::thread_grp_fu_18202_p1() {
    grp_fu_18202_p1 =  (sc_lv<8>) (grp_fu_18202_p10.read());
}

void mmult_hw::thread_grp_fu_18202_p10() {
    grp_fu_18202_p10 = esl_zext<16,8>(in_buf_0_2_V_load_reg_26326.read());
}

void mmult_hw::thread_grp_fu_18210_p1() {
    grp_fu_18210_p1 =  (sc_lv<8>) (grp_fu_18210_p10.read());
}

void mmult_hw::thread_grp_fu_18210_p10() {
    grp_fu_18210_p10 = esl_zext<16,8>(in_buf_0_4_V_load_reg_26331.read());
}

void mmult_hw::thread_grp_fu_18218_p1() {
    grp_fu_18218_p1 =  (sc_lv<8>) (grp_fu_18218_p10.read());
}

void mmult_hw::thread_grp_fu_18218_p10() {
    grp_fu_18218_p10 = esl_zext<16,8>(in_buf_0_6_V_load_reg_26336.read());
}

void mmult_hw::thread_grp_fu_18226_p1() {
    grp_fu_18226_p1 =  (sc_lv<8>) (grp_fu_18226_p10.read());
}

void mmult_hw::thread_grp_fu_18226_p10() {
    grp_fu_18226_p10 = esl_zext<16,8>(in_buf_1_0_V_load_reg_26341.read());
}

void mmult_hw::thread_grp_fu_18234_p1() {
    grp_fu_18234_p1 =  (sc_lv<8>) (grp_fu_18234_p10.read());
}

void mmult_hw::thread_grp_fu_18234_p10() {
    grp_fu_18234_p10 = esl_zext<16,8>(in_buf_1_2_V_load_reg_26346.read());
}

void mmult_hw::thread_grp_fu_18242_p1() {
    grp_fu_18242_p1 =  (sc_lv<8>) (grp_fu_18242_p10.read());
}

void mmult_hw::thread_grp_fu_18242_p10() {
    grp_fu_18242_p10 = esl_zext<16,8>(in_buf_1_4_V_load_reg_26351.read());
}

void mmult_hw::thread_grp_fu_18250_p1() {
    grp_fu_18250_p1 =  (sc_lv<8>) (grp_fu_18250_p10.read());
}

void mmult_hw::thread_grp_fu_18250_p10() {
    grp_fu_18250_p10 = esl_zext<16,8>(in_buf_1_6_V_load_reg_26356.read());
}

void mmult_hw::thread_grp_fu_18258_p1() {
    grp_fu_18258_p1 =  (sc_lv<8>) (grp_fu_18258_p10.read());
}

void mmult_hw::thread_grp_fu_18258_p10() {
    grp_fu_18258_p10 = esl_zext<16,8>(in_buf_2_0_V_load_reg_26361.read());
}

void mmult_hw::thread_grp_fu_18266_p1() {
    grp_fu_18266_p1 =  (sc_lv<8>) (grp_fu_18266_p10.read());
}

void mmult_hw::thread_grp_fu_18266_p10() {
    grp_fu_18266_p10 = esl_zext<16,8>(in_buf_2_2_V_load_reg_26366.read());
}

void mmult_hw::thread_grp_fu_18274_p1() {
    grp_fu_18274_p1 =  (sc_lv<8>) (grp_fu_18274_p10.read());
}

void mmult_hw::thread_grp_fu_18274_p10() {
    grp_fu_18274_p10 = esl_zext<16,8>(in_buf_2_4_V_load_reg_26371.read());
}

void mmult_hw::thread_grp_fu_18282_p1() {
    grp_fu_18282_p1 =  (sc_lv<8>) (grp_fu_18282_p10.read());
}

void mmult_hw::thread_grp_fu_18282_p10() {
    grp_fu_18282_p10 = esl_zext<16,8>(in_buf_2_6_V_load_reg_26376.read());
}

void mmult_hw::thread_grp_fu_18290_p1() {
    grp_fu_18290_p1 =  (sc_lv<8>) (grp_fu_18290_p10.read());
}

void mmult_hw::thread_grp_fu_18290_p10() {
    grp_fu_18290_p10 = esl_zext<16,8>(in_buf_3_0_V_load_reg_26381.read());
}

void mmult_hw::thread_grp_fu_18298_p1() {
    grp_fu_18298_p1 =  (sc_lv<8>) (grp_fu_18298_p10.read());
}

void mmult_hw::thread_grp_fu_18298_p10() {
    grp_fu_18298_p10 = esl_zext<16,8>(in_buf_3_2_V_load_reg_26386.read());
}

void mmult_hw::thread_grp_fu_18306_p1() {
    grp_fu_18306_p1 =  (sc_lv<8>) (grp_fu_18306_p10.read());
}

void mmult_hw::thread_grp_fu_18306_p10() {
    grp_fu_18306_p10 = esl_zext<16,8>(in_buf_3_4_V_load_reg_26391.read());
}

void mmult_hw::thread_grp_fu_18314_p1() {
    grp_fu_18314_p1 =  (sc_lv<8>) (grp_fu_18314_p10.read());
}

void mmult_hw::thread_grp_fu_18314_p10() {
    grp_fu_18314_p10 = esl_zext<16,8>(in_buf_3_6_V_load_reg_26396.read());
}

void mmult_hw::thread_grp_fu_18322_p1() {
    grp_fu_18322_p1 =  (sc_lv<8>) (grp_fu_18322_p10.read());
}

void mmult_hw::thread_grp_fu_18322_p10() {
    grp_fu_18322_p10 = esl_zext<16,8>(in_buf_4_0_V_load_reg_26401.read());
}

void mmult_hw::thread_grp_fu_18330_p1() {
    grp_fu_18330_p1 =  (sc_lv<8>) (grp_fu_18330_p10.read());
}

void mmult_hw::thread_grp_fu_18330_p10() {
    grp_fu_18330_p10 = esl_zext<16,8>(in_buf_4_2_V_load_reg_26406.read());
}

void mmult_hw::thread_grp_fu_18338_p1() {
    grp_fu_18338_p1 =  (sc_lv<8>) (grp_fu_18338_p10.read());
}

void mmult_hw::thread_grp_fu_18338_p10() {
    grp_fu_18338_p10 = esl_zext<16,8>(in_buf_4_4_V_load_reg_26411.read());
}

void mmult_hw::thread_grp_fu_18346_p1() {
    grp_fu_18346_p1 =  (sc_lv<8>) (grp_fu_18346_p10.read());
}

void mmult_hw::thread_grp_fu_18346_p10() {
    grp_fu_18346_p10 = esl_zext<16,8>(in_buf_4_6_V_load_reg_26416.read());
}

void mmult_hw::thread_grp_fu_18354_p1() {
    grp_fu_18354_p1 =  (sc_lv<8>) (grp_fu_18354_p10.read());
}

void mmult_hw::thread_grp_fu_18354_p10() {
    grp_fu_18354_p10 = esl_zext<16,8>(in_buf_5_0_V_load_reg_26421.read());
}

void mmult_hw::thread_grp_fu_18362_p1() {
    grp_fu_18362_p1 =  (sc_lv<8>) (grp_fu_18362_p10.read());
}

void mmult_hw::thread_grp_fu_18362_p10() {
    grp_fu_18362_p10 = esl_zext<16,8>(in_buf_5_2_V_load_reg_26426.read());
}

void mmult_hw::thread_grp_fu_18370_p1() {
    grp_fu_18370_p1 =  (sc_lv<8>) (grp_fu_18370_p10.read());
}

void mmult_hw::thread_grp_fu_18370_p10() {
    grp_fu_18370_p10 = esl_zext<16,8>(in_buf_5_4_V_load_reg_26431.read());
}

void mmult_hw::thread_grp_fu_18378_p1() {
    grp_fu_18378_p1 =  (sc_lv<8>) (grp_fu_18378_p10.read());
}

void mmult_hw::thread_grp_fu_18378_p10() {
    grp_fu_18378_p10 = esl_zext<16,8>(in_buf_5_6_V_load_reg_26436.read());
}

void mmult_hw::thread_grp_fu_18386_p1() {
    grp_fu_18386_p1 =  (sc_lv<8>) (grp_fu_18386_p10.read());
}

void mmult_hw::thread_grp_fu_18386_p10() {
    grp_fu_18386_p10 = esl_zext<16,8>(in_buf_6_0_V_load_reg_26441.read());
}

void mmult_hw::thread_grp_fu_18394_p1() {
    grp_fu_18394_p1 =  (sc_lv<8>) (grp_fu_18394_p10.read());
}

void mmult_hw::thread_grp_fu_18394_p10() {
    grp_fu_18394_p10 = esl_zext<16,8>(in_buf_6_2_V_load_reg_26446.read());
}

void mmult_hw::thread_grp_fu_18402_p1() {
    grp_fu_18402_p1 =  (sc_lv<8>) (grp_fu_18402_p10.read());
}

void mmult_hw::thread_grp_fu_18402_p10() {
    grp_fu_18402_p10 = esl_zext<16,8>(in_buf_6_4_V_load_reg_26451.read());
}

void mmult_hw::thread_grp_fu_18410_p1() {
    grp_fu_18410_p1 =  (sc_lv<8>) (grp_fu_18410_p10.read());
}

void mmult_hw::thread_grp_fu_18410_p10() {
    grp_fu_18410_p10 = esl_zext<16,8>(in_buf_6_6_V_load_reg_26456.read());
}

void mmult_hw::thread_grp_fu_18418_p1() {
    grp_fu_18418_p1 =  (sc_lv<8>) (grp_fu_18418_p10.read());
}

void mmult_hw::thread_grp_fu_18418_p10() {
    grp_fu_18418_p10 = esl_zext<16,8>(in_buf_7_0_V_load_reg_26461.read());
}

void mmult_hw::thread_grp_fu_18426_p1() {
    grp_fu_18426_p1 =  (sc_lv<8>) (grp_fu_18426_p10.read());
}

void mmult_hw::thread_grp_fu_18426_p10() {
    grp_fu_18426_p10 = esl_zext<16,8>(in_buf_7_2_V_load_reg_26466.read());
}

void mmult_hw::thread_grp_fu_18434_p1() {
    grp_fu_18434_p1 =  (sc_lv<8>) (grp_fu_18434_p10.read());
}

void mmult_hw::thread_grp_fu_18434_p10() {
    grp_fu_18434_p10 = esl_zext<16,8>(in_buf_7_4_V_load_reg_26471.read());
}

void mmult_hw::thread_grp_fu_18442_p1() {
    grp_fu_18442_p1 =  (sc_lv<8>) (grp_fu_18442_p10.read());
}

void mmult_hw::thread_grp_fu_18442_p10() {
    grp_fu_18442_p10 = esl_zext<16,8>(in_buf_7_6_V_load_reg_26476.read());
}

void mmult_hw::thread_grp_fu_18450_p1() {
    grp_fu_18450_p1 =  (sc_lv<8>) (grp_fu_18450_p10.read());
}

void mmult_hw::thread_grp_fu_18450_p10() {
    grp_fu_18450_p10 = esl_zext<16,8>(in_buf_8_0_V_load_reg_26481.read());
}

void mmult_hw::thread_grp_fu_18458_p1() {
    grp_fu_18458_p1 =  (sc_lv<8>) (grp_fu_18458_p10.read());
}

void mmult_hw::thread_grp_fu_18458_p10() {
    grp_fu_18458_p10 = esl_zext<16,8>(in_buf_8_2_V_load_reg_26486.read());
}

void mmult_hw::thread_grp_fu_18466_p1() {
    grp_fu_18466_p1 =  (sc_lv<8>) (grp_fu_18466_p10.read());
}

void mmult_hw::thread_grp_fu_18466_p10() {
    grp_fu_18466_p10 = esl_zext<16,8>(in_buf_8_4_V_load_reg_26491.read());
}

void mmult_hw::thread_grp_fu_18474_p1() {
    grp_fu_18474_p1 =  (sc_lv<8>) (grp_fu_18474_p10.read());
}

void mmult_hw::thread_grp_fu_18474_p10() {
    grp_fu_18474_p10 = esl_zext<16,8>(in_buf_8_6_V_load_reg_26496.read());
}

void mmult_hw::thread_grp_fu_18482_p1() {
    grp_fu_18482_p1 =  (sc_lv<8>) (grp_fu_18482_p10.read());
}

void mmult_hw::thread_grp_fu_18482_p10() {
    grp_fu_18482_p10 = esl_zext<16,8>(in_buf_9_0_V_load_reg_26501.read());
}

void mmult_hw::thread_grp_fu_18490_p1() {
    grp_fu_18490_p1 =  (sc_lv<8>) (grp_fu_18490_p10.read());
}

void mmult_hw::thread_grp_fu_18490_p10() {
    grp_fu_18490_p10 = esl_zext<16,8>(in_buf_9_2_V_load_reg_26506.read());
}

void mmult_hw::thread_grp_fu_18498_p1() {
    grp_fu_18498_p1 =  (sc_lv<8>) (grp_fu_18498_p10.read());
}

void mmult_hw::thread_grp_fu_18498_p10() {
    grp_fu_18498_p10 = esl_zext<16,8>(in_buf_9_4_V_load_reg_26511.read());
}

void mmult_hw::thread_grp_fu_18506_p1() {
    grp_fu_18506_p1 =  (sc_lv<8>) (grp_fu_18506_p10.read());
}

void mmult_hw::thread_grp_fu_18506_p10() {
    grp_fu_18506_p10 = esl_zext<16,8>(in_buf_9_6_V_load_reg_26516.read());
}

void mmult_hw::thread_grp_fu_18514_p1() {
    grp_fu_18514_p1 =  (sc_lv<8>) (grp_fu_18514_p10.read());
}

void mmult_hw::thread_grp_fu_18514_p10() {
    grp_fu_18514_p10 = esl_zext<16,8>(in_buf_10_0_V_load_reg_26521.read());
}

void mmult_hw::thread_grp_fu_18522_p1() {
    grp_fu_18522_p1 =  (sc_lv<8>) (grp_fu_18522_p10.read());
}

void mmult_hw::thread_grp_fu_18522_p10() {
    grp_fu_18522_p10 = esl_zext<16,8>(in_buf_10_2_V_load_reg_26526.read());
}

void mmult_hw::thread_grp_fu_18530_p1() {
    grp_fu_18530_p1 =  (sc_lv<8>) (grp_fu_18530_p10.read());
}

void mmult_hw::thread_grp_fu_18530_p10() {
    grp_fu_18530_p10 = esl_zext<16,8>(in_buf_10_4_V_load_reg_26531.read());
}

void mmult_hw::thread_grp_fu_18538_p1() {
    grp_fu_18538_p1 =  (sc_lv<8>) (grp_fu_18538_p10.read());
}

void mmult_hw::thread_grp_fu_18538_p10() {
    grp_fu_18538_p10 = esl_zext<16,8>(in_buf_10_6_V_load_reg_26536.read());
}

void mmult_hw::thread_grp_fu_18546_p1() {
    grp_fu_18546_p1 =  (sc_lv<8>) (grp_fu_18546_p10.read());
}

void mmult_hw::thread_grp_fu_18546_p10() {
    grp_fu_18546_p10 = esl_zext<16,8>(in_buf_11_0_V_load_reg_26541.read());
}

void mmult_hw::thread_grp_fu_18554_p1() {
    grp_fu_18554_p1 =  (sc_lv<8>) (grp_fu_18554_p10.read());
}

void mmult_hw::thread_grp_fu_18554_p10() {
    grp_fu_18554_p10 = esl_zext<16,8>(in_buf_11_2_V_load_reg_26546.read());
}

void mmult_hw::thread_grp_fu_18562_p1() {
    grp_fu_18562_p1 =  (sc_lv<8>) (grp_fu_18562_p10.read());
}

void mmult_hw::thread_grp_fu_18562_p10() {
    grp_fu_18562_p10 = esl_zext<16,8>(in_buf_11_4_V_load_reg_26551.read());
}

void mmult_hw::thread_grp_fu_18570_p1() {
    grp_fu_18570_p1 =  (sc_lv<8>) (grp_fu_18570_p10.read());
}

void mmult_hw::thread_grp_fu_18570_p10() {
    grp_fu_18570_p10 = esl_zext<16,8>(in_buf_11_6_V_load_reg_26556.read());
}

void mmult_hw::thread_grp_fu_18578_p1() {
    grp_fu_18578_p1 =  (sc_lv<8>) (grp_fu_18578_p10.read());
}

void mmult_hw::thread_grp_fu_18578_p10() {
    grp_fu_18578_p10 = esl_zext<16,8>(in_buf_12_0_V_load_reg_26561.read());
}

void mmult_hw::thread_grp_fu_18586_p1() {
    grp_fu_18586_p1 =  (sc_lv<8>) (grp_fu_18586_p10.read());
}

void mmult_hw::thread_grp_fu_18586_p10() {
    grp_fu_18586_p10 = esl_zext<16,8>(in_buf_12_2_V_load_reg_26566.read());
}

void mmult_hw::thread_grp_fu_18594_p1() {
    grp_fu_18594_p1 =  (sc_lv<8>) (grp_fu_18594_p10.read());
}

void mmult_hw::thread_grp_fu_18594_p10() {
    grp_fu_18594_p10 = esl_zext<16,8>(in_buf_12_4_V_load_reg_26571.read());
}

void mmult_hw::thread_grp_fu_18602_p1() {
    grp_fu_18602_p1 =  (sc_lv<8>) (grp_fu_18602_p10.read());
}

void mmult_hw::thread_grp_fu_18602_p10() {
    grp_fu_18602_p10 = esl_zext<16,8>(in_buf_12_6_V_load_reg_26576.read());
}

void mmult_hw::thread_grp_fu_18610_p1() {
    grp_fu_18610_p1 =  (sc_lv<8>) (grp_fu_18610_p10.read());
}

void mmult_hw::thread_grp_fu_18610_p10() {
    grp_fu_18610_p10 = esl_zext<16,8>(in_buf_13_0_V_load_reg_26581.read());
}

void mmult_hw::thread_grp_fu_18618_p1() {
    grp_fu_18618_p1 =  (sc_lv<8>) (grp_fu_18618_p10.read());
}

void mmult_hw::thread_grp_fu_18618_p10() {
    grp_fu_18618_p10 = esl_zext<16,8>(in_buf_13_2_V_load_reg_26586.read());
}

void mmult_hw::thread_grp_fu_18626_p1() {
    grp_fu_18626_p1 =  (sc_lv<8>) (grp_fu_18626_p10.read());
}

void mmult_hw::thread_grp_fu_18626_p10() {
    grp_fu_18626_p10 = esl_zext<16,8>(in_buf_13_4_V_load_reg_26591.read());
}

void mmult_hw::thread_grp_fu_18634_p1() {
    grp_fu_18634_p1 =  (sc_lv<8>) (grp_fu_18634_p10.read());
}

void mmult_hw::thread_grp_fu_18634_p10() {
    grp_fu_18634_p10 = esl_zext<16,8>(in_buf_13_6_V_load_reg_26596.read());
}

void mmult_hw::thread_grp_fu_18642_p1() {
    grp_fu_18642_p1 =  (sc_lv<8>) (grp_fu_18642_p10.read());
}

void mmult_hw::thread_grp_fu_18642_p10() {
    grp_fu_18642_p10 = esl_zext<16,8>(in_buf_14_0_V_load_reg_26601.read());
}

void mmult_hw::thread_grp_fu_18650_p1() {
    grp_fu_18650_p1 =  (sc_lv<8>) (grp_fu_18650_p10.read());
}

void mmult_hw::thread_grp_fu_18650_p10() {
    grp_fu_18650_p10 = esl_zext<16,8>(in_buf_14_2_V_load_reg_26606.read());
}

void mmult_hw::thread_grp_fu_18658_p1() {
    grp_fu_18658_p1 =  (sc_lv<8>) (grp_fu_18658_p10.read());
}

void mmult_hw::thread_grp_fu_18658_p10() {
    grp_fu_18658_p10 = esl_zext<16,8>(in_buf_14_4_V_load_reg_26611.read());
}

void mmult_hw::thread_grp_fu_18666_p1() {
    grp_fu_18666_p1 =  (sc_lv<8>) (grp_fu_18666_p10.read());
}

void mmult_hw::thread_grp_fu_18666_p10() {
    grp_fu_18666_p10 = esl_zext<16,8>(in_buf_14_6_V_load_reg_26616.read());
}

void mmult_hw::thread_grp_fu_18674_p1() {
    grp_fu_18674_p1 =  (sc_lv<8>) (grp_fu_18674_p10.read());
}

void mmult_hw::thread_grp_fu_18674_p10() {
    grp_fu_18674_p10 = esl_zext<16,8>(in_buf_15_0_V_load_reg_26621.read());
}

void mmult_hw::thread_grp_fu_18682_p1() {
    grp_fu_18682_p1 =  (sc_lv<8>) (grp_fu_18682_p10.read());
}

void mmult_hw::thread_grp_fu_18682_p10() {
    grp_fu_18682_p10 = esl_zext<16,8>(in_buf_15_2_V_load_reg_26626.read());
}

void mmult_hw::thread_grp_fu_18690_p1() {
    grp_fu_18690_p1 =  (sc_lv<8>) (grp_fu_18690_p10.read());
}

void mmult_hw::thread_grp_fu_18690_p10() {
    grp_fu_18690_p10 = esl_zext<16,8>(in_buf_15_4_V_load_reg_26631.read());
}

void mmult_hw::thread_grp_fu_18698_p1() {
    grp_fu_18698_p1 =  (sc_lv<8>) (grp_fu_18698_p10.read());
}

void mmult_hw::thread_grp_fu_18698_p10() {
    grp_fu_18698_p10 = esl_zext<16,8>(in_buf_15_6_V_load_reg_26636.read());
}

void mmult_hw::thread_grp_fu_18706_p1() {
    grp_fu_18706_p1 =  (sc_lv<8>) (grp_fu_18706_p10.read());
}

void mmult_hw::thread_grp_fu_18706_p10() {
    grp_fu_18706_p10 = esl_zext<16,8>(in_buf_15_7_V_load_reg_26641.read());
}

void mmult_hw::thread_grp_fu_18714_p1() {
    grp_fu_18714_p1 =  (sc_lv<8>) (grp_fu_18714_p10.read());
}

void mmult_hw::thread_grp_fu_18714_p10() {
    grp_fu_18714_p10 = esl_zext<16,8>(in_buf_16_1_V_load_reg_26646.read());
}

void mmult_hw::thread_grp_fu_18722_p1() {
    grp_fu_18722_p1 =  (sc_lv<8>) (grp_fu_18722_p10.read());
}

void mmult_hw::thread_grp_fu_18722_p10() {
    grp_fu_18722_p10 = esl_zext<16,8>(in_buf_16_3_V_load_reg_26651.read());
}

void mmult_hw::thread_grp_fu_18730_p1() {
    grp_fu_18730_p1 =  (sc_lv<8>) (grp_fu_18730_p10.read());
}

void mmult_hw::thread_grp_fu_18730_p10() {
    grp_fu_18730_p10 = esl_zext<16,8>(in_buf_16_5_V_load_reg_26656.read());
}

void mmult_hw::thread_grp_fu_18738_p1() {
    grp_fu_18738_p1 =  (sc_lv<8>) (grp_fu_18738_p10.read());
}

void mmult_hw::thread_grp_fu_18738_p10() {
    grp_fu_18738_p10 = esl_zext<16,8>(in_buf_16_7_V_load_reg_26661.read());
}

void mmult_hw::thread_grp_fu_18746_p1() {
    grp_fu_18746_p1 =  (sc_lv<8>) (grp_fu_18746_p10.read());
}

void mmult_hw::thread_grp_fu_18746_p10() {
    grp_fu_18746_p10 = esl_zext<16,8>(in_buf_17_1_V_load_reg_26666.read());
}

void mmult_hw::thread_grp_fu_18754_p1() {
    grp_fu_18754_p1 =  (sc_lv<8>) (grp_fu_18754_p10.read());
}

void mmult_hw::thread_grp_fu_18754_p10() {
    grp_fu_18754_p10 = esl_zext<16,8>(in_buf_17_3_V_load_reg_26671.read());
}

void mmult_hw::thread_grp_fu_18762_p1() {
    grp_fu_18762_p1 =  (sc_lv<8>) (grp_fu_18762_p10.read());
}

void mmult_hw::thread_grp_fu_18762_p10() {
    grp_fu_18762_p10 = esl_zext<16,8>(in_buf_17_5_V_load_reg_26676.read());
}

void mmult_hw::thread_grp_fu_18770_p1() {
    grp_fu_18770_p1 =  (sc_lv<8>) (grp_fu_18770_p10.read());
}

void mmult_hw::thread_grp_fu_18770_p10() {
    grp_fu_18770_p10 = esl_zext<16,8>(in_buf_17_7_V_load_reg_26681.read());
}

void mmult_hw::thread_grp_fu_18778_p1() {
    grp_fu_18778_p1 =  (sc_lv<8>) (grp_fu_18778_p10.read());
}

void mmult_hw::thread_grp_fu_18778_p10() {
    grp_fu_18778_p10 = esl_zext<16,8>(in_buf_18_1_V_load_reg_26686.read());
}

void mmult_hw::thread_grp_fu_18786_p1() {
    grp_fu_18786_p1 =  (sc_lv<8>) (grp_fu_18786_p10.read());
}

void mmult_hw::thread_grp_fu_18786_p10() {
    grp_fu_18786_p10 = esl_zext<16,8>(in_buf_18_3_V_load_reg_26691.read());
}

void mmult_hw::thread_grp_fu_18794_p1() {
    grp_fu_18794_p1 =  (sc_lv<8>) (grp_fu_18794_p10.read());
}

void mmult_hw::thread_grp_fu_18794_p10() {
    grp_fu_18794_p10 = esl_zext<16,8>(in_buf_18_5_V_load_reg_26696.read());
}

void mmult_hw::thread_grp_fu_18802_p1() {
    grp_fu_18802_p1 =  (sc_lv<8>) (grp_fu_18802_p10.read());
}

void mmult_hw::thread_grp_fu_18802_p10() {
    grp_fu_18802_p10 = esl_zext<16,8>(in_buf_18_7_V_load_reg_26701.read());
}

void mmult_hw::thread_grp_fu_18810_p1() {
    grp_fu_18810_p1 =  (sc_lv<8>) (grp_fu_18810_p10.read());
}

void mmult_hw::thread_grp_fu_18810_p10() {
    grp_fu_18810_p10 = esl_zext<16,8>(in_buf_19_1_V_load_reg_26706.read());
}

void mmult_hw::thread_grp_fu_18818_p1() {
    grp_fu_18818_p1 =  (sc_lv<8>) (grp_fu_18818_p10.read());
}

void mmult_hw::thread_grp_fu_18818_p10() {
    grp_fu_18818_p10 = esl_zext<16,8>(in_buf_19_3_V_load_reg_26711.read());
}

void mmult_hw::thread_grp_fu_18826_p1() {
    grp_fu_18826_p1 =  (sc_lv<8>) (grp_fu_18826_p10.read());
}

void mmult_hw::thread_grp_fu_18826_p10() {
    grp_fu_18826_p10 = esl_zext<16,8>(in_buf_19_5_V_load_reg_26716.read());
}

void mmult_hw::thread_grp_fu_18834_p1() {
    grp_fu_18834_p1 =  (sc_lv<8>) (grp_fu_18834_p10.read());
}

void mmult_hw::thread_grp_fu_18834_p10() {
    grp_fu_18834_p10 = esl_zext<16,8>(in_buf_19_7_V_load_reg_26721.read());
}

void mmult_hw::thread_grp_fu_18842_p1() {
    grp_fu_18842_p1 =  (sc_lv<8>) (grp_fu_18842_p10.read());
}

void mmult_hw::thread_grp_fu_18842_p10() {
    grp_fu_18842_p10 = esl_zext<16,8>(in_buf_20_1_V_load_reg_26726.read());
}

void mmult_hw::thread_grp_fu_18850_p1() {
    grp_fu_18850_p1 =  (sc_lv<8>) (grp_fu_18850_p10.read());
}

void mmult_hw::thread_grp_fu_18850_p10() {
    grp_fu_18850_p10 = esl_zext<16,8>(in_buf_20_3_V_load_reg_26731.read());
}

void mmult_hw::thread_grp_fu_18858_p1() {
    grp_fu_18858_p1 =  (sc_lv<8>) (grp_fu_18858_p10.read());
}

void mmult_hw::thread_grp_fu_18858_p10() {
    grp_fu_18858_p10 = esl_zext<16,8>(in_buf_20_5_V_load_reg_26736.read());
}

void mmult_hw::thread_grp_fu_18866_p1() {
    grp_fu_18866_p1 =  (sc_lv<8>) (grp_fu_18866_p10.read());
}

void mmult_hw::thread_grp_fu_18866_p10() {
    grp_fu_18866_p10 = esl_zext<16,8>(in_buf_20_7_V_load_reg_26741.read());
}

void mmult_hw::thread_grp_fu_18874_p1() {
    grp_fu_18874_p1 =  (sc_lv<8>) (grp_fu_18874_p10.read());
}

void mmult_hw::thread_grp_fu_18874_p10() {
    grp_fu_18874_p10 = esl_zext<16,8>(in_buf_21_1_V_load_reg_26746.read());
}

void mmult_hw::thread_grp_fu_18882_p1() {
    grp_fu_18882_p1 =  (sc_lv<8>) (grp_fu_18882_p10.read());
}

void mmult_hw::thread_grp_fu_18882_p10() {
    grp_fu_18882_p10 = esl_zext<16,8>(in_buf_21_3_V_load_reg_26751.read());
}

void mmult_hw::thread_grp_fu_18890_p1() {
    grp_fu_18890_p1 =  (sc_lv<8>) (grp_fu_18890_p10.read());
}

void mmult_hw::thread_grp_fu_18890_p10() {
    grp_fu_18890_p10 = esl_zext<16,8>(in_buf_21_5_V_load_reg_26756.read());
}

void mmult_hw::thread_grp_fu_18898_p1() {
    grp_fu_18898_p1 =  (sc_lv<8>) (grp_fu_18898_p10.read());
}

void mmult_hw::thread_grp_fu_18898_p10() {
    grp_fu_18898_p10 = esl_zext<16,8>(in_buf_21_7_V_load_reg_26761.read());
}

void mmult_hw::thread_grp_fu_18906_p1() {
    grp_fu_18906_p1 =  (sc_lv<8>) (grp_fu_18906_p10.read());
}

void mmult_hw::thread_grp_fu_18906_p10() {
    grp_fu_18906_p10 = esl_zext<16,8>(in_buf_22_1_V_load_reg_26766.read());
}

void mmult_hw::thread_grp_fu_18914_p1() {
    grp_fu_18914_p1 =  (sc_lv<8>) (grp_fu_18914_p10.read());
}

void mmult_hw::thread_grp_fu_18914_p10() {
    grp_fu_18914_p10 = esl_zext<16,8>(in_buf_22_3_V_load_reg_26771.read());
}

void mmult_hw::thread_grp_fu_18922_p1() {
    grp_fu_18922_p1 =  (sc_lv<8>) (grp_fu_18922_p10.read());
}

void mmult_hw::thread_grp_fu_18922_p10() {
    grp_fu_18922_p10 = esl_zext<16,8>(in_buf_22_5_V_load_reg_26776.read());
}

void mmult_hw::thread_grp_fu_18930_p1() {
    grp_fu_18930_p1 =  (sc_lv<8>) (grp_fu_18930_p10.read());
}

void mmult_hw::thread_grp_fu_18930_p10() {
    grp_fu_18930_p10 = esl_zext<16,8>(in_buf_22_7_V_load_reg_26781.read());
}

void mmult_hw::thread_grp_fu_18938_p1() {
    grp_fu_18938_p1 =  (sc_lv<8>) (grp_fu_18938_p10.read());
}

void mmult_hw::thread_grp_fu_18938_p10() {
    grp_fu_18938_p10 = esl_zext<16,8>(in_buf_23_1_V_load_reg_26786.read());
}

void mmult_hw::thread_grp_fu_18946_p1() {
    grp_fu_18946_p1 =  (sc_lv<8>) (grp_fu_18946_p10.read());
}

void mmult_hw::thread_grp_fu_18946_p10() {
    grp_fu_18946_p10 = esl_zext<16,8>(in_buf_23_3_V_load_reg_26791.read());
}

void mmult_hw::thread_grp_fu_18954_p1() {
    grp_fu_18954_p1 =  (sc_lv<8>) (grp_fu_18954_p10.read());
}

void mmult_hw::thread_grp_fu_18954_p10() {
    grp_fu_18954_p10 = esl_zext<16,8>(in_buf_23_5_V_load_reg_26796.read());
}

void mmult_hw::thread_grp_fu_18962_p1() {
    grp_fu_18962_p1 =  (sc_lv<8>) (grp_fu_18962_p10.read());
}

void mmult_hw::thread_grp_fu_18962_p10() {
    grp_fu_18962_p10 = esl_zext<16,8>(in_buf_23_7_V_load_reg_26801.read());
}

void mmult_hw::thread_grp_fu_18970_p1() {
    grp_fu_18970_p1 =  (sc_lv<8>) (grp_fu_18970_p10.read());
}

void mmult_hw::thread_grp_fu_18970_p10() {
    grp_fu_18970_p10 = esl_zext<16,8>(in_buf_24_1_V_load_reg_26806.read());
}

void mmult_hw::thread_grp_fu_18978_p1() {
    grp_fu_18978_p1 =  (sc_lv<8>) (grp_fu_18978_p10.read());
}

void mmult_hw::thread_grp_fu_18978_p10() {
    grp_fu_18978_p10 = esl_zext<16,8>(in_buf_24_3_V_load_reg_26811.read());
}

void mmult_hw::thread_grp_fu_18986_p1() {
    grp_fu_18986_p1 =  (sc_lv<8>) (grp_fu_18986_p10.read());
}

void mmult_hw::thread_grp_fu_18986_p10() {
    grp_fu_18986_p10 = esl_zext<16,8>(in_buf_24_5_V_load_reg_26816.read());
}

void mmult_hw::thread_grp_fu_18994_p1() {
    grp_fu_18994_p1 =  (sc_lv<8>) (grp_fu_18994_p10.read());
}

void mmult_hw::thread_grp_fu_18994_p10() {
    grp_fu_18994_p10 = esl_zext<16,8>(in_buf_24_7_V_load_reg_26821.read());
}

void mmult_hw::thread_grp_fu_19002_p1() {
    grp_fu_19002_p1 =  (sc_lv<8>) (grp_fu_19002_p10.read());
}

void mmult_hw::thread_grp_fu_19002_p10() {
    grp_fu_19002_p10 = esl_zext<16,8>(in_buf_25_1_V_load_reg_26826.read());
}

void mmult_hw::thread_grp_fu_19010_p1() {
    grp_fu_19010_p1 =  (sc_lv<8>) (grp_fu_19010_p10.read());
}

void mmult_hw::thread_grp_fu_19010_p10() {
    grp_fu_19010_p10 = esl_zext<16,8>(in_buf_25_3_V_load_reg_26831.read());
}

void mmult_hw::thread_grp_fu_19018_p1() {
    grp_fu_19018_p1 =  (sc_lv<8>) (grp_fu_19018_p10.read());
}

void mmult_hw::thread_grp_fu_19018_p10() {
    grp_fu_19018_p10 = esl_zext<16,8>(in_buf_25_5_V_load_reg_26836.read());
}

void mmult_hw::thread_grp_fu_19026_p1() {
    grp_fu_19026_p1 =  (sc_lv<8>) (grp_fu_19026_p10.read());
}

void mmult_hw::thread_grp_fu_19026_p10() {
    grp_fu_19026_p10 = esl_zext<16,8>(in_buf_25_7_V_load_reg_26841.read());
}

void mmult_hw::thread_grp_fu_19034_p1() {
    grp_fu_19034_p1 =  (sc_lv<8>) (grp_fu_19034_p10.read());
}

void mmult_hw::thread_grp_fu_19034_p10() {
    grp_fu_19034_p10 = esl_zext<16,8>(in_buf_26_1_V_load_reg_26846.read());
}

void mmult_hw::thread_grp_fu_19042_p1() {
    grp_fu_19042_p1 =  (sc_lv<8>) (grp_fu_19042_p10.read());
}

void mmult_hw::thread_grp_fu_19042_p10() {
    grp_fu_19042_p10 = esl_zext<16,8>(in_buf_26_3_V_load_reg_26851.read());
}

void mmult_hw::thread_grp_fu_19050_p1() {
    grp_fu_19050_p1 =  (sc_lv<8>) (grp_fu_19050_p10.read());
}

void mmult_hw::thread_grp_fu_19050_p10() {
    grp_fu_19050_p10 = esl_zext<16,8>(in_buf_26_5_V_load_reg_26856.read());
}

void mmult_hw::thread_grp_fu_19058_p1() {
    grp_fu_19058_p1 =  (sc_lv<8>) (grp_fu_19058_p10.read());
}

void mmult_hw::thread_grp_fu_19058_p10() {
    grp_fu_19058_p10 = esl_zext<16,8>(in_buf_26_7_V_load_reg_26861.read());
}

void mmult_hw::thread_grp_fu_19066_p1() {
    grp_fu_19066_p1 =  (sc_lv<8>) (grp_fu_19066_p10.read());
}

void mmult_hw::thread_grp_fu_19066_p10() {
    grp_fu_19066_p10 = esl_zext<16,8>(in_buf_27_1_V_load_reg_26866.read());
}

void mmult_hw::thread_grp_fu_19074_p1() {
    grp_fu_19074_p1 =  (sc_lv<8>) (grp_fu_19074_p10.read());
}

void mmult_hw::thread_grp_fu_19074_p10() {
    grp_fu_19074_p10 = esl_zext<16,8>(in_buf_27_3_V_load_reg_26871.read());
}

void mmult_hw::thread_grp_fu_19082_p1() {
    grp_fu_19082_p1 =  (sc_lv<8>) (grp_fu_19082_p10.read());
}

void mmult_hw::thread_grp_fu_19082_p10() {
    grp_fu_19082_p10 = esl_zext<16,8>(in_buf_27_5_V_load_reg_26876.read());
}

void mmult_hw::thread_grp_fu_19090_p1() {
    grp_fu_19090_p1 =  (sc_lv<8>) (grp_fu_19090_p10.read());
}

void mmult_hw::thread_grp_fu_19090_p10() {
    grp_fu_19090_p10 = esl_zext<16,8>(in_buf_27_7_V_load_reg_26881.read());
}

void mmult_hw::thread_grp_fu_19098_p1() {
    grp_fu_19098_p1 =  (sc_lv<8>) (grp_fu_19098_p10.read());
}

void mmult_hw::thread_grp_fu_19098_p10() {
    grp_fu_19098_p10 = esl_zext<16,8>(in_buf_28_1_V_load_reg_26886.read());
}

void mmult_hw::thread_grp_fu_19106_p1() {
    grp_fu_19106_p1 =  (sc_lv<8>) (grp_fu_19106_p10.read());
}

void mmult_hw::thread_grp_fu_19106_p10() {
    grp_fu_19106_p10 = esl_zext<16,8>(in_buf_28_3_V_load_reg_26891.read());
}

void mmult_hw::thread_grp_fu_19114_p1() {
    grp_fu_19114_p1 =  (sc_lv<8>) (grp_fu_19114_p10.read());
}

void mmult_hw::thread_grp_fu_19114_p10() {
    grp_fu_19114_p10 = esl_zext<16,8>(in_buf_28_5_V_load_reg_26896.read());
}

void mmult_hw::thread_grp_fu_19122_p1() {
    grp_fu_19122_p1 =  (sc_lv<8>) (grp_fu_19122_p10.read());
}

void mmult_hw::thread_grp_fu_19122_p10() {
    grp_fu_19122_p10 = esl_zext<16,8>(in_buf_28_7_V_load_reg_26901.read());
}

void mmult_hw::thread_grp_fu_19130_p1() {
    grp_fu_19130_p1 =  (sc_lv<8>) (grp_fu_19130_p10.read());
}

void mmult_hw::thread_grp_fu_19130_p10() {
    grp_fu_19130_p10 = esl_zext<16,8>(in_buf_29_1_V_load_reg_26906.read());
}

void mmult_hw::thread_grp_fu_19138_p1() {
    grp_fu_19138_p1 =  (sc_lv<8>) (grp_fu_19138_p10.read());
}

void mmult_hw::thread_grp_fu_19138_p10() {
    grp_fu_19138_p10 = esl_zext<16,8>(in_buf_29_3_V_load_reg_26911.read());
}

void mmult_hw::thread_grp_fu_19146_p1() {
    grp_fu_19146_p1 =  (sc_lv<8>) (grp_fu_19146_p10.read());
}

void mmult_hw::thread_grp_fu_19146_p10() {
    grp_fu_19146_p10 = esl_zext<16,8>(in_buf_29_5_V_load_reg_26916.read());
}

void mmult_hw::thread_grp_fu_19154_p1() {
    grp_fu_19154_p1 =  (sc_lv<8>) (grp_fu_19154_p10.read());
}

void mmult_hw::thread_grp_fu_19154_p10() {
    grp_fu_19154_p10 = esl_zext<16,8>(in_buf_29_7_V_load_reg_26921.read());
}

void mmult_hw::thread_grp_fu_19162_p1() {
    grp_fu_19162_p1 =  (sc_lv<8>) (grp_fu_19162_p10.read());
}

void mmult_hw::thread_grp_fu_19162_p10() {
    grp_fu_19162_p10 = esl_zext<16,8>(in_buf_30_1_V_load_reg_26926.read());
}

void mmult_hw::thread_grp_fu_19170_p1() {
    grp_fu_19170_p1 =  (sc_lv<8>) (grp_fu_19170_p10.read());
}

void mmult_hw::thread_grp_fu_19170_p10() {
    grp_fu_19170_p10 = esl_zext<16,8>(in_buf_30_3_V_load_reg_26931.read());
}

void mmult_hw::thread_grp_fu_19178_p1() {
    grp_fu_19178_p1 =  (sc_lv<8>) (grp_fu_19178_p10.read());
}

void mmult_hw::thread_grp_fu_19178_p10() {
    grp_fu_19178_p10 = esl_zext<16,8>(in_buf_30_5_V_load_reg_26936.read());
}

void mmult_hw::thread_grp_fu_19186_p1() {
    grp_fu_19186_p1 =  (sc_lv<8>) (grp_fu_19186_p10.read());
}

void mmult_hw::thread_grp_fu_19186_p10() {
    grp_fu_19186_p10 = esl_zext<16,8>(in_buf_30_7_V_load_reg_26941.read());
}

void mmult_hw::thread_grp_fu_19194_p1() {
    grp_fu_19194_p1 =  (sc_lv<8>) (grp_fu_19194_p10.read());
}

void mmult_hw::thread_grp_fu_19194_p10() {
    grp_fu_19194_p10 = esl_zext<16,8>(in_buf_31_1_V_load_reg_26946.read());
}

void mmult_hw::thread_grp_fu_19202_p1() {
    grp_fu_19202_p1 =  (sc_lv<8>) (grp_fu_19202_p10.read());
}

void mmult_hw::thread_grp_fu_19202_p10() {
    grp_fu_19202_p10 = esl_zext<16,8>(in_buf_31_3_V_load_reg_26951.read());
}

void mmult_hw::thread_grp_fu_19210_p1() {
    grp_fu_19210_p1 =  (sc_lv<8>) (grp_fu_19210_p10.read());
}

void mmult_hw::thread_grp_fu_19210_p10() {
    grp_fu_19210_p10 = esl_zext<16,8>(in_buf_31_5_V_load_reg_26956.read());
}

void mmult_hw::thread_grp_fu_19218_p1() {
    grp_fu_19218_p1 =  (sc_lv<8>) (grp_fu_19218_p10.read());
}

void mmult_hw::thread_grp_fu_19218_p10() {
    grp_fu_19218_p10 = esl_zext<16,8>(in_buf_31_6_V_load_reg_26961.read());
}

void mmult_hw::thread_i4_phi_fu_11439_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_flatten_reg_21938.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        i4_phi_fu_11439_p4 = tmp_14_mid2_v_reg_21961.read();
    } else {
        i4_phi_fu_11439_p4 = i4_reg_11435.read();
    }
}

void mmult_hw::thread_i5_phi_fu_11471_p4() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp4_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp4_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp4_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_lv1_0, exitcond_reg_28682.read()))) {
        i5_phi_fu_11471_p4 = i_4_reg_28716.read();
    } else {
        i5_phi_fu_11471_p4 = i5_reg_11467.read();
    }
}

void mmult_hw::thread_i_1_fu_12044_p2() {
    i_1_fu_12044_p2 = (!ap_const_lv4_2.is_01() || !i_reg_11265.read().is_01())? sc_lv<4>(): (sc_biguint<4>(ap_const_lv4_2) + sc_biguint<4>(i_reg_11265.read()));
}

void mmult_hw::thread_i_2_fu_12056_p2() {
    i_2_fu_12056_p2 = (!i2_reg_11301.read().is_01() || !ap_const_lv4_1.is_01())? sc_lv<4>(): (sc_biguint<4>(i2_reg_11301.read()) + sc_biguint<4>(ap_const_lv4_1));
}

void mmult_hw::thread_i_3_fu_12418_p2() {
    i_3_fu_12418_p2 = (!i3_reg_11392.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(i3_reg_11392.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void mmult_hw::thread_i_4_fu_18069_p2() {
    i_4_fu_18069_p2 = (!ap_const_lv8_8.is_01() || !i5_phi_fu_11471_p4.read().is_01())? sc_lv<8>(): (sc_biguint<8>(ap_const_lv8_8) + sc_biguint<8>(i5_phi_fu_11471_p4.read()));
}

void mmult_hw::thread_i_s_fu_12779_p2() {
    i_s_fu_12779_p2 = (!i4_phi_fu_11439_p4.read().is_01() || !ap_const_lv8_1.is_01())? sc_lv<8>(): (sc_biguint<8>(i4_phi_fu_11439_p4.read()) + sc_biguint<8>(ap_const_lv8_1));
}

void mmult_hw::thread_ifzero_fu_12808_p2() {
    ifzero_fu_12808_p2 = (!j_3_reg_22231.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(j_3_reg_22231.read() == ap_const_lv4_A);
}

void mmult_hw::thread_in_buf_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_0_V_address0 = in_buf_0_0_V_addr_reg_20640.read();
    } else {
        in_buf_0_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_0_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_0_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0))) {
        in_buf_0_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_1_V_address0 = in_buf_0_1_V_addr_reg_20800.read();
    } else {
        in_buf_0_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0))) {
        in_buf_0_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_2_V_address0 = in_buf_0_2_V_addr_reg_20960.read();
    } else {
        in_buf_0_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0))) {
        in_buf_0_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_3_V_address0 = in_buf_0_3_V_addr_reg_21120.read();
    } else {
        in_buf_0_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0))) {
        in_buf_0_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_4_V_address0 = in_buf_0_4_V_addr_reg_21280.read();
    } else {
        in_buf_0_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0))) {
        in_buf_0_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_5_V_address0 = in_buf_0_5_V_addr_reg_21440.read();
    } else {
        in_buf_0_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0))) {
        in_buf_0_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_6_V_address0 = in_buf_0_6_V_addr_reg_21600.read();
    } else {
        in_buf_0_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0))) {
        in_buf_0_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_0_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_0_7_V_address0 = in_buf_0_7_V_addr_reg_21760.read();
    } else {
        in_buf_0_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_0))) {
        in_buf_0_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_0_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_0_V_address0 = in_buf_10_0_V_addr_reg_20690.read();
    } else {
        in_buf_10_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_10_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_10_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A))) {
        in_buf_10_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_1_V_address0 = in_buf_10_1_V_addr_reg_20850.read();
    } else {
        in_buf_10_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A))) {
        in_buf_10_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_2_V_address0 = in_buf_10_2_V_addr_reg_21010.read();
    } else {
        in_buf_10_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A))) {
        in_buf_10_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_3_V_address0 = in_buf_10_3_V_addr_reg_21170.read();
    } else {
        in_buf_10_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A))) {
        in_buf_10_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_4_V_address0 = in_buf_10_4_V_addr_reg_21330.read();
    } else {
        in_buf_10_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A))) {
        in_buf_10_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_5_V_address0 = in_buf_10_5_V_addr_reg_21490.read();
    } else {
        in_buf_10_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A))) {
        in_buf_10_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_6_V_address0 = in_buf_10_6_V_addr_reg_21650.read();
    } else {
        in_buf_10_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A))) {
        in_buf_10_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_10_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_10_7_V_address0 = in_buf_10_7_V_addr_reg_21810.read();
    } else {
        in_buf_10_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_10_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_A))) {
        in_buf_10_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_10_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_0_V_address0 = in_buf_11_0_V_addr_reg_20695.read();
    } else {
        in_buf_11_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_11_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_11_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B))) {
        in_buf_11_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_1_V_address0 = in_buf_11_1_V_addr_reg_20855.read();
    } else {
        in_buf_11_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B))) {
        in_buf_11_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_2_V_address0 = in_buf_11_2_V_addr_reg_21015.read();
    } else {
        in_buf_11_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B))) {
        in_buf_11_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_3_V_address0 = in_buf_11_3_V_addr_reg_21175.read();
    } else {
        in_buf_11_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B))) {
        in_buf_11_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_4_V_address0 = in_buf_11_4_V_addr_reg_21335.read();
    } else {
        in_buf_11_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B))) {
        in_buf_11_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_5_V_address0 = in_buf_11_5_V_addr_reg_21495.read();
    } else {
        in_buf_11_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B))) {
        in_buf_11_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_6_V_address0 = in_buf_11_6_V_addr_reg_21655.read();
    } else {
        in_buf_11_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B))) {
        in_buf_11_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_11_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_11_7_V_address0 = in_buf_11_7_V_addr_reg_21815.read();
    } else {
        in_buf_11_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_11_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_B))) {
        in_buf_11_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_11_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_0_V_address0 = in_buf_12_0_V_addr_reg_20700.read();
    } else {
        in_buf_12_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_12_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_12_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C))) {
        in_buf_12_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_1_V_address0 = in_buf_12_1_V_addr_reg_20860.read();
    } else {
        in_buf_12_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C))) {
        in_buf_12_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_2_V_address0 = in_buf_12_2_V_addr_reg_21020.read();
    } else {
        in_buf_12_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C))) {
        in_buf_12_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_3_V_address0 = in_buf_12_3_V_addr_reg_21180.read();
    } else {
        in_buf_12_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C))) {
        in_buf_12_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_4_V_address0 = in_buf_12_4_V_addr_reg_21340.read();
    } else {
        in_buf_12_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C))) {
        in_buf_12_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_5_V_address0 = in_buf_12_5_V_addr_reg_21500.read();
    } else {
        in_buf_12_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C))) {
        in_buf_12_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_6_V_address0 = in_buf_12_6_V_addr_reg_21660.read();
    } else {
        in_buf_12_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C))) {
        in_buf_12_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_12_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_12_7_V_address0 = in_buf_12_7_V_addr_reg_21820.read();
    } else {
        in_buf_12_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_12_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_C))) {
        in_buf_12_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_12_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_0_V_address0 = in_buf_13_0_V_addr_reg_20705.read();
    } else {
        in_buf_13_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_13_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_13_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D))) {
        in_buf_13_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_1_V_address0 = in_buf_13_1_V_addr_reg_20865.read();
    } else {
        in_buf_13_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D))) {
        in_buf_13_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_2_V_address0 = in_buf_13_2_V_addr_reg_21025.read();
    } else {
        in_buf_13_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D))) {
        in_buf_13_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_3_V_address0 = in_buf_13_3_V_addr_reg_21185.read();
    } else {
        in_buf_13_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D))) {
        in_buf_13_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_4_V_address0 = in_buf_13_4_V_addr_reg_21345.read();
    } else {
        in_buf_13_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D))) {
        in_buf_13_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_5_V_address0 = in_buf_13_5_V_addr_reg_21505.read();
    } else {
        in_buf_13_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D))) {
        in_buf_13_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_6_V_address0 = in_buf_13_6_V_addr_reg_21665.read();
    } else {
        in_buf_13_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D))) {
        in_buf_13_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_13_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_13_7_V_address0 = in_buf_13_7_V_addr_reg_21825.read();
    } else {
        in_buf_13_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_13_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_D))) {
        in_buf_13_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_13_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_0_V_address0 = in_buf_14_0_V_addr_reg_20710.read();
    } else {
        in_buf_14_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_14_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_14_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E))) {
        in_buf_14_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_1_V_address0 = in_buf_14_1_V_addr_reg_20870.read();
    } else {
        in_buf_14_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E))) {
        in_buf_14_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_2_V_address0 = in_buf_14_2_V_addr_reg_21030.read();
    } else {
        in_buf_14_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E))) {
        in_buf_14_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_3_V_address0 = in_buf_14_3_V_addr_reg_21190.read();
    } else {
        in_buf_14_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E))) {
        in_buf_14_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_4_V_address0 = in_buf_14_4_V_addr_reg_21350.read();
    } else {
        in_buf_14_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E))) {
        in_buf_14_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_5_V_address0 = in_buf_14_5_V_addr_reg_21510.read();
    } else {
        in_buf_14_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E))) {
        in_buf_14_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_6_V_address0 = in_buf_14_6_V_addr_reg_21670.read();
    } else {
        in_buf_14_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E))) {
        in_buf_14_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_14_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_14_7_V_address0 = in_buf_14_7_V_addr_reg_21830.read();
    } else {
        in_buf_14_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_14_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_E))) {
        in_buf_14_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_14_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_0_V_address0 = in_buf_15_0_V_addr_reg_20715.read();
    } else {
        in_buf_15_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_15_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_15_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F))) {
        in_buf_15_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_1_V_address0 = in_buf_15_1_V_addr_reg_20875.read();
    } else {
        in_buf_15_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F))) {
        in_buf_15_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_2_V_address0 = in_buf_15_2_V_addr_reg_21035.read();
    } else {
        in_buf_15_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F))) {
        in_buf_15_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_3_V_address0 = in_buf_15_3_V_addr_reg_21195.read();
    } else {
        in_buf_15_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F))) {
        in_buf_15_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_4_V_address0 = in_buf_15_4_V_addr_reg_21355.read();
    } else {
        in_buf_15_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F))) {
        in_buf_15_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter1_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_5_V_address0 = in_buf_15_5_V_addr_reg_21515.read();
    } else {
        in_buf_15_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F))) {
        in_buf_15_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_6_V_address0 = in_buf_15_6_V_addr_reg_21675.read();
    } else {
        in_buf_15_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F))) {
        in_buf_15_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_15_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_15_7_V_address0 = in_buf_15_7_V_addr_reg_21835.read();
    } else {
        in_buf_15_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_15_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_F))) {
        in_buf_15_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_15_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_0_V_address0 = in_buf_16_0_V_addr_reg_20720.read();
    } else {
        in_buf_16_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_16_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_16_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10))) {
        in_buf_16_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_1_V_address0 = in_buf_16_1_V_addr_reg_20880.read();
    } else {
        in_buf_16_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10))) {
        in_buf_16_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_2_V_address0 = in_buf_16_2_V_addr_reg_21040.read();
    } else {
        in_buf_16_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10))) {
        in_buf_16_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_3_V_address0 = in_buf_16_3_V_addr_reg_21200.read();
    } else {
        in_buf_16_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10))) {
        in_buf_16_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_4_V_address0 = in_buf_16_4_V_addr_reg_21360.read();
    } else {
        in_buf_16_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10))) {
        in_buf_16_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_5_V_address0 = in_buf_16_5_V_addr_reg_21520.read();
    } else {
        in_buf_16_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10))) {
        in_buf_16_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_6_V_address0 = in_buf_16_6_V_addr_reg_21680.read();
    } else {
        in_buf_16_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10))) {
        in_buf_16_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_16_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_16_7_V_address0 = in_buf_16_7_V_addr_reg_21840.read();
    } else {
        in_buf_16_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_16_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_10))) {
        in_buf_16_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_16_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_0_V_address0 = in_buf_17_0_V_addr_reg_20725.read();
    } else {
        in_buf_17_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_17_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_17_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11))) {
        in_buf_17_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_1_V_address0 = in_buf_17_1_V_addr_reg_20885.read();
    } else {
        in_buf_17_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11))) {
        in_buf_17_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_2_V_address0 = in_buf_17_2_V_addr_reg_21045.read();
    } else {
        in_buf_17_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11))) {
        in_buf_17_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_3_V_address0 = in_buf_17_3_V_addr_reg_21205.read();
    } else {
        in_buf_17_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11))) {
        in_buf_17_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_4_V_address0 = in_buf_17_4_V_addr_reg_21365.read();
    } else {
        in_buf_17_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11))) {
        in_buf_17_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_5_V_address0 = in_buf_17_5_V_addr_reg_21525.read();
    } else {
        in_buf_17_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11))) {
        in_buf_17_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_6_V_address0 = in_buf_17_6_V_addr_reg_21685.read();
    } else {
        in_buf_17_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11))) {
        in_buf_17_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_17_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_17_7_V_address0 = in_buf_17_7_V_addr_reg_21845.read();
    } else {
        in_buf_17_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_17_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_11))) {
        in_buf_17_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_17_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_0_V_address0 = in_buf_18_0_V_addr_reg_20730.read();
    } else {
        in_buf_18_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_18_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_18_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12))) {
        in_buf_18_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_1_V_address0 = in_buf_18_1_V_addr_reg_20890.read();
    } else {
        in_buf_18_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12))) {
        in_buf_18_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_2_V_address0 = in_buf_18_2_V_addr_reg_21050.read();
    } else {
        in_buf_18_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12))) {
        in_buf_18_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_3_V_address0 = in_buf_18_3_V_addr_reg_21210.read();
    } else {
        in_buf_18_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12))) {
        in_buf_18_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_4_V_address0 = in_buf_18_4_V_addr_reg_21370.read();
    } else {
        in_buf_18_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12))) {
        in_buf_18_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_5_V_address0 = in_buf_18_5_V_addr_reg_21530.read();
    } else {
        in_buf_18_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12))) {
        in_buf_18_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_6_V_address0 = in_buf_18_6_V_addr_reg_21690.read();
    } else {
        in_buf_18_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12))) {
        in_buf_18_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_18_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_18_7_V_address0 = in_buf_18_7_V_addr_reg_21850.read();
    } else {
        in_buf_18_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_18_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_12))) {
        in_buf_18_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_18_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_0_V_address0 = in_buf_19_0_V_addr_reg_20735.read();
    } else {
        in_buf_19_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_19_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_19_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13))) {
        in_buf_19_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_1_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_1_V_address0 = in_buf_19_1_V_addr_reg_20895.read();
    } else {
        in_buf_19_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13))) {
        in_buf_19_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_2_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_2_V_address0 = in_buf_19_2_V_addr_reg_21055.read();
    } else {
        in_buf_19_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13))) {
        in_buf_19_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_3_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_3_V_address0 = in_buf_19_3_V_addr_reg_21215.read();
    } else {
        in_buf_19_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13))) {
        in_buf_19_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_4_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_4_V_address0 = in_buf_19_4_V_addr_reg_21375.read();
    } else {
        in_buf_19_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13))) {
        in_buf_19_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_5_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_5_V_address0 = in_buf_19_5_V_addr_reg_21535.read();
    } else {
        in_buf_19_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13))) {
        in_buf_19_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_6_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_6_V_address0 = in_buf_19_6_V_addr_reg_21695.read();
    } else {
        in_buf_19_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13))) {
        in_buf_19_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_19_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_7_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_19_7_V_address0 = in_buf_19_7_V_addr_reg_21855.read();
    } else {
        in_buf_19_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_19_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_13))) {
        in_buf_19_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_19_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_0_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_0_V_address0 = in_buf_1_0_V_addr_reg_20645.read();
    } else {
        in_buf_1_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_1_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_1_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1))) {
        in_buf_1_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_1_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_1_V_address0 = in_buf_1_1_V_addr_reg_20805.read();
    } else {
        in_buf_1_1_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1))) {
        in_buf_1_1_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_2_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_2_V_address0 = in_buf_1_2_V_addr_reg_20965.read();
    } else {
        in_buf_1_2_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1))) {
        in_buf_1_2_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_3_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_3_V_address0 = in_buf_1_3_V_addr_reg_21125.read();
    } else {
        in_buf_1_3_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1))) {
        in_buf_1_3_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_4_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_4_V_address0 = in_buf_1_4_V_addr_reg_21285.read();
    } else {
        in_buf_1_4_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1))) {
        in_buf_1_4_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_5_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_5_V_address0 = in_buf_1_5_V_addr_reg_21445.read();
    } else {
        in_buf_1_5_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1))) {
        in_buf_1_5_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_6_V_address0 =  (sc_lv<7>) (ap_reg_pp3_iter2_tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_6_V_address0 = in_buf_1_6_V_addr_reg_21605.read();
    } else {
        in_buf_1_6_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1))) {
        in_buf_1_6_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_1_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_7_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_1_7_V_address0 = in_buf_1_7_V_addr_reg_21765.read();
    } else {
        in_buf_1_7_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
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
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_1))) {
        in_buf_1_7_V_we0 = ap_const_logic_1;
    } else {
        in_buf_1_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_0_V_address0 =  (sc_lv<7>) (tmp_14_mid2_reg_21966.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00000000.read(), ap_const_boolean_0))) {
        in_buf_20_0_V_address0 = in_buf_20_0_V_addr_reg_20740.read();
    } else {
        in_buf_20_0_V_address0 = "XXXXXXX";
    }
}

void mmult_hw::thread_in_buf_20_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        in_buf_20_0_V_ce0 = ap_const_logic_1;
    } else {
        in_buf_20_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_in_buf_20_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp2_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp2_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp2_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo1_cast_cast_reg_21929.read(), ap_const_lv6_14))) {
        in_buf_20_0_V_we0 = ap_const_logic_1;
    } else {
        in_buf_20_0_V_we0 = ap_const_logic_0;
    }
}

}

