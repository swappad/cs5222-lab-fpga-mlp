#include "mmult_hw.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void mmult_hw::thread_tmp564_cast_fu_16453_p1() {
    tmp564_cast_fu_16453_p1 = esl_sext<18,17>(tmp118_reg_27921.read());
}

void mmult_hw::thread_tmp565_cast_fu_16478_p1() {
    tmp565_cast_fu_16478_p1 = esl_sext<19,18>(tmp122_fu_16472_p2.read());
}

void mmult_hw::thread_tmp566_cast_fu_16466_p1() {
    tmp566_cast_fu_16466_p1 = esl_sext<18,17>(tmp120_reg_27926.read());
}

void mmult_hw::thread_tmp567_cast_fu_16469_p1() {
    tmp567_cast_fu_16469_p1 = esl_sext<18,17>(tmp121_reg_27931.read());
}

void mmult_hw::thread_tmp568_cast_fu_17452_p1() {
    tmp568_cast_fu_17452_p1 = esl_sext<32,24>(tmp255_fu_17446_p2.read());
}

void mmult_hw::thread_tmp569_cast_fu_17426_p1() {
    tmp569_cast_fu_17426_p1 = esl_sext<24,22>(tmp190_fu_17420_p2.read());
}

void mmult_hw::thread_tmp56_fu_16152_p2() {
    tmp56_fu_16152_p2 = (!tmp500_cast_fu_16146_p1.read().is_01() || !tmp501_cast_fu_16149_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp500_cast_fu_16146_p1.read()) + sc_bigint<18>(tmp501_cast_fu_16149_p1.read()));
}

void mmult_hw::thread_tmp570_cast_fu_17414_p1() {
    tmp570_cast_fu_17414_p1 = esl_sext<22,21>(tmp158_reg_28426.read());
}

void mmult_hw::thread_tmp571_cast_fu_17253_p1() {
    tmp571_cast_fu_17253_p1 = esl_sext<21,20>(tmp142_fu_17247_p2.read());
}

void mmult_hw::thread_tmp572_cast_fu_17241_p1() {
    tmp572_cast_fu_17241_p1 = esl_sext<20,19>(tmp134_reg_28331.read());
}

void mmult_hw::thread_tmp573_cast_fu_16500_p1() {
    tmp573_cast_fu_16500_p1 = esl_sext<19,18>(tmp130_fu_16494_p2.read());
}

void mmult_hw::thread_tmp574_cast_fu_16488_p1() {
    tmp574_cast_fu_16488_p1 = esl_sext<18,17>(tmp128_reg_27936.read());
}

void mmult_hw::thread_tmp575_cast_fu_16491_p1() {
    tmp575_cast_fu_16491_p1 = esl_sext<18,17>(tmp129_reg_27941.read());
}

void mmult_hw::thread_tmp576_cast_fu_16516_p1() {
    tmp576_cast_fu_16516_p1 = esl_sext<19,18>(tmp133_fu_16510_p2.read());
}

void mmult_hw::thread_tmp577_cast_fu_16504_p1() {
    tmp577_cast_fu_16504_p1 = esl_sext<18,17>(tmp131_reg_27946.read());
}

void mmult_hw::thread_tmp578_cast_fu_16507_p1() {
    tmp578_cast_fu_16507_p1 = esl_sext<18,17>(tmp132_reg_27951.read());
}

void mmult_hw::thread_tmp579_cast_fu_17244_p1() {
    tmp579_cast_fu_17244_p1 = esl_sext<20,19>(tmp141_reg_28336.read());
}

void mmult_hw::thread_tmp580_cast_fu_16538_p1() {
    tmp580_cast_fu_16538_p1 = esl_sext<19,18>(tmp137_fu_16532_p2.read());
}

void mmult_hw::thread_tmp581_cast_fu_16526_p1() {
    tmp581_cast_fu_16526_p1 = esl_sext<18,17>(tmp135_reg_27956.read());
}

void mmult_hw::thread_tmp582_cast_fu_16529_p1() {
    tmp582_cast_fu_16529_p1 = esl_sext<18,17>(tmp136_reg_27961.read());
}

void mmult_hw::thread_tmp583_cast_fu_16554_p1() {
    tmp583_cast_fu_16554_p1 = esl_sext<19,18>(tmp140_fu_16548_p2.read());
}

void mmult_hw::thread_tmp584_cast_fu_16542_p1() {
    tmp584_cast_fu_16542_p1 = esl_sext<18,17>(tmp138_reg_27966.read());
}

void mmult_hw::thread_tmp585_cast_fu_16545_p1() {
    tmp585_cast_fu_16545_p1 = esl_sext<18,17>(tmp139_reg_27971.read());
}

void mmult_hw::thread_tmp586_cast_fu_17269_p1() {
    tmp586_cast_fu_17269_p1 = esl_sext<21,20>(tmp157_fu_17263_p2.read());
}

void mmult_hw::thread_tmp587_cast_fu_17257_p1() {
    tmp587_cast_fu_17257_p1 = esl_sext<20,19>(tmp149_reg_28341.read());
}

void mmult_hw::thread_tmp588_cast_fu_16576_p1() {
    tmp588_cast_fu_16576_p1 = esl_sext<19,18>(tmp145_fu_16570_p2.read());
}

void mmult_hw::thread_tmp589_cast_fu_16564_p1() {
    tmp589_cast_fu_16564_p1 = esl_sext<18,17>(tmp143_reg_27976.read());
}

void mmult_hw::thread_tmp590_cast_fu_16567_p1() {
    tmp590_cast_fu_16567_p1 = esl_sext<18,17>(tmp144_reg_27981.read());
}

void mmult_hw::thread_tmp591_cast_fu_16592_p1() {
    tmp591_cast_fu_16592_p1 = esl_sext<19,18>(tmp148_fu_16586_p2.read());
}

void mmult_hw::thread_tmp592_cast_fu_16580_p1() {
    tmp592_cast_fu_16580_p1 = esl_sext<18,17>(tmp146_reg_27986.read());
}

void mmult_hw::thread_tmp593_cast_fu_16583_p1() {
    tmp593_cast_fu_16583_p1 = esl_sext<18,17>(tmp147_reg_27991.read());
}

void mmult_hw::thread_tmp594_cast_fu_17260_p1() {
    tmp594_cast_fu_17260_p1 = esl_sext<20,19>(tmp156_reg_28346.read());
}

void mmult_hw::thread_tmp595_cast_fu_16614_p1() {
    tmp595_cast_fu_16614_p1 = esl_sext<19,18>(tmp152_fu_16608_p2.read());
}

void mmult_hw::thread_tmp596_cast_fu_16602_p1() {
    tmp596_cast_fu_16602_p1 = esl_sext<18,17>(tmp150_reg_27996.read());
}

void mmult_hw::thread_tmp597_cast_fu_16605_p1() {
    tmp597_cast_fu_16605_p1 = esl_sext<18,17>(tmp151_reg_28001.read());
}

void mmult_hw::thread_tmp598_cast_fu_16630_p1() {
    tmp598_cast_fu_16630_p1 = esl_sext<19,18>(tmp155_fu_16624_p2.read());
}

void mmult_hw::thread_tmp599_cast_fu_16618_p1() {
    tmp599_cast_fu_16618_p1 = esl_sext<18,17>(tmp153_reg_28006.read());
}

void mmult_hw::thread_tmp59_fu_16168_p2() {
    tmp59_fu_16168_p2 = (!tmp503_cast_fu_16162_p1.read().is_01() || !tmp504_cast_fu_16165_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp503_cast_fu_16162_p1.read()) + sc_bigint<18>(tmp504_cast_fu_16165_p1.read()));
}

void mmult_hw::thread_tmp600_cast_fu_16621_p1() {
    tmp600_cast_fu_16621_p1 = esl_sext<18,17>(tmp154_reg_28011.read());
}

void mmult_hw::thread_tmp601_cast_fu_17417_p1() {
    tmp601_cast_fu_17417_p1 = esl_sext<22,21>(tmp189_reg_28431.read());
}

void mmult_hw::thread_tmp602_cast_fu_17291_p1() {
    tmp602_cast_fu_17291_p1 = esl_sext<21,20>(tmp173_fu_17285_p2.read());
}

void mmult_hw::thread_tmp603_cast_fu_17279_p1() {
    tmp603_cast_fu_17279_p1 = esl_sext<20,19>(tmp165_reg_28351.read());
}

void mmult_hw::thread_tmp604_cast_fu_16652_p1() {
    tmp604_cast_fu_16652_p1 = esl_sext<19,18>(tmp161_fu_16646_p2.read());
}

void mmult_hw::thread_tmp605_cast_fu_16640_p1() {
    tmp605_cast_fu_16640_p1 = esl_sext<18,17>(tmp159_reg_28016.read());
}

void mmult_hw::thread_tmp606_cast_fu_16643_p1() {
    tmp606_cast_fu_16643_p1 = esl_sext<18,17>(tmp160_reg_28021.read());
}

void mmult_hw::thread_tmp607_cast_fu_16668_p1() {
    tmp607_cast_fu_16668_p1 = esl_sext<19,18>(tmp164_fu_16662_p2.read());
}

void mmult_hw::thread_tmp608_cast_fu_16656_p1() {
    tmp608_cast_fu_16656_p1 = esl_sext<18,17>(tmp162_reg_28026.read());
}

void mmult_hw::thread_tmp609_cast_fu_16659_p1() {
    tmp609_cast_fu_16659_p1 = esl_sext<18,17>(tmp163_reg_28031.read());
}

void mmult_hw::thread_tmp60_fu_16178_p2() {
    tmp60_fu_16178_p2 = (!tmp499_cast_fu_16158_p1.read().is_01() || !tmp502_cast_fu_16174_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp499_cast_fu_16158_p1.read()) + sc_bigint<19>(tmp502_cast_fu_16174_p1.read()));
}

void mmult_hw::thread_tmp610_cast_fu_17282_p1() {
    tmp610_cast_fu_17282_p1 = esl_sext<20,19>(tmp172_reg_28356.read());
}

