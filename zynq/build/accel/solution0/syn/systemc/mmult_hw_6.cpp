#include "mmult_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mmult_hw::thread_tmp5_fu_16305_p2() {
    tmp5_fu_16305_p2 = (!tmp9_cast_fu_16301_p1.read().is_01() || !tmp6_fu_16284_p2.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp9_cast_fu_16301_p1.read()) + sc_biguint<32>(tmp6_fu_16284_p2.read()));
}

void mmult_hw::thread_tmp60_cast_fu_16549_p1() {
    tmp60_cast_fu_16549_p1 = esl_sext<18,17>(tmp60_reg_26008.read());
}

void mmult_hw::thread_tmp61_cast_fu_16552_p1() {
    tmp61_cast_fu_16552_p1 = esl_sext<18,17>(tmp61_reg_26013.read());
}

void mmult_hw::thread_tmp62_cast_fu_16577_p1() {
    tmp62_cast_fu_16577_p1 = esl_sext<19,18>(tmp62_fu_16571_p2.read());
}

void mmult_hw::thread_tmp62_fu_16571_p2() {
    tmp62_fu_16571_p2 = (!tmp64_cast_fu_16568_p1.read().is_01() || !tmp63_cast_fu_16565_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp64_cast_fu_16568_p1.read()) + sc_bigint<18>(tmp63_cast_fu_16565_p1.read()));
}

void mmult_hw::thread_tmp63_cast_fu_16565_p1() {
    tmp63_cast_fu_16565_p1 = esl_sext<18,17>(tmp63_reg_26018.read());
}

void mmult_hw::thread_tmp64_cast_fu_16568_p1() {
    tmp64_cast_fu_16568_p1 = esl_sext<18,17>(tmp64_reg_26023.read());
}

void mmult_hw::thread_tmp65_cast_fu_17875_p1() {
    tmp65_cast_fu_17875_p1 = esl_sext<32,22>(tmp65_reg_26708.read());
}

void mmult_hw::thread_tmp65_fu_17790_p2() {
    tmp65_fu_17790_p2 = (!tmp97_cast_fu_17787_p1.read().is_01() || !tmp66_cast_fu_17784_p1.read().is_01())? sc_lv<22>(): (sc_bigint<22>(tmp97_cast_fu_17787_p1.read()) + sc_bigint<22>(tmp66_cast_fu_17784_p1.read()));
}

void mmult_hw::thread_tmp66_cast_fu_17784_p1() {
    tmp66_cast_fu_17784_p1 = esl_sext<22,21>(tmp66_reg_26673.read());
}

void mmult_hw::thread_tmp66_fu_17589_p2() {
    tmp66_fu_17589_p2 = (!tmp82_cast_fu_17585_p1.read().is_01() || !tmp67_cast_fu_17569_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp82_cast_fu_17585_p1.read()) + sc_bigint<21>(tmp67_cast_fu_17569_p1.read()));
}

void mmult_hw::thread_tmp67_cast_fu_17569_p1() {
    tmp67_cast_fu_17569_p1 = esl_sext<21,20>(tmp67_fu_17563_p2.read());
}

void mmult_hw::thread_tmp67_fu_17563_p2() {
    tmp67_fu_17563_p2 = (!tmp75_cast_fu_17560_p1.read().is_01() || !tmp68_cast_fu_17557_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp75_cast_fu_17560_p1.read()) + sc_bigint<20>(tmp68_cast_fu_17557_p1.read()));
}

void mmult_hw::thread_tmp68_cast_fu_17557_p1() {
    tmp68_cast_fu_17557_p1 = esl_sext<20,19>(tmp68_reg_26543.read());
}

void mmult_hw::thread_tmp68_fu_16619_p2() {
    tmp68_fu_16619_p2 = (!tmp72_cast_fu_16615_p1.read().is_01() || !tmp69_cast_fu_16599_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp72_cast_fu_16615_p1.read()) + sc_bigint<19>(tmp69_cast_fu_16599_p1.read()));
}

void mmult_hw::thread_tmp69_cast_fu_16599_p1() {
    tmp69_cast_fu_16599_p1 = esl_sext<19,18>(tmp69_fu_16593_p2.read());
}

void mmult_hw::thread_tmp69_fu_16593_p2() {
    tmp69_fu_16593_p2 = (!tmp71_cast_fu_16590_p1.read().is_01() || !tmp70_cast_fu_16587_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp71_cast_fu_16590_p1.read()) + sc_bigint<18>(tmp70_cast_fu_16587_p1.read()));
}

void mmult_hw::thread_tmp6_fu_16284_p2() {
    tmp6_fu_16284_p2 = (!tmp8_cast_fu_16281_p1.read().is_01() || !tmp7_reg_25868.read().is_01())? sc_lv<32>(): (sc_bigint<32>(tmp8_cast_fu_16281_p1.read()) + sc_bigint<32>(tmp7_reg_25868.read()));
}

void mmult_hw::thread_tmp70_cast_fu_16587_p1() {
    tmp70_cast_fu_16587_p1 = esl_sext<18,17>(tmp70_reg_26028.read());
}

void mmult_hw::thread_tmp71_cast_fu_16590_p1() {
    tmp71_cast_fu_16590_p1 = esl_sext<18,17>(tmp71_reg_26033.read());
}

void mmult_hw::thread_tmp72_cast_fu_16615_p1() {
    tmp72_cast_fu_16615_p1 = esl_sext<19,18>(tmp72_fu_16609_p2.read());
}

void mmult_hw::thread_tmp72_fu_16609_p2() {
    tmp72_fu_16609_p2 = (!tmp74_cast_fu_16606_p1.read().is_01() || !tmp73_cast_fu_16603_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp74_cast_fu_16606_p1.read()) + sc_bigint<18>(tmp73_cast_fu_16603_p1.read()));
}

void mmult_hw::thread_tmp73_cast_fu_16603_p1() {
    tmp73_cast_fu_16603_p1 = esl_sext<18,17>(tmp73_reg_26038.read());
}

void mmult_hw::thread_tmp74_cast_fu_16606_p1() {
    tmp74_cast_fu_16606_p1 = esl_sext<18,17>(tmp74_reg_26043.read());
}

void mmult_hw::thread_tmp75_cast_fu_17560_p1() {
    tmp75_cast_fu_17560_p1 = esl_sext<20,19>(tmp75_reg_26548.read());
}

void mmult_hw::thread_tmp75_fu_16657_p2() {
    tmp75_fu_16657_p2 = (!tmp79_cast_fu_16653_p1.read().is_01() || !tmp76_cast_fu_16637_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp79_cast_fu_16653_p1.read()) + sc_bigint<19>(tmp76_cast_fu_16637_p1.read()));
}

void mmult_hw::thread_tmp76_cast_fu_16637_p1() {
    tmp76_cast_fu_16637_p1 = esl_sext<19,18>(tmp76_fu_16631_p2.read());
}

void mmult_hw::thread_tmp76_fu_16631_p2() {
    tmp76_fu_16631_p2 = (!tmp78_cast_fu_16628_p1.read().is_01() || !tmp77_cast_fu_16625_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp78_cast_fu_16628_p1.read()) + sc_bigint<18>(tmp77_cast_fu_16625_p1.read()));
}

void mmult_hw::thread_tmp77_cast_fu_16625_p1() {
    tmp77_cast_fu_16625_p1 = esl_sext<18,17>(tmp77_reg_26048.read());
}

void mmult_hw::thread_tmp78_cast_fu_16628_p1() {
    tmp78_cast_fu_16628_p1 = esl_sext<18,17>(tmp78_reg_26053.read());
}

void mmult_hw::thread_tmp79_cast_fu_16653_p1() {
    tmp79_cast_fu_16653_p1 = esl_sext<19,18>(tmp79_fu_16647_p2.read());
}

void mmult_hw::thread_tmp79_fu_16647_p2() {
    tmp79_fu_16647_p2 = (!tmp81_cast_fu_16644_p1.read().is_01() || !tmp80_cast_fu_16641_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp81_cast_fu_16644_p1.read()) + sc_bigint<18>(tmp80_cast_fu_16641_p1.read()));
}

void mmult_hw::thread_tmp80_cast_fu_16641_p1() {
    tmp80_cast_fu_16641_p1 = esl_sext<18,17>(tmp80_reg_26058.read());
}

void mmult_hw::thread_tmp81_cast_fu_16644_p1() {
    tmp81_cast_fu_16644_p1 = esl_sext<18,17>(tmp81_reg_26063.read());
}

void mmult_hw::thread_tmp82_cast_fu_17585_p1() {
    tmp82_cast_fu_17585_p1 = esl_sext<21,20>(tmp82_fu_17579_p2.read());
}

void mmult_hw::thread_tmp82_fu_17579_p2() {
    tmp82_fu_17579_p2 = (!tmp90_cast_fu_17576_p1.read().is_01() || !tmp83_cast_fu_17573_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp90_cast_fu_17576_p1.read()) + sc_bigint<20>(tmp83_cast_fu_17573_p1.read()));
}

void mmult_hw::thread_tmp83_cast_fu_17573_p1() {
    tmp83_cast_fu_17573_p1 = esl_sext<20,19>(tmp83_reg_26553.read());
}

void mmult_hw::thread_tmp83_fu_16695_p2() {
    tmp83_fu_16695_p2 = (!tmp87_cast_fu_16691_p1.read().is_01() || !tmp84_cast_fu_16675_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp87_cast_fu_16691_p1.read()) + sc_bigint<19>(tmp84_cast_fu_16675_p1.read()));
}

void mmult_hw::thread_tmp84_cast_fu_16675_p1() {
    tmp84_cast_fu_16675_p1 = esl_sext<19,18>(tmp84_fu_16669_p2.read());
}