void mmult_hw::thread_tmp611_cast_fu_16690_p1() {
    tmp611_cast_fu_16690_p1 = esl_sext<19,18>(tmp168_fu_16684_p2.read());
}

void mmult_hw::thread_tmp612_cast_fu_16678_p1() {
    tmp612_cast_fu_16678_p1 = esl_sext<18,17>(tmp166_reg_28036.read());
}

void mmult_hw::thread_tmp613_cast_fu_16681_p1() {
    tmp613_cast_fu_16681_p1 = esl_sext<18,17>(tmp167_reg_28041.read());
}

void mmult_hw::thread_tmp614_cast_fu_16706_p1() {
    tmp614_cast_fu_16706_p1 = esl_sext<19,18>(tmp171_fu_16700_p2.read());
}

void mmult_hw::thread_tmp615_cast_fu_16694_p1() {
    tmp615_cast_fu_16694_p1 = esl_sext<18,17>(tmp169_reg_28046.read());
}

void mmult_hw::thread_tmp616_cast_fu_16697_p1() {
    tmp616_cast_fu_16697_p1 = esl_sext<18,17>(tmp170_reg_28051.read());
}

void mmult_hw::thread_tmp617_cast_fu_17307_p1() {
    tmp617_cast_fu_17307_p1 = esl_sext<21,20>(tmp188_fu_17301_p2.read());
}

void mmult_hw::thread_tmp618_cast_fu_17295_p1() {
    tmp618_cast_fu_17295_p1 = esl_sext<20,19>(tmp180_reg_28361.read());
}

void mmult_hw::thread_tmp619_cast_fu_16728_p1() {
    tmp619_cast_fu_16728_p1 = esl_sext<19,18>(tmp176_fu_16722_p2.read());
}

void mmult_hw::thread_tmp61_fu_17139_p2() {
    tmp61_fu_17139_p2 = (!tmp491_cast_fu_17133_p1.read().is_01() || !tmp498_cast_fu_17136_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp491_cast_fu_17133_p1.read()) + sc_bigint<20>(tmp498_cast_fu_17136_p1.read()));
}

void mmult_hw::thread_tmp620_cast_fu_16716_p1() {
    tmp620_cast_fu_16716_p1 = esl_sext<18,17>(tmp174_reg_28056.read());
}

void mmult_hw::thread_tmp621_cast_fu_16719_p1() {
    tmp621_cast_fu_16719_p1 = esl_sext<18,17>(tmp175_reg_28061.read());
}

void mmult_hw::thread_tmp622_cast_fu_16744_p1() {
    tmp622_cast_fu_16744_p1 = esl_sext<19,18>(tmp179_fu_16738_p2.read());
}

void mmult_hw::thread_tmp623_cast_fu_16732_p1() {
    tmp623_cast_fu_16732_p1 = esl_sext<18,17>(tmp177_reg_28066.read());
}

void mmult_hw::thread_tmp624_cast_fu_16735_p1() {
    tmp624_cast_fu_16735_p1 = esl_sext<18,17>(tmp178_reg_28071.read());
}

void mmult_hw::thread_tmp625_cast_fu_17298_p1() {
    tmp625_cast_fu_17298_p1 = esl_sext<20,19>(tmp187_reg_28366.read());
}

void mmult_hw::thread_tmp626_cast_fu_16766_p1() {
    tmp626_cast_fu_16766_p1 = esl_sext<19,18>(tmp183_fu_16760_p2.read());
}

void mmult_hw::thread_tmp627_cast_fu_16754_p1() {
    tmp627_cast_fu_16754_p1 = esl_sext<18,17>(tmp181_reg_28076.read());
}

void mmult_hw::thread_tmp628_cast_fu_16757_p1() {
    tmp628_cast_fu_16757_p1 = esl_sext<18,17>(tmp182_reg_28081.read());
}

void mmult_hw::thread_tmp629_cast_fu_16782_p1() {
    tmp629_cast_fu_16782_p1 = esl_sext<19,18>(tmp186_fu_16776_p2.read());
}

void mmult_hw::thread_tmp62_fu_17149_p2() {
    tmp62_fu_17149_p2 = (!tmp475_cast_fu_17129_p1.read().is_01() || !tmp490_cast_fu_17145_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp475_cast_fu_17129_p1.read()) + sc_bigint<21>(tmp490_cast_fu_17145_p1.read()));
}

void mmult_hw::thread_tmp630_cast_fu_16770_p1() {
    tmp630_cast_fu_16770_p1 = esl_sext<18,17>(tmp184_reg_28086.read());
}

void mmult_hw::thread_tmp631_cast_fu_16773_p1() {
    tmp631_cast_fu_16773_p1 = esl_sext<18,17>(tmp185_reg_28091.read());
}

void mmult_hw::thread_tmp632_cast_fu_17442_p1() {
    tmp632_cast_fu_17442_p1 = esl_sext<24,23>(tmp254_fu_17436_p2.read());
}

void mmult_hw::thread_tmp633_cast_fu_17430_p1() {
    tmp633_cast_fu_17430_p1 = esl_sext<23,21>(tmp221_reg_28436.read());
}

void mmult_hw::thread_tmp634_cast_fu_17329_p1() {
    tmp634_cast_fu_17329_p1 = esl_sext<21,20>(tmp205_fu_17323_p2.read());
}

void mmult_hw::thread_tmp635_cast_fu_17317_p1() {
    tmp635_cast_fu_17317_p1 = esl_sext<20,19>(tmp197_reg_28371.read());
}

void mmult_hw::thread_tmp636_cast_fu_16804_p1() {
    tmp636_cast_fu_16804_p1 = esl_sext<19,18>(tmp193_fu_16798_p2.read());
}

void mmult_hw::thread_tmp637_cast_fu_16792_p1() {
    tmp637_cast_fu_16792_p1 = esl_sext<18,17>(tmp191_reg_28096.read());
}

void mmult_hw::thread_tmp638_cast_fu_16795_p1() {
    tmp638_cast_fu_16795_p1 = esl_sext<18,17>(tmp192_reg_28101.read());
}

void mmult_hw::thread_tmp639_cast_fu_16820_p1() {
    tmp639_cast_fu_16820_p1 = esl_sext<19,18>(tmp196_fu_16814_p2.read());
}

void mmult_hw::thread_tmp63_fu_17159_p2() {
    tmp63_fu_17159_p2 = (!tmp31_fu_17112_p2.read().is_01() || !tmp474_cast_fu_17155_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp31_fu_17112_p2.read()) + sc_bigint<32>(tmp474_cast_fu_17155_p1.read()));
}

void mmult_hw::thread_tmp640_cast_fu_16808_p1() {
    tmp640_cast_fu_16808_p1 = esl_sext<18,17>(tmp194_reg_28106.read());
}

void mmult_hw::thread_tmp641_cast_fu_16811_p1() {
    tmp641_cast_fu_16811_p1 = esl_sext<18,17>(tmp195_reg_28111.read());
}

void mmult_hw::thread_tmp642_cast_fu_17320_p1() {
    tmp642_cast_fu_17320_p1 = esl_sext<20,19>(tmp204_reg_28376.read());
}

void mmult_hw::thread_tmp643_cast_fu_16842_p1() {
    tmp643_cast_fu_16842_p1 = esl_sext<19,18>(tmp200_fu_16836_p2.read());
}

void mmult_hw::thread_tmp644_cast_fu_16830_p1() {
    tmp644_cast_fu_16830_p1 = esl_sext<18,17>(tmp198_reg_28116.read());
}

void mmult_hw::thread_tmp645_cast_fu_16833_p1() {
    tmp645_cast_fu_16833_p1 = esl_sext<18,17>(tmp199_reg_28121.read());
}

void mmult_hw::thread_tmp646_cast_fu_16858_p1() {
    tmp646_cast_fu_16858_p1 = esl_sext<19,18>(tmp203_fu_16852_p2.read());
}

void mmult_hw::thread_tmp647_cast_fu_16846_p1() {
    tmp647_cast_fu_16846_p1 = esl_sext<18,17>(tmp201_reg_28126.read());
}

void mmult_hw::thread_tmp648_cast_fu_16849_p1() {
    tmp648_cast_fu_16849_p1 = esl_sext<18,17>(tmp202_reg_28131.read());
}

void mmult_hw::thread_tmp649_cast_fu_17345_p1() {
    tmp649_cast_fu_17345_p1 = esl_sext<21,20>(tmp220_fu_17339_p2.read());
}

void mmult_hw::thread_tmp650_cast_fu_17333_p1() {
    tmp650_cast_fu_17333_p1 = esl_sext<20,19>(tmp212_reg_28381.read());
}

void mmult_hw::thread_tmp651_cast_fu_16880_p1() {
    tmp651_cast_fu_16880_p1 = esl_sext<19,18>(tmp208_fu_16874_p2.read());
}

void mmult_hw::thread_tmp652_cast_fu_16868_p1() {
    tmp652_cast_fu_16868_p1 = esl_sext<18,17>(tmp206_reg_28136.read());
}

void mmult_hw::thread_tmp653_cast_fu_16871_p1() {
    tmp653_cast_fu_16871_p1 = esl_sext<18,17>(tmp207_reg_28141.read());
}

void mmult_hw::thread_tmp654_cast_fu_16896_p1() {
    tmp654_cast_fu_16896_p1 = esl_sext<19,18>(tmp211_fu_16890_p2.read());
}

void mmult_hw::thread_tmp655_cast_fu_16884_p1() {
    tmp655_cast_fu_16884_p1 = esl_sext<18,17>(tmp209_reg_28146.read());
}

void mmult_hw::thread_tmp656_cast_fu_16887_p1() {
    tmp656_cast_fu_16887_p1 = esl_sext<18,17>(tmp210_reg_28151.read());
}

void mmult_hw::thread_tmp657_cast_fu_17336_p1() {
    tmp657_cast_fu_17336_p1 = esl_sext<20,19>(tmp219_reg_28386.read());
}

void mmult_hw::thread_tmp658_cast_fu_16918_p1() {
    tmp658_cast_fu_16918_p1 = esl_sext<19,18>(tmp215_fu_16912_p2.read());
}

void mmult_hw::thread_tmp659_cast_fu_16906_p1() {
    tmp659_cast_fu_16906_p1 = esl_sext<18,17>(tmp213_reg_28156.read());
}

void mmult_hw::thread_tmp660_cast_fu_16909_p1() {
    tmp660_cast_fu_16909_p1 = esl_sext<18,17>(tmp214_reg_28161.read());
}

void mmult_hw::thread_tmp661_cast_fu_16934_p1() {
    tmp661_cast_fu_16934_p1 = esl_sext<19,18>(tmp218_fu_16928_p2.read());
}

void mmult_hw::thread_tmp662_cast_fu_16922_p1() {
    tmp662_cast_fu_16922_p1 = esl_sext<18,17>(tmp216_reg_28166.read());
}

void mmult_hw::thread_tmp663_cast_fu_16925_p1() {
    tmp663_cast_fu_16925_p1 = esl_sext<18,17>(tmp217_reg_28171.read());
}

void mmult_hw::thread_tmp664_cast_fu_17433_p1() {
    tmp664_cast_fu_17433_p1 = esl_sext<23,22>(tmp253_reg_28441.read());
}

void mmult_hw::thread_tmp665_cast_fu_17367_p1() {
    tmp665_cast_fu_17367_p1 = esl_sext<22,20>(tmp236_fu_17361_p2.read());
}

void mmult_hw::thread_tmp666_cast_fu_17355_p1() {
    tmp666_cast_fu_17355_p1 = esl_sext<20,19>(tmp228_reg_28391.read());
}

void mmult_hw::thread_tmp667_cast_fu_16956_p1() {
    tmp667_cast_fu_16956_p1 = esl_sext<19,18>(tmp224_fu_16950_p2.read());
}

void mmult_hw::thread_tmp668_cast_fu_16944_p1() {
    tmp668_cast_fu_16944_p1 = esl_sext<18,17>(tmp222_reg_28176.read());
}

void mmult_hw::thread_tmp669_cast_fu_16947_p1() {
    tmp669_cast_fu_16947_p1 = esl_sext<18,17>(tmp223_reg_28181.read());
}

void mmult_hw::thread_tmp66_fu_16190_p2() {
    tmp66_fu_16190_p2 = (!tmp510_cast_fu_16184_p1.read().is_01() || !tmp511_cast_fu_16187_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp510_cast_fu_16184_p1.read()) + sc_bigint<18>(tmp511_cast_fu_16187_p1.read()));
}

void mmult_hw::thread_tmp670_cast_fu_16972_p1() {
    tmp670_cast_fu_16972_p1 = esl_sext<19,18>(tmp227_fu_16966_p2.read());
}

void mmult_hw::thread_tmp671_cast_fu_16960_p1() {
    tmp671_cast_fu_16960_p1 = esl_sext<18,17>(tmp225_reg_28186.read());
}

void mmult_hw::thread_tmp672_cast_fu_16963_p1() {
    tmp672_cast_fu_16963_p1 = esl_sext<18,17>(tmp226_reg_28191.read());
}

void mmult_hw::thread_tmp673_cast_fu_17358_p1() {
    tmp673_cast_fu_17358_p1 = esl_sext<20,19>(tmp235_reg_28396.read());
}

void mmult_hw::thread_tmp674_cast_fu_16994_p1() {
    tmp674_cast_fu_16994_p1 = esl_sext<19,18>(tmp231_fu_16988_p2.read());
}

void mmult_hw::thread_tmp675_cast_fu_16982_p1() {
    tmp675_cast_fu_16982_p1 = esl_sext<18,17>(tmp229_reg_28196.read());
}

void mmult_hw::thread_tmp676_cast_fu_16985_p1() {
    tmp676_cast_fu_16985_p1 = esl_sext<18,17>(tmp230_reg_28201.read());
}

void mmult_hw::thread_tmp677_cast_fu_17010_p1() {
    tmp677_cast_fu_17010_p1 = esl_sext<19,18>(tmp234_fu_17004_p2.read());
}

void mmult_hw::thread_tmp678_cast_fu_16998_p1() {
    tmp678_cast_fu_16998_p1 = esl_sext<18,17>(tmp232_reg_28206.read());
}

void mmult_hw::thread_tmp679_cast_fu_17001_p1() {
    tmp679_cast_fu_17001_p1 = esl_sext<18,17>(tmp233_reg_28211.read());
}

void mmult_hw::thread_tmp680_cast_fu_17383_p1() {
    tmp680_cast_fu_17383_p1 = esl_sext<22,21>(tmp252_fu_17377_p2.read());
}

void mmult_hw::thread_tmp681_cast_fu_17371_p1() {
    tmp681_cast_fu_17371_p1 = esl_sext<21,19>(tmp243_reg_28401.read());
}

void mmult_hw::thread_tmp682_cast_fu_17032_p1() {
    tmp682_cast_fu_17032_p1 = esl_sext<19,18>(tmp239_fu_17026_p2.read());
}

void mmult_hw::thread_tmp683_cast_fu_17020_p1() {
    tmp683_cast_fu_17020_p1 = esl_sext<18,17>(tmp237_reg_28216.read());
}

void mmult_hw::thread_tmp684_cast_fu_17023_p1() {
    tmp684_cast_fu_17023_p1 = esl_sext<18,17>(tmp238_reg_28221.read());
}

void mmult_hw::thread_tmp685_cast_fu_17048_p1() {
    tmp685_cast_fu_17048_p1 = esl_sext<19,18>(tmp242_fu_17042_p2.read());
}

void mmult_hw::thread_tmp686_cast_fu_17036_p1() {
    tmp686_cast_fu_17036_p1 = esl_sext<18,17>(tmp240_reg_28226.read());
}

void mmult_hw::thread_tmp687_cast_fu_17039_p1() {
    tmp687_cast_fu_17039_p1 = esl_sext<18,17>(tmp241_reg_28231.read());
}

void mmult_hw::thread_tmp688_cast_fu_17374_p1() {
    tmp688_cast_fu_17374_p1 = esl_sext<21,20>(tmp251_reg_28406.read());
}

void mmult_hw::thread_tmp689_cast_fu_17070_p1() {
    tmp689_cast_fu_17070_p1 = esl_sext<20,18>(tmp246_fu_17064_p2.read());
}

void mmult_hw::thread_tmp690_cast_fu_17058_p1() {
    tmp690_cast_fu_17058_p1 = esl_sext<18,17>(tmp244_reg_28236.read());
}

void mmult_hw::thread_tmp691_cast_fu_17061_p1() {
    tmp691_cast_fu_17061_p1 = esl_sext<18,17>(tmp245_reg_28241.read());
}

void mmult_hw::thread_tmp692_cast_fu_17086_p1() {
    tmp692_cast_fu_17086_p1 = esl_sext<20,19>(tmp250_fu_17080_p2.read());
}

void mmult_hw::thread_tmp693_cast_fu_17074_p1() {
    tmp693_cast_fu_17074_p1 = esl_sext<19,17>(tmp247_reg_28246.read());
}

void mmult_hw::thread_tmp694_cast_fu_17077_p1() {
    tmp694_cast_fu_17077_p1 = esl_sext<19,18>(tmp249_reg_28251.read());
}

void mmult_hw::thread_tmp69_fu_16206_p2() {
    tmp69_fu_16206_p2 = (!tmp513_cast_fu_16200_p1.read().is_01() || !tmp514_cast_fu_16203_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp513_cast_fu_16200_p1.read()) + sc_bigint<18>(tmp514_cast_fu_16203_p1.read()));
}

void mmult_hw::thread_tmp6_fu_15892_p2() {
    tmp6_fu_15892_p2 = (!tmp450_cast_fu_15886_p1.read().is_01() || !tmp451_cast_fu_15889_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp450_cast_fu_15886_p1.read()) + sc_bigint<18>(tmp451_cast_fu_15889_p1.read()));
}

void mmult_hw::thread_tmp70_fu_16216_p2() {
    tmp70_fu_16216_p2 = (!tmp509_cast_fu_16196_p1.read().is_01() || !tmp512_cast_fu_16212_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp509_cast_fu_16196_p1.read()) + sc_bigint<19>(tmp512_cast_fu_16212_p1.read()));
}

void mmult_hw::thread_tmp73_fu_16228_p2() {
    tmp73_fu_16228_p2 = (!tmp517_cast_fu_16222_p1.read().is_01() || !tmp518_cast_fu_16225_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp517_cast_fu_16222_p1.read()) + sc_bigint<18>(tmp518_cast_fu_16225_p1.read()));
}

void mmult_hw::thread_tmp76_fu_16244_p2() {
    tmp76_fu_16244_p2 = (!tmp520_cast_fu_16238_p1.read().is_01() || !tmp521_cast_fu_16241_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp520_cast_fu_16238_p1.read()) + sc_bigint<18>(tmp521_cast_fu_16241_p1.read()));
}

void mmult_hw::thread_tmp77_fu_16254_p2() {
    tmp77_fu_16254_p2 = (!tmp516_cast_fu_16234_p1.read().is_01() || !tmp519_cast_fu_16250_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp516_cast_fu_16234_p1.read()) + sc_bigint<19>(tmp519_cast_fu_16250_p1.read()));
}

void mmult_hw::thread_tmp78_fu_17171_p2() {
    tmp78_fu_17171_p2 = (!tmp508_cast_fu_17165_p1.read().is_01() || !tmp515_cast_fu_17168_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp508_cast_fu_17165_p1.read()) + sc_bigint<20>(tmp515_cast_fu_17168_p1.read()));
}

void mmult_hw::thread_tmp7_fu_15902_p2() {
    tmp7_fu_15902_p2 = (!tmp3_fu_15881_p2.read().is_01() || !tmp449_cast_fu_15898_p1.read().is_01())? sc_lv<32>(): (sc_biguint<32>(tmp3_fu_15881_p2.read()) + sc_bigint<32>(tmp449_cast_fu_15898_p1.read()));
}