void mmult_hw::thread_tmp84_fu_16669_p2() {
    tmp84_fu_16669_p2 = (!tmp86_cast_fu_16666_p1.read().is_01() || !tmp85_cast_fu_16663_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp86_cast_fu_16666_p1.read()) + sc_bigint<18>(tmp85_cast_fu_16663_p1.read()));
}

void mmult_hw::thread_tmp85_cast_fu_16663_p1() {
    tmp85_cast_fu_16663_p1 = esl_sext<18,17>(tmp85_reg_26068.read());
}

void mmult_hw::thread_tmp86_cast_fu_16666_p1() {
    tmp86_cast_fu_16666_p1 = esl_sext<18,17>(tmp86_reg_26073.read());
}

void mmult_hw::thread_tmp87_cast_fu_16691_p1() {
    tmp87_cast_fu_16691_p1 = esl_sext<19,18>(tmp87_fu_16685_p2.read());
}

void mmult_hw::thread_tmp87_fu_16685_p2() {
    tmp87_fu_16685_p2 = (!tmp89_cast_fu_16682_p1.read().is_01() || !tmp88_cast_fu_16679_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp89_cast_fu_16682_p1.read()) + sc_bigint<18>(tmp88_cast_fu_16679_p1.read()));
}

void mmult_hw::thread_tmp88_cast_fu_16679_p1() {
    tmp88_cast_fu_16679_p1 = esl_sext<18,17>(tmp88_reg_26078.read());
}

void mmult_hw::thread_tmp89_cast_fu_16682_p1() {
    tmp89_cast_fu_16682_p1 = esl_sext<18,17>(tmp89_reg_26083.read());
}

void mmult_hw::thread_tmp8_cast_fu_16281_p1() {
    tmp8_cast_fu_16281_p1 = esl_sext<32,17>(tmp8_reg_25873.read());
}

void mmult_hw::thread_tmp90_cast_fu_17576_p1() {
    tmp90_cast_fu_17576_p1 = esl_sext<20,19>(tmp90_reg_26558.read());
}

void mmult_hw::thread_tmp90_fu_16733_p2() {
    tmp90_fu_16733_p2 = (!tmp94_cast_fu_16729_p1.read().is_01() || !tmp91_cast_fu_16713_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp94_cast_fu_16729_p1.read()) + sc_bigint<19>(tmp91_cast_fu_16713_p1.read()));
}

void mmult_hw::thread_tmp91_cast_fu_16713_p1() {
    tmp91_cast_fu_16713_p1 = esl_sext<19,18>(tmp91_fu_16707_p2.read());
}

void mmult_hw::thread_tmp91_fu_16707_p2() {
    tmp91_fu_16707_p2 = (!tmp93_cast_fu_16704_p1.read().is_01() || !tmp92_cast_fu_16701_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp93_cast_fu_16704_p1.read()) + sc_bigint<18>(tmp92_cast_fu_16701_p1.read()));
}

void mmult_hw::thread_tmp92_cast_fu_16701_p1() {
    tmp92_cast_fu_16701_p1 = esl_sext<18,17>(tmp92_reg_26088.read());
}

void mmult_hw::thread_tmp93_cast_fu_16704_p1() {
    tmp93_cast_fu_16704_p1 = esl_sext<18,17>(tmp93_reg_26093.read());
}

void mmult_hw::thread_tmp94_cast_fu_16729_p1() {
    tmp94_cast_fu_16729_p1 = esl_sext<19,18>(tmp94_fu_16723_p2.read());
}

void mmult_hw::thread_tmp94_fu_16723_p2() {
    tmp94_fu_16723_p2 = (!tmp96_cast_fu_16720_p1.read().is_01() || !tmp95_cast_fu_16717_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp96_cast_fu_16720_p1.read()) + sc_bigint<18>(tmp95_cast_fu_16717_p1.read()));
}

void mmult_hw::thread_tmp95_cast_fu_16717_p1() {
    tmp95_cast_fu_16717_p1 = esl_sext<18,17>(tmp95_reg_26098.read());
}

void mmult_hw::thread_tmp96_cast_fu_16720_p1() {
    tmp96_cast_fu_16720_p1 = esl_sext<18,17>(tmp96_reg_26103.read());
}

void mmult_hw::thread_tmp97_cast_fu_17787_p1() {
    tmp97_cast_fu_17787_p1 = esl_sext<22,21>(tmp97_reg_26678.read());
}

void mmult_hw::thread_tmp97_fu_17627_p2() {
    tmp97_fu_17627_p2 = (!tmp113_cast_fu_17623_p1.read().is_01() || !tmp98_cast_fu_17607_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp113_cast_fu_17623_p1.read()) + sc_bigint<21>(tmp98_cast_fu_17607_p1.read()));
}

void mmult_hw::thread_tmp98_cast_fu_17607_p1() {
    tmp98_cast_fu_17607_p1 = esl_sext<21,20>(tmp98_fu_17601_p2.read());
}

void mmult_hw::thread_tmp98_fu_17601_p2() {
    tmp98_fu_17601_p2 = (!tmp106_cast_fu_17598_p1.read().is_01() || !tmp99_cast_fu_17595_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp106_cast_fu_17598_p1.read()) + sc_bigint<20>(tmp99_cast_fu_17595_p1.read()));
}

void mmult_hw::thread_tmp99_cast_fu_17595_p1() {
    tmp99_cast_fu_17595_p1 = esl_sext<20,19>(tmp99_reg_26563.read());
}

void mmult_hw::thread_tmp99_fu_16771_p2() {
    tmp99_fu_16771_p2 = (!tmp103_cast_fu_16767_p1.read().is_01() || !tmp100_cast_fu_16751_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp103_cast_fu_16767_p1.read()) + sc_bigint<19>(tmp100_cast_fu_16751_p1.read()));
}

void mmult_hw::thread_tmp9_cast_fu_16301_p1() {
    tmp9_cast_fu_16301_p1 = esl_sext<32,18>(tmp9_fu_16295_p2.read());
}

void mmult_hw::thread_tmp9_fu_16295_p2() {
    tmp9_fu_16295_p2 = (!tmp11_cast_fu_16292_p1.read().is_01() || !tmp10_cast_fu_16289_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp11_cast_fu_16292_p1.read()) + sc_bigint<18>(tmp10_cast_fu_16289_p1.read()));
}

void mmult_hw::thread_tmp_12_fu_12334_p1() {
    tmp_12_fu_12334_p1 = esl_zext<64,7>(i3_reg_11264.read());
}

void mmult_hw::thread_tmp_13_fu_12302_p3() {
    tmp_13_fu_12302_p3 = t_reg_11241.read().range(13, 13);
}

void mmult_hw::thread_tmp_14_fu_17906_p2() {
    tmp_14_fu_17906_p2 = (os_idx_reg_11229.read() | ap_const_lv16_5);
}

void mmult_hw::thread_tmp_15_fu_12260_p1() {
    tmp_15_fu_12260_p1 = in_stream_data_V_0_data_out.read().range(8-1, 0);
}

void mmult_hw::thread_tmp_16_fu_17833_p3() {
    tmp_16_fu_17833_p3 = esl_concat<7,3>(ap_reg_pp3_iter6_tmp_23_mid2_v_reg_21744.read(), ap_const_lv3_0);
}

void mmult_hw::thread_tmp_17_fu_17855_p2() {
    tmp_17_fu_17855_p2 = (!p_shl_cast_fu_17840_p1.read().is_01() || !p_shl1_cast_fu_17851_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl_cast_fu_17840_p1.read()) + sc_biguint<11>(p_shl1_cast_fu_17851_p1.read()));
}

void mmult_hw::thread_tmp_19_cast_fu_17861_p1() {
    tmp_19_cast_fu_17861_p1 = esl_zext<11,4>(ap_reg_pp3_iter6_j3_mid2_reg_21739.read());
}

void mmult_hw::thread_tmp_19_fu_12828_p1() {
    tmp_19_fu_12828_p1 = esl_zext<64,4>(j3_mid2_fu_12681_p3.read());
}

void mmult_hw::thread_tmp_1_fu_11972_p1() {
    tmp_1_fu_11972_p1 = esl_zext<64,4>(i2_reg_11185.read());
}

void mmult_hw::thread_tmp_20_cast_fu_17870_p1() {
    tmp_20_cast_fu_17870_p1 = esl_zext<64,11>(tmp_20_fu_17864_p2.read());
}

void mmult_hw::thread_tmp_20_fu_17864_p2() {
    tmp_20_fu_17864_p2 = (!tmp_19_cast_fu_17861_p1.read().is_01() || !tmp_17_fu_17855_p2.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_19_cast_fu_17861_p1.read()) + sc_biguint<11>(tmp_17_fu_17855_p2.read()));
}

void mmult_hw::thread_tmp_23_fu_17930_p2() {
    tmp_23_fu_17930_p2 = (!os_idx_1_reg_11339.read().is_01() || !ap_const_lv16_5.is_01())? sc_lv<16>(): (sc_biguint<16>(os_idx_1_reg_11339.read()) + sc_biguint<16>(ap_const_lv16_5));
}

void mmult_hw::thread_tmp_23_mid2_fu_12697_p1() {
    tmp_23_mid2_fu_12697_p1 = esl_zext<64,7>(tmp_23_mid2_v_fu_12689_p3.read());
}

void mmult_hw::thread_tmp_23_mid2_v_fu_12689_p3() {
    tmp_23_mid2_v_fu_12689_p3 = (!exitcond5_fu_12675_p2.read()[0].is_01())? sc_lv<7>(): ((exitcond5_fu_12675_p2.read()[0].to_bool())? i_4_fu_12669_p2.read(): i4_phi_fu_11311_p4.read());
}