void mmult_hw::thread_tmp81_fu_16266_p2() {
    tmp81_fu_16266_p2 = (!tmp525_cast_fu_16260_p1.read().is_01() || !tmp526_cast_fu_16263_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp525_cast_fu_16260_p1.read()) + sc_bigint<18>(tmp526_cast_fu_16263_p1.read()));
}

void mmult_hw::thread_tmp84_fu_16282_p2() {
    tmp84_fu_16282_p2 = (!tmp528_cast_fu_16276_p1.read().is_01() || !tmp529_cast_fu_16279_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp528_cast_fu_16276_p1.read()) + sc_bigint<18>(tmp529_cast_fu_16279_p1.read()));
}

void mmult_hw::thread_tmp85_fu_16292_p2() {
    tmp85_fu_16292_p2 = (!tmp524_cast_fu_16272_p1.read().is_01() || !tmp527_cast_fu_16288_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp524_cast_fu_16272_p1.read()) + sc_bigint<19>(tmp527_cast_fu_16288_p1.read()));
}

void mmult_hw::thread_tmp88_fu_16304_p2() {
    tmp88_fu_16304_p2 = (!tmp532_cast_fu_16298_p1.read().is_01() || !tmp533_cast_fu_16301_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp532_cast_fu_16298_p1.read()) + sc_bigint<18>(tmp533_cast_fu_16301_p1.read()));
}

void mmult_hw::thread_tmp91_fu_16320_p2() {
    tmp91_fu_16320_p2 = (!tmp535_cast_fu_16314_p1.read().is_01() || !tmp536_cast_fu_16317_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp535_cast_fu_16314_p1.read()) + sc_bigint<18>(tmp536_cast_fu_16317_p1.read()));
}

void mmult_hw::thread_tmp92_fu_16330_p2() {
    tmp92_fu_16330_p2 = (!tmp531_cast_fu_16310_p1.read().is_01() || !tmp534_cast_fu_16326_p1.read().is_01())? sc_lv<19>(): (sc_bigint<19>(tmp531_cast_fu_16310_p1.read()) + sc_bigint<19>(tmp534_cast_fu_16326_p1.read()));
}

void mmult_hw::thread_tmp93_fu_17187_p2() {
    tmp93_fu_17187_p2 = (!tmp523_cast_fu_17181_p1.read().is_01() || !tmp530_cast_fu_17184_p1.read().is_01())? sc_lv<20>(): (sc_bigint<20>(tmp523_cast_fu_17181_p1.read()) + sc_bigint<20>(tmp530_cast_fu_17184_p1.read()));
}

void mmult_hw::thread_tmp94_fu_17197_p2() {
    tmp94_fu_17197_p2 = (!tmp507_cast_fu_17177_p1.read().is_01() || !tmp522_cast_fu_17193_p1.read().is_01())? sc_lv<21>(): (sc_bigint<21>(tmp507_cast_fu_17177_p1.read()) + sc_bigint<21>(tmp522_cast_fu_17193_p1.read()));
}

void mmult_hw::thread_tmp97_fu_16342_p2() {
    tmp97_fu_16342_p2 = (!tmp541_cast_fu_16336_p1.read().is_01() || !tmp542_cast_fu_16339_p1.read().is_01())? sc_lv<18>(): (sc_bigint<18>(tmp541_cast_fu_16336_p1.read()) + sc_bigint<18>(tmp542_cast_fu_16339_p1.read()));
}

void mmult_hw::thread_tmp_12_fu_12430_p1() {
    tmp_12_fu_12430_p1 = esl_zext<64,8>(i3_reg_11392.read());
}

void mmult_hw::thread_tmp_13_fu_12398_p3() {
    tmp_13_fu_12398_p3 = t_reg_11369.read().range(13, 13);
}

void mmult_hw::thread_tmp_14_fu_12356_p1() {
    tmp_14_fu_12356_p1 = in_stream_data_V_0_data_out.read().range(8-1, 0);
}

void mmult_hw::thread_tmp_14_mid2_fu_12793_p1() {
    tmp_14_mid2_fu_12793_p1 = esl_zext<64,8>(tmp_14_mid2_v_fu_12785_p3.read());
}

void mmult_hw::thread_tmp_14_mid2_v_fu_12785_p3() {
    tmp_14_mid2_v_fu_12785_p3 = (!tmp_43_fu_12765_p2.read()[0].is_01())? sc_lv<8>(): ((tmp_43_fu_12765_p2.read()[0].to_bool())? i_s_fu_12779_p2.read(): i4_phi_fu_11439_p4.read());
}

void mmult_hw::thread_tmp_18_fu_18041_p1() {
    tmp_18_fu_18041_p1 = esl_zext<64,8>(i5_phi_fu_11471_p4.read());
}

void mmult_hw::thread_tmp_19_fu_18046_p2() {
    tmp_19_fu_18046_p2 = (tmp_257_fu_18037_p1.read() | ap_const_lv7_1);
}

void mmult_hw::thread_tmp_20_fu_18052_p1() {
    tmp_20_fu_18052_p1 = esl_zext<64,7>(tmp_19_fu_18046_p2.read());
}

void mmult_hw::thread_tmp_21_fu_18075_p2() {
    tmp_21_fu_18075_p2 = (tmp_257_reg_28686.read() | ap_const_lv7_2);
}

void mmult_hw::thread_tmp_22_fu_18080_p1() {
    tmp_22_fu_18080_p1 = esl_zext<64,7>(tmp_21_fu_18075_p2.read());
}

void mmult_hw::thread_tmp_23_fu_18085_p2() {
    tmp_23_fu_18085_p2 = (tmp_257_reg_28686.read() | ap_const_lv7_3);
}

void mmult_hw::thread_tmp_24_fu_18090_p1() {
    tmp_24_fu_18090_p1 = esl_zext<64,7>(tmp_23_fu_18085_p2.read());
}

void mmult_hw::thread_tmp_256_fu_12717_p1() {
    tmp_256_fu_12717_p1 = in_stream_data_V_0_data_out.read().range(8-1, 0);
}

void mmult_hw::thread_tmp_257_fu_18037_p1() {
    tmp_257_fu_18037_p1 = i5_phi_fu_11471_p4.read().range(7-1, 0);
}

void mmult_hw::thread_tmp_258_fu_18157_p9() {
    tmp_258_fu_18157_p9 = esl_concat<52,8>(esl_concat<44,8>(esl_concat<36,8>(esl_concat<28,8>(esl_concat<20,8>(esl_concat<12,8>(esl_concat<4,8>(out_buf_V_q0.read(), extLd6_fu_18153_p1.read()), extLd5_fu_18150_p1.read()), extLd4_fu_18147_p1.read()), extLd3_fu_18144_p1.read()), extLd2_fu_18141_p1.read()), extLd1_fu_18138_p1.read()), extLd_fu_18135_p1.read());
}

void mmult_hw::thread_tmp_25_fu_18095_p2() {
    tmp_25_fu_18095_p2 = (tmp_257_reg_28686.read() | ap_const_lv7_4);
}

void mmult_hw::thread_tmp_26_fu_18100_p1() {
    tmp_26_fu_18100_p1 = esl_zext<64,7>(tmp_25_fu_18095_p2.read());
}

void mmult_hw::thread_tmp_27_fu_18105_p2() {
    tmp_27_fu_18105_p2 = (tmp_257_reg_28686.read() | ap_const_lv7_5);
}

void mmult_hw::thread_tmp_28_fu_18110_p1() {
    tmp_28_fu_18110_p1 = esl_zext<64,7>(tmp_27_fu_18105_p2.read());
}

void mmult_hw::thread_tmp_29_fu_18115_p2() {
    tmp_29_fu_18115_p2 = (tmp_257_reg_28686.read() | ap_const_lv7_6);
}

void mmult_hw::thread_tmp_2_fu_12012_p1() {
    tmp_2_fu_12012_p1 = esl_zext<64,4>(i_reg_11265.read());
}

void mmult_hw::thread_tmp_30_fu_18120_p1() {
    tmp_30_fu_18120_p1 = esl_zext<64,7>(tmp_29_fu_18115_p2.read());
}

void mmult_hw::thread_tmp_31_fu_18125_p2() {
    tmp_31_fu_18125_p2 = (tmp_257_reg_28686.read() | ap_const_lv7_7);
}

void mmult_hw::thread_tmp_32_fu_18130_p1() {
    tmp_32_fu_18130_p1 = esl_zext<64,7>(tmp_31_fu_18125_p2.read());
}

void mmult_hw::thread_tmp_33_fu_18057_p2() {
    tmp_33_fu_18057_p2 = (!ap_const_lv11_1.is_01() || !os_idx_1_phi_fu_11460_p4.read().is_01())? sc_lv<11>(): (sc_biguint<11>(ap_const_lv11_1) + sc_biguint<11>(os_idx_1_phi_fu_11460_p4.read()));
}

void mmult_hw::thread_tmp_34_fu_17708_p2() {
    tmp_34_fu_17708_p2 = (!out_tmp_9_V_24_fu_17702_p3.read().is_01() || !out_tmp_9_V_23_fu_17695_p3.read().is_01())? sc_lv<1>(): (sc_bigint<32>(out_tmp_9_V_24_fu_17702_p3.read()) < sc_bigint<32>(out_tmp_9_V_23_fu_17695_p3.read()));
}

void mmult_hw::thread_tmp_35_fu_17714_p2() {
    tmp_35_fu_17714_p2 = (!out_tmp_9_V_21_fu_17682_p3.read().is_01() || !out_tmp_9_V_20_reg_28524.read().is_01())? sc_lv<1>(): (sc_bigint<32>(out_tmp_9_V_21_fu_17682_p3.read()) < sc_bigint<32>(out_tmp_9_V_20_reg_28524.read()));
}

void mmult_hw::thread_tmp_36_fu_17719_p2() {
    tmp_36_fu_17719_p2 = (!out_tmp_9_V_19_fu_17669_p3.read().is_01() || !out_tmp_9_V_9_fu_17656_p3.read().is_01())? sc_lv<1>(): (sc_bigint<32>(out_tmp_9_V_19_fu_17669_p3.read()) < sc_bigint<32>(out_tmp_9_V_9_fu_17656_p3.read()));
}

void mmult_hw::thread_tmp_37_fu_17725_p2() {
    tmp_37_fu_17725_p2 = (!out_tmp_9_V_7_fu_17636_p3.read().is_01() || !out_tmp_9_V_5_fu_17615_p3.read().is_01())? sc_lv<1>(): (sc_bigint<32>(out_tmp_9_V_7_fu_17636_p3.read()) < sc_bigint<32>(out_tmp_9_V_5_fu_17615_p3.read()));
}

void mmult_hw::thread_tmp_38_fu_17944_p2() {
    tmp_38_fu_17944_p2 = (!out_tmp_9_V_3_fu_17937_p3.read().is_01() || !out_tmp_9_V_2_fu_17924_p3.read().is_01())? sc_lv<1>(): (sc_bigint<32>(out_tmp_9_V_3_fu_17937_p3.read()) < sc_bigint<32>(out_tmp_9_V_2_fu_17924_p3.read()));
}

void mmult_hw::thread_tmp_39_fu_17746_p2() {
    tmp_39_fu_17746_p2 = (!out_tmp_V_load_10_ph_fu_17731_p3.read().is_01() || !out_tmp_V_load_11_ph_fu_17739_p3.read().is_01())? sc_lv<1>(): (sc_bigint<32>(out_tmp_V_load_10_ph_fu_17731_p3.read()) < sc_bigint<32>(out_tmp_V_load_11_ph_fu_17739_p3.read()));
}

void mmult_hw::thread_tmp_3_fu_12022_p2() {
    tmp_3_fu_12022_p2 = (i_reg_11265.read() | ap_const_lv4_1);
}

void mmult_hw::thread_tmp_40_fu_17828_p2() {
    tmp_40_fu_17828_p2 = (!out_tmp_V_load_12_ph_fu_17818_p3.read().is_01() || !out_tmp_V_load_13_ph_fu_17823_p3.read().is_01())? sc_lv<1>(): (sc_bigint<32>(out_tmp_V_load_12_ph_fu_17818_p3.read()) < sc_bigint<32>(out_tmp_V_load_13_ph_fu_17823_p3.read()));
}

void mmult_hw::thread_tmp_41_fu_12804_p1() {
    tmp_41_fu_12804_p1 = esl_zext<64,4>(j3_mid2_reg_21947.read());
}

void mmult_hw::thread_tmp_42_fu_17953_p2() {
    tmp_42_fu_17953_p2 = (!out_tmp_9_V_reg_28641.read().is_01() || !out_tmp_V_load_15_ph_reg_28646.read().is_01())? sc_lv<1>(): (sc_bigint<32>(out_tmp_9_V_reg_28641.read()) < sc_bigint<32>(out_tmp_V_load_15_ph_reg_28646.read()));
}

void mmult_hw::thread_tmp_43_fu_12765_p2() {
    tmp_43_fu_12765_p2 = (!j3_phi_fu_11450_p4.read().is_01() || !ap_const_lv4_A.is_01())? sc_lv<1>(): sc_lv<1>(j3_phi_fu_11450_p4.read() == ap_const_lv4_A);
}

void mmult_hw::thread_tmp_44_fu_18012_p2() {
    tmp_44_fu_18012_p2 = (!out_tmp_V_load_16_ph_reg_28672.read().is_01() || !out_tmp_V_load_17_ph_fu_18007_p3.read().is_01())? sc_lv<1>(): (sc_bigint<32>(out_tmp_V_load_16_ph_reg_28672.read()) < sc_bigint<32>(out_tmp_V_load_17_ph_fu_18007_p3.read()));
}

void mmult_hw::thread_tmp_4_fu_12028_p1() {
    tmp_4_fu_12028_p1 = esl_zext<64,4>(tmp_3_fu_12022_p2.read());
}

void mmult_hw::thread_tmp_6_fu_12062_p2() {
    tmp_6_fu_12062_p2 = (!is_idx_1_reg_11289.read().is_01() || !ap_const_lv9_20.is_01())? sc_lv<9>(): (sc_biguint<9>(is_idx_1_reg_11289.read()) + sc_biguint<9>(ap_const_lv9_20));
}

void mmult_hw::thread_tmp_7_fu_12068_p1() {
    tmp_7_fu_12068_p1 = esl_zext<64,4>(i2_reg_11301.read());
}

void mmult_hw::thread_tmp_fu_12006_p2() {
    tmp_fu_12006_p2 = (!is_idx_reg_11254.read().is_01() || !ap_const_lv3_1.is_01())? sc_lv<3>(): (sc_biguint<3>(is_idx_reg_11254.read()) + sc_biguint<3>(ap_const_lv3_1));
}

void mmult_hw::thread_tmp_s_fu_12334_p2() {
    tmp_s_fu_12334_p2 = (!ap_const_lv9_1.is_01() || !is_idx_2_reg_11312.read().is_01())? sc_lv<9>(): (sc_biguint<9>(ap_const_lv9_1) + sc_biguint<9>(is_idx_2_reg_11312.read()));
}