void mmult_hw::thread_tmp_259_cast_fu_17987_p1() {
    tmp_259_cast_fu_17987_p1 = esl_zext<64,11>(tmp_31_fu_17982_p2.read());
}

void mmult_hw::thread_tmp_25_cast_fu_17978_p1() {
    tmp_25_cast_fu_17978_p1 = esl_zext<11,4>(j4_reg_11371.read());
}

void mmult_hw::thread_tmp_25_fu_17844_p3() {
    tmp_25_fu_17844_p3 = esl_concat<7,1>(ap_reg_pp3_iter6_tmp_23_mid2_v_reg_21744.read(), ap_const_lv1_0);
}

void mmult_hw::thread_tmp_260_cast_fu_18007_p1() {
    tmp_260_cast_fu_18007_p1 = esl_zext<64,11>(tmp_32_fu_18002_p2.read());
}

void mmult_hw::thread_tmp_261_fu_12621_p1() {
    tmp_261_fu_12621_p1 = in_stream_data_V_0_data_out.read().range(8-1, 0);
}

void mmult_hw::thread_tmp_26_fu_17992_p2() {
    tmp_26_fu_17992_p2 = (j4_reg_11371.read() | ap_const_lv4_1);
}

void mmult_hw::thread_tmp_27_cast_fu_17998_p1() {
    tmp_27_cast_fu_17998_p1 = esl_zext<11,4>(tmp_26_fu_17992_p2.read());
}

void mmult_hw::thread_tmp_27_fu_17936_p3() {
    tmp_27_fu_17936_p3 = esl_concat<7,3>(i5_reg_11350.read(), ap_const_lv3_0);
}

void mmult_hw::thread_tmp_28_fu_18012_p2() {
    tmp_28_fu_18012_p2 = (!os_idx_2_phi_fu_11364_p4.read().is_01() || !ap_const_lv16_1.is_01())? sc_lv<16>(): (sc_biguint<16>(os_idx_2_phi_fu_11364_p4.read()) + sc_biguint<16>(ap_const_lv16_1));
}

void mmult_hw::thread_tmp_29_fu_17948_p3() {
    tmp_29_fu_17948_p3 = esl_concat<7,1>(i5_reg_11350.read(), ap_const_lv1_0);
}