void mmult_hw::thread_weight_buf_0_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_0_V_address0 = weight_buf_0_0_V_a_reg_19254.read();
    } else {
        weight_buf_0_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_0_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_0_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0))) {
        weight_buf_0_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_1_V_address0 = weight_buf_0_1_V_a_reg_19414.read();
    } else {
        weight_buf_0_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0))) {
        weight_buf_0_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_2_V_address0 = weight_buf_0_2_V_a_reg_19574.read();
    } else {
        weight_buf_0_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0))) {
        weight_buf_0_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_3_V_address0 = weight_buf_0_3_V_a_reg_19734.read();
    } else {
        weight_buf_0_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0))) {
        weight_buf_0_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_4_V_address0 = weight_buf_0_4_V_a_reg_19894.read();
    } else {
        weight_buf_0_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0))) {
        weight_buf_0_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_5_V_address0 = weight_buf_0_5_V_a_reg_20054.read();
    } else {
        weight_buf_0_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0))) {
        weight_buf_0_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_6_V_address0 = weight_buf_0_6_V_a_reg_20214.read();
    } else {
        weight_buf_0_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0))) {
        weight_buf_0_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_0_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_0_7_V_address0 = weight_buf_0_7_V_a_reg_20374.read();
    } else {
        weight_buf_0_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_0_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0))) {
        weight_buf_0_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_0_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_0_V_address0 = weight_buf_10_0_V_s_reg_19304.read();
    } else {
        weight_buf_10_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_10_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_10_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A))) {
        weight_buf_10_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_1_V_address0 = weight_buf_10_1_V_s_reg_19464.read();
    } else {
        weight_buf_10_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A))) {
        weight_buf_10_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_2_V_address0 = weight_buf_10_2_V_s_reg_19624.read();
    } else {
        weight_buf_10_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A))) {
        weight_buf_10_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_3_V_address0 = weight_buf_10_3_V_s_reg_19784.read();
    } else {
        weight_buf_10_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A))) {
        weight_buf_10_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_4_V_address0 = weight_buf_10_4_V_s_reg_19944.read();
    } else {
        weight_buf_10_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A))) {
        weight_buf_10_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_5_V_address0 = weight_buf_10_5_V_s_reg_20104.read();
    } else {
        weight_buf_10_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A))) {
        weight_buf_10_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_6_V_address0 = weight_buf_10_6_V_s_reg_20264.read();
    } else {
        weight_buf_10_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A))) {
        weight_buf_10_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_10_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_10_7_V_address0 = weight_buf_10_7_V_s_reg_20424.read();
    } else {
        weight_buf_10_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_10_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A))) {
        weight_buf_10_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_10_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_0_V_address0 = weight_buf_11_0_V_s_reg_19309.read();
    } else {
        weight_buf_11_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_11_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_11_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B))) {
        weight_buf_11_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_1_V_address0 = weight_buf_11_1_V_s_reg_19469.read();
    } else {
        weight_buf_11_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B))) {
        weight_buf_11_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_2_V_address0 = weight_buf_11_2_V_s_reg_19629.read();
    } else {
        weight_buf_11_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B))) {
        weight_buf_11_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_3_V_address0 = weight_buf_11_3_V_s_reg_19789.read();
    } else {
        weight_buf_11_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B))) {
        weight_buf_11_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_4_V_address0 = weight_buf_11_4_V_s_reg_19949.read();
    } else {
        weight_buf_11_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B))) {
        weight_buf_11_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_5_V_address0 = weight_buf_11_5_V_s_reg_20109.read();
    } else {
        weight_buf_11_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B))) {
        weight_buf_11_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_6_V_address0 = weight_buf_11_6_V_s_reg_20269.read();
    } else {
        weight_buf_11_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B))) {
        weight_buf_11_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_11_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_11_7_V_address0 = weight_buf_11_7_V_s_reg_20429.read();
    } else {
        weight_buf_11_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_11_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B))) {
        weight_buf_11_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_11_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_0_V_address0 = weight_buf_12_0_V_s_reg_19314.read();
    } else {
        weight_buf_12_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_12_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_12_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C))) {
        weight_buf_12_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_1_V_address0 = weight_buf_12_1_V_s_reg_19474.read();
    } else {
        weight_buf_12_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C))) {
        weight_buf_12_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_2_V_address0 = weight_buf_12_2_V_s_reg_19634.read();
    } else {
        weight_buf_12_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C))) {
        weight_buf_12_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_3_V_address0 = weight_buf_12_3_V_s_reg_19794.read();
    } else {
        weight_buf_12_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C))) {
        weight_buf_12_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_4_V_address0 = weight_buf_12_4_V_s_reg_19954.read();
    } else {
        weight_buf_12_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C))) {
        weight_buf_12_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_5_V_address0 = weight_buf_12_5_V_s_reg_20114.read();
    } else {
        weight_buf_12_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C))) {
        weight_buf_12_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_6_V_address0 = weight_buf_12_6_V_s_reg_20274.read();
    } else {
        weight_buf_12_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C))) {
        weight_buf_12_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_12_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_12_7_V_address0 = weight_buf_12_7_V_s_reg_20434.read();
    } else {
        weight_buf_12_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_12_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C))) {
        weight_buf_12_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_12_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_0_V_address0 = weight_buf_13_0_V_s_reg_19319.read();
    } else {
        weight_buf_13_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_13_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_13_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D))) {
        weight_buf_13_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_1_V_address0 = weight_buf_13_1_V_s_reg_19479.read();
    } else {
        weight_buf_13_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D))) {
        weight_buf_13_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_2_V_address0 = weight_buf_13_2_V_s_reg_19639.read();
    } else {
        weight_buf_13_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D))) {
        weight_buf_13_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_3_V_address0 = weight_buf_13_3_V_s_reg_19799.read();
    } else {
        weight_buf_13_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D))) {
        weight_buf_13_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_4_V_address0 = weight_buf_13_4_V_s_reg_19959.read();
    } else {
        weight_buf_13_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D))) {
        weight_buf_13_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_5_V_address0 = weight_buf_13_5_V_s_reg_20119.read();
    } else {
        weight_buf_13_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D))) {
        weight_buf_13_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_6_V_address0 = weight_buf_13_6_V_s_reg_20279.read();
    } else {
        weight_buf_13_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D))) {
        weight_buf_13_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_13_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_13_7_V_address0 = weight_buf_13_7_V_s_reg_20439.read();
    } else {
        weight_buf_13_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_13_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D))) {
        weight_buf_13_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_13_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_0_V_address0 = weight_buf_14_0_V_s_reg_19324.read();
    } else {
        weight_buf_14_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_14_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_14_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E))) {
        weight_buf_14_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_1_V_address0 = weight_buf_14_1_V_s_reg_19484.read();
    } else {
        weight_buf_14_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E))) {
        weight_buf_14_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_2_V_address0 = weight_buf_14_2_V_s_reg_19644.read();
    } else {
        weight_buf_14_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E))) {
        weight_buf_14_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_3_V_address0 = weight_buf_14_3_V_s_reg_19804.read();
    } else {
        weight_buf_14_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E))) {
        weight_buf_14_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_4_V_address0 = weight_buf_14_4_V_s_reg_19964.read();
    } else {
        weight_buf_14_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E))) {
        weight_buf_14_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_5_V_address0 = weight_buf_14_5_V_s_reg_20124.read();
    } else {
        weight_buf_14_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E))) {
        weight_buf_14_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_6_V_address0 = weight_buf_14_6_V_s_reg_20284.read();
    } else {
        weight_buf_14_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E))) {
        weight_buf_14_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_14_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_14_7_V_address0 = weight_buf_14_7_V_s_reg_20444.read();
    } else {
        weight_buf_14_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_14_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E))) {
        weight_buf_14_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_14_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_0_V_address0 = weight_buf_15_0_V_s_reg_19329.read();
    } else {
        weight_buf_15_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_15_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_15_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F))) {
        weight_buf_15_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_1_V_address0 = weight_buf_15_1_V_s_reg_19489.read();
    } else {
        weight_buf_15_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F))) {
        weight_buf_15_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_2_V_address0 = weight_buf_15_2_V_s_reg_19649.read();
    } else {
        weight_buf_15_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F))) {
        weight_buf_15_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_3_V_address0 = weight_buf_15_3_V_s_reg_19809.read();
    } else {
        weight_buf_15_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F))) {
        weight_buf_15_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_4_V_address0 = weight_buf_15_4_V_s_reg_19969.read();
    } else {
        weight_buf_15_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F))) {
        weight_buf_15_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter2_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_5_V_address0 = weight_buf_15_5_V_s_reg_20129.read();
    } else {
        weight_buf_15_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter3.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F))) {
        weight_buf_15_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_6_V_address0 = weight_buf_15_6_V_s_reg_20289.read();
    } else {
        weight_buf_15_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F))) {
        weight_buf_15_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_15_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_15_7_V_address0 = weight_buf_15_7_V_s_reg_20449.read();
    } else {
        weight_buf_15_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_15_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F))) {
        weight_buf_15_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_15_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_0_V_address0 = weight_buf_16_0_V_s_reg_19334.read();
    } else {
        weight_buf_16_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_16_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_16_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10))) {
        weight_buf_16_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_1_V_address0 = weight_buf_16_1_V_s_reg_19494.read();
    } else {
        weight_buf_16_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10))) {
        weight_buf_16_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_2_V_address0 = weight_buf_16_2_V_s_reg_19654.read();
    } else {
        weight_buf_16_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10))) {
        weight_buf_16_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_3_V_address0 = weight_buf_16_3_V_s_reg_19814.read();
    } else {
        weight_buf_16_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10))) {
        weight_buf_16_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_4_V_address0 = weight_buf_16_4_V_s_reg_19974.read();
    } else {
        weight_buf_16_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10))) {
        weight_buf_16_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_5_V_address0 = weight_buf_16_5_V_s_reg_20134.read();
    } else {
        weight_buf_16_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10))) {
        weight_buf_16_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_6_V_address0 = weight_buf_16_6_V_s_reg_20294.read();
    } else {
        weight_buf_16_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10))) {
        weight_buf_16_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_16_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_16_7_V_address0 = weight_buf_16_7_V_s_reg_20454.read();
    } else {
        weight_buf_16_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_16_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10))) {
        weight_buf_16_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_16_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_0_V_address0 = weight_buf_17_0_V_s_reg_19339.read();
    } else {
        weight_buf_17_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_17_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_17_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11))) {
        weight_buf_17_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_1_V_address0 = weight_buf_17_1_V_s_reg_19499.read();
    } else {
        weight_buf_17_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11))) {
        weight_buf_17_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_2_V_address0 = weight_buf_17_2_V_s_reg_19659.read();
    } else {
        weight_buf_17_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11))) {
        weight_buf_17_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_3_V_address0 = weight_buf_17_3_V_s_reg_19819.read();
    } else {
        weight_buf_17_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11))) {
        weight_buf_17_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_4_V_address0 = weight_buf_17_4_V_s_reg_19979.read();
    } else {
        weight_buf_17_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11))) {
        weight_buf_17_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_5_V_address0 = weight_buf_17_5_V_s_reg_20139.read();
    } else {
        weight_buf_17_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11))) {
        weight_buf_17_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_6_V_address0 = weight_buf_17_6_V_s_reg_20299.read();
    } else {
        weight_buf_17_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11))) {
        weight_buf_17_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_17_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_17_7_V_address0 = weight_buf_17_7_V_s_reg_20459.read();
    } else {
        weight_buf_17_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_17_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11))) {
        weight_buf_17_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_17_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_0_V_address0 = weight_buf_18_0_V_s_reg_19344.read();
    } else {
        weight_buf_18_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_18_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_18_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12))) {
        weight_buf_18_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_1_V_address0 = weight_buf_18_1_V_s_reg_19504.read();
    } else {
        weight_buf_18_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12))) {
        weight_buf_18_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_2_V_address0 = weight_buf_18_2_V_s_reg_19664.read();
    } else {
        weight_buf_18_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12))) {
        weight_buf_18_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_3_V_address0 = weight_buf_18_3_V_s_reg_19824.read();
    } else {
        weight_buf_18_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12))) {
        weight_buf_18_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_4_V_address0 = weight_buf_18_4_V_s_reg_19984.read();
    } else {
        weight_buf_18_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12))) {
        weight_buf_18_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_5_V_address0 = weight_buf_18_5_V_s_reg_20144.read();
    } else {
        weight_buf_18_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12))) {
        weight_buf_18_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_6_V_address0 = weight_buf_18_6_V_s_reg_20304.read();
    } else {
        weight_buf_18_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12))) {
        weight_buf_18_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_18_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_18_7_V_address0 = weight_buf_18_7_V_s_reg_20464.read();
    } else {
        weight_buf_18_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_18_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12))) {
        weight_buf_18_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_18_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_0_V_address0 = weight_buf_19_0_V_s_reg_19349.read();
    } else {
        weight_buf_19_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_19_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_19_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13))) {
        weight_buf_19_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_1_V_address0 = weight_buf_19_1_V_s_reg_19509.read();
    } else {
        weight_buf_19_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13))) {
        weight_buf_19_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_2_V_address0 = weight_buf_19_2_V_s_reg_19669.read();
    } else {
        weight_buf_19_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13))) {
        weight_buf_19_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_3_V_address0 = weight_buf_19_3_V_s_reg_19829.read();
    } else {
        weight_buf_19_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13))) {
        weight_buf_19_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_4_V_address0 = weight_buf_19_4_V_s_reg_19989.read();
    } else {
        weight_buf_19_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13))) {
        weight_buf_19_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_5_V_address0 = weight_buf_19_5_V_s_reg_20149.read();
    } else {
        weight_buf_19_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13))) {
        weight_buf_19_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_6_V_address0 = weight_buf_19_6_V_s_reg_20309.read();
    } else {
        weight_buf_19_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13))) {
        weight_buf_19_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_19_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_19_7_V_address0 = weight_buf_19_7_V_s_reg_20469.read();
    } else {
        weight_buf_19_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_19_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13))) {
        weight_buf_19_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_19_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_0_V_address0 = weight_buf_1_0_V_a_reg_19259.read();
    } else {
        weight_buf_1_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_1_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_1_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1))) {
        weight_buf_1_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_1_V_address0 = weight_buf_1_1_V_a_reg_19419.read();
    } else {
        weight_buf_1_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1))) {
        weight_buf_1_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_2_V_address0 = weight_buf_1_2_V_a_reg_19579.read();
    } else {
        weight_buf_1_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1))) {
        weight_buf_1_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_3_V_address0 = weight_buf_1_3_V_a_reg_19739.read();
    } else {
        weight_buf_1_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1))) {
        weight_buf_1_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_4_V_address0 = weight_buf_1_4_V_a_reg_19899.read();
    } else {
        weight_buf_1_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1))) {
        weight_buf_1_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_5_V_address0 = weight_buf_1_5_V_a_reg_20059.read();
    } else {
        weight_buf_1_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1))) {
        weight_buf_1_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_6_V_address0 = weight_buf_1_6_V_a_reg_20219.read();
    } else {
        weight_buf_1_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1))) {
        weight_buf_1_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_1_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_1_7_V_address0 = weight_buf_1_7_V_a_reg_20379.read();
    } else {
        weight_buf_1_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_1_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1))) {
        weight_buf_1_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_1_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_0_V_address0 = weight_buf_20_0_V_s_reg_19354.read();
    } else {
        weight_buf_20_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_20_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_20_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14))) {
        weight_buf_20_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_1_V_address0 = weight_buf_20_1_V_s_reg_19514.read();
    } else {
        weight_buf_20_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14))) {
        weight_buf_20_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_2_V_address0 = weight_buf_20_2_V_s_reg_19674.read();
    } else {
        weight_buf_20_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14))) {
        weight_buf_20_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_3_V_address0 = weight_buf_20_3_V_s_reg_19834.read();
    } else {
        weight_buf_20_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14))) {
        weight_buf_20_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_4_V_address0 = weight_buf_20_4_V_s_reg_19994.read();
    } else {
        weight_buf_20_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14))) {
        weight_buf_20_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_5_V_address0 = weight_buf_20_5_V_s_reg_20154.read();
    } else {
        weight_buf_20_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14))) {
        weight_buf_20_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_6_V_address0 = weight_buf_20_6_V_s_reg_20314.read();
    } else {
        weight_buf_20_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14))) {
        weight_buf_20_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_20_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_20_7_V_address0 = weight_buf_20_7_V_s_reg_20474.read();
    } else {
        weight_buf_20_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_20_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14))) {
        weight_buf_20_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_20_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_0_V_address0 = weight_buf_21_0_V_s_reg_19359.read();
    } else {
        weight_buf_21_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_21_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_21_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15))) {
        weight_buf_21_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_1_V_address0 = weight_buf_21_1_V_s_reg_19519.read();
    } else {
        weight_buf_21_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15))) {
        weight_buf_21_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_2_V_address0 = weight_buf_21_2_V_s_reg_19679.read();
    } else {
        weight_buf_21_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15))) {
        weight_buf_21_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_3_V_address0 = weight_buf_21_3_V_s_reg_19839.read();
    } else {
        weight_buf_21_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15))) {
        weight_buf_21_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_4_V_address0 = weight_buf_21_4_V_s_reg_19999.read();
    } else {
        weight_buf_21_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15))) {
        weight_buf_21_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_5_V_address0 = weight_buf_21_5_V_s_reg_20159.read();
    } else {
        weight_buf_21_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15))) {
        weight_buf_21_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_6_V_address0 = weight_buf_21_6_V_s_reg_20319.read();
    } else {
        weight_buf_21_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15))) {
        weight_buf_21_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_21_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_21_7_V_address0 = weight_buf_21_7_V_s_reg_20479.read();
    } else {
        weight_buf_21_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_21_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15))) {
        weight_buf_21_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_21_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_0_V_address0 = weight_buf_22_0_V_s_reg_19364.read();
    } else {
        weight_buf_22_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_22_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_22_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16))) {
        weight_buf_22_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_1_V_address0 = weight_buf_22_1_V_s_reg_19524.read();
    } else {
        weight_buf_22_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16))) {
        weight_buf_22_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_2_V_address0 = weight_buf_22_2_V_s_reg_19684.read();
    } else {
        weight_buf_22_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16))) {
        weight_buf_22_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_3_V_address0 = weight_buf_22_3_V_s_reg_19844.read();
    } else {
        weight_buf_22_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16))) {
        weight_buf_22_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_4_V_address0 = weight_buf_22_4_V_s_reg_20004.read();
    } else {
        weight_buf_22_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16))) {
        weight_buf_22_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_5_V_address0 = weight_buf_22_5_V_s_reg_20164.read();
    } else {
        weight_buf_22_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16))) {
        weight_buf_22_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_6_V_address0 = weight_buf_22_6_V_s_reg_20324.read();
    } else {
        weight_buf_22_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16))) {
        weight_buf_22_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_22_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_22_7_V_address0 = weight_buf_22_7_V_s_reg_20484.read();
    } else {
        weight_buf_22_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_22_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16))) {
        weight_buf_22_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_22_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_0_V_address0 = weight_buf_23_0_V_s_reg_19369.read();
    } else {
        weight_buf_23_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_23_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_23_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17))) {
        weight_buf_23_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_1_V_address0 = weight_buf_23_1_V_s_reg_19529.read();
    } else {
        weight_buf_23_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17))) {
        weight_buf_23_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_2_V_address0 = weight_buf_23_2_V_s_reg_19689.read();
    } else {
        weight_buf_23_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17))) {
        weight_buf_23_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_3_V_address0 = weight_buf_23_3_V_s_reg_19849.read();
    } else {
        weight_buf_23_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17))) {
        weight_buf_23_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_4_V_address0 = weight_buf_23_4_V_s_reg_20009.read();
    } else {
        weight_buf_23_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17))) {
        weight_buf_23_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_5_V_address0 = weight_buf_23_5_V_s_reg_20169.read();
    } else {
        weight_buf_23_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17))) {
        weight_buf_23_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_6_V_address0 = weight_buf_23_6_V_s_reg_20329.read();
    } else {
        weight_buf_23_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17))) {
        weight_buf_23_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_23_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_23_7_V_address0 = weight_buf_23_7_V_s_reg_20489.read();
    } else {
        weight_buf_23_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_23_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17))) {
        weight_buf_23_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_23_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_0_V_address0 = weight_buf_24_0_V_s_reg_19374.read();
    } else {
        weight_buf_24_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_24_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_24_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18))) {
        weight_buf_24_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_1_V_address0 = weight_buf_24_1_V_s_reg_19534.read();
    } else {
        weight_buf_24_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18))) {
        weight_buf_24_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_2_V_address0 = weight_buf_24_2_V_s_reg_19694.read();
    } else {
        weight_buf_24_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18))) {
        weight_buf_24_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_3_V_address0 = weight_buf_24_3_V_s_reg_19854.read();
    } else {
        weight_buf_24_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18))) {
        weight_buf_24_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_4_V_address0 = weight_buf_24_4_V_s_reg_20014.read();
    } else {
        weight_buf_24_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18))) {
        weight_buf_24_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_5_V_address0 = weight_buf_24_5_V_s_reg_20174.read();
    } else {
        weight_buf_24_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18))) {
        weight_buf_24_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_6_V_address0 = weight_buf_24_6_V_s_reg_20334.read();
    } else {
        weight_buf_24_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18))) {
        weight_buf_24_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_24_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_24_7_V_address0 = weight_buf_24_7_V_s_reg_20494.read();
    } else {
        weight_buf_24_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_24_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18))) {
        weight_buf_24_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_24_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_0_V_address0 = weight_buf_25_0_V_s_reg_19379.read();
    } else {
        weight_buf_25_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_25_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_25_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19))) {
        weight_buf_25_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_1_V_address0 = weight_buf_25_1_V_s_reg_19539.read();
    } else {
        weight_buf_25_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19))) {
        weight_buf_25_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_2_V_address0 = weight_buf_25_2_V_s_reg_19699.read();
    } else {
        weight_buf_25_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19))) {
        weight_buf_25_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_3_V_address0 = weight_buf_25_3_V_s_reg_19859.read();
    } else {
        weight_buf_25_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19))) {
        weight_buf_25_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_4_V_address0 = weight_buf_25_4_V_s_reg_20019.read();
    } else {
        weight_buf_25_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19))) {
        weight_buf_25_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_5_V_address0 = weight_buf_25_5_V_s_reg_20179.read();
    } else {
        weight_buf_25_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19))) {
        weight_buf_25_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_6_V_address0 = weight_buf_25_6_V_s_reg_20339.read();
    } else {
        weight_buf_25_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19))) {
        weight_buf_25_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_25_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_25_7_V_address0 = weight_buf_25_7_V_s_reg_20499.read();
    } else {
        weight_buf_25_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_25_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19))) {
        weight_buf_25_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_25_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_0_V_address0 = weight_buf_26_0_V_s_reg_19384.read();
    } else {
        weight_buf_26_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_26_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_26_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A))) {
        weight_buf_26_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_1_V_address0 = weight_buf_26_1_V_s_reg_19544.read();
    } else {
        weight_buf_26_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A))) {
        weight_buf_26_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_2_V_address0 = weight_buf_26_2_V_s_reg_19704.read();
    } else {
        weight_buf_26_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A))) {
        weight_buf_26_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_3_V_address0 = weight_buf_26_3_V_s_reg_19864.read();
    } else {
        weight_buf_26_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A))) {
        weight_buf_26_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_4_V_address0 = weight_buf_26_4_V_s_reg_20024.read();
    } else {
        weight_buf_26_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A))) {
        weight_buf_26_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_5_V_address0 = weight_buf_26_5_V_s_reg_20184.read();
    } else {
        weight_buf_26_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A))) {
        weight_buf_26_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_6_V_address0 = weight_buf_26_6_V_s_reg_20344.read();
    } else {
        weight_buf_26_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A))) {
        weight_buf_26_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_26_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_26_7_V_address0 = weight_buf_26_7_V_s_reg_20504.read();
    } else {
        weight_buf_26_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_26_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A))) {
        weight_buf_26_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_26_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_0_V_address0 = weight_buf_27_0_V_s_reg_19389.read();
    } else {
        weight_buf_27_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_27_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_27_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B))) {
        weight_buf_27_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_1_V_address0 = weight_buf_27_1_V_s_reg_19549.read();
    } else {
        weight_buf_27_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B))) {
        weight_buf_27_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_2_V_address0 = weight_buf_27_2_V_s_reg_19709.read();
    } else {
        weight_buf_27_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B))) {
        weight_buf_27_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_3_V_address0 = weight_buf_27_3_V_s_reg_19869.read();
    } else {
        weight_buf_27_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B))) {
        weight_buf_27_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_4_V_address0 = weight_buf_27_4_V_s_reg_20029.read();
    } else {
        weight_buf_27_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B))) {
        weight_buf_27_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_5_V_address0 = weight_buf_27_5_V_s_reg_20189.read();
    } else {
        weight_buf_27_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B))) {
        weight_buf_27_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_6_V_address0 = weight_buf_27_6_V_s_reg_20349.read();
    } else {
        weight_buf_27_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B))) {
        weight_buf_27_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_27_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_27_7_V_address0 = weight_buf_27_7_V_s_reg_20509.read();
    } else {
        weight_buf_27_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_27_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B))) {
        weight_buf_27_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_27_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_0_V_address0 = weight_buf_28_0_V_s_reg_19394.read();
    } else {
        weight_buf_28_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_28_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_28_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C))) {
        weight_buf_28_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_1_V_address0 = weight_buf_28_1_V_s_reg_19554.read();
    } else {
        weight_buf_28_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C))) {
        weight_buf_28_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_2_V_address0 = weight_buf_28_2_V_s_reg_19714.read();
    } else {
        weight_buf_28_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C))) {
        weight_buf_28_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_3_V_address0 = weight_buf_28_3_V_s_reg_19874.read();
    } else {
        weight_buf_28_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C))) {
        weight_buf_28_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_4_V_address0 = weight_buf_28_4_V_s_reg_20034.read();
    } else {
        weight_buf_28_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C))) {
        weight_buf_28_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_5_V_address0 = weight_buf_28_5_V_s_reg_20194.read();
    } else {
        weight_buf_28_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C))) {
        weight_buf_28_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_6_V_address0 = weight_buf_28_6_V_s_reg_20354.read();
    } else {
        weight_buf_28_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C))) {
        weight_buf_28_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_28_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_28_7_V_address0 = weight_buf_28_7_V_s_reg_20514.read();
    } else {
        weight_buf_28_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_28_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C))) {
        weight_buf_28_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_28_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_0_V_address0 = weight_buf_29_0_V_s_reg_19399.read();
    } else {
        weight_buf_29_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_29_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_29_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D))) {
        weight_buf_29_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_1_V_address0 = weight_buf_29_1_V_s_reg_19559.read();
    } else {
        weight_buf_29_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D))) {
        weight_buf_29_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_2_V_address0 = weight_buf_29_2_V_s_reg_19719.read();
    } else {
        weight_buf_29_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D))) {
        weight_buf_29_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_3_V_address0 = weight_buf_29_3_V_s_reg_19879.read();
    } else {
        weight_buf_29_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D))) {
        weight_buf_29_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_4_V_address0 = weight_buf_29_4_V_s_reg_20039.read();
    } else {
        weight_buf_29_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D))) {
        weight_buf_29_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_5_V_address0 = weight_buf_29_5_V_s_reg_20199.read();
    } else {
        weight_buf_29_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D))) {
        weight_buf_29_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_6_V_address0 = weight_buf_29_6_V_s_reg_20359.read();
    } else {
        weight_buf_29_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D))) {
        weight_buf_29_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_29_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_29_7_V_address0 = weight_buf_29_7_V_s_reg_20519.read();
    } else {
        weight_buf_29_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_29_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D))) {
        weight_buf_29_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_29_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_0_V_address0 = weight_buf_2_0_V_a_reg_19264.read();
    } else {
        weight_buf_2_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_2_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_2_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2))) {
        weight_buf_2_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_1_V_address0 = weight_buf_2_1_V_a_reg_19424.read();
    } else {
        weight_buf_2_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2))) {
        weight_buf_2_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_2_V_address0 = weight_buf_2_2_V_a_reg_19584.read();
    } else {
        weight_buf_2_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2))) {
        weight_buf_2_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_3_V_address0 = weight_buf_2_3_V_a_reg_19744.read();
    } else {
        weight_buf_2_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2))) {
        weight_buf_2_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_4_V_address0 = weight_buf_2_4_V_a_reg_19904.read();
    } else {
        weight_buf_2_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2))) {
        weight_buf_2_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_5_V_address0 = weight_buf_2_5_V_a_reg_20064.read();
    } else {
        weight_buf_2_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2))) {
        weight_buf_2_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_6_V_address0 = weight_buf_2_6_V_a_reg_20224.read();
    } else {
        weight_buf_2_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2))) {
        weight_buf_2_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_2_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_2_7_V_address0 = weight_buf_2_7_V_a_reg_20384.read();
    } else {
        weight_buf_2_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_2_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2))) {
        weight_buf_2_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_2_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_0_V_address0 = weight_buf_30_0_V_s_reg_19404.read();
    } else {
        weight_buf_30_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_30_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_30_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_30_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_1_V_address0 = weight_buf_30_1_V_s_reg_19564.read();
    } else {
        weight_buf_30_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_30_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_2_V_address0 = weight_buf_30_2_V_s_reg_19724.read();
    } else {
        weight_buf_30_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_30_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_3_V_address0 = weight_buf_30_3_V_s_reg_19884.read();
    } else {
        weight_buf_30_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_30_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_4_V_address0 = weight_buf_30_4_V_s_reg_20044.read();
    } else {
        weight_buf_30_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_30_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_5_V_address0 = weight_buf_30_5_V_s_reg_20204.read();
    } else {
        weight_buf_30_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_30_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_6_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_6_V_address0 = weight_buf_30_6_V_s_reg_20364.read();
    } else {
        weight_buf_30_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_30_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_30_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_7_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_30_7_V_address0 = weight_buf_30_7_V_s_reg_20524.read();
    } else {
        weight_buf_30_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_30_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_30_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_30_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_0_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_0_V_address0 = weight_buf_31_0_V_s_reg_19409.read();
    } else {
        weight_buf_31_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_31_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_31_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_31_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_1_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_1_V_address0 = weight_buf_31_1_V_s_reg_19569.read();
    } else {
        weight_buf_31_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_31_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_2_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_2_V_address0 = weight_buf_31_2_V_s_reg_19729.read();
    } else {
        weight_buf_31_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_31_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_3_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_3_V_address0 = weight_buf_31_3_V_s_reg_19889.read();
    } else {
        weight_buf_31_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_31_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_4_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_4_V_address0 = weight_buf_31_4_V_s_reg_20049.read();
    } else {
        weight_buf_31_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_31_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_5_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_5_V_address0 = weight_buf_31_5_V_s_reg_20209.read();
    } else {
        weight_buf_31_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_31_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_6_V_address0 = weight_buf_31_6_V_s_reg_20369.read();
    } else {
        weight_buf_31_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
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
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_31_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_31_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_7_V_address0 =  (sc_lv<4>) (tmp_41_fu_12804_p1.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_31_7_V_address0 = weight_buf_31_7_V_s_reg_20529.read();
    } else {
        weight_buf_31_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_31_7_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp3_stage0.read()) && 
          esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter1.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_0) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_2) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_4) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_5) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_6) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_7) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_8) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_9) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_E) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_F) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_10) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_11) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_12) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_13) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_14) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_15) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_16) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_17) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_18) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_19) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1A) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1B) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1C) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1D) && 
         !esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_1E))) {
        weight_buf_31_7_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_31_7_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_0_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_0_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_0_V_address0 = weight_buf_3_0_V_a_reg_19269.read();
    } else {
        weight_buf_3_0_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_0_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
        weight_buf_3_0_V_ce0 = ap_const_logic_1;
    } else {
        weight_buf_3_0_V_ce0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_0_V_we0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
         esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
         esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0) && 
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3))) {
        weight_buf_3_0_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_0_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_1_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_1_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_1_V_address0 = weight_buf_3_1_V_a_reg_19429.read();
    } else {
        weight_buf_3_1_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_1_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3))) {
        weight_buf_3_1_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_1_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_2_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_2_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_2_V_address0 = weight_buf_3_2_V_a_reg_19589.read();
    } else {
        weight_buf_3_2_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_2_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3))) {
        weight_buf_3_2_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_2_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_3_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_3_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_3_V_address0 = weight_buf_3_3_V_a_reg_19749.read();
    } else {
        weight_buf_3_3_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_3_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3))) {
        weight_buf_3_3_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_3_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_4_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_4_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_4_V_address0 = weight_buf_3_4_V_a_reg_19909.read();
    } else {
        weight_buf_3_4_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_4_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3))) {
        weight_buf_3_4_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_4_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_5_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_5_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_5_V_address0 = weight_buf_3_5_V_a_reg_20069.read();
    } else {
        weight_buf_3_5_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_5_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read())) || 
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3))) {
        weight_buf_3_5_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_5_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_6_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_6_V_address0 =  (sc_lv<4>) (ap_reg_pp3_iter3_tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_6_V_address0 = weight_buf_3_6_V_a_reg_20229.read();
    } else {
        weight_buf_3_6_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

void mmult_hw::thread_weight_buf_3_6_V_ce0() {
    if (((esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00011001.read(), ap_const_boolean_0) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter4.read())) || 
         (esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
          esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
          esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00011001.read(), ap_const_boolean_0)))) {
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
         esl_seteq<1,6,6>(arrayNo_cast_cast_reg_20603.read(), ap_const_lv6_3))) {
        weight_buf_3_6_V_we0 = ap_const_logic_1;
    } else {
        weight_buf_3_6_V_we0 = ap_const_logic_0;
    }
}

void mmult_hw::thread_weight_buf_3_7_V_address0() {
    if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp3_iter2.read()) && 
         esl_seteq<1,1,1>(ap_block_pp3_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_7_V_address0 =  (sc_lv<4>) (tmp_41_reg_22872.read());
    } else if ((esl_seteq<1,1,1>(ap_const_logic_1, ap_CS_fsm_pp1_stage0.read()) && 
                esl_seteq<1,1,1>(ap_const_logic_1, ap_enable_reg_pp1_iter1.read()) && 
                esl_seteq<1,1,1>(ap_block_pp1_stage0_flag00000000.read(), ap_const_boolean_0))) {
        weight_buf_3_7_V_address0 = weight_buf_3_7_V_a_reg_20389.read();
    } else {
        weight_buf_3_7_V_address0 =  (sc_lv<4>) ("XXXX");
    }
}

}