void mmult_hw::thread_tmp_2_fu_11910_p2() {
    tmp_2_fu_11910_p2 = (!is_idx_reg_11138.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(is_idx_reg_11138.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void mmult_hw::thread_tmp_30_fu_17960_p2() {
    tmp_30_fu_17960_p2 = (!p_shl3_cast_fu_17956_p1.read().is_01() || !p_shl2_cast_fu_17944_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(p_shl3_cast_fu_17956_p1.read()) + sc_biguint<11>(p_shl2_cast_fu_17944_p1.read()));
}

void mmult_hw::thread_tmp_31_fu_17982_p2() {
    tmp_31_fu_17982_p2 = (!tmp_30_reg_26747.read().is_01() || !tmp_25_cast_fu_17978_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_30_reg_26747.read()) + sc_biguint<11>(tmp_25_cast_fu_17978_p1.read()));
}

void mmult_hw::thread_tmp_32_fu_18002_p2() {
    tmp_32_fu_18002_p2 = (!tmp_30_reg_26747.read().is_01() || !tmp_27_cast_fu_17998_p1.read().is_01())? sc_lv<11>(): (sc_biguint<11>(tmp_30_reg_26747.read()) + sc_biguint<11>(tmp_27_cast_fu_17998_p1.read()));
}

void mmult_hw::thread_tmp_4_fu_11916_p1() {
    tmp_4_fu_11916_p1 = esl_zext<64,4>(i_reg_11149.read());
}

void mmult_hw::thread_tmp_5_fu_11926_p2() {
    tmp_5_fu_11926_p2 = (i_reg_11149.read() | ap_const_lv4_1);
}

void mmult_hw::thread_tmp_6_fu_11932_p1() {
    tmp_6_fu_11932_p1 = esl_zext<64,4>(tmp_5_fu_11926_p2.read());
}

void mmult_hw::thread_tmp_9_fu_12238_p2() {
    tmp_9_fu_12238_p2 = (!ap_const_lv9_1.is_01() || !is_idx_2_reg_11196.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_1) + sc_biguint<9>(is_idx_2_reg_11196.read()));
}

void mmult_hw::thread_tmp_s_fu_11966_p2() {
    tmp_s_fu_11966_p2 = (!is_idx_1_reg_11173.read().is_01() || !ap_const_lv9_20.is_01())? sc_lv<9>(): (sc_biguint<9>(is_idx_1_reg_11173.read()) + sc_biguint<9>(ap_const_lv9_20));
}

void mmult_hw::thread_val_assign_15_fu_18030_p3() {
    val_assign_15_fu_18030_p3 = esl_concat<32,32>(out_buf_V_q1.read(), out_buf_V_q0.read());
}

void mmult_hw::thread_weight_buf_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_0_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_0_V_address0 = weight_buf_0_0_V_a_reg_19106.read();
    } else {
        weight_buf_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_0_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0))) {
        weight_buf_0_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_1_V_address0 = weight_buf_0_1_V_a_reg_19266.read();
    } else {
        weight_buf_0_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_0_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_1_V_d0() {
    weight_buf_0_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_0_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0))) {
        weight_buf_0_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_0_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_2_V_address0 = weight_buf_0_2_V_a_reg_19426.read();
    } else {
        weight_buf_0_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_0_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_2_V_d0() {
    weight_buf_0_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_0_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0))) {
        weight_buf_0_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_3_V_address0 = weight_buf_0_3_V_a_reg_19586.read();
    } else {
        weight_buf_0_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_0_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_3_V_d0() {
    weight_buf_0_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_0_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0))) {
        weight_buf_0_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_0_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_4_V_address0 = weight_buf_0_4_V_a_reg_19746.read();
    } else {
        weight_buf_0_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_0_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_4_V_d0() {
    weight_buf_0_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_0_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0))) {
        weight_buf_0_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_5_V_address0 = weight_buf_0_5_V_a_reg_19906.read();
    } else {
        weight_buf_0_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_0_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_5_V_d0() {
    weight_buf_0_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_0_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0))) {
        weight_buf_0_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_0_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_6_V_address0 = weight_buf_0_6_V_a_reg_20066.read();
    } else {
        weight_buf_0_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_0_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_6_V_d0() {
    weight_buf_0_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_0_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0))) {
        weight_buf_0_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_7_V_address0 = weight_buf_0_7_V_a_reg_20226.read();
    } else {
        weight_buf_0_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_0_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_7_V_d0() {
    weight_buf_0_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_0_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0))) {
        weight_buf_0_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_10_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_0_V_address0 = weight_buf_10_0_V_s_reg_19156.read();
    } else {
        weight_buf_10_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_10_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_10_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A))) {
        weight_buf_10_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_1_V_address0 = weight_buf_10_1_V_s_reg_19316.read();
    } else {
        weight_buf_10_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_10_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_10_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_1_V_d0() {
    weight_buf_10_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_10_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A))) {
        weight_buf_10_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_10_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_2_V_address0 = weight_buf_10_2_V_s_reg_19476.read();
    } else {
        weight_buf_10_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_10_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_10_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_2_V_d0() {
    weight_buf_10_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_10_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A))) {
        weight_buf_10_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_3_V_address0 = weight_buf_10_3_V_s_reg_19636.read();
    } else {
        weight_buf_10_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_10_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_10_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_3_V_d0() {
    weight_buf_10_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_10_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A))) {
        weight_buf_10_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_10_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_4_V_address0 = weight_buf_10_4_V_s_reg_19796.read();
    } else {
        weight_buf_10_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_10_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_10_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_4_V_d0() {
    weight_buf_10_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_10_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A))) {
        weight_buf_10_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_5_V_address0 = weight_buf_10_5_V_s_reg_19956.read();
    } else {
        weight_buf_10_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_10_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_10_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_5_V_d0() {
    weight_buf_10_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_10_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A))) {
        weight_buf_10_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_10_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_6_V_address0 = weight_buf_10_6_V_s_reg_20116.read();
    } else {
        weight_buf_10_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_10_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_10_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_6_V_d0() {
    weight_buf_10_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_10_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A))) {
        weight_buf_10_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_7_V_address0 = weight_buf_10_7_V_s_reg_20276.read();
    } else {
        weight_buf_10_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_10_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_10_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_7_V_d0() {
    weight_buf_10_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_10_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A))) {
        weight_buf_10_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_11_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_0_V_address0 = weight_buf_11_0_V_s_reg_19161.read();
    } else {
        weight_buf_11_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_11_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_11_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B))) {
        weight_buf_11_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_1_V_address0 = weight_buf_11_1_V_s_reg_19321.read();
    } else {
        weight_buf_11_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_11_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_11_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_1_V_d0() {
    weight_buf_11_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_11_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B))) {
        weight_buf_11_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_11_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_2_V_address0 = weight_buf_11_2_V_s_reg_19481.read();
    } else {
        weight_buf_11_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_11_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_11_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_2_V_d0() {
    weight_buf_11_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_11_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B))) {
        weight_buf_11_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_3_V_address0 = weight_buf_11_3_V_s_reg_19641.read();
    } else {
        weight_buf_11_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_11_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_11_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_3_V_d0() {
    weight_buf_11_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_11_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B))) {
        weight_buf_11_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_11_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_4_V_address0 = weight_buf_11_4_V_s_reg_19801.read();
    } else {
        weight_buf_11_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_11_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_11_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_4_V_d0() {
    weight_buf_11_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_11_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B))) {
        weight_buf_11_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_5_V_address0 = weight_buf_11_5_V_s_reg_19961.read();
    } else {
        weight_buf_11_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_11_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_11_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_5_V_d0() {
    weight_buf_11_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_11_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B))) {
        weight_buf_11_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_11_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_6_V_address0 = weight_buf_11_6_V_s_reg_20121.read();
    } else {
        weight_buf_11_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_11_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_11_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_6_V_d0() {
    weight_buf_11_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_11_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B))) {
        weight_buf_11_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_7_V_address0 = weight_buf_11_7_V_s_reg_20281.read();
    } else {
        weight_buf_11_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_11_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_11_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_7_V_d0() {
    weight_buf_11_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_11_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B))) {
        weight_buf_11_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_12_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_0_V_address0 = weight_buf_12_0_V_s_reg_19166.read();
    } else {
        weight_buf_12_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_12_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_12_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C))) {
        weight_buf_12_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_1_V_address0 = weight_buf_12_1_V_s_reg_19326.read();
    } else {
        weight_buf_12_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_12_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_12_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_1_V_d0() {
    weight_buf_12_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_12_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C))) {
        weight_buf_12_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_12_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_2_V_address0 = weight_buf_12_2_V_s_reg_19486.read();
    } else {
        weight_buf_12_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_12_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_12_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_2_V_d0() {
    weight_buf_12_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_12_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C))) {
        weight_buf_12_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_3_V_address0 = weight_buf_12_3_V_s_reg_19646.read();
    } else {
        weight_buf_12_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_12_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_12_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_3_V_d0() {
    weight_buf_12_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_12_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C))) {
        weight_buf_12_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_12_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_4_V_address0 = weight_buf_12_4_V_s_reg_19806.read();
    } else {
        weight_buf_12_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_12_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_12_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_4_V_d0() {
    weight_buf_12_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_12_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C))) {
        weight_buf_12_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_5_V_address0 = weight_buf_12_5_V_s_reg_19966.read();
    } else {
        weight_buf_12_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_12_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_12_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_5_V_d0() {
    weight_buf_12_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_12_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C))) {
        weight_buf_12_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_12_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_6_V_address0 = weight_buf_12_6_V_s_reg_20126.read();
    } else {
        weight_buf_12_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_12_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_12_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_6_V_d0() {
    weight_buf_12_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_12_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C))) {
        weight_buf_12_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_7_V_address0 = weight_buf_12_7_V_s_reg_20286.read();
    } else {
        weight_buf_12_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_12_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_12_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_7_V_d0() {
    weight_buf_12_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_12_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C))) {
        weight_buf_12_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_13_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_0_V_address0 = weight_buf_13_0_V_s_reg_19171.read();
    } else {
        weight_buf_13_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_13_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_13_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D))) {
        weight_buf_13_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_1_V_address0 = weight_buf_13_1_V_s_reg_19331.read();
    } else {
        weight_buf_13_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_13_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_13_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_1_V_d0() {
    weight_buf_13_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_13_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D))) {
        weight_buf_13_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_13_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_2_V_address0 = weight_buf_13_2_V_s_reg_19491.read();
    } else {
        weight_buf_13_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_13_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_13_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_2_V_d0() {
    weight_buf_13_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_13_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D))) {
        weight_buf_13_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_3_V_address0 = weight_buf_13_3_V_s_reg_19651.read();
    } else {
        weight_buf_13_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_13_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_13_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_3_V_d0() {
    weight_buf_13_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_13_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D))) {
        weight_buf_13_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_13_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_4_V_address0 = weight_buf_13_4_V_s_reg_19811.read();
    } else {
        weight_buf_13_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_13_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_13_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_4_V_d0() {
    weight_buf_13_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_13_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D))) {
        weight_buf_13_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_5_V_address0 = weight_buf_13_5_V_s_reg_19971.read();
    } else {
        weight_buf_13_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_13_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_13_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_5_V_d0() {
    weight_buf_13_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_13_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D))) {
        weight_buf_13_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_13_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_6_V_address0 = weight_buf_13_6_V_s_reg_20131.read();
    } else {
        weight_buf_13_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_13_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_13_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_6_V_d0() {
    weight_buf_13_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_13_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D))) {
        weight_buf_13_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_7_V_address0 = weight_buf_13_7_V_s_reg_20291.read();
    } else {
        weight_buf_13_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_13_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_13_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_7_V_d0() {
    weight_buf_13_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_13_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D))) {
        weight_buf_13_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_14_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_0_V_address0 = weight_buf_14_0_V_s_reg_19176.read();
    } else {
        weight_buf_14_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_14_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_14_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E))) {
        weight_buf_14_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_1_V_address0 = weight_buf_14_1_V_s_reg_19336.read();
    } else {
        weight_buf_14_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_14_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_14_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_1_V_d0() {
    weight_buf_14_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_14_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E))) {
        weight_buf_14_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_14_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_2_V_address0 = weight_buf_14_2_V_s_reg_19496.read();
    } else {
        weight_buf_14_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_14_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_14_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_2_V_d0() {
    weight_buf_14_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_14_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E))) {
        weight_buf_14_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_3_V_address0 = weight_buf_14_3_V_s_reg_19656.read();
    } else {
        weight_buf_14_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_14_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_14_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_3_V_d0() {
    weight_buf_14_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_14_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E))) {
        weight_buf_14_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_14_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_4_V_address0 = weight_buf_14_4_V_s_reg_19816.read();
    } else {
        weight_buf_14_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_14_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_14_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_4_V_d0() {
    weight_buf_14_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_14_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E))) {
        weight_buf_14_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_5_V_address0 = weight_buf_14_5_V_s_reg_19976.read();
    } else {
        weight_buf_14_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_14_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_14_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_5_V_d0() {
    weight_buf_14_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_14_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E))) {
        weight_buf_14_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_14_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_6_V_address0 = weight_buf_14_6_V_s_reg_20136.read();
    } else {
        weight_buf_14_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_14_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_14_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_6_V_d0() {
    weight_buf_14_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_14_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E))) {
        weight_buf_14_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_7_V_address0 = weight_buf_14_7_V_s_reg_20296.read();
    } else {
        weight_buf_14_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_14_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_14_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_7_V_d0() {
    weight_buf_14_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_14_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E))) {
        weight_buf_14_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_15_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_0_V_address0 = weight_buf_15_0_V_s_reg_19181.read();
    } else {
        weight_buf_15_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_15_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_15_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F))) {
        weight_buf_15_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_1_V_address0 = weight_buf_15_1_V_s_reg_19341.read();
    } else {
        weight_buf_15_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_15_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_15_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_1_V_d0() {
    weight_buf_15_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_15_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F))) {
        weight_buf_15_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_15_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_2_V_address0 = weight_buf_15_2_V_s_reg_19501.read();
    } else {
        weight_buf_15_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_15_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_15_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_2_V_d0() {
    weight_buf_15_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_15_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F))) {
        weight_buf_15_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_3_V_address0 = weight_buf_15_3_V_s_reg_19661.read();
    } else {
        weight_buf_15_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_15_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_15_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_3_V_d0() {
    weight_buf_15_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_15_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F))) {
        weight_buf_15_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_15_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_4_V_address0 = weight_buf_15_4_V_s_reg_19821.read();
    } else {
        weight_buf_15_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_15_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_15_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_4_V_d0() {
    weight_buf_15_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_15_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F))) {
        weight_buf_15_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_5_V_address0 = weight_buf_15_5_V_s_reg_19981.read();
    } else {
        weight_buf_15_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_15_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_15_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_5_V_d0() {
    weight_buf_15_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_15_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F))) {
        weight_buf_15_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_15_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_6_V_address0 = weight_buf_15_6_V_s_reg_20141.read();
    } else {
        weight_buf_15_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_15_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_15_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_6_V_d0() {
    weight_buf_15_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_15_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F))) {
        weight_buf_15_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_7_V_address0 = weight_buf_15_7_V_s_reg_20301.read();
    } else {
        weight_buf_15_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_15_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_15_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_7_V_d0() {
    weight_buf_15_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_15_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F))) {
        weight_buf_15_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_16_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_0_V_address0 = weight_buf_16_0_V_s_reg_19186.read();
    } else {
        weight_buf_16_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_16_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_16_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10))) {
        weight_buf_16_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_1_V_address0 = weight_buf_16_1_V_s_reg_19346.read();
    } else {
        weight_buf_16_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_16_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_16_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_1_V_d0() {
    weight_buf_16_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_16_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10))) {
        weight_buf_16_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_16_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_2_V_address0 = weight_buf_16_2_V_s_reg_19506.read();
    } else {
        weight_buf_16_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_16_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_16_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_2_V_d0() {
    weight_buf_16_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_16_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10))) {
        weight_buf_16_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_3_V_address0 = weight_buf_16_3_V_s_reg_19666.read();
    } else {
        weight_buf_16_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_16_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_16_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_3_V_d0() {
    weight_buf_16_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_16_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10))) {
        weight_buf_16_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_16_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_4_V_address0 = weight_buf_16_4_V_s_reg_19826.read();
    } else {
        weight_buf_16_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_16_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_16_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_4_V_d0() {
    weight_buf_16_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_16_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10))) {
        weight_buf_16_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_5_V_address0 = weight_buf_16_5_V_s_reg_19986.read();
    } else {
        weight_buf_16_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_16_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_16_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_5_V_d0() {
    weight_buf_16_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_16_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10))) {
        weight_buf_16_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_16_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_6_V_address0 = weight_buf_16_6_V_s_reg_20146.read();
    } else {
        weight_buf_16_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_16_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_16_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_6_V_d0() {
    weight_buf_16_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_16_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10))) {
        weight_buf_16_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_7_V_address0 = weight_buf_16_7_V_s_reg_20306.read();
    } else {
        weight_buf_16_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_16_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_16_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_7_V_d0() {
    weight_buf_16_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_16_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10))) {
        weight_buf_16_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_17_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_0_V_address0 = weight_buf_17_0_V_s_reg_19191.read();
    } else {
        weight_buf_17_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_17_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_17_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11))) {
        weight_buf_17_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_1_V_address0 = weight_buf_17_1_V_s_reg_19351.read();
    } else {
        weight_buf_17_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_17_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_17_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_1_V_d0() {
    weight_buf_17_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_17_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11))) {
        weight_buf_17_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_17_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_2_V_address0 = weight_buf_17_2_V_s_reg_19511.read();
    } else {
        weight_buf_17_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_17_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_17_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_2_V_d0() {
    weight_buf_17_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_17_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11))) {
        weight_buf_17_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_3_V_address0 = weight_buf_17_3_V_s_reg_19671.read();
    } else {
        weight_buf_17_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_17_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_17_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_3_V_d0() {
    weight_buf_17_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_17_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11))) {
        weight_buf_17_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_17_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_4_V_address0 = weight_buf_17_4_V_s_reg_19831.read();
    } else {
        weight_buf_17_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_17_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_17_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_4_V_d0() {
    weight_buf_17_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_17_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11))) {
        weight_buf_17_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_5_V_address0 = weight_buf_17_5_V_s_reg_19991.read();
    } else {
        weight_buf_17_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_17_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_17_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_5_V_d0() {
    weight_buf_17_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_17_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11))) {
        weight_buf_17_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_17_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_6_V_address0 = weight_buf_17_6_V_s_reg_20151.read();
    } else {
        weight_buf_17_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_17_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_17_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_6_V_d0() {
    weight_buf_17_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_17_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11))) {
        weight_buf_17_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_7_V_address0 = weight_buf_17_7_V_s_reg_20311.read();
    } else {
        weight_buf_17_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_17_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_17_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_7_V_d0() {
    weight_buf_17_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_17_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11))) {
        weight_buf_17_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_18_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_0_V_address0 = weight_buf_18_0_V_s_reg_19196.read();
    } else {
        weight_buf_18_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_18_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_18_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12))) {
        weight_buf_18_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_1_V_address0 = weight_buf_18_1_V_s_reg_19356.read();
    } else {
        weight_buf_18_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_18_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_18_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_1_V_d0() {
    weight_buf_18_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_18_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12))) {
        weight_buf_18_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_18_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_2_V_address0 = weight_buf_18_2_V_s_reg_19516.read();
    } else {
        weight_buf_18_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_18_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_18_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_2_V_d0() {
    weight_buf_18_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_18_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12))) {
        weight_buf_18_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_3_V_address0 = weight_buf_18_3_V_s_reg_19676.read();
    } else {
        weight_buf_18_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_18_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_18_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_3_V_d0() {
    weight_buf_18_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_18_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12))) {
        weight_buf_18_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_18_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_4_V_address0 = weight_buf_18_4_V_s_reg_19836.read();
    } else {
        weight_buf_18_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_18_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_18_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_4_V_d0() {
    weight_buf_18_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_18_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12))) {
        weight_buf_18_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_5_V_address0 = weight_buf_18_5_V_s_reg_19996.read();
    } else {
        weight_buf_18_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_18_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_18_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_5_V_d0() {
    weight_buf_18_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_18_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12))) {
        weight_buf_18_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_18_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_6_V_address0 = weight_buf_18_6_V_s_reg_20156.read();
    } else {
        weight_buf_18_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_18_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_18_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_6_V_d0() {
    weight_buf_18_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_18_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12))) {
        weight_buf_18_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_7_V_address0 = weight_buf_18_7_V_s_reg_20316.read();
    } else {
        weight_buf_18_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_18_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_18_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_7_V_d0() {
    weight_buf_18_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_18_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12))) {
        weight_buf_18_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_19_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_0_V_address0 = weight_buf_19_0_V_s_reg_19201.read();
    } else {
        weight_buf_19_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_19_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_19_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13))) {
        weight_buf_19_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_1_V_address0 = weight_buf_19_1_V_s_reg_19361.read();
    } else {
        weight_buf_19_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_19_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_19_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_1_V_d0() {
    weight_buf_19_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_19_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13))) {
        weight_buf_19_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_19_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_2_V_address0 = weight_buf_19_2_V_s_reg_19521.read();
    } else {
        weight_buf_19_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_19_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_19_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_2_V_d0() {
    weight_buf_19_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_19_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13))) {
        weight_buf_19_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_3_V_address0 = weight_buf_19_3_V_s_reg_19681.read();
    } else {
        weight_buf_19_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_19_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_19_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_3_V_d0() {
    weight_buf_19_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_19_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13))) {
        weight_buf_19_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_19_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_4_V_address0 = weight_buf_19_4_V_s_reg_19841.read();
    } else {
        weight_buf_19_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_19_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_19_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_4_V_d0() {
    weight_buf_19_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_19_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13))) {
        weight_buf_19_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_5_V_address0 = weight_buf_19_5_V_s_reg_20001.read();
    } else {
        weight_buf_19_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_19_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_19_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_5_V_d0() {
    weight_buf_19_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_19_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13))) {
        weight_buf_19_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_19_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_6_V_address0 = weight_buf_19_6_V_s_reg_20161.read();
    } else {
        weight_buf_19_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_19_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_19_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_6_V_d0() {
    weight_buf_19_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_19_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13))) {
        weight_buf_19_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_7_V_address0 = weight_buf_19_7_V_s_reg_20321.read();
    } else {
        weight_buf_19_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_19_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_19_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_7_V_d0() {
    weight_buf_19_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_19_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13))) {
        weight_buf_19_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_1_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_0_V_address0 = weight_buf_1_0_V_a_reg_19111.read();
    } else {
        weight_buf_1_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_1_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_1_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1))) {
        weight_buf_1_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_1_V_address0 = weight_buf_1_1_V_a_reg_19271.read();
    } else {
        weight_buf_1_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_1_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_1_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_1_V_d0() {
    weight_buf_1_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_1_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1))) {
        weight_buf_1_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_1_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_2_V_address0 = weight_buf_1_2_V_a_reg_19431.read();
    } else {
        weight_buf_1_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_1_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_1_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_2_V_d0() {
    weight_buf_1_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_1_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1))) {
        weight_buf_1_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_3_V_address0 = weight_buf_1_3_V_a_reg_19591.read();
    } else {
        weight_buf_1_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_1_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_1_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_3_V_d0() {
    weight_buf_1_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_1_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1))) {
        weight_buf_1_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_1_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_4_V_address0 = weight_buf_1_4_V_a_reg_19751.read();
    } else {
        weight_buf_1_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_1_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_1_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_4_V_d0() {
    weight_buf_1_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_1_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1))) {
        weight_buf_1_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_5_V_address0 = weight_buf_1_5_V_a_reg_19911.read();
    } else {
        weight_buf_1_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_1_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_1_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_5_V_d0() {
    weight_buf_1_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_1_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1))) {
        weight_buf_1_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_1_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_6_V_address0 = weight_buf_1_6_V_a_reg_20071.read();
    } else {
        weight_buf_1_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_1_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_1_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_6_V_d0() {
    weight_buf_1_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_1_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1))) {
        weight_buf_1_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_7_V_address0 = weight_buf_1_7_V_a_reg_20231.read();
    } else {
        weight_buf_1_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_1_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_1_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_7_V_d0() {
    weight_buf_1_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_1_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1))) {
        weight_buf_1_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_20_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_0_V_address0 = weight_buf_20_0_V_s_reg_19206.read();
    } else {
        weight_buf_20_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_20_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_20_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14))) {
        weight_buf_20_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_1_V_address0 = weight_buf_20_1_V_s_reg_19366.read();
    } else {
        weight_buf_20_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_20_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_20_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_1_V_d0() {
    weight_buf_20_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_20_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14))) {
        weight_buf_20_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_20_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_2_V_address0 = weight_buf_20_2_V_s_reg_19526.read();
    } else {
        weight_buf_20_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_20_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_20_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_2_V_d0() {
    weight_buf_20_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_20_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14))) {
        weight_buf_20_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_3_V_address0 = weight_buf_20_3_V_s_reg_19686.read();
    } else {
        weight_buf_20_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_20_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_20_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_3_V_d0() {
    weight_buf_20_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_20_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14))) {
        weight_buf_20_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_20_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_4_V_address0 = weight_buf_20_4_V_s_reg_19846.read();
    } else {
        weight_buf_20_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_20_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_20_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_4_V_d0() {
    weight_buf_20_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_20_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14))) {
        weight_buf_20_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_5_V_address0 = weight_buf_20_5_V_s_reg_20006.read();
    } else {
        weight_buf_20_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_20_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_20_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_5_V_d0() {
    weight_buf_20_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_20_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14))) {
        weight_buf_20_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_20_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_6_V_address0 = weight_buf_20_6_V_s_reg_20166.read();
    } else {
        weight_buf_20_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_20_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_20_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_6_V_d0() {
    weight_buf_20_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_20_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14))) {
        weight_buf_20_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_7_V_address0 = weight_buf_20_7_V_s_reg_20326.read();
    } else {
        weight_buf_20_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_20_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_20_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_7_V_d0() {
    weight_buf_20_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_20_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14))) {
        weight_buf_20_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_21_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_0_V_address0 = weight_buf_21_0_V_s_reg_19211.read();
    } else {
        weight_buf_21_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_21_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_21_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15))) {
        weight_buf_21_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_1_V_address0 = weight_buf_21_1_V_s_reg_19371.read();
    } else {
        weight_buf_21_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_21_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_21_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_1_V_d0() {
    weight_buf_21_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_21_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15))) {
        weight_buf_21_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_21_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_2_V_address0 = weight_buf_21_2_V_s_reg_19531.read();
    } else {
        weight_buf_21_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_21_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_21_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_2_V_d0() {
    weight_buf_21_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_21_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15))) {
        weight_buf_21_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_3_V_address0 = weight_buf_21_3_V_s_reg_19691.read();
    } else {
        weight_buf_21_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_21_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_21_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_3_V_d0() {
    weight_buf_21_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_21_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15))) {
        weight_buf_21_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_21_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_4_V_address0 = weight_buf_21_4_V_s_reg_19851.read();
    } else {
        weight_buf_21_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_21_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_21_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_4_V_d0() {
    weight_buf_21_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_21_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15))) {
        weight_buf_21_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_5_V_address0 = weight_buf_21_5_V_s_reg_20011.read();
    } else {
        weight_buf_21_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_21_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_21_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_5_V_d0() {
    weight_buf_21_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_21_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15))) {
        weight_buf_21_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_21_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_6_V_address0 = weight_buf_21_6_V_s_reg_20171.read();
    } else {
        weight_buf_21_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_21_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_21_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_6_V_d0() {
    weight_buf_21_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_21_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15))) {
        weight_buf_21_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_7_V_address0 = weight_buf_21_7_V_s_reg_20331.read();
    } else {
        weight_buf_21_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_21_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_21_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_7_V_d0() {
    weight_buf_21_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_21_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15))) {
        weight_buf_21_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_22_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_0_V_address0 = weight_buf_22_0_V_s_reg_19216.read();
    } else {
        weight_buf_22_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_22_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_22_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16))) {
        weight_buf_22_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_1_V_address0 = weight_buf_22_1_V_s_reg_19376.read();
    } else {
        weight_buf_22_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_22_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_22_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_1_V_d0() {
    weight_buf_22_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_22_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16))) {
        weight_buf_22_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_22_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_2_V_address0 = weight_buf_22_2_V_s_reg_19536.read();
    } else {
        weight_buf_22_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_22_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_22_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_2_V_d0() {
    weight_buf_22_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_22_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16))) {
        weight_buf_22_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_3_V_address0 = weight_buf_22_3_V_s_reg_19696.read();
    } else {
        weight_buf_22_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_22_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_22_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_3_V_d0() {
    weight_buf_22_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_22_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16))) {
        weight_buf_22_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_22_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_4_V_address0 = weight_buf_22_4_V_s_reg_19856.read();
    } else {
        weight_buf_22_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_22_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_22_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_4_V_d0() {
    weight_buf_22_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_22_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16))) {
        weight_buf_22_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_5_V_address0 = weight_buf_22_5_V_s_reg_20016.read();
    } else {
        weight_buf_22_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_22_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_22_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_5_V_d0() {
    weight_buf_22_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_22_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16))) {
        weight_buf_22_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_22_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_6_V_address0 = weight_buf_22_6_V_s_reg_20176.read();
    } else {
        weight_buf_22_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_22_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_22_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_6_V_d0() {
    weight_buf_22_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_22_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16))) {
        weight_buf_22_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_7_V_address0 = weight_buf_22_7_V_s_reg_20336.read();
    } else {
        weight_buf_22_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_22_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_22_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_7_V_d0() {
    weight_buf_22_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_22_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16))) {
        weight_buf_22_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_23_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_0_V_address0 = weight_buf_23_0_V_s_reg_19221.read();
    } else {
        weight_buf_23_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_23_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_23_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17))) {
        weight_buf_23_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_1_V_address0 = weight_buf_23_1_V_s_reg_19381.read();
    } else {
        weight_buf_23_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_23_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_23_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_1_V_d0() {
    weight_buf_23_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_23_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17))) {
        weight_buf_23_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_23_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_2_V_address0 = weight_buf_23_2_V_s_reg_19541.read();
    } else {
        weight_buf_23_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_23_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_23_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_2_V_d0() {
    weight_buf_23_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_23_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17))) {
        weight_buf_23_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_3_V_address0 = weight_buf_23_3_V_s_reg_19701.read();
    } else {
        weight_buf_23_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_23_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_23_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_3_V_d0() {
    weight_buf_23_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_23_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17))) {
        weight_buf_23_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_23_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_4_V_address0 = weight_buf_23_4_V_s_reg_19861.read();
    } else {
        weight_buf_23_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_23_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_23_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_4_V_d0() {
    weight_buf_23_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_23_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17))) {
        weight_buf_23_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_5_V_address0 = weight_buf_23_5_V_s_reg_20021.read();
    } else {
        weight_buf_23_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_23_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_23_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_5_V_d0() {
    weight_buf_23_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_23_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17))) {
        weight_buf_23_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_23_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_6_V_address0 = weight_buf_23_6_V_s_reg_20181.read();
    } else {
        weight_buf_23_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_23_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_23_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_6_V_d0() {
    weight_buf_23_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_23_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17))) {
        weight_buf_23_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_7_V_address0 = weight_buf_23_7_V_s_reg_20341.read();
    } else {
        weight_buf_23_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_23_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_23_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_7_V_d0() {
    weight_buf_23_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_23_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17))) {
        weight_buf_23_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_24_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_0_V_address0 = weight_buf_24_0_V_s_reg_19226.read();
    } else {
        weight_buf_24_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_24_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_24_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18))) {
        weight_buf_24_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_1_V_address0 = weight_buf_24_1_V_s_reg_19386.read();
    } else {
        weight_buf_24_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_24_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_24_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_1_V_d0() {
    weight_buf_24_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_24_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18))) {
        weight_buf_24_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_24_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_2_V_address0 = weight_buf_24_2_V_s_reg_19546.read();
    } else {
        weight_buf_24_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_24_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_24_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_2_V_d0() {
    weight_buf_24_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_24_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18))) {
        weight_buf_24_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_3_V_address0 = weight_buf_24_3_V_s_reg_19706.read();
    } else {
        weight_buf_24_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_24_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_24_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_3_V_d0() {
    weight_buf_24_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_24_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18))) {
        weight_buf_24_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_24_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_4_V_address0 = weight_buf_24_4_V_s_reg_19866.read();
    } else {
        weight_buf_24_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_24_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_24_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_4_V_d0() {
    weight_buf_24_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_24_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18))) {
        weight_buf_24_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_5_V_address0 = weight_buf_24_5_V_s_reg_20026.read();
    } else {
        weight_buf_24_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_24_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_24_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_5_V_d0() {
    weight_buf_24_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_24_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18))) {
        weight_buf_24_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_24_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_6_V_address0 = weight_buf_24_6_V_s_reg_20186.read();
    } else {
        weight_buf_24_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_24_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_24_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_6_V_d0() {
    weight_buf_24_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_24_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18))) {
        weight_buf_24_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_7_V_address0 = weight_buf_24_7_V_s_reg_20346.read();
    } else {
        weight_buf_24_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_24_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_24_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_7_V_d0() {
    weight_buf_24_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_24_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18))) {
        weight_buf_24_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_25_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_0_V_address0 = weight_buf_25_0_V_s_reg_19231.read();
    } else {
        weight_buf_25_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_25_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_25_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19))) {
        weight_buf_25_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_1_V_address0 = weight_buf_25_1_V_s_reg_19391.read();
    } else {
        weight_buf_25_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_25_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_25_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_1_V_d0() {
    weight_buf_25_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_25_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19))) {
        weight_buf_25_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_25_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_2_V_address0 = weight_buf_25_2_V_s_reg_19551.read();
    } else {
        weight_buf_25_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_25_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_25_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_2_V_d0() {
    weight_buf_25_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_25_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19))) {
        weight_buf_25_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_3_V_address0 = weight_buf_25_3_V_s_reg_19711.read();
    } else {
        weight_buf_25_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_25_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_25_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_3_V_d0() {
    weight_buf_25_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_25_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19))) {
        weight_buf_25_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_25_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_4_V_address0 = weight_buf_25_4_V_s_reg_19871.read();
    } else {
        weight_buf_25_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_25_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_25_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_4_V_d0() {
    weight_buf_25_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_25_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19))) {
        weight_buf_25_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_5_V_address0 = weight_buf_25_5_V_s_reg_20031.read();
    } else {
        weight_buf_25_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_25_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_25_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_5_V_d0() {
    weight_buf_25_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_25_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19))) {
        weight_buf_25_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_25_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_6_V_address0 = weight_buf_25_6_V_s_reg_20191.read();
    } else {
        weight_buf_25_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_25_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_25_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_6_V_d0() {
    weight_buf_25_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_25_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19))) {
        weight_buf_25_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_7_V_address0 = weight_buf_25_7_V_s_reg_20351.read();
    } else {
        weight_buf_25_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_25_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_25_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_7_V_d0() {
    weight_buf_25_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_25_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19))) {
        weight_buf_25_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_26_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_0_V_address0 = weight_buf_26_0_V_s_reg_19236.read();
    } else {
        weight_buf_26_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_26_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_26_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A))) {
        weight_buf_26_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_1_V_address0 = weight_buf_26_1_V_s_reg_19396.read();
    } else {
        weight_buf_26_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_26_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_26_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_1_V_d0() {
    weight_buf_26_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_26_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A))) {
        weight_buf_26_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_26_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_2_V_address0 = weight_buf_26_2_V_s_reg_19556.read();
    } else {
        weight_buf_26_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_26_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_26_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_2_V_d0() {
    weight_buf_26_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_26_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A))) {
        weight_buf_26_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_3_V_address0 = weight_buf_26_3_V_s_reg_19716.read();
    } else {
        weight_buf_26_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_26_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_26_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_3_V_d0() {
    weight_buf_26_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_26_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A))) {
        weight_buf_26_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_26_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_4_V_address0 = weight_buf_26_4_V_s_reg_19876.read();
    } else {
        weight_buf_26_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_26_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_26_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_4_V_d0() {
    weight_buf_26_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_26_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A))) {
        weight_buf_26_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_5_V_address0 = weight_buf_26_5_V_s_reg_20036.read();
    } else {
        weight_buf_26_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_26_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_26_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_5_V_d0() {
    weight_buf_26_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_26_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A))) {
        weight_buf_26_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_26_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_6_V_address0 = weight_buf_26_6_V_s_reg_20196.read();
    } else {
        weight_buf_26_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_26_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_26_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_6_V_d0() {
    weight_buf_26_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_26_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A))) {
        weight_buf_26_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_7_V_address0 = weight_buf_26_7_V_s_reg_20356.read();
    } else {
        weight_buf_26_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_26_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_26_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_7_V_d0() {
    weight_buf_26_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_26_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A))) {
        weight_buf_26_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_27_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_0_V_address0 = weight_buf_27_0_V_s_reg_19241.read();
    } else {
        weight_buf_27_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_27_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_27_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B))) {
        weight_buf_27_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_1_V_address0 = weight_buf_27_1_V_s_reg_19401.read();
    } else {
        weight_buf_27_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_27_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_27_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_1_V_d0() {
    weight_buf_27_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_27_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B))) {
        weight_buf_27_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_27_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_2_V_address0 = weight_buf_27_2_V_s_reg_19561.read();
    } else {
        weight_buf_27_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_27_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_27_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_2_V_d0() {
    weight_buf_27_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_27_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B))) {
        weight_buf_27_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_3_V_address0 = weight_buf_27_3_V_s_reg_19721.read();
    } else {
        weight_buf_27_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_27_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_27_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_3_V_d0() {
    weight_buf_27_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_27_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B))) {
        weight_buf_27_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_27_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_4_V_address0 = weight_buf_27_4_V_s_reg_19881.read();
    } else {
        weight_buf_27_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_27_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_27_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_4_V_d0() {
    weight_buf_27_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_27_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B))) {
        weight_buf_27_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_5_V_address0 = weight_buf_27_5_V_s_reg_20041.read();
    } else {
        weight_buf_27_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_27_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_27_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_5_V_d0() {
    weight_buf_27_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_27_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B))) {
        weight_buf_27_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_27_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_6_V_address0 = weight_buf_27_6_V_s_reg_20201.read();
    } else {
        weight_buf_27_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_27_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_27_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_6_V_d0() {
    weight_buf_27_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_27_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B))) {
        weight_buf_27_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_7_V_address0 = weight_buf_27_7_V_s_reg_20361.read();
    } else {
        weight_buf_27_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_27_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_27_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_7_V_d0() {
    weight_buf_27_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_27_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B))) {
        weight_buf_27_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_28_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_0_V_address0 = weight_buf_28_0_V_s_reg_19246.read();
    } else {
        weight_buf_28_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_28_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_28_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C))) {
        weight_buf_28_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_1_V_address0 = weight_buf_28_1_V_s_reg_19406.read();
    } else {
        weight_buf_28_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_28_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_28_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_1_V_d0() {
    weight_buf_28_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_28_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C))) {
        weight_buf_28_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_28_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_2_V_address0 = weight_buf_28_2_V_s_reg_19566.read();
    } else {
        weight_buf_28_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_28_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_28_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_2_V_d0() {
    weight_buf_28_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_28_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C))) {
        weight_buf_28_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_3_V_address0 = weight_buf_28_3_V_s_reg_19726.read();
    } else {
        weight_buf_28_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_28_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_28_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_3_V_d0() {
    weight_buf_28_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_28_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C))) {
        weight_buf_28_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_28_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_4_V_address0 = weight_buf_28_4_V_s_reg_19886.read();
    } else {
        weight_buf_28_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_28_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_28_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_4_V_d0() {
    weight_buf_28_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_28_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C))) {
        weight_buf_28_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_5_V_address0 = weight_buf_28_5_V_s_reg_20046.read();
    } else {
        weight_buf_28_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_28_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_28_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_5_V_d0() {
    weight_buf_28_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_28_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C))) {
        weight_buf_28_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_28_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_6_V_address0 = weight_buf_28_6_V_s_reg_20206.read();
    } else {
        weight_buf_28_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_28_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_28_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_6_V_d0() {
    weight_buf_28_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_28_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C))) {
        weight_buf_28_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_7_V_address0 = weight_buf_28_7_V_s_reg_20366.read();
    } else {
        weight_buf_28_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_28_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_28_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_7_V_d0() {
    weight_buf_28_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_28_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C))) {
        weight_buf_28_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_29_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_0_V_address0 = weight_buf_29_0_V_s_reg_19251.read();
    } else {
        weight_buf_29_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_29_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_29_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D))) {
        weight_buf_29_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_1_V_address0 = weight_buf_29_1_V_s_reg_19411.read();
    } else {
        weight_buf_29_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_29_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_29_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_1_V_d0() {
    weight_buf_29_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_29_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D))) {
        weight_buf_29_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_29_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_2_V_address0 = weight_buf_29_2_V_s_reg_19571.read();
    } else {
        weight_buf_29_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_29_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_29_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_2_V_d0() {
    weight_buf_29_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_29_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D))) {
        weight_buf_29_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_3_V_address0 = weight_buf_29_3_V_s_reg_19731.read();
    } else {
        weight_buf_29_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_29_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_29_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_3_V_d0() {
    weight_buf_29_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_29_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D))) {
        weight_buf_29_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_29_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_4_V_address0 = weight_buf_29_4_V_s_reg_19891.read();
    } else {
        weight_buf_29_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_29_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_29_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_4_V_d0() {
    weight_buf_29_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_29_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D))) {
        weight_buf_29_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_5_V_address0 = weight_buf_29_5_V_s_reg_20051.read();
    } else {
        weight_buf_29_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_29_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_29_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_5_V_d0() {
    weight_buf_29_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_29_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D))) {
        weight_buf_29_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_29_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_6_V_address0 = weight_buf_29_6_V_s_reg_20211.read();
    } else {
        weight_buf_29_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_29_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_29_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_6_V_d0() {
    weight_buf_29_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_29_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D))) {
        weight_buf_29_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_7_V_address0 = weight_buf_29_7_V_s_reg_20371.read();
    } else {
        weight_buf_29_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_29_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_29_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_7_V_d0() {
    weight_buf_29_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_29_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D))) {
        weight_buf_29_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_2_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_0_V_address0 = weight_buf_2_0_V_a_reg_19116.read();
    } else {
        weight_buf_2_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_2_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_2_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2))) {
        weight_buf_2_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_1_V_address0 = weight_buf_2_1_V_a_reg_19276.read();
    } else {
        weight_buf_2_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_2_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_2_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_1_V_d0() {
    weight_buf_2_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_2_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2))) {
        weight_buf_2_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_2_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_2_V_address0 = weight_buf_2_2_V_a_reg_19436.read();
    } else {
        weight_buf_2_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_2_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_2_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_2_V_d0() {
    weight_buf_2_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_2_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2))) {
        weight_buf_2_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_3_V_address0 = weight_buf_2_3_V_a_reg_19596.read();
    } else {
        weight_buf_2_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_2_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_2_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_3_V_d0() {
    weight_buf_2_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_2_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2))) {
        weight_buf_2_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_2_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_4_V_address0 = weight_buf_2_4_V_a_reg_19756.read();
    } else {
        weight_buf_2_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_2_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_2_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_4_V_d0() {
    weight_buf_2_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_2_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2))) {
        weight_buf_2_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_5_V_address0 = weight_buf_2_5_V_a_reg_19916.read();
    } else {
        weight_buf_2_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_2_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_2_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_5_V_d0() {
    weight_buf_2_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_2_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2))) {
        weight_buf_2_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_2_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_6_V_address0 = weight_buf_2_6_V_a_reg_20076.read();
    } else {
        weight_buf_2_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_2_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_2_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_6_V_d0() {
    weight_buf_2_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_2_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2))) {
        weight_buf_2_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_7_V_address0 = weight_buf_2_7_V_a_reg_20236.read();
    } else {
        weight_buf_2_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_2_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_2_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_7_V_d0() {
    weight_buf_2_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_2_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2))) {
        weight_buf_2_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_30_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_0_V_address0 = weight_buf_30_0_V_s_reg_19256.read();
    } else {
        weight_buf_30_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_30_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_30_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_30_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_1_V_address0 = weight_buf_30_1_V_s_reg_19416.read();
    } else {
        weight_buf_30_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_30_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_30_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_1_V_d0() {
    weight_buf_30_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_30_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_30_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_30_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_2_V_address0 = weight_buf_30_2_V_s_reg_19576.read();
    } else {
        weight_buf_30_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_30_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_30_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_2_V_d0() {
    weight_buf_30_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_30_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_30_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_3_V_address0 = weight_buf_30_3_V_s_reg_19736.read();
    } else {
        weight_buf_30_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_30_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_30_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_3_V_d0() {
    weight_buf_30_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_30_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_30_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_30_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_4_V_address0 = weight_buf_30_4_V_s_reg_19896.read();
    } else {
        weight_buf_30_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_30_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_30_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_4_V_d0() {
    weight_buf_30_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_30_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_30_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_5_V_address0 = weight_buf_30_5_V_s_reg_20056.read();
    } else {
        weight_buf_30_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_30_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_30_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_5_V_d0() {
    weight_buf_30_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_30_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_30_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_30_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_6_V_address0 = weight_buf_30_6_V_s_reg_20216.read();
    } else {
        weight_buf_30_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_30_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_30_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_6_V_d0() {
    weight_buf_30_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_30_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_30_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_7_V_address0 = weight_buf_30_7_V_s_reg_20376.read();
    } else {
        weight_buf_30_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_30_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_30_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_7_V_d0() {
    weight_buf_30_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_30_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_30_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_31_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_0_V_address0 = weight_buf_31_0_V_s_reg_19261.read();
    } else {
        weight_buf_31_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_31_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_31_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_31_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_1_V_address0 = weight_buf_31_1_V_s_reg_19421.read();
    } else {
        weight_buf_31_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_31_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_31_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_1_V_d0() {
    weight_buf_31_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_31_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_31_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_31_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_2_V_address0 = weight_buf_31_2_V_s_reg_19581.read();
    } else {
        weight_buf_31_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_31_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_31_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_2_V_d0() {
    weight_buf_31_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_31_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_31_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_3_V_address0 = weight_buf_31_3_V_s_reg_19741.read();
    } else {
        weight_buf_31_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_31_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_31_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_3_V_d0() {
    weight_buf_31_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_31_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_31_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_31_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_4_V_address0 = weight_buf_31_4_V_s_reg_19901.read();
    } else {
        weight_buf_31_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_31_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_31_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_4_V_d0() {
    weight_buf_31_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_31_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_31_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_31_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_5_V_address0 = weight_buf_31_5_V_s_reg_20061.read();
    } else {
        weight_buf_31_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_31_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_31_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_5_V_d0() {
    weight_buf_31_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_31_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_31_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_6_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_6_V_address0 = weight_buf_31_6_V_s_reg_20221.read();
    } else {
        weight_buf_31_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_31_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_31_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_6_V_d0() {
    weight_buf_31_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_31_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_31_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_31_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_7_V_address0 = weight_buf_31_7_V_s_reg_20381.read();
    } else {
        weight_buf_31_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_31_7_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_31_7_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_7_V_d0() {
    weight_buf_31_7_V_d0 = in_stream_data_V_0_data_out.read().range(63, 56);
}

void mmult_hw::thread_weight_buf_31_7_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_1E))) {
        weight_buf_31_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_3_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_0_V_address0 = weight_buf_3_0_V_a_reg_19121.read();
    } else {
        weight_buf_3_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_3_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3))) {
        weight_buf_3_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_1_V_address0 = weight_buf_3_1_V_a_reg_19281.read();
    } else {
        weight_buf_3_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_3_1_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3_1_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_1_V_d0() {
    weight_buf_3_1_V_d0 = in_stream_data_V_0_data_out.read().range(15, 8);
}

void mmult_hw::thread_weight_buf_3_1_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3))) {
        weight_buf_3_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_3_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_2_V_address0 = weight_buf_3_2_V_a_reg_19441.read();
    } else {
        weight_buf_3_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_3_2_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3_2_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_2_V_d0() {
    weight_buf_3_2_V_d0 = in_stream_data_V_0_data_out.read().range(23, 16);
}

void mmult_hw::thread_weight_buf_3_2_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3))) {
        weight_buf_3_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_3_V_address0 = weight_buf_3_3_V_a_reg_19601.read();
    } else {
        weight_buf_3_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_3_3_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3_3_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_3_V_d0() {
    weight_buf_3_3_V_d0 = in_stream_data_V_0_data_out.read().range(31, 24);
}

void mmult_hw::thread_weight_buf_3_3_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3))) {
        weight_buf_3_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_3_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_4_V_address0 = weight_buf_3_4_V_a_reg_19761.read();
    } else {
        weight_buf_3_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_3_4_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3_4_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_4_V_d0() {
    weight_buf_3_4_V_d0 = in_stream_data_V_0_data_out.read().range(39, 32);
}

void mmult_hw::thread_weight_buf_3_4_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3))) {
        weight_buf_3_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_5_V_address0 = weight_buf_3_5_V_a_reg_19921.read();
    } else {
        weight_buf_3_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_3_5_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3_5_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_5_V_d0() {
    weight_buf_3_5_V_d0 = in_stream_data_V_0_data_out.read().range(47, 40);
}

void mmult_hw::thread_weight_buf_3_5_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3))) {
        weight_buf_3_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_3_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_6_V_address0 = weight_buf_3_6_V_a_reg_20081.read();
    } else {
        weight_buf_3_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_3_6_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3_6_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_6_V_d0() {
    weight_buf_3_6_V_d0 = in_stream_data_V_0_data_out.read().range(55, 48);
}

void mmult_hw::thread_weight_buf_3_6_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3))) {
        weight_buf_3_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_7_V_address0 = weight_buf_3_7_V_a_reg_20241.read();
    } else {
        weight_buf_3_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_3))) {
        weight_buf_3_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_4_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_0_V_address0 = weight_buf_4_0_V_a_reg_19126.read();
    } else {
        weight_buf_4_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_4_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_4_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4))) {
        weight_buf_4_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_1_V_address0 = weight_buf_4_1_V_a_reg_19286.read();
    } else {
        weight_buf_4_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4))) {
        weight_buf_4_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_4_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_2_V_address0 = weight_buf_4_2_V_a_reg_19446.read();
    } else {
        weight_buf_4_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4))) {
        weight_buf_4_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_3_V_address0 = weight_buf_4_3_V_a_reg_19606.read();
    } else {
        weight_buf_4_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4))) {
        weight_buf_4_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_4_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_4_V_address0 = weight_buf_4_4_V_a_reg_19766.read();
    } else {
        weight_buf_4_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4))) {
        weight_buf_4_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_5_V_address0 = weight_buf_4_5_V_a_reg_19926.read();
    } else {
        weight_buf_4_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4))) {
        weight_buf_4_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_4_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_6_V_address0 = weight_buf_4_6_V_a_reg_20086.read();
    } else {
        weight_buf_4_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4))) {
        weight_buf_4_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_4_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_4_7_V_address0 = weight_buf_4_7_V_a_reg_20246.read();
    } else {
        weight_buf_4_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_4_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_4))) {
        weight_buf_4_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_4_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_5_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_0_V_address0 = weight_buf_5_0_V_a_reg_19131.read();
    } else {
        weight_buf_5_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_5_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_5_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5))) {
        weight_buf_5_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_1_V_address0 = weight_buf_5_1_V_a_reg_19291.read();
    } else {
        weight_buf_5_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5))) {
        weight_buf_5_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_5_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_2_V_address0 = weight_buf_5_2_V_a_reg_19451.read();
    } else {
        weight_buf_5_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5))) {
        weight_buf_5_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_3_V_address0 = weight_buf_5_3_V_a_reg_19611.read();
    } else {
        weight_buf_5_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5))) {
        weight_buf_5_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_5_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_4_V_address0 = weight_buf_5_4_V_a_reg_19771.read();
    } else {
        weight_buf_5_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5))) {
        weight_buf_5_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_5_V_address0 = weight_buf_5_5_V_a_reg_19931.read();
    } else {
        weight_buf_5_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5))) {
        weight_buf_5_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_5_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_6_V_address0 = weight_buf_5_6_V_a_reg_20091.read();
    } else {
        weight_buf_5_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5))) {
        weight_buf_5_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_5_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_5_7_V_address0 = weight_buf_5_7_V_a_reg_20251.read();
    } else {
        weight_buf_5_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_5_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_5))) {
        weight_buf_5_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_5_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_6_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_0_V_address0 = weight_buf_6_0_V_a_reg_19136.read();
    } else {
        weight_buf_6_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_6_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_6_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6))) {
        weight_buf_6_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_1_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_1_V_address0 = weight_buf_6_1_V_a_reg_19296.read();
    } else {
        weight_buf_6_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6))) {
        weight_buf_6_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_6_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_2_V_address0 = weight_buf_6_2_V_a_reg_19456.read();
    } else {
        weight_buf_6_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6))) {
        weight_buf_6_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_3_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_3_V_address0 = weight_buf_6_3_V_a_reg_19616.read();
    } else {
        weight_buf_6_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6))) {
        weight_buf_6_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_6_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_4_V_address0 = weight_buf_6_4_V_a_reg_19776.read();
    } else {
        weight_buf_6_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6))) {
        weight_buf_6_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_5_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_5_V_address0 = weight_buf_6_5_V_a_reg_19936.read();
    } else {
        weight_buf_6_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6))) {
        weight_buf_6_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_6_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_6_V_address0 = weight_buf_6_6_V_a_reg_20096.read();
    } else {
        weight_buf_6_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6))) {
        weight_buf_6_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_6_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_7_V_address0 =  (sc_lv<4>) (tmp_19_fu_12828_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_6_7_V_address0 = weight_buf_6_7_V_a_reg_20256.read();
    } else {
        weight_buf_6_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_6_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter0.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20395.read(), ap_const_lv6_6))) {
        weight_buf_6_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_6_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_7_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()))) {
        weight_buf_7_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter1_tmp_19_reg_22519.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_7_0_V_address0 = weight_buf_7_0_V_a_reg_19141.read();
    } else {
        weight_buf_7_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_7_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)) || 
         (esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())))) {
        weight_buf_7_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_7_0_V_ce0 = ap_const_logic_0;
    }
}

}

