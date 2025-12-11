# This script segment is generated automatically by AutoPilot

set id 215
set name model_1_hls4ml_prj_mux_83_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 3
set din8_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 216
set name model_1_hls4ml_prj_mux_1287_16_1_1
set corename simcore_mux
set op mux
set stage_num 1
set max_latency -1
set registered_input 1
set din0_width 16
set din0_signed 0
set din1_width 16
set din1_signed 0
set din2_width 16
set din2_signed 0
set din3_width 16
set din3_signed 0
set din4_width 16
set din4_signed 0
set din5_width 16
set din5_signed 0
set din6_width 16
set din6_signed 0
set din7_width 16
set din7_signed 0
set din8_width 16
set din8_signed 0
set din9_width 16
set din9_signed 0
set din10_width 16
set din10_signed 0
set din11_width 16
set din11_signed 0
set din12_width 16
set din12_signed 0
set din13_width 16
set din13_signed 0
set din14_width 16
set din14_signed 0
set din15_width 16
set din15_signed 0
set din16_width 16
set din16_signed 0
set din17_width 16
set din17_signed 0
set din18_width 16
set din18_signed 0
set din19_width 16
set din19_signed 0
set din20_width 16
set din20_signed 0
set din21_width 16
set din21_signed 0
set din22_width 16
set din22_signed 0
set din23_width 16
set din23_signed 0
set din24_width 16
set din24_signed 0
set din25_width 16
set din25_signed 0
set din26_width 16
set din26_signed 0
set din27_width 16
set din27_signed 0
set din28_width 16
set din28_signed 0
set din29_width 16
set din29_signed 0
set din30_width 16
set din30_signed 0
set din31_width 16
set din31_signed 0
set din32_width 16
set din32_signed 0
set din33_width 16
set din33_signed 0
set din34_width 16
set din34_signed 0
set din35_width 16
set din35_signed 0
set din36_width 16
set din36_signed 0
set din37_width 16
set din37_signed 0
set din38_width 16
set din38_signed 0
set din39_width 16
set din39_signed 0
set din40_width 16
set din40_signed 0
set din41_width 16
set din41_signed 0
set din42_width 16
set din42_signed 0
set din43_width 16
set din43_signed 0
set din44_width 16
set din44_signed 0
set din45_width 16
set din45_signed 0
set din46_width 16
set din46_signed 0
set din47_width 16
set din47_signed 0
set din48_width 16
set din48_signed 0
set din49_width 16
set din49_signed 0
set din50_width 16
set din50_signed 0
set din51_width 16
set din51_signed 0
set din52_width 16
set din52_signed 0
set din53_width 16
set din53_signed 0
set din54_width 16
set din54_signed 0
set din55_width 16
set din55_signed 0
set din56_width 16
set din56_signed 0
set din57_width 16
set din57_signed 0
set din58_width 16
set din58_signed 0
set din59_width 16
set din59_signed 0
set din60_width 16
set din60_signed 0
set din61_width 16
set din61_signed 0
set din62_width 16
set din62_signed 0
set din63_width 16
set din63_signed 0
set din64_width 16
set din64_signed 0
set din65_width 16
set din65_signed 0
set din66_width 16
set din66_signed 0
set din67_width 16
set din67_signed 0
set din68_width 16
set din68_signed 0
set din69_width 16
set din69_signed 0
set din70_width 16
set din70_signed 0
set din71_width 16
set din71_signed 0
set din72_width 16
set din72_signed 0
set din73_width 16
set din73_signed 0
set din74_width 16
set din74_signed 0
set din75_width 16
set din75_signed 0
set din76_width 16
set din76_signed 0
set din77_width 16
set din77_signed 0
set din78_width 16
set din78_signed 0
set din79_width 16
set din79_signed 0
set din80_width 16
set din80_signed 0
set din81_width 16
set din81_signed 0
set din82_width 16
set din82_signed 0
set din83_width 16
set din83_signed 0
set din84_width 16
set din84_signed 0
set din85_width 16
set din85_signed 0
set din86_width 16
set din86_signed 0
set din87_width 16
set din87_signed 0
set din88_width 16
set din88_signed 0
set din89_width 16
set din89_signed 0
set din90_width 16
set din90_signed 0
set din91_width 16
set din91_signed 0
set din92_width 16
set din92_signed 0
set din93_width 16
set din93_signed 0
set din94_width 16
set din94_signed 0
set din95_width 16
set din95_signed 0
set din96_width 16
set din96_signed 0
set din97_width 16
set din97_signed 0
set din98_width 16
set din98_signed 0
set din99_width 16
set din99_signed 0
set din100_width 16
set din100_signed 0
set din101_width 16
set din101_signed 0
set din102_width 16
set din102_signed 0
set din103_width 16
set din103_signed 0
set din104_width 16
set din104_signed 0
set din105_width 16
set din105_signed 0
set din106_width 16
set din106_signed 0
set din107_width 16
set din107_signed 0
set din108_width 16
set din108_signed 0
set din109_width 16
set din109_signed 0
set din110_width 16
set din110_signed 0
set din111_width 16
set din111_signed 0
set din112_width 16
set din112_signed 0
set din113_width 16
set din113_signed 0
set din114_width 16
set din114_signed 0
set din115_width 16
set din115_signed 0
set din116_width 16
set din116_signed 0
set din117_width 16
set din117_signed 0
set din118_width 16
set din118_signed 0
set din119_width 16
set din119_signed 0
set din120_width 16
set din120_signed 0
set din121_width 16
set din121_signed 0
set din122_width 16
set din122_signed 0
set din123_width 16
set din123_signed 0
set din124_width 16
set din124_signed 0
set din125_width 16
set din125_signed 0
set din126_width 16
set din126_signed 0
set din127_width 16
set din127_signed 0
set din128_width 7
set din128_signed 0
set dout_width 16
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mux] == "ap_gen_simcore_mux"} {
eval "ap_gen_simcore_mux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    din33_width ${din33_width} \
    din33_signed ${din33_signed} \
    din34_width ${din34_width} \
    din34_signed ${din34_signed} \
    din35_width ${din35_width} \
    din35_signed ${din35_signed} \
    din36_width ${din36_width} \
    din36_signed ${din36_signed} \
    din37_width ${din37_width} \
    din37_signed ${din37_signed} \
    din38_width ${din38_width} \
    din38_signed ${din38_signed} \
    din39_width ${din39_width} \
    din39_signed ${din39_signed} \
    din40_width ${din40_width} \
    din40_signed ${din40_signed} \
    din41_width ${din41_width} \
    din41_signed ${din41_signed} \
    din42_width ${din42_width} \
    din42_signed ${din42_signed} \
    din43_width ${din43_width} \
    din43_signed ${din43_signed} \
    din44_width ${din44_width} \
    din44_signed ${din44_signed} \
    din45_width ${din45_width} \
    din45_signed ${din45_signed} \
    din46_width ${din46_width} \
    din46_signed ${din46_signed} \
    din47_width ${din47_width} \
    din47_signed ${din47_signed} \
    din48_width ${din48_width} \
    din48_signed ${din48_signed} \
    din49_width ${din49_width} \
    din49_signed ${din49_signed} \
    din50_width ${din50_width} \
    din50_signed ${din50_signed} \
    din51_width ${din51_width} \
    din51_signed ${din51_signed} \
    din52_width ${din52_width} \
    din52_signed ${din52_signed} \
    din53_width ${din53_width} \
    din53_signed ${din53_signed} \
    din54_width ${din54_width} \
    din54_signed ${din54_signed} \
    din55_width ${din55_width} \
    din55_signed ${din55_signed} \
    din56_width ${din56_width} \
    din56_signed ${din56_signed} \
    din57_width ${din57_width} \
    din57_signed ${din57_signed} \
    din58_width ${din58_width} \
    din58_signed ${din58_signed} \
    din59_width ${din59_width} \
    din59_signed ${din59_signed} \
    din60_width ${din60_width} \
    din60_signed ${din60_signed} \
    din61_width ${din61_width} \
    din61_signed ${din61_signed} \
    din62_width ${din62_width} \
    din62_signed ${din62_signed} \
    din63_width ${din63_width} \
    din63_signed ${din63_signed} \
    din64_width ${din64_width} \
    din64_signed ${din64_signed} \
    din65_width ${din65_width} \
    din65_signed ${din65_signed} \
    din66_width ${din66_width} \
    din66_signed ${din66_signed} \
    din67_width ${din67_width} \
    din67_signed ${din67_signed} \
    din68_width ${din68_width} \
    din68_signed ${din68_signed} \
    din69_width ${din69_width} \
    din69_signed ${din69_signed} \
    din70_width ${din70_width} \
    din70_signed ${din70_signed} \
    din71_width ${din71_width} \
    din71_signed ${din71_signed} \
    din72_width ${din72_width} \
    din72_signed ${din72_signed} \
    din73_width ${din73_width} \
    din73_signed ${din73_signed} \
    din74_width ${din74_width} \
    din74_signed ${din74_signed} \
    din75_width ${din75_width} \
    din75_signed ${din75_signed} \
    din76_width ${din76_width} \
    din76_signed ${din76_signed} \
    din77_width ${din77_width} \
    din77_signed ${din77_signed} \
    din78_width ${din78_width} \
    din78_signed ${din78_signed} \
    din79_width ${din79_width} \
    din79_signed ${din79_signed} \
    din80_width ${din80_width} \
    din80_signed ${din80_signed} \
    din81_width ${din81_width} \
    din81_signed ${din81_signed} \
    din82_width ${din82_width} \
    din82_signed ${din82_signed} \
    din83_width ${din83_width} \
    din83_signed ${din83_signed} \
    din84_width ${din84_width} \
    din84_signed ${din84_signed} \
    din85_width ${din85_width} \
    din85_signed ${din85_signed} \
    din86_width ${din86_width} \
    din86_signed ${din86_signed} \
    din87_width ${din87_width} \
    din87_signed ${din87_signed} \
    din88_width ${din88_width} \
    din88_signed ${din88_signed} \
    din89_width ${din89_width} \
    din89_signed ${din89_signed} \
    din90_width ${din90_width} \
    din90_signed ${din90_signed} \
    din91_width ${din91_width} \
    din91_signed ${din91_signed} \
    din92_width ${din92_width} \
    din92_signed ${din92_signed} \
    din93_width ${din93_width} \
    din93_signed ${din93_signed} \
    din94_width ${din94_width} \
    din94_signed ${din94_signed} \
    din95_width ${din95_width} \
    din95_signed ${din95_signed} \
    din96_width ${din96_width} \
    din96_signed ${din96_signed} \
    din97_width ${din97_width} \
    din97_signed ${din97_signed} \
    din98_width ${din98_width} \
    din98_signed ${din98_signed} \
    din99_width ${din99_width} \
    din99_signed ${din99_signed} \
    din100_width ${din100_width} \
    din100_signed ${din100_signed} \
    din101_width ${din101_width} \
    din101_signed ${din101_signed} \
    din102_width ${din102_width} \
    din102_signed ${din102_signed} \
    din103_width ${din103_width} \
    din103_signed ${din103_signed} \
    din104_width ${din104_width} \
    din104_signed ${din104_signed} \
    din105_width ${din105_width} \
    din105_signed ${din105_signed} \
    din106_width ${din106_width} \
    din106_signed ${din106_signed} \
    din107_width ${din107_width} \
    din107_signed ${din107_signed} \
    din108_width ${din108_width} \
    din108_signed ${din108_signed} \
    din109_width ${din109_width} \
    din109_signed ${din109_signed} \
    din110_width ${din110_width} \
    din110_signed ${din110_signed} \
    din111_width ${din111_width} \
    din111_signed ${din111_signed} \
    din112_width ${din112_width} \
    din112_signed ${din112_signed} \
    din113_width ${din113_width} \
    din113_signed ${din113_signed} \
    din114_width ${din114_width} \
    din114_signed ${din114_signed} \
    din115_width ${din115_width} \
    din115_signed ${din115_signed} \
    din116_width ${din116_width} \
    din116_signed ${din116_signed} \
    din117_width ${din117_width} \
    din117_signed ${din117_signed} \
    din118_width ${din118_width} \
    din118_signed ${din118_signed} \
    din119_width ${din119_width} \
    din119_signed ${din119_signed} \
    din120_width ${din120_width} \
    din120_signed ${din120_signed} \
    din121_width ${din121_width} \
    din121_signed ${din121_signed} \
    din122_width ${din122_width} \
    din122_signed ${din122_signed} \
    din123_width ${din123_width} \
    din123_signed ${din123_signed} \
    din124_width ${din124_width} \
    din124_signed ${din124_signed} \
    din125_width ${din125_width} \
    din125_signed ${din125_signed} \
    din126_width ${din126_width} \
    din126_signed ${din126_signed} \
    din127_width ${din127_width} \
    din127_signed ${din127_signed} \
    din128_width ${din128_width} \
    din128_signed ${din128_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mux, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mux
set corename MuxnS
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_pipemux] == "::AESL_LIB_VIRTEX::xil_gen_pipemux"} {
eval "::AESL_LIB_VIRTEX::xil_gen_pipemux { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    din0_width ${din0_width} \
    din0_signed ${din0_signed} \
    din1_width ${din1_width} \
    din1_signed ${din1_signed} \
    din2_width ${din2_width} \
    din2_signed ${din2_signed} \
    din3_width ${din3_width} \
    din3_signed ${din3_signed} \
    din4_width ${din4_width} \
    din4_signed ${din4_signed} \
    din5_width ${din5_width} \
    din5_signed ${din5_signed} \
    din6_width ${din6_width} \
    din6_signed ${din6_signed} \
    din7_width ${din7_width} \
    din7_signed ${din7_signed} \
    din8_width ${din8_width} \
    din8_signed ${din8_signed} \
    din9_width ${din9_width} \
    din9_signed ${din9_signed} \
    din10_width ${din10_width} \
    din10_signed ${din10_signed} \
    din11_width ${din11_width} \
    din11_signed ${din11_signed} \
    din12_width ${din12_width} \
    din12_signed ${din12_signed} \
    din13_width ${din13_width} \
    din13_signed ${din13_signed} \
    din14_width ${din14_width} \
    din14_signed ${din14_signed} \
    din15_width ${din15_width} \
    din15_signed ${din15_signed} \
    din16_width ${din16_width} \
    din16_signed ${din16_signed} \
    din17_width ${din17_width} \
    din17_signed ${din17_signed} \
    din18_width ${din18_width} \
    din18_signed ${din18_signed} \
    din19_width ${din19_width} \
    din19_signed ${din19_signed} \
    din20_width ${din20_width} \
    din20_signed ${din20_signed} \
    din21_width ${din21_width} \
    din21_signed ${din21_signed} \
    din22_width ${din22_width} \
    din22_signed ${din22_signed} \
    din23_width ${din23_width} \
    din23_signed ${din23_signed} \
    din24_width ${din24_width} \
    din24_signed ${din24_signed} \
    din25_width ${din25_width} \
    din25_signed ${din25_signed} \
    din26_width ${din26_width} \
    din26_signed ${din26_signed} \
    din27_width ${din27_width} \
    din27_signed ${din27_signed} \
    din28_width ${din28_width} \
    din28_signed ${din28_signed} \
    din29_width ${din29_width} \
    din29_signed ${din29_signed} \
    din30_width ${din30_width} \
    din30_signed ${din30_signed} \
    din31_width ${din31_width} \
    din31_signed ${din31_signed} \
    din32_width ${din32_width} \
    din32_signed ${din32_signed} \
    din33_width ${din33_width} \
    din33_signed ${din33_signed} \
    din34_width ${din34_width} \
    din34_signed ${din34_signed} \
    din35_width ${din35_width} \
    din35_signed ${din35_signed} \
    din36_width ${din36_width} \
    din36_signed ${din36_signed} \
    din37_width ${din37_width} \
    din37_signed ${din37_signed} \
    din38_width ${din38_width} \
    din38_signed ${din38_signed} \
    din39_width ${din39_width} \
    din39_signed ${din39_signed} \
    din40_width ${din40_width} \
    din40_signed ${din40_signed} \
    din41_width ${din41_width} \
    din41_signed ${din41_signed} \
    din42_width ${din42_width} \
    din42_signed ${din42_signed} \
    din43_width ${din43_width} \
    din43_signed ${din43_signed} \
    din44_width ${din44_width} \
    din44_signed ${din44_signed} \
    din45_width ${din45_width} \
    din45_signed ${din45_signed} \
    din46_width ${din46_width} \
    din46_signed ${din46_signed} \
    din47_width ${din47_width} \
    din47_signed ${din47_signed} \
    din48_width ${din48_width} \
    din48_signed ${din48_signed} \
    din49_width ${din49_width} \
    din49_signed ${din49_signed} \
    din50_width ${din50_width} \
    din50_signed ${din50_signed} \
    din51_width ${din51_width} \
    din51_signed ${din51_signed} \
    din52_width ${din52_width} \
    din52_signed ${din52_signed} \
    din53_width ${din53_width} \
    din53_signed ${din53_signed} \
    din54_width ${din54_width} \
    din54_signed ${din54_signed} \
    din55_width ${din55_width} \
    din55_signed ${din55_signed} \
    din56_width ${din56_width} \
    din56_signed ${din56_signed} \
    din57_width ${din57_width} \
    din57_signed ${din57_signed} \
    din58_width ${din58_width} \
    din58_signed ${din58_signed} \
    din59_width ${din59_width} \
    din59_signed ${din59_signed} \
    din60_width ${din60_width} \
    din60_signed ${din60_signed} \
    din61_width ${din61_width} \
    din61_signed ${din61_signed} \
    din62_width ${din62_width} \
    din62_signed ${din62_signed} \
    din63_width ${din63_width} \
    din63_signed ${din63_signed} \
    din64_width ${din64_width} \
    din64_signed ${din64_signed} \
    din65_width ${din65_width} \
    din65_signed ${din65_signed} \
    din66_width ${din66_width} \
    din66_signed ${din66_signed} \
    din67_width ${din67_width} \
    din67_signed ${din67_signed} \
    din68_width ${din68_width} \
    din68_signed ${din68_signed} \
    din69_width ${din69_width} \
    din69_signed ${din69_signed} \
    din70_width ${din70_width} \
    din70_signed ${din70_signed} \
    din71_width ${din71_width} \
    din71_signed ${din71_signed} \
    din72_width ${din72_width} \
    din72_signed ${din72_signed} \
    din73_width ${din73_width} \
    din73_signed ${din73_signed} \
    din74_width ${din74_width} \
    din74_signed ${din74_signed} \
    din75_width ${din75_width} \
    din75_signed ${din75_signed} \
    din76_width ${din76_width} \
    din76_signed ${din76_signed} \
    din77_width ${din77_width} \
    din77_signed ${din77_signed} \
    din78_width ${din78_width} \
    din78_signed ${din78_signed} \
    din79_width ${din79_width} \
    din79_signed ${din79_signed} \
    din80_width ${din80_width} \
    din80_signed ${din80_signed} \
    din81_width ${din81_width} \
    din81_signed ${din81_signed} \
    din82_width ${din82_width} \
    din82_signed ${din82_signed} \
    din83_width ${din83_width} \
    din83_signed ${din83_signed} \
    din84_width ${din84_width} \
    din84_signed ${din84_signed} \
    din85_width ${din85_width} \
    din85_signed ${din85_signed} \
    din86_width ${din86_width} \
    din86_signed ${din86_signed} \
    din87_width ${din87_width} \
    din87_signed ${din87_signed} \
    din88_width ${din88_width} \
    din88_signed ${din88_signed} \
    din89_width ${din89_width} \
    din89_signed ${din89_signed} \
    din90_width ${din90_width} \
    din90_signed ${din90_signed} \
    din91_width ${din91_width} \
    din91_signed ${din91_signed} \
    din92_width ${din92_width} \
    din92_signed ${din92_signed} \
    din93_width ${din93_width} \
    din93_signed ${din93_signed} \
    din94_width ${din94_width} \
    din94_signed ${din94_signed} \
    din95_width ${din95_width} \
    din95_signed ${din95_signed} \
    din96_width ${din96_width} \
    din96_signed ${din96_signed} \
    din97_width ${din97_width} \
    din97_signed ${din97_signed} \
    din98_width ${din98_width} \
    din98_signed ${din98_signed} \
    din99_width ${din99_width} \
    din99_signed ${din99_signed} \
    din100_width ${din100_width} \
    din100_signed ${din100_signed} \
    din101_width ${din101_width} \
    din101_signed ${din101_signed} \
    din102_width ${din102_width} \
    din102_signed ${din102_signed} \
    din103_width ${din103_width} \
    din103_signed ${din103_signed} \
    din104_width ${din104_width} \
    din104_signed ${din104_signed} \
    din105_width ${din105_width} \
    din105_signed ${din105_signed} \
    din106_width ${din106_width} \
    din106_signed ${din106_signed} \
    din107_width ${din107_width} \
    din107_signed ${din107_signed} \
    din108_width ${din108_width} \
    din108_signed ${din108_signed} \
    din109_width ${din109_width} \
    din109_signed ${din109_signed} \
    din110_width ${din110_width} \
    din110_signed ${din110_signed} \
    din111_width ${din111_width} \
    din111_signed ${din111_signed} \
    din112_width ${din112_width} \
    din112_signed ${din112_signed} \
    din113_width ${din113_width} \
    din113_signed ${din113_signed} \
    din114_width ${din114_width} \
    din114_signed ${din114_signed} \
    din115_width ${din115_width} \
    din115_signed ${din115_signed} \
    din116_width ${din116_width} \
    din116_signed ${din116_signed} \
    din117_width ${din117_width} \
    din117_signed ${din117_signed} \
    din118_width ${din118_width} \
    din118_signed ${din118_signed} \
    din119_width ${din119_width} \
    din119_signed ${din119_signed} \
    din120_width ${din120_width} \
    din120_signed ${din120_signed} \
    din121_width ${din121_width} \
    din121_signed ${din121_signed} \
    din122_width ${din122_width} \
    din122_signed ${din122_signed} \
    din123_width ${din123_width} \
    din123_signed ${din123_signed} \
    din124_width ${din124_width} \
    din124_signed ${din124_signed} \
    din125_width ${din125_width} \
    din125_signed ${din125_signed} \
    din126_width ${din126_width} \
    din126_signed ${din126_signed} \
    din127_width ${din127_width} \
    din127_signed ${din127_signed} \
    din128_width ${din128_width} \
    din128_signed ${din128_signed} \
    dout_width ${dout_width} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_pipemux, check your platform lib"
}
}


set id 235
set name model_1_hls4ml_prj_mul_mul_16s_16s_22_3_1
set corename simcore_mul
set op mul
set stage_num 3
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 16
set in0_signed 1
set in1_width 16
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 22
set exp i0*i1
set arg_lists {i0 {16 1 +} i1 {16 1 +} p {22 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


set id 254
set name model_1_hls4ml_prj_mul_mul_16s_9s_22_3_1
set corename simcore_mul
set op mul
set stage_num 3
set max_latency -1
set registered_input 1
set clk_width 1
set clk_signed 0
set reset_width 1
set reset_signed 0
set in0_width 16
set in0_signed 1
set in1_width 9
set in1_signed 1
set ce_width 1
set ce_signed 0
set out_width 22
set exp i0*i1
set arg_lists {i0 {16 1 +} i1 {9 1 +} p {22 1 +} acc {0} }
set TrueReset 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mul] == "ap_gen_simcore_mul"} {
eval "ap_gen_simcore_mul { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-100\] Cannot find ap_gen_simcore_mul, check your AutoPilot builtin lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
	::AP::rtl_comp_handler ${name}
}


set op mul
set corename DSP48
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_dsp48] == "::AESL_LIB_VIRTEX::xil_gen_dsp48"} {
eval "::AESL_LIB_VIRTEX::xil_gen_dsp48 { \
    id ${id} \
    name ${name} \
    corename ${corename} \
    op ${op} \
    reset_level 1 \
    sync_rst true \
    true_reset ${TrueReset} \
    stage_num ${stage_num} \
    max_latency ${max_latency} \
    registered_input ${registered_input} \
    clk_width ${clk_width} \
    clk_signed ${clk_signed} \
    reset_width ${reset_width} \
    reset_signed ${reset_signed} \
    in0_width ${in0_width} \
    in0_signed ${in0_signed} \
    in1_width ${in1_width} \
    in1_signed ${in1_signed} \
    ce_width ${ce_width} \
    ce_signed ${ce_signed} \
    out_width ${out_width} \
    exp ${exp} \
    arg_lists {${arg_lists}} \
}"
} else {
puts "@W \[IMPL-101\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_dsp48, check your platform lib"
}
}


# Memory (RAM/ROM)  definition:
set ID 259
set hasByteEnable 0
set MemName dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_outcud
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 3
set AddrRange 1000
set AddrWd 10
set TrueReset 0
set IsROM 1
set ROMData { "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "000" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "001" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "010" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "011" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" "100" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.257
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# Memory (RAM/ROM)  definition:
set ID 260
set hasByteEnable 0
set MemName dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config4_s_w4_V
set CoreName ap_simcore_mem
set PortList { 1 }
set DataWd 313
set AddrRange 1000
set AddrWd 10
set TrueReset 0
set IsROM 1
set ROMData { "0001100111111111110101100000000000010011111111111110101000000000001100101000000000101011111111111011110011111111110100011000000000011110000000000011100001111111111100011111111110111110011111111011101110000000001000101000000000100011011111111100001001111111111001101111111110111010000000000000010001111111111001011" "0001011111111111111110000000000000110010111111111101000111111111111001000111111111000111111111111100110001111111101110011111111111011000100000000001101111111111110101000000000000100111111111111110010001111111110011110111111110111111111111111111010100000000001000011111111111000010000000000011010000000000001011000" "0001110000000000001011000000000000100110011111111100000010000000000100101000000000101010111111111111101111111111111111110111111111110101011111111001011111111111110111011111111111001000000000000010100101111111111111101111111111001110000000000010010010000000010101010000000000001011111111111010001101111111110001111" "0000110010000000001100101111111111101101100000000110100000000000001000110111111110100010100000000010000100000000001010100000000000001111100000000101010011111111110111101111111111011101100000000011101100000000001100011000000001101011111111111100000101111111111010100111111110100110100000000011100011111111110101011" "1110000011111111101110111111111111011100111111111110011001111111100111111000000001011110011111111100010100000000010000000111111110100111111111111101101111111111111101010000000000001101000000000001000011111111110011100111111110111010000000000010010100000000010101001000000000011011011111111100000111111111111011111" "0011111101111111110110110111111111110010111111111110001000000000010011010111111111100001000000000010000111111111101110111000000000101001100000000000010101111111111001110000000000001100100000000001000001111111110010101000000000001010111111111100101001111111111101011111111111001100000000000000100011111111110111100" "0010000001111111101110100000000000010100100000000100100000000000000001001111111111000010000000000101110000000000000000110000000001100011100000000010100110000000000100101111111110111111100000000011000010000000001000000000000000110110111111111101000101111111110000110111111111101100100000000100011000000000000000100" "1100000011111111111000110000000000011100111111111011111101111111101111010000000000001011000000000001110100000000010100001111111111110111100000000011001000000000001000110000000000100011011111111100000100000000001001101000000000010000011111111100011111111111110111001111111111101110111111111100000010000000000100110" "1110110110000000000100111111111111011111011111111101111111111111110001101111111111111110111111111111111011111111111000111000000000101110111111111110110111111111110101011111111111001011011111111111010101111111111011011000000000111101111111111011110111111111110111000111111110111001111111111110000011111111110111100" "1011100110000000000010100111111110111110000000000001110001111111101000111111111111111010100000000001000110000000010000111111111110100010000000000000110001111111101101111111111111001101011111111011100000000000000111000111111111000100111111111110000110000000000101111000000000111001111111111110100000000000001110100" "0011101001111111110100010111111111111100100000000100010001111111111110111111111111001001100000000000101101111111110111011111111111100111100000000011111101111111111100101000000000010000011111111100100011111111110111000000000001101000111111111101110100000000001001111000000000011001111111111111110110000000001011011" "1001001000000000001111100111111111111010111111111100001101111111111101110000000000001010111111111011000010000000001111100111111110011011111111111110000110000000010000110111111111100010111111111110010011111111110100011111111110100111000000000011000000000000001101100000000000001000111111111011010110000000000100000" "1110001000000000010001111000000001000011111111111101110110000000000110110000000000101000000000000000110010000000010100100000000000110001111111111100100011111111110111111000000000101011000000000000010101111111110001111111111111101010100000000100011100000000000111001000000000001100111111111101100010000000001000100" "0011001111111111111001100111111111101110100000000100110011111111110011100111111111110110000000000100010101111111111001001111111111101011111111111110001010000000010000000111111111000001000000000011010110000000001100000000000000100011000000000010001000000000001011010000000001000101000000000001011110000000010000010" "1011100100000000000010001111111111001101111111111011100011111111100111100000000001011101111111111101111100000000010110101000000000100011011111111100000001111111110101100000000000000100011111111111001111111111111101100111111110100111100000000001100110000000001001111000000000101100011111111111001001111111110110101" "0011011110000000001011100000000000001000000000000011101010000000011000110111111110001000100000000000111111111111111011010000000000000111000000000101000110000000000111000111111111011010000000000010001100000000010000001000000001010101011111111011110001111111100100001111111110001111000000000010100100000000001001111" "0000001101111111111110000111111110111011011111111101111001111111111010001000000001010010100000000000000010000000010100100111111110101110111111111100100100000000001111001111111111010101111111111110110100000000001010110111111110001111100000000001100010000000011100111000000001111111011111111010111101111111110111111" "0111000010000000001110111000000001101101000000000001001011111111111101100111111110111110011111111111111000000000000010101000000000101010100000000100110110000000000101001000000000111110111111111101000101111111111000000000000000111000011111111111000011111111111101000111111111111010000000000010110110000000000000100" "0001110001111111110100100000000001000010100000000010011000000000001010010111111111111101111111111110010110000000001011010000000000000010011111111110101010000000000000011000000000110110100000000000001000000000000110101111111111100111000000000001001111111111110111110111111111011011011111111100111001111111101110101" "0000010011111111110110110111111111110111111111111110111100000000010011100111111111000000100000000011001111111111110001111000000000100110000000000100001100000000000100011000000000110111011111111110010110000000000111110000000000110000011111111111000111111111110001101111111111101000100000000100001101111111110010010" "0000101010000000000011110000000000001100111111111010110101111111110000101000000000000100011111111000011100000000010010011111111111011010100000000000000010000000001101111111111111110100111111111101001001111111110100100111111111000100111111111111101010000000010101010000000001001001111111111101000110000000000000101" "0000001110000000010000110111111111100110011111111110110011111111111100010000000000010110111111111100011100000000000111010000000000111111000000000001000110000000001101110111111111010001011111111100000010000000000001100000000000101101000000000000000001111111101110101111111111100111011111111111010111111111111010011" "0011110011111111110101011000000001101001000000000010110010000000001111101111111111001000000000000001100101111111100100000111111111111001100000000000101000000000001111110111111111011010011111111011100000000000001011011111111111110111111111111111001001111111100010010111111110001010000000000000100010000000010000001" "0011001111111111110100010000000000010101011111111110100110000000000101011000000001000010100000000011001000000000010001001000000001000010000000000011010000000000001111101111111111111110000000000100011010000000010000110000000000001011011111111110011011111111111110111000000000110011000000000001010010000000001101101" "0001100101111111111010101111111111001101111111111101100011111111110010010000000000011011111111111011111111111111110000000111111111000111111111111111010111111111111100001111111111101011100000000000111001111111110010000111111111101001000000000011110011111111110011100000000001000111100000000010001111111111110010101" "0100100011111111111011000111111111111101100000000001010011111111110111110111111111111000100000000010100100000000001010110111111111110100011111111100000101111111110011011000000000010110100000000010000110000000000101111111111111110010011111111011100100000000001111010000000000010011111111111101001110000000001000010" "0110011010000000010010000000000001111010000000000010011000000000010011001111111110110100100000000001101011111111111010111000000000101010100000000110100001111111110011110111111111010010100000000100001110000000001110100111111111101110000000000000010111111111110001011111111111111001100000000011001011111111111011110" "1101110000000000000010100111111111000011111111111111110100000000001011001000000001010110011111111101011100000000010000001111111111110100000000000010110001111111111110010000000000000001111111111100101010000000001000010000000000000110011111111100101000000000000101000000000000001110100000000000001101111111110111100" "0100010111111111101111010111111111100011011111111100010011111111110010001000000000000010100000000010101011111111111100111111111110111000100000000010010101111111110011011000000001000001100000000100011101111111111101100000000000100110111111111100101111111111111010000000000000110111111111111111001000000000000110001" "1100101100000000000101011000000000011010100000000001110110000000001000101111111111111111111111111111101111111111110011011000000000110101011111111111111101111111111111011111111111101011011111111111110101111111111001010000000000001110011111111100100011111111110100101111111111010001100000000001010010000000000011100" "0010111111111111111011001111111111001001100000000001110010000000000100010000000000100100000000000001110100000000001101011000000000100110111111111100010000000000000010101000000001000101111111111100101010000000000111001000000000000101011111111101100110000000010000100000000000011011111111111101101110000000000100010" "1110001111111111110010111111111111111101111111111101110001111111111100001000000000001100100000000001100110000000000011110111111111100101011111111100000011111111101101110000000000011011011111111110101101111111101111011000000000110111111111111100001101111111111010000111111111101001011111111111001000000000000110011" "0010001011111111110011001000000000001111011111111001101011111111101001001111111111111000111111111010100110000000000001011000000000100000111111111011100111111111111100000000000000101111000000000000010110000000000001100111111111100000011111111100100000000000011010101000000001010001011111111010110010000000001111010" "0000101111111111110000111111111111011010011111111001101101111111110001111111111111110100100000000001011110000000001000111111111111001100111111111100111111111111111100110000000000001111011111111100001101111111110010010111111111001110011111111101110000000000000100011111111111111010111111111101100101111111110010101" "1010010110000000000001110111111111000100000000000000110001111111110000001000000000001011000000000001100010000000001111110111111111100101011111111101110100000000000000001111111111011001111111111100100111111111111001011111111110101000111111111101011000000000001110100000000000001101100000000010010110000000000101101" "0000001001111111110110110111111111010111100000000010010011111111110110000111111111101010100000000010001000000000000100001000000001001011000000000001100100000000000100101000000000111001011111111100010110000000000011001000000001001010011111111111110010000000000110010000000000111011111111111111110000000000000100000" "1011110011111111111000100111111111010100000000000010101101111111110000001111111111011010111111111101000000000000000100101111111111000010100000000000111111111111110110101111111111000000011111111110001000000000001011111111111111100101100000000011111111111111111011100111111111100001111111111110001111111111110000010" "1011110011111111111000101111111110110111011111111100101010000000000111000000000001001010011111111011010110000000010111100111111111111100011111111111101011111111110101111111111111001000000000000000010001111111111110111111111110111101011111111110001100000000011001000000000000001000000000000000111101111111111100001" "1100011100000000001001111111111110111110011111111011101001111111110100000000000000110000111111111011001110000000000101011000000000101010011111111110011011111111111111110000000000001011100000000011011001111111101110000111111110100100100000000011011110000000011010011000000000001001011111111011100111111111110100001" "0110000011111111111111110000000001110011111111111111011010000000001100100111111111101011100000000100000011111111100111111000000001001100000000000111010101111111101110100000000000010010011111111111010000000000001110100000000000000000100000000000100100000000001001010111111111011011100000000100011010000000000101100" "0010010000000000001000101000000000010000000000000000001110000000000111001111111111000011100000000100111101111111110011101000000000000110000000000100010110000000001010101111111111111100000000000000110000000000001000110000000000110010111111111110001110000000000001011111111111110100000000000110101000000000001110010" "1111010110000000000100110000000000001001011111111110101011111111111000011000000000000011000000000011111100000000000001000111111111010101111111111100111000000000000010111111111111110000011111111011110010000000001100101111111110111100100000000010101000000000000111000111111111100000111111111011101101111111110111100" "1101111111111111110111100000000000000110111111111111101101111111110011001000000000011110111111111010101100000000000110001111111111111010011111111111111011111111101110101000000000111111100000000011101100000000000100101111111110111001100000000100011010000000010100101000000001000011111111111010000010000000001010111" "1100110000000000000010101000000000111100000000000001000010000000001110100111111110111110000000000000000100000000000111011000000000110010000000000010000000000000000100010000000001000100100000000100000111111111110010011111111111010011000000000011111001111111111101010000000000111110100000000011011001111111110011110" "1001111010000000000101001111111110100010011111111101011101111111111111100000000000101111011111111011100100000000010000011111111111000100011111111111111111111111110011111000000000100110011111111110101011111111110001101111111110001011000000000100011000000000001111010000000000110100011111111011011001111111110110100" "0110100000000000000100101000000001110000011111111101111110000000001001101111111110111000000000000010110101111111111000001111111111101001100000000001001101111111110100011000000000100011111111111110101111111111110101000000000000100110011111111110011000000000000010001111111110111100111111111111011111111111111010000" "0011100011111111111100011000000001011010000000000011010001111111110101100000000000110010100000000011111110000000001010101000000000100011100000000000011011111111111010111000000000001111000000000011011100000000010001001111111111010011000000000001100100000000001001000000000000111100100000000100000010000000001101110" "0001100101111111110001010111111111100011111111111110000001111111111101010111111111100111111111111101101010000000000000100111111110101110000000000000110110000000001101100000000001000000111111111101010000000000001110101000000000011011000000000001101110000000011001011000000000110110011111111011101010000000001111000" "0101101101111111111110000000000001010011100000000111011110000000010000001111111110111011000000000100100011111111110110011000000001111100111111111111010001111111110001100000000000011001111111111011100101111111101101100000000010000000011111111100100101111111110101111111111110100001100000000001101111111111110111110" "1010101111111111110111011111111111010101100000000001011111111111101100001000000000101111011111111100101110000000011011101111111110101111000000000000100110000000010000000000000000001001111111111111111100000000001111100111111111100000011111111101110011111111111110001000000000111000011111111001010010000000001100001" "0001101000000000000000101000000000001111000000000100110000000000010001011111111110100111100000000010111011111111110110011000000001000101111111111111011101111111111101011111111111100011000000000001100110000000001110000111111111111101100000000011110111111111100111111111111111001010100000000100001110000000001100111" "0011111100000000010000010000000000110001100000000000000110000000010001001111111111101001000000000011000000000000000100101000000000001001100000000000001001111111111000100111111111001011011111111100011011111111111111011111111111001010111111111110110010000000001101010111111111101111011111111100100111111111110111100" "0001000010000000001100001111111111010111011111111110111111111111110011110000000000011110011111111100010111111111111101001000000000000010111111111011000011111111110010010000000000010101000000000001111111111111101110110111111110110110100000000001000101111111111101001111111111011101011111111100110011111111110011111" "0101000001111111101110000000000000101001000000000011100101111111110110101111111111001011000000000011111001111111111000101000000000100110111111111110001101111111101111100000000000110001000000000001011110000000000001100111111111011011011111111011101111111111101110011111111111010101100000000100100110000000010010001" "0000011010000000001100100111111111010010100000000100010101111111111111000000000000000110111111111011110101111111110110100111111111001000111111111011110001111111101111001111111111101100011111111011100011111111111111111000000000100010011111111111011010000000000011001000000000101111100000000010101101111111110010010" "1111000111111111101110000000000001011111111111111101101111111111111101101000000001010011111111111101000010000000010011100111111111100110011111111101111000000000000000111111111111010100100000000001110101111111110011000111111111101101000000000000110100000000010100001000000000010100000000000011111001111111111110011" "1111010011111111110010110000000000111111000000000001110100000000001100010111111111111011011111111111110000000000000010100000000001000010000000000011111101111111110110101111111111000111111111111100110001111111101110011111111111100010111111111101001100000000001100111000000000110101111111111101011010000000000101011" "0011010100000000001101000111111111100101111111111100101000000000001101010000000000010101111111111100111001111111110111111000000000110101011111111110010100000000001011111111111111001111000000000010100111111111110010001111111111000000000000000000101110000000001111101000000000010000111111111111101100000000001001000" "0011111111111111111001110111111111100110000000000010111100000000000100000111111111001101011111111111111001111111111100000000000001000100000000000010100111111111101110011000000001000100000000000000011100000000010001100111111111110000000000000011110100000000000001100111111111010101011111111011101110000000001010101" "1110000010000000001111010000000000101011011111111011011111111111111011001111111111011101011111111110000100000000000000111111111111111111011111111101110111111111111011011111111111110001011111111111110110000000010001011000000000111111011111111101110100000000001011011111111111101001011111111100111000000000001111010" "0000110110000000000001101111111111010101111111111110010111111111111110001000000000000100000000000010000101111111110010001000000000010001011111111100001101111111101110111111111110111111111111111110100010000000001110010000000000110010100000000000110000000000001101100000000000001110011111111011100001111111110000010" "0010001010000000001010011111111111010000111111111111100100000000000101010000000000011010111111111100111100000000000011000000000000110010011111111101110000000000001011011000000000000101100000000001010001111111111010011000000000111111011111111111010010000000001101010000000001000001000000000000001010000000000001001" "1110010111111111111111010000000000000000111111111101000101111111110101001111111110111001100000000100011001111111110111001000000000010110111111111100100111111111110001011111111111001010000000000001110011111111101111010000000000000010111111111110111101111111110011110000000001000111100000000000001011111111110100111" "1011111101111111111101101111111111100101111111111011100010000000000001101000000000110101011111111001100000000000010111000111111111011011011111111011011001111111111111011111111110111011011111111100001110000000000001001000000000001111100000000011100110000000001110011000000001000100011111111110111100000000001100011" "1011110110000000001100101111111111011111011111111111001110000000000100101000000000111111111111111100100100000000001000101000000000111010000000000001100001111111101110000000000000001001000000000001001001111111110001000000000000000010011111111111100001111111101110001111111111000100100000000011110111111111111100111" "1111011000000000010001000000000000001011000000000011101001111111101110111111111111011101000000000010110101111111111110000111111111100011011111111011100011111111110101001111111111110101100000000000111100000000001001110111111111111000011111111101010000000000000011010000000000000100011111111101100110000000001000100" "0011000011111111110111100000000000101101100000000000001111111111111011010111111111011100111111111011111111111111111100111111111111111110000000000000110010000000000110011111111111111110000000000010011011111111101111101111111111111101000000000001010000000000000101010111111111001101000000000010001010000000000100110" "0001111011111111101110111000000000101111000000000100011010000000001110110111111111110011000000000001010001111111110100000000000001010111000000000100111011111111110010110000000000010000011111111100011010000000000100110000000001011000000000000011110010000000000000001000000000010110100000000000110001111111111000111" "0101101010000000001000101111111111101000111111111110000000000000000010011111111111100111000000000011100101111111111111000000000000111111100000000100101000000000001000001000000000011101100000000000100111111111110110100000000001011001111111111100111101111111101011100111111110110101111111111110100111111111110110011" "0101010101111111110110011000000000000100111111111110110100000000010111001000000001000000100000000000111011111111110011001000000000101010100000000010111111111111111110110000000000111010011111111100011001111111110110101111111111110101100000000011110110000000001110011111111111001011111111111110110000000000000110001" "1111100001111111111001011000000001001101011111111101010011111111101110001111111111111101000000000010110000000000000100001000000000001001000000000000001100000000000001101000000000010001011111111110110010000000010001100111111111010001000000000000001110000000000100011111111111100101000000000011111101111111111110101" "1101011110000000001111110000000000000000000000000010100000000000001101110000000000110001011111111101001000000000000000010111111111100100011111111111101011111111111011110000000000111001000000000010100100000000000110111000000000001000111111111110011001111111111101100000000000001011111111111100001001111111111101111" "0000010010000000000001010000000000001110111111111110111010000000000011100111111111011101000000000001011101111111111101100111111111000001000000000001100010000000000000010111111111010010100000000010000100000000001111010111111111000111111111111101000010000000001101010000000000111111011111111110111001111111110101111" "0000010101111111110001000000000000101001100000000011010110000000010001101000000000100110000000000001000001111111110011000000000000011101100000000011111110000000000100010111111111000111111111111110001001111111110000000111111110111000000000000001111001111111111011111111111111100100100000000011000111111111110101001" "1111010000000000000100000111111111001100111111111100010010000000000000000000000001011111111111111100110110000000010011100111111111110000111111111111110011111111101111100111111111110001111111111111001110000000001100111111111111110001100000000000110100000000011001001000000000110100000000000001011101111111110010111" "0011011010000000001000010000000000111000111111111101111010000000001011000111111111101011100000000011110110000000000110000000000000011000100000000011111111111111111111011111111111001100011111111101010101111111111110110111111111100110111111111111011000000000001111001111111111101000000000000100000000000000001100111" "0000101010000000010001111000000001011011100000000010001000000000010011100111111110111110000000000001110011111111110001001111111111111011100000000000110011111111111000111111111111011101100000000001011100000000001010100000000000010111000000000011001011111111111100000000000000010110011111111110110110000000001011001" "1011000001111111101101111111111110100011011111111001110001111111100000110111111111110111111111111001111110000000000000100111111111001011111111111100011101111111110110001000000000011110111111111101101101111111110001110111111101111110100000000011000100000000001010101000000001111101011111111100101110000000000110110" "1100110001111111110001000000000000001011000000000100011011111111111100100000000000110101100000000010110101111111110110101000000001001100100000000101011100000000000111110111111111100111100000000010000100000000001101110000000000100001111111111100001011111111101110111111111111100111100000000000011000000000000000000" "1111011110000000000010000000000001000000111111111101100110000000001010010111111111100111000000000000101000000000000001010111111111101010000000000000011110000000000110100111111111100011000000000000110001111111111011000111111110110100100000000001011111111111111000010000000001011110000000000001000000000000001110001" "0011000101111111110011001000000001000111111111111110101100000000001010011111111111011101100000000001001000000000010010010111111111100111000000000001111011111111111110110000000000000110111111111011110101111111110000000000000000110011100000000010001010000000001000010111111111110011100000000001000010000000010000100" "1111011101111111111100110111111111010110111111111110011101111111101101011111111111101000000000000001010010000000000101010111111111011011111111111110111111111111110100111111111111111101111111111101100110000000000001100111111110101001111111111101011100000000010111000000000001100011111111111110011011111111111010101" "0101101100000000010001101000000000110001000000000100011000000000001010011111111111010000100000000010001110000000000101111111111111111000000000000110001111111111110110111111111111100111111111111111111010000000001100011000000001001110000000000010010011111111111111111111111111100101100000000011110100000000000111111" "0001010000000000000001100000000001000000011111111111001010000000000101000111111111111011011111111110101101111111110000111000000001000010100000000100110011111111111000000000000000100011111111111011110010000000000100010111111111100010000000000001100101111111110111110111111111011111000000000100000001111111111111001" "1111111011111111110000001111111111000010011111111010001001111111100101000000000001100110011111111110110010000000001110010111111110110110011111111010010111111111111110100111111111101101111111111110010100000000001111100111111110100010100000000010110110000000000101101000000001110110011111111110010011111111111110110" "1110111101111111111000101111111111110110111111111101101001111111101010000111111111100011011111111001110110000000011000111111111111111000011111111011101101111111101110110111111110111111100000000001000111111111111101001111111111011011011111111011111110000000001110110000000001001010011111111101110010000000001011001" "1111000010000000000111111111111111110100000000000010101000000000000011011111111111100110111111111101101111111111111100100000000000001010011111111100011010000000001111011111111111111010100000000100010001111111101111000111111111010111011111111011101000000000010100010111111111011100000000000010111110000000001100001" "0011000110000000000100100000000000000101011111111110010110000000001000010000000001011001000000000011001010000000000111010000000000111110100000000011011111111111111000110000000000100111111111111101011100000000001000110000000000001011111111111111001010000000001110010000000000101111100000000100010001111111111010111" "0110000110000000000111000000000000101111100000000110111010000000000000111111111111110000000000000011111011111111111010101111111111100110000000000110110001111111101110101000000000111101111111111011101010000000000101101000000000100000100000000010110110000000000101101000000000000111111111111110001111111111101111010" "1011000000000000000100000111111110011101111111111010111110000000000000110111111111111011111111111101100100000000011001011111111110111101111111111011000000000000000111001111111111100110100000000011000100000000010000011111111111100000000000000010100000000000000010011000000001100000111111111011111001111111111110101" "1010011011111111101110111111111111000111100000000001001111111111110100100000000001010110111111111010010010000000010101001111111110101011011111111010101011111111110110100111111111011110111111111110111010000000000011001000000000001000111111111100010100000000000000110000000000110001011111111011001000000000001111001" "0000101000000000001101110000000000011110100000000000001000000000001000011000000000110000111111111110001001111111111111011111111111101010011111111111011110000000001011101111111111010010011111111111001111111111111011010111111111110010111111111100001010000000000111101000000000111001000000000011001011111111101111010" "0101001110000000001000010000000000000101000000000001101000000000000110100111111110111010000000000011110011111111101101000111111111101111111111111110011001111111110101001111111111000010000000000010110110000000001111101111111111111111111111111111011000000000000110101111111111000110000000000000111100000000001111001" "0001100101111111111100010000000000101100100000000110000000000000010111010111111110111010000000000010100001111111111101100000000000110010000000000001101000000000001001001111111111111101100000000001011000000000000001010000000001001000011111111101010000000000000001001111111110110000100000000011111111111111111001100" "0100011101111111110111000000000000110000100000000000011011111111110001001000000000001111111111111110111110000000000011010000000000110011011111111101101101111111101111111000000000100000011111111011101111111111101110110000000000111011111111111101001110000000001010100000000001000010100000000010000100000000001000010" "1101000100000000001011111000000000010001111111111110110100000000000100001000000000001111111111111101101001111111110101110111111111100101000000000000111001111111110011010000000000001100100000000000000101111111111100110000000000010101000000000000110000000000001011101000000000111000000000000011010010000000000101110" "1010110010000000000001101000000000101100100000000000111011111111110110011000000000000001111111111111100101111111111101101111111111100100011111111010110000000000001110100111111111010111100000000011011110000000000001010111111111111000011111111101111011111111110111110000000001011001011111111110011101111111101110010" "1011001000000000000011011111111110111010100000000000101011111111100100111000000000100000011111111111100110000000011100001111111110001110111111111010000110000000001000101111111111110011000000000001010011111111111010101111111111111110011111111111001110000000001000001000000000010000000000000000001011111111110010011" "0000100100000000001011110000000000011011000000000101010010000000000000000000000000101111000000000001110110000000000011011000000001011000100000000101001011111111111010001000000000111001000000000000000011111111110001100111111111111101100000000001010101111111101100011000000000010100100000000101110101111111101111100" "0011101100000000001000110000000000010000000000000011000010000000011000110111111110011110100000000111011001111111110111010000000001011001000000000101101101111111111101001111111110111100100000000001001011111111111100110000000000011101011111111111110001111111100011011000000000000111000000000010110111111111110100101" "1100011001111111111101000000000000111100011111111111111000000000001010011000000001000111111111111010111100000000010011000111111111010100111111111011101011111111110010111111111111000110000000000011110000000000000010101111111110100111100000000011001010000000001011010000000001101000000000000010100101111111101101001" "1111000110000000001000100000000000101010111111111110010101111111110100000111111111110100011111111101000010000000010000110000000000001110100000000010111110000000010001001000000000000101111111111110100001111111101111001000000000010011000000000011000011111111111011000111111111110101111111111110110010000000000001101" "0010101011111111111010110111111111100010100000000000001101111111111000000000000000000111000000000010011101111111111011101111111110111000111111111100110110000000010001100111111111100101011111111110000111111111110000111000000000100100000000000001101111111111101111001111111111110101100000000011011000000000001001100" "0010011000000000000111001111111111000010111111111011011110000000000101011000000000100101011111111011101111111111111000001000000000110011011111111101011000000000000011111111111111110010011111111101101100000000001111100000000000011000000000000010000111111111110010110111111111010111011111111100011011111111111111001" "1111001011111111110000011000000000101011000000000010110100000000000111110111111111111011011111111011110010000000001100001111111110100100011111111010100000000000001101001111111110110101111111111111110100000000001001000111111111001100100000000001010000000000000001100000000001010111011111111010100011111111111110010" "0100011111111111110101001000000000110011011111111111101000000000010001011111111111010000000000000000000010000000000110111111111111101101000000000011000111111111111111111000000001001000111111111011110010000000010000010000000000000000000000000000100001111111110010000111111111001000000000000010011110000000000001111" "1111100101111111111100001111111111110101000000000000101010000000000010000111111111110111011111111110110100000000000110001111111111000111000000000010000111111111111100101111111111101111000000000010100111111111101110100111111111001100000000000000000101111111111101001000000000011001111111111101100001111111111001110" "0000001111111111111100100000000001000001011111111101110111111111110001011111111111001100100000000001100001111111110110101000000000011011100000000011000110000000010000111111111111000011100000000100011110000000000101001111111111011110111111111111101001111111110011001111111111100010011111111100110000000000000110010" "1001010000000000001110101111111111010110100000000000101001111111101111110111111111110001111111111111100010000000011001011111111111011010011111111110001010000000000101000000000000101101100000000011010011111111111100101000000000100010111111111110101001111111111100011111111111111110111111111111011011111111111010100" "0010101000000000000101010000000000111010000000000111110100000000001110110111111110100001100000000001100011111111100000110000000001111011000000000100100011111111111101111000000000100011011111111111111001111111111111100000000000100010000000000010101101111111110100011111111111001001000000000110100000000000000000010" "0000110011111111101110110000000000100010000000000100100000000000001000110111111110011100100000000110010011111111101100100000000001000111000000000011011101111111111011110000000000001011011111111111100010000000000111000000000001001000111111111110010001111111111111110000000000001000011111111110110101111111111001000" "1100100111111111111010100000000000100011011111111100001111111111110111100111111111011110100000000010110101111111110011000111111111101001000000000000011010000000001110010000000000110001011111111011110111111111110000010111111111010001100000000001100100000000010000010000000000010101000000000001000111111111111100111" "1011111000000000000011010111111111111110111111111100011010000000000101101000000000011111011111111011011111111111111100000000000000100101111111111011100100000000010001001111111111100001100000000100001000000000001111010000000000100000100000000001111011111111101110100000000001000101011111111100110000000000010001111" "0001111100000000010000110111111111110110100000000000000110000000011010000111111110111011000000000110011110000000001010010000000000001101100000000001011010000000000101010000000000011001111111111101101101111111110001110111111111100000100000000000001111111111111001101000000000000010000000000011110100000000000011011" "0101000101111111110110011111111111110101000000000101111010000000001101111111111110011011111111111111011000000000000011101000000000101110100000000011101011111111101110101111111111110011100000000010010100000000001101101000000001010011100000000011111111111111101010001000000000010011111111111111100110000000001111011" "0010110100000000000010010111111111110111100000000001011110000000001100010000000000111010111111111100010100000000010101000111111111100101011111111100101010000000001110100000000000010111111111111100101110000000001000111000000000101011100000000000111010000000000101111000000001100000111111111100010110000000000111001" "0100011000000000000110111111111111111100111111111101110010000000000001101111111111010100011111111111100111111111110010000000000000100101111111111110100100000000010000011111111111010101011111111100010011111111101110011000000000001011011111111111100000000000000110111000000000101101100000000000001011111111110001110" "1111001100000000000010001000000000111100000000000100010010000000001111110111111111001000100000000011001011111111111011011111111111111000000000000000110100000000000011101000000000100000000000000000100111111111111101111000000000001010000000000100000000000000000101100000000000000111000000000010111100000000000000010" "1100011111111111110000001000000000001011100000000011110010000000010001101111111111101001000000000001101101111111110011100111111111110000111111111101010111111111111010100000000001000100011111111011101001111111110011100000000000101100000000000010001110000000001100001111111111100110000000000001010111111111111000111" "0000010010000000000101100000000000010100011111111100101010000000001000001000000000000011100000000001011110000000000110001000000000101001100000000000001100000000001111010111111111000111011111111110111111111111110001001111111110111110011111111101111010000000011001011000000001001011011111111111111000000000000011100" "0100000001111111110101010000000001001101100000000100000011111111101101110111111111010110000000000100110110000000000000110000000000010010000000000001110010000000000000011000000000111110100000000000101110000000000010000000000000001011000000000000010101111111110111011111111111111101011111111101001000000000001111111" "0000110000000000001000011000000000111011011111111100110000000000001010001000000000011110000000000100011010000000000110000111111111000110000000000100000010000000000100001111111110111001011111111100101110000000001110101000000000101111111111111101001111111111110100100000000000100101000000000100010000000000001101011" "1111011111111111110101000111111111110110000000000010101101111111111100111111111111001001000000000100011111111111110110000111111111001111111111111100110111111111111010111000000000101001011111111100011011111111110011001111111111000001111111111011101000000000001111011111111111010011100000000001111011111111111111001" "0000001100000000001001100000000000001110011111111101101111111111110010101000000000100000100000000100010011111111111001011000000000110000111111111101111010000000010000111111111111100111000000000000111000000000000011100111111111111101000000000000110010000000000101111000000001010001000000000001111111111111111101001" "0001100111111111110100111111111111111111000000000001111000000000000001111111111111100000011111111111001011111111111111110111111111100010011111111111011000000000000010110000000000110010111111111011100111111111110011110000000000110010011111111101001110000000011000111000000001001001000000000000010011111111111011010" "0001011101111111111001011111111110111011111111111011100100000000000011111111111111100011111111111110010010000000001111101000000000010011111111111100011010000000001101100111111111010001111111111101010011111111110111001111111111100000000000000000000101111111110100000000000001000011111111111111010111111111110001011" "0001000110000000001010101000000000001111111111111010101111111111101001100000000001010101111111111010111010000000010111001111111111000001011111111111111000000000001001111000000001000000100000000001001000000000001101000111111111111110000000000010100000000000000111101000000001101110111111111001111001111111110011001" "0110110011111111101111011000000000001100000000000101111001111111111001010111111111111010100000000110100011111111111001111000000001101000111111111111011001111111111000101111111111110010000000000000110100000000001101011000000001100000011111111110101000000000000001011000000000100001100000000001101011111111110101110" "1111001111111111111011000111111110111001111111111101111111111111110100100000000000000110100000000011011010000000000101101111111111010000100000000011011011111111101111010000000000001101100000000011110110000000000010101111111111110101111111111011110000000000000010110000000000101100011111111101111101111111111010000" "1110111011111111110111001111111111110100011111111110111000000000010110001111111111111111100000000100101010000000000001101000000000100111100000000000000001111111110101011111111111000001111111111101111000000000001100110000000000100110111111111110010000000000010000010000000001000101000000000000010110000000000110011" "1101001101111111111100111111111110110101000000000010010000000000000011101000000001101000111111111110101010000000001101011000000000011001000000000001100011111111111011101000000000101010111111111100100001111111101110111111111110010110011111111111111010000000010011011111111111100010000000000000011011111111111010001" "0100011001111111110000110111111111111010000000000100011011111111110100011000000000000000011111111011101110000000000111101000000000100110100000000100000111111111110110011000000000011000011111111101000110000000000110110000000000011011111111111110101111111111111010011111111111010010011111111110111110000000001011110" "0110001011111111111001000111111111111011000000000011010000000000001101111111111111111001000000000101100000000000000000111000000001100010000000000010010010000000000011011111111111011000100000000100001111111111110011010000000000010001100000000010000000000000000111101111111110011100000000000010100101111111111010000" "1101111101111111111111000111111111000111100000000011110110000000001010101111111111100100111111111100101010000000001000111111111111101111011111111100100001111111110010101000000000011110011111111101010100000000000111110111111111000011011111111100101000000000001110101000000000100101111111111110001011111111110000111" "0100101101111111111000001000000001010010100000000100011111111111111110110000000000011001011111111110111110000000000111110111111111111101000000000010101111111111110000101111111111001100000000000010011100000000000110000000000000011110000000000010001001111111110111000111111111010011100000000111001001111111101110010" "1011111101111111110100010111111110111100000000000100010001111111110000100111111110111111011111111110100001111111110111000000000000010011100000000010110011111111110011010000000000000110100000000010010001111111111000101111111111000010000000000011111101111111111011110000000000101100111111111100001100000000001101101" "0100100001111111111101101111111111111110100000000010100010000000000000100000000000111001100000000100001011111111110011011111111111000010111111111101011010000000001000110000000000001110011111111011011111111111111101011000000000001100011111111101010110000000000011100000000001000010100000000011001010000000000101100" "1001011010000000000101000111111111100101100000000000101010000000000010001000000001101101011111111110011011111111111100100111111110011110011111111110101100000000000011111111111111001011000000000011001110000000001001001000000000001010111111111111011110000000011001110000000001101010111111111100000001111111110111111" "1100100001111111110110100111111111000101111111111110000100000000000101010000000001001011011111111111110100000000010100001111111111010101111111111001110011111111101101011111111110111001111111111110010011111111110010100111111110111000111111111101100010000000000000010000000001001011111111111001101101111111101110001" "1011110000000000001111010000000000010010100000000001101111111111110000000111111110111011100000000011001000000000000101111111111111010101000000000011000100000000001100011111111111001011000000000100000110000000001000111000000000100001000000000011101110000000001101101000000000110000100000000100100000000000001001001" "0011000111111111111100100000000000000010100000000100100000000000011100011111111111111011011111111111110111111111111001000000000001110101100000000000010001111111110001100111111111110100011111111110100011111111111011010000000000001100111111111101100111111111110011010111111110110011100000000001100110000000000101101" "0101000010000000000101110000000000111101100000000011010010000000001101100111111110011110000000000010010011111111111011010111111111111001100000000101100010000000001100101000000000001111011111111111101000000000000110000000000000110110000000000010000111111111110011101000000000000100100000000101011011111111110001110" "1110011100000000001000011000000001001001000000000011010010000000001100110000000000110000100000000100011101111111111110010000000000101111111111111101110011111111111101011000000000000001000000000000111101111111111010100000000000111111100000000001000010000000001111010111111111011101000000000100011100000000001100101" "0001100111111111110010010111111111111010000000000110101100000000001101001111111111001000000000000011111000000000000010100000000001111101000000000000011000000000000111100111111111101101100000000001111001111111111100110000000001101110100000000001110011111111101110010000000000001110100000000101011101111111101110011" "0001001011111111111101100111111111100100000000000001011001111111111100001000000000110110111111111111111001111111111011000000000000110001000000000001000011111111110000010000000000000011011111111100001011111111110101101000000000001101000000000011110001111111111001110111111111001101011111111111010100000000000000110" "0001011110000000000100000000000001000111111111111111010111111111110011110000000000010111111111111100011100000000010000010111111110110111100000000010010001111111110101111111111111100011100000000010111011111111111011000111111111001100111111111111011110000000000001001000000001010110100000000010001010000000000000000" "1100010111111111110100001000000000001101011111111111011100000000000100011111111111100011100000000001000000000000000111011111111110111110100000000010100111111111111110110111111110111010000000000100010000000000000000111111111111101111011111111100001000000000001010011111111111111010000000000010001011111111111011001" "1110110011111111110001001111111110100010011111111001000001111111100110110111111111111111011111111110010100000000000100011111111110001001011111111010111000000000010001100111111111001011111111111011111011111111111011011111111110101100100000000010100100000000000010110000000001001010011111111010011101111111110110111" "1011110001111111110000010111111111110001111111111011110111111111101001001000000001111101111111111101011010000000000000101111111111001011111111111001010010000000001010001111111111101011111111111111000000000000000010111111111110010000111111111101111100000000010100010000000001001010111111111001101000000000001011100" "0001000011111111111000111000000000110100100000000011101110000000000000001111111111110111111111111110101111111111101110111000000000111100000000000001000011111111110100000111111111001101111111111101001001111111110010011111111111000101100000000001001010000000001011110000000001000111111111111100110110000000000100101" "0101110110000000001001011000000001100000000000000100001010000000010001110111111110101010000000000101011010000000000111011000000001011001011111111110100100000000001001001111111111000101011111111110001010000000000100101000000001101011011111111011011011111111111101010111111111101010100000000101011011111111110111011" "1100001001111111111100111111111111000100011111111111110101111111100100110000000001000101100000000001100010000000010010001111111111110111011111111100111100000000001000011111111111101110111111111011100100000000000000100111111111011000011111111100110010000000010111010000000001100000011111111101001001111111111101101" "1011101101111111111000111111111111001001011111111100111011111111110011110111111111111010111111111010000000000000011011110111111110101011000000000001000111111111111111110000000000011111011111111101010101111111110110111111111111000001011111111100001010000000011001111000000000000001011111111111001010000000001110110" "1111001101111111111101010000000001000000000000000010010100000000010001100000000000010011011111111100101011111111111001100111111111000001100000000000110010000000010000000111111111111111111111111100001101111111101101100000000000111000000000000001111101111111111111000000000001000010111111111110100111111111110010001" "1001101000000000000110111111111110010101111111111100000111111111100110000111111111101000011111111010101110000000001100010111111111111010111111111101110000000000000011111111111111011010011111111110100111111111110101101111111110111110011111111111110010000000001111011000000000000000111111111010010100000000001010011" "1010111001111111111011111111111111011011011111111101010110000000000110000000000000111100100000000011100001111111111000001000000000010100100000000010011011111111111110001111111111000001100000000001101101111111111000101000000000101100100000000000000111111111110110011111111111101111011111111111100110000000000110010" "1011100110000000010000001000000001000101111111111010110000000000001011001000000000010000011111111101111000000000010001101111111111001001111111111011011101111111110101111000000000100101011111111101100001111111110101100111111111000110000000000000100110000000000010011000000001011111011111111101101000000000000100001" "0011011100000000001011011000000000111100100000000011001101111111110000101111111111001010111111111110001110000000001110011111111111110001011111111111100000000000001100010111111111001110011111111111111010000000001101010111111110111101100000000010010111111111111010111000000000100110011111111100110000000000001101001" "0001101000000000010000011000000000001011100000000010000000000000000101010000000000100101000000000010100011111111110001011111111111110011111111111101001001111111110011101111111111000010111111111100010010000000000100001000000000101000000000000100010000000000000100111111111111110111100000000001100101111111111011001" "0010011011111111110000000000000000101010011111111110100000000000000110111000000001000000011111111100001011111111111000100111111111100010100000000010101001111111111001000111111111111110111111111101001100000000000110000000000000010001011111111011011101111111111011000111111111010100100000000000010000000000001001111" "1101011111111111101111010000000000010001100000000101011000000000000011111000000000100010111111111110011111111111110011110111111111111101011111111100001100000000000011111000000000000101100000000010110000000000001011000000000000000000000000000000000111111111111110100111111111010110011111111101000000000000000010000" "0011111011111111110011110000000000111110011111111111111011111111110111011000000000010001011111111111011011111111111010000111111111111001011111111100010000000000000100100000000000011010111111111111000110000000001000100000000000010010000000000000101101111111110101000000000000011010111111111100011011111111101100101" "1011010000000000001001100111111110011110111111111001100011111111101001101000000001000110000000000001110100000000011100000111111111110011011111111101001100000000001000110000000000010111011111111011110111111111110001001000000000001000000000000010111100000000001110000000000000101011011111111101101110000000001010100" "1101000000000000000100010000000000001000000000000100011111111111110001100000000001000111100000000000010011111111111100011000000001000111111111111011110111111111110010001111111111100101011111111011111011111111110111101111111111000000000000000001111010000000001010110111111111000011000000000000100111111111110011110" "1101101100000000000011110000000001000100111111111101111010000000000110111111111110111000000000000000101000000000001011101111111111100010100000000010100000000000001010001000000000010111011111111101001111111111111001011000000001011010100000000011110001111111110101010111111111100001100000000100111111111111110010011" "1001110010000000001011000111111110100011011111111110010101111111100110110000000001010100111111111101011000000000001110110000000000010111011111111100101100000000000100000111111110111100111111111011111010000000000010101111111110110011011111111011110010000000000100011111111111110011000000000000100101111111101111110" "0010111101111111111010101111111111100010000000000001110000000000000010001111111111101101000000000010101110000000010011000111111110111110011111111100000000000000001100000000000001000001000000000011101111111111110111101111111111010101100000000100011000000000010001010000000001101100011111111011111110000000000111101" "0110010111111111101110110000000001011001000000000110011001111111111111101111111111000101100000000001010110000000000001011000000001011001100000000001001110000000000000001000000000011000100000000011010000000000001110100000000001010111000000000001101011111111111010110111111111111111000000000001101001111111111110101" "0011001110000000000000001111111110111011111111111011100100000000010001111000000000001100011111111011101110000000000110100000000000000101100000000011111100000000000010101111111111010011111111111101001001111111111011110111111111010100000000000010001100000000001101000111111111001101111111111110111101111111110011010" "1100110000000000010000010000000000110111111111111110101011111111110110100111111111110010011111111110101100000000000101100000000000101111011111111110001100000000000010111000000000010000111111111100100111111111101110101000000000000011011111111101101101111111111000100111111111101101000000000011101000000000010000001" "1111100111111111111001001000000000110010100000000001111000000000001001110111111111001110100000000000110111111111110101110000000000010001011111111111100000000000000110011111111111101110111111111110010010000000000001011000000001000110111111111111110000000000001101000111111111001000011111111100111011111111110011010" "0001011100000000010001100000000000100100000000000110101000000000001100010111111110111011111111111111101111111111111111110111111111111011100000000011001011111111110000100111111111101101000000000000111101111111110110011111111111100100100000000100001111111111110010111000000000100000100000000011001001111111101111110" "0010000111111111110000001000000000100111100000000011101111111111111011010000000000100011111111111111001000000000000101110000000000101001011111111100011010000000000001000000000000001000011111111100011000000000001000000000000000011110000000000001011111111111111001001111111110111100111111111100000110000000001011011" "1111110010000000000110111111111110111110111111111011101000000000000100101000000000100011111111111101111110000000001110100000000000110010100000000000111101111111110111100000000000001101100000000100011001111111110100011111111111001111000000000001101111111111101101111111111111100110100000000000101111111111110100111" "0010011111111111111111010111111111100111000000000001001011111111111111011000000000000001100000000100010110000000000011101000000000101000111111111100101010000000000011101111111111000101111111111111111000000000001001010000000000110001111111111111110001111111110100011000000000011001011111111011111100000000000010111" "0010000011111111111111111000000000100010011111111111011111111111111010101111111110110010100000000100111000000000000000000000000001001100000000000010000011111111110100100000000000011111011111111100100111111111111110001000000000100100011111111111010111111111110010011111111111010001000000000100101101111111111001101" "0000011011111111101110111000000000100110011111111111101001111111111010001111111111111101111111111101011101111111111110111111111111000011100000000010111110000000000010011111111111110100000000000011100000000000000100000000000000010000011111111111111100000000001001111000000000000101111111111110001111111111110011000" "0010100000000000000010011111111111100111100000000000100110000000000110111111111111100010100000000011110001111111111101101000000000100010011111111111010111111111111011000000000000100101111111111011111011111111111111001111111111101110111111111110010111111111110100110000000000110101100000000011001111111111111100110" "1111001110000000000000110000000001110000000000000000000110000000001110111111111110101010100000000100101001111111101010111000000000010011100000000011101011111111110010111000000000010111000000000100100001111111101110100000000001100100011111111100110111111111101101110000000000110010100000000100011111111111110110000" "0011010101111111111110111111111111111011111111111110101010000000000111110111111111111011111111111110001000000000001110111111111111101000100000000100011110000000001100001111111111110010100000000000010011111111110011101000000001000101100000000100011000000000000001111111111111111101111111111101110000000000000011110" "0000010000000000010001000000000000010000111111111111000010000000000111111000000001011100011111111100101010000000001101100111111111000101100000000000101110000000000000000000000000001011011111111101110011111111110000100111111111110000011111111110001100000000001010001111111111011110111111111110100111111111110001010" "1010011011111111111101110111111111111010000000000000111001111111101011111000000000111011111111111100010100000000011000101111111110101010100000000001101110000000000000110000000000100100100000000000111010000000001111001111111111001111111111111110010110000000010111001111111111110000011111111100111000000000001001111" "0001010001111111101110110111111111010101000000000001010111111111110001111111111111011101000000000001001100000000001110111111111111010010000000000000001010000000001101011111111111100111100000000001100000000000001111111000000000100101111111111111101100000000000000110111111111000011100000000011100110000000000010001" "0000000000000000000001000111111111000010000000000000100111111111110111001000000001101001111111111011101010000000010000010111111110100011000000000001100111111111110101110111111111111011100000000011110101111111101111000111111110010110000000000100010100000000001110000111111111101011011111111010100110000000000111011" "0000011110000000001101001000000001001110011111111101001111111111111010000000000001010101111111111110001010000000001100111000000000001001100000000011100001111111110100001000000000100011011111111110011101111111111000110111111111110001100000000100001010000000000101111000000000110001000000000001101000000000000110001" "0010001000000000000111111111111111111000000000000100010000000000001110001111111111110111011111111101101100000000001001111111111111010111111111111111100001111111111100111000000000101011111111111011110111111111111110001111111111110111000000000001100011111111111111111000000000110010011111111100110111111111110010111" "0101000100000000000111101000000001101010111111111111011110000000000011110000000000011111000000000000100001111111101111110000000001001000000000000101011011111111110010011111111110110100011111111101001001111111110011110000000000100100000000000000010001111111101100101111111110110001011111111111110011111111111010011" "0111001111111111111111001000000001001100100000000110111101111111111010111111111111001010000000000000110101111111100101100111111111110000100000000001000110000000000001000111111111111000100000000011010000000000000111001000000001010111111111111100001111111111101000011000000000001110100000000110010111111111111111111" "0000101001111111111001011000000000011000111111111111000111111111111000100000000000111111011111111111101110000000000011111000000000100011111111111100101010000000000010011000000000110010000000000011011000000000000110000111111111001011111111111101111001111111110001100000000000011010111111111100000000000000001110000" "1011001001111111110000011111111110111011100000000010011111111111110011101000000000111101011111111010101000000000010000010111111111101101100000000000111000000000000000000000000001000000000000000011011010000000000001001111111110111110111111111011101010000000010111001111111111110110111111111111110100000000001000101" "0100110001111111111010011000000001010001111111111111110110000000011000110000000000100010100000000010110110000000000001101000000001011001100000000101111110000000001101011000000000100111111111111110111111111111110110111111111111111011000000000100010000000000000101010000000000000011100000000011111101111111101111000" "0011001111111111110000111000000000000010000000000010000001111111110110001000000000001000011111111101100000000000010001110111111111001010000000000010101101111111111110110000000000001001111111111011111100000000001100100000000000100100011111111100010000000000000110110000000000101100011111111011001011111111110000001" "1111110011111111110100011111111111000011011111111111000011111111101011101000000000110110111111111110101001111111110101001111111111100001111111111100011111111111111011100111111111111110011111111100001100000000010001000111111111111000011111111101001110000000000000011000000000000001100000000011001111111111111111000" "0001011001111111111010111000000001010110011111111111001010000000010010011000000001000011100000000000111011111111101110111111111111001100100000000011111111111111110111101000000000001011111111111011100000000000001000000111111111111100000000000010000011111111111100001111111111110011100000000011000111111111110100011" "0100010110000000000111111000000000110000011111111110000010000000001011111000000001001100011111111100011111111111110101001111111111101100100000000000110000000000000101000111111111111001000000000011110011111111111011111000000000111000111111111011110011111111111001001000000000001011000000000010011101111111101101001" "0011111000000000000000110000000000000011100000000100100011111111110010110000000001001010000000000010011110000000001101101111111111001010100000000011110100000000000001010111111111100101111111111111000100000000000001010000000001000010100000000010011011111111110110010111111111010001000000000010011111111111101100110" "0100000000000000010001111000000001101100000000000010001100000000011110101111111110001110000000000110000000000000000000010000000001011111000000000100011010000000010001100111111111010100100000000011000011111111110101011111111111111000000000000010110011111111110100000111111111000001100000000010001000000000001100100" "1111101000000000000111100000000000110000100000000101001001111111111011100000000000001001011111111110011000000000010000001000000000011111111111111111111010000000000111001111111111101101111111111100100001111111101101100000000001000011111111111101110100000000001000110000000001000011100000000101001001111111101110010" "0100001101111111111010100000000001110111000000000110100110000000011001000111111110001101000000000001101001111111100101100000000000111011100000000010000111111111110011011111111111100111100000000010101100000000000101001000000001000010000000000000001101111111101101000111111110111011000000000110101010000000000010100" "0001010000000000001011001111111111100101111111111010011101111111101010110000000000100110000000000001110010000000010100110111111110111101100000000001110000000000000100010111111111111010011111111110001011111111111100000111111111111011111111111110110010000000000100101000000000100011111111111101010000000000000101010" "1100101101111111111101000111111111001011100000000011011110000000001101000000000000111000011111111101010101111111110000011000000000111110111111111100000001111111111110000111111110111110011111111101110111111111111001010111111111101101111111111110100101111111110001011111111111011000011111111111010100000000000100110" "0011000101111111110101010000000000100110000000000011000000000000000011101000000000100111111111111100100000000000000110001111111111001100100000000010110011111111110010001000000000000011111111111111010010000000001111000111111111011111011111111100111100000000001001000000000000101111011111111101011111111111111000111" "1111100100000000000111010111111111101010000000000001100111111111111110000000000001010111100000000011111011111111111111110000000000011100000000000110000110000000001000000000000000001110100000000000111101111111110000010111111111101001000000000101000000000000000001001111111111001110011111111001011111111111110111100" "0001101000000000001100001000000001000110100000000001100100000000010101001111111111100101011111111101010000000000000100000111111111010100111111111100011100000000000000111111111111011011000000000000010001111111110110001111111110111010011111111011111100000000010100000111111111111000000000000000000011111111101111110" "1111000101111111111100101111111111011001011111111111101101111111111101011000000000101110011111111111111001111111110000100000000000111000100000000100001000000000001010110000000000101110011111111110101100000000001101001000000000010001011111111111110101111111110011011111111111011011111111111010001001111111101110101" "0010000101111111110011101000000001000001100000000001000000000000001101001111111111110101111111111111001011111111101111011000000001000000111111111100100000000000000110110000000001000101000000000000001101111111101111000000000000111100100000000011000011111111111010001111111111010111000000000011001100000000000001110" "1111010001111111101111000000000001000110100000000010010010000000001001011111111111011101011111111110000110000000000101101111111110100110111111111001000111111111110010001111111110101010111111111110001100000000001011111111111111010011111111111100011000000000011011011000000001011101100000000110111101111111111100000" "0001110110000000000110100000000000101000111111111110111010000000001011011000000000110111111111111101001011111111110111001111111111111100011111111110011111111111111111110111111111100101000000000000001110000000001100101000000001010000111111111110111011111111101111001111111111011001000000000001010001111111101111100" "1111010001111111110101011000000000001001100000000010010111111111101111110111111111010010011111111100111010000000001000001111111111110001100000000010111000000000001101110000000000111111011111111101001101111111111101110111111111000100011111111110011010000000010000010111111111001110111111111111111111111111110000011" "0010101001111111101101100000000000011111111111111101100011111111101001100000000000000110100000000111001001111111101111000111111111100110000000000101010100000000001010101111111111101101000000000001001100000000001111010000000001101001100000000101100001111111111011000111111111001110111111111011011100000000000010101" "1101110010000000001100000000000000010000100000000110111101111111111111000111111110110010000000000000011010000000010001010111111110110100100000000000110100000000001100010111111111000110011111111101111101111111110011100111111111000001011111111010101010000000010010111000000000111010000000000100100001111111110011111" "1101011101111111111010001111111111100001111111111011001110000000000001111000000000111010100000000100111111111111110111010000000000101101000000000101110011111111110111011000000000010010000000000000111111111111101110110000000001010101000000000110000101111111100101000000000000000011011111111001101101111111110001100" "0011000110000000001101101111111111011101011111111111110011111111101100101111111111011010111111111110111111111111101111000111111111011000000000000001001001111111111000110000000000110100111111111110011000000000001111001000000000000011011111111110011101111111110111111111111110111111000000000001011000000000001111110" "0000100101111111110110011111111111101011111111111100100100000000010001101000000000010001000000000101010101111111110000010111111111011001100000000010011110000000000001011000000000110010100000000011000011111111111010100000000000111001100000000010110000000000000010000111111111110000000000000011110011111111110100010" "1011100001111111110001101000000000100000011111111101001101111111111100011111111111011100000000000100110010000000000100101000000000010101100000000100110111111111110110001000000000110000000000000011100111111111110100110000000000011010000000000110111010000000000011100111111111000011100000000010100001111111110110011" "0000011010000000001110000000000001001010000000000000101010000000010111010111111110111100111111111011101010000000000001011000000000000011011111111110001000000000000001111111111111010111100000000010010101111111111101101111111111010110111111111110100100000000001101011111111111110010100000000111011111111111110111101" "0001100010000000001010000111111110000110011111111111000001111111111010100000000001001011000000000100011011111111110101011000000000011101000000000100101101111111111111000000000001100101100000000001111111111111111101010000000000101100000000000010100001111111110001100000000000001111111111111100011000000000001010111" "1111000101111111110100000000000001000110000000000001100011111111111011001111111110010110000000000000000111111111111110100000000000010101111111111111011000000000000000101111111111101010111111111100011000000000000001100000000000001100011111111010110100000000001100010000000001110101000000000011100111111111110100111" "1011110111111111110100010000000000001111011111111110000000000000010000111000000000100011011111111100101110000000000001010000000000100011000000000010001000000000000001001111111111111001111111111011111001111111111111101111111111110010111111111111110101111111110100010000000000100110000000000001001001111111101111000" "1111111111111111111000110000000000101010011111111111110100000000001010000111111111010110100000000010011001111111110000111111111111011101100000000011100110000000001111110111111111111100111111111111001111111111111011010000000000111101000000000001000101111111110111100000000000011100100000000100011010000000000100010" "0000011111111111110100110111111110000011011111111111101001111111101111011000000000110001000000000010001010000000000111101000000000000100000000000000111110000000000111101000000000110011111111111111110000000000001110110000000001000101111111111111101001111111101011111111111110001101111111111100010000000000001100000" "0001010100000000000101010111111111101110011111111011100010000000001111010111111111010101000000000010111000000000000010010111111111000100100000000010010110000000000101000000000000010001111111111111010001111111111011100000000000100110111111111011101011111111110001000000000000011111011111111011101010000000001110010" "1101110001111111110101100000000000101111100000000111000010000000011111010111111110001100000000000000000010000000000100010111111111110011111111111101001111111111111111001111111111111010111111111011111011111111110101110111111110110010111111111000010010000000011101000000000000110100100000000101101101111111101111111" "1100110101111111111001011000000000111100111111111111011111111111111000101111111111000010000000000011011111111111101111000000000000100110000000000010110000000000000110001000000000100000000000000010101011111111111010011000000000001110111111111111110000000000000000001000000000010001100000000010001010000000000001111" "1101111101111111110111000111111110111000100000000011101000000000010000000111111111110101000000000011000100000000000100000000000000110000011111111011101010000000000000010111111111001110011111111101110000000000001000110111111111000110111111111101000101111111110001011000000000011001111111111111000010000000001100100" "1111100110000000000011001111111111101111100000000100000100000000000010010111111110111100111111111011110111111111111101101000000000011100011111111100101001111111111101000000000000010111000000000011010010000000000101101111111111100001011111111110111001111111101110111111111111111001111111111110100011111111110101110" "0010111000000000000100101000000001100001100000000000011001111111111110010111111111110011111111111110010011111111101101101111111111000100000000000000001100000000000010001111111111101101111111111111010010000000001011001000000000100011100000000000110000000000010111000000000000010110100000000011010100000000000101001" "1110011101111111111001000000000000000000111111111110100100000000000011000000000000101000000000000010111000000000001100101000000000011100000000000100101001111111111010001000000001001110111111111101000000000000001001101000000000110011100000000010100010000000001000010111111111111110100000000000100000000000001010001" "0001111111111111110010110111111111000010111111111110101001111111111100101111111111111101100000000001101111111111110111010000000000000111011111111100110011111111111011111000000000000101111111111111101000000000000110110000000000111111100000000011010001111111111101101000000000100001011111111111110110000000000001010" "1111111000000000001001010111111111010100111111111011100010000000001000111000000001011000000000000011100011111111111010010000000001001001000000000100010011111111111001010000000001001010100000000100001110000000000111101111111111010001100000000100111111111111101100000111111111001001100000000001010011111111101110011" "0011010111111111111000001000000000001101100000000100001011111111111001101000000000101101100000000010100100000000010001010000000000111001100000000011010110000000001001101000000000011101111111111101010110000000010000100111111111110110100000000011110000000000001011111000000000111101000000000000010010000000000011010" "1101111111111111111010010000000001000010011111111110100000000000000100011000000000111011000000000011011111111111110111001000000000110011000000000001001101111111111001100000000001000110111111111100101111111111111101101111111111100110000000000000000001111111110001111000000001000101000000000010100100000000001010010" "0100000110000000000010000111111110110110011111111101110110000000000010100000000000111000100000000100101110000000000011110000000000101010100000000101110001111111110101101000000000111010111111111111000101111111110011010111111111011111000000000110001001111111101011111111111110100001011111111101000101111111110000001" "0100000101111111111001111111111111110100011111111100110111111111111111100000000001110011000000000010000101111111110000000111111111110101100000000101110111111111111100111111111111110010000000000100000110000000000111011000000000111001011111111111100111111111111010001111111111111010111111111010001000000000001011011" "1101001001111111101111001111111111010111111111111111001011111111101111010000000001000010100000000100110000000000010000101000000000100001100000000011011111111111111010101111111111111101111111111100101110000000001110110000000000100000011111111111110101111111110110111111111111111001000000000000110100000000000001000" "1101010001111111101110100000000000010110100000000101000111111111111001110111111111101011000000000000110111111111110011101000000000110101000000000011100000000000001101101000000000111010011111111110010101111111101111001000000000111011111111111110011101111111110111111000000000110101111111111100110001111111101111100" "1100101000000000000011111111111110111110011111111101101100000000000001100000000001100111100000000001111111111111110010111111111111101000000000000010010100000000001010100111111111110100000000000001010001111111110100111000000000110101100000000001011001111111111100000111111111001001111111111101000000000000010001111" "0000000111111111111100011111111111000000011111111100101001111111101001101000000001001000011111111110100011111111111011011000000000101110000000000101010111111111110111000000000000010101000000000010101011111111111001101000000001011000111111111110001011111111101100111000000000011100011111111100110011111111111100000" "1100100001111111101110011111111111110100111111111010010010000000000101001000000000011100000000000000110000000000000001100111111111100011100000000100101110000000000011101000000001011011000000000001011101111111111000010111111111101011100000000010110000000000000001011000000000001000100000000001110100000000000100010" "0100011100000000001010110000000001000101000000000101011110000000000100011111111111111111111111111011001011111111111111110111111111001101111111111011001101111111110100110000000000011101011111111011001101111111101111101111111111110000111111111101110110000000010110001111111111110101100000000001010100000000000011000" "1100110000000000001001100000000000001111000000000100101010000000001111100111111110111011111111111111101111111111110101111111111111101001011111111010110100000000001010111111111111111010011111111110001111111111110110011000000000000110011111111101111100000000010111111111111111101001000000000101110110000000001000011" "1101100101111111111101110000000000111101000000000001110100000000001100010111111111101100000000000000101011111111110011111000000001000011111111111110001101111111110001101111111111010110000000000001100000000000010001111000000001000001100000000010000001111111110101111111111111100001100000000001100101111111111100111" "0011011111111111110100010111111110111110011111111100011001111111110100000000000000011111000000000010101101111111111100101000000000111001011111111111001100000000001001101000000000000111011111111100011001111111101111000111111111110101100000000001010110000000000011110111111110000000011111111100011100000000001010010" "1111100111111111111011010000000000100111000000000010000101111111111001011111111111000010011111111110100010000000010001000000000000011110100000000011001010000000001110101111111111011011011111111111100000000000000000100000000000010111000000000100001100000000001100111000000000000110011111111101100100000000001011111" "0010101100000000001110000111111111110000111111111001101111111111110000001111111111110010000000000010011100000000001100101000000000100110100000000101011011111111110100110111111111110100000000000000100001111111110111001000000001011000100000000100011101111111111011111111111111001001011111111110000111111111110111100" "1100010111111111111110000000000000111110000000000010000000000000000110011111111111100110111111111100101001111111110101000111111110111010000000000001101011111111111110101111111111001010011111111100111110000000001001010000000000010110000000000001011000000000001100001000000001000011011111111111101000000000000011101" "0010101001111111110100011000000000101010111111111101001000000000000100010111111110110010111111111111001101111111111101100111111111011001011111111110001100000000000000001000000000101111111111111101100111111111110011010111111110111000100000000001101100000000000001001111111111111111000000000001101110000000001111100" "0011111000000000001110100111111110111111011111111111010010000000001010100111111111011101100000000100110111111111111000010000000001001011100000000011000001111111110011011000000000110100100000000001100101111111110011100000000001011001100000000110011000000000001010111111111111010100100000000010000101111111101111111" "1111010111111111101111000000000001100010100000000010011110000000000111110111111111111000011111111000110101111111110111111111111111110011111111111100001001111111111110110111111111100000111111111100001000000000000110110000000000000001011111111111000100000000001000001000000000011001000000000010011001111111111110010" "1011101010000000000011111000000000000101111111111001111101111111101101011000000001000111000000000101100000000000001001010000000000110100100000000110011011111111111101011000000000010111100000000011011111111111110000111000000000110010000000000111000000000000000110011111111111110000011111111100111010000000001001111" "1111001101111111110001001000000000100001000000000110100100000000010111011111111111100101011111111101101110000000000010111111111110100001111111111000110010000000000111000111111110111110000000000100001000000000000100100111111111101001111111111100110110000000001101010000000001010100100000000011000011111111110110000" "1110000001111111110000100000000000011011011111111110110011111111111110111000000000010100011111111011110111111111110111110000000000100100111111111111000001111111110010101111111111011100011111111111100110000000000000100000000000110111011111111011110010000000010000011000000001000101111111111110011000000000001001010" "0000011100000000001001010000000000101110011111111010010001111111110001000111111111111110000000000010110001111111101111110111111111111000000000000011000111111111110001100000000000011110000000000010111110000000000010100000000001001010000000000011000101111111101101110000000000010100000000000001011011111111111111110" "1111101100000000000101100000000001001000011111111111100101111111110111001111111111111111111111111111100100000000010000001111111111001111111111111101000001111111111001100111111111100000111111111110100000000000001101001111111111110000111111111011101010000000000110011000000001001110100000000001100010000000000101100" "1100000110000000010001010000000000001100011111111100010110000000000000001000000000101010000000000010110001111111111011000000000000010011011111111011111110000000000011111000000000011001100000000011100011111111111011100111111110111011111111111100101101111111110010010000000000110000011111111101110010000000001100001" "1110010100000000000011100000000001001001100000000010111010000000000101101111111111100010011111111111000100000000010000011000000000111110000000000000111110000000000100010000000001000011100000000011111000000000001110110000000000001111100000000100110011111111110100100000000000101111100000000000101011111111110001000" "1110011100000000001011001000000000001000000000000101100001111111111110110111111111010101111111111110100100000000000110100000000000101101000000000001011011111111111101000000000000011000000000000010100111111111111100011000000000101000100000000000001010000000000100110111111111011011000000000001101111111111110000010" "0010101000000000000001000000000000000000111111111111010100000000001110011000000001000001100000000001000101111111110001001111111111110010000000000000100001111111101111011000000001010000100000000001010111111111111101100000000000101011100000000000011100000000001110111000000000001111011111111011101100000000000100010" "1111000000000000001101110111111111011100000000000011111000000000001000110111111111100000011111111100000110000000000100011111111111100001111111111110100001111111110010111000000000100111100000000000010011111111110111000111111111010000111111111100110010000000010010000000000000110101100000000100011101111111111110000" "0001111010000000001110101000000000000101111111111101001000000000001111011111111111011110000000000001100111111111110101111000000000000000100000000010111000000000000000000000000000110010011111111100100000000000001111110111111111011001111111111100001011111111110101110111111111110011111111111110110001111111111110011" "0000110111111111111111101111111111110010000000000000011001111111110010101111111111101010000000000001000010000000001011100111111111100010000000000001111011111111111011011000000000001100111111111101110100000000001010001000000001000101100000000001101001111111111010110111111111101101100000000010100001111111110110101" "0001001011111111101110100111111111110101100000000000010010000000000111000000000000011110011111111111110011111111111011100111111110111101011111111110000100000000001100010111111111101011100000000001010111111111110100100000000000001010111111111101001010000000001010110000000000111100100000000000110111111111111111011" "1101100000000000001011010111111111110000011111111111011000000000010000101000000000101001100000000001110101111111101111011111111111001100011111111100100100000000000101101000000000111011011111111111001000000000001100010111111111110011000000000011000001111111110010110111111111011011011111111100000111111111110110111" "1101001111111111110001001111111111111011011111111010011000000000000001010000000001011000000000000101010010000000000110000000000001101000100000000101111110000000001011011000000001100110011111111100000001111111101110111000000001011111100000000100000100000000000010101111111110011100111111111111110010000000000100110" "0100000110000000000101010111111111011011111111111111001110000000000101001111111111011100100000000010101000000000000000101000000000100101100000000011101001111111111001010000000000100001100000000011001011111111111001001111111111100110000000000100000110000000000011110111111111011010111111111011110001111111110010101" "0001111000000000001101011000000000011001111111111110101100000000001010101000000001000100011111111011110110000000001011001111111111100001000000000011111001111111110101000111111111100011000000000010100101111111111101100111111111101011011111111110110100000000001101001000000000101000100000000010101011111111111101111" "0011110110000000010001011000000000010010011111111110010011111111110000101000000000010011011111111110111100000000001001000000000000101011000000000011110011111111110110010000000000100110111111111011110010000000000010001111111111011000011111111100100010000000001001100000000000001000011111111100010111111111110001100" "0000001110000000001011110000000000001101111111111110101100000000010011011000000000010010111111111100110100000000000100001000000000101101100000000001000111111111110000000111111111100010111111111110001001111111111011110111111111010111111111111111111000000000001110011000000000101001000000000011100001111111110001111" "0000001001111111110010000111111111011001011111111110111010000000000000001111111111111101011111111011001011111111111101001000000000110011000000000001111101111111111001001111111111100111111111111100101111111111110000000000000000001011011111111110110000000000000011010000000000111010100000000010000110000000010000101" "1111000110000000000011100000000000111100000000000010110011111111111100100111111111111101100000000000000100000000001100001111111111010000011111111101010111111111111001000111111111001111000000000000011011111111110001111000000000100001100000000011001011111111111111000111111111010001100000000101100101111111110110110" "0000101100000000001110001111111111011010011111111111010111111111111110000000000000100101000000000101001000000000010000001000000001000111100000000011010001111111110110110111111111110110000000000100001101111111111011011111111111110010100000000010010100000000000001001111111111101100111111111100110100000000001110101" "0001100100000000000101101111111111100111111111111111011000000000000001111000000000101010011111111111000011111111110110001000000000100100100000000000111011111111101111100000000000010010000000000001010101111111110110110000000000111110000000000011001110000000001111010000000000100001011111111101010001111111110101010" "1011101111111111110011001111111111010111100000000001110110000000001000101111111111000001000000000001101010000000001001111000000000000110011111111111000111111111111101110111111111010100111111111011101110000000001100101111111111110000011111111110010111111111110100111111111111101100111111111110100101111111101110000" "1111111001111111101110111000000000100110011111111101101001111111110011000111111111110100111111111110001111111111111110101111111110111011100000000011011000000000001100110000000000010010000000000000101000000000010000000111111111001000111111111111011101111111111111011111111111100010011111111110101100000000000100101" "0010111111111111111100010111111110101000111111111101000011111111110011000000000001110010000000000011101110000000001010001000000001001000000000000100101000000000001101101000000001000010111111111111010001111111110111110000000000110010100000000101100101111111100110000111111110001111011111111111011110000000010000110" "0001011010000000001100101111111111011101100000000000000110000000000000111000000001000011111111111011110101111111110111001000000000001011111111111100011010000000001100101111111111100001011111111110010110000000000111000000000000111011011111111110011110000000001001010111111111100101000000000011001101111111111011010" "0001010111111111111110110000000001010100100000000101111001111111110111000000000000000111111111111111111101111111110010110000000000000111111111111101111100000000001100110111111111111001011111111111000001111111111111010111111111110010000000000000010101111111111010101000000000011011011111111111100101111111111011101" "1101111110000000001010011000000000000010011111111101011011111111111010011000000000111001100000000101000010000000000011110000000000101000100000000000100110000000001001110111111111111111000000000011010001111111111011100000000001110111100000000110011001111111110110010111111111001010100000000000010111111111110100110" "1111000000000000010000100000000001000100100000000000111001111111110100111111111111111100111111111110101111111111110000101000000000110001100000000001101000000000001010101000000000010100100000000010100000000000010001100000000000010000111111111111101010000000000111101000000001010100100000000010100100000000000011111" "1101101010000000000101010111111111111111011111111100011000000000000010000111111111110000011111111110101100000000000100110111111111111011000000000001101101111111110011101000000000101001100000000100001001111111110001110000000001001010111111111101100111111111111111001111111111011001111111111100100011111111110001011" "0001110000000000000001010000000000111100100000000000001001111111111100000000000000000110011111111111010100000000010000111000000000011100000000000000011100000000001101010000000000011000000000000001101111111111110010010000000001001100000000000011001110000000010001111111111111100011000000000101000100000000001100010" "1111011011111111110110000111111111100000100000000000110111111111101101101000000000100110000000000110101100000000000111001000000001100110100000000010100010000000001010011000000000100100011111111101000000000000001001101000000001011100111111111101111101111111111110100000000000000001011111111101110011111111110100101" "1110010111111111110000000000000000000001111111111110110100000000010001001111111110110100111111111011010110000000001010011000000000101010011111111100011011111111111110101111111111111101011111111111111001111111110000101111111111100100011111111100111011111111111110001000000001011010100000000001101011111111111011101" "0001010010000000001101100000000000100100100000000000001111111111111100011000000000010100011111111011010110000000000000001000000000001100111111111110010111111111101101111111111111111001000000000001101001111111110011101111111110110001011111111010011010000000000111010111111111110001000000000100011110000000000011000" "1011100101111111101110101111111110110010011111111110111011111111110001010000000001110001000000000101001001111111110001101000000001011110111111111110011011111111101111101111111111110010000000000011010010000000001000110000000001101011100000000001100011111111110000010111111111101000111111111101100110000000000100110" "1100000101111111110010100111111111110011011111111010101100000000001010010111111111110110000000000001111011111111110000011000000001011101000000000001001011111111110100110000000001101110011111111111110110000000001110010111111111100111100000000100100110000000001010010111111111111100011111111111100010000000000011000" "1011100001111111111110101000000000001011000000000010100000000000001101111000000000000101100000000101110111111111111011001000000000001100000000000011010011111111111111011111111111110101100000000100011000000000000110001111111111010101100000000001100111111111111001010111111111100111000000000000010000000000001110101" "0011011110000000000101111111111111001110111111111100001001111111101110111111111111100101111111111110000000000000001001010000000000101011111111111101100010000000000011001000000001001010100000000011101101111111111110000000000001001111000000000010011000000000001010111000000000000011011111111110011011111111101110101" "1101000011111111111100110000000000010000111111111110110000000000001100010111111111100100111111111001111000000000010000011000000000011001100000000000001010000000001010011111111111100001100000000010001110000000000001000111111110010011011111111100111111111111111010011000000001010010000000000101011111111111110011101" "0000000000000000000110101111111111101111011111111100100010000000000011001000000000011111100000000111000111111111111011010000000000001001000000000010100100000000001110110000000000101100011111111100000000000000000000000000000001101111000000000101101111111111111110110111111110000100111111111101000001111111110001001" "0000110111111111110111000111111110101010111111111110001001111111110101110000000001001011100000000011111101111111111110101000000001011100100000000110001110000000000100010000000000111011100000000011011010000000000000010000000000111111011111111111111101111111111011001111111110010000111111111111011111111111111001110" "1100111011111111111010000000000000110110100000000010001000000000000100000000000000111101111111111100110101111111110010000111111111110111000000000001101110000000010000111000000000101110000000000011111000000000010001000111111111000000100000000000010010000000000010001111111111101110111111111110001001111111110111001" "0001000100000000001001011000000000100101111111111111000010000000010101001111111110110101011111111110111100000000001100001000000000001101111111111111111111111111110100110111111111001010111111111011111101111111110101010000000000010110100000000001000100000000000011101111111111100100100000000000011010000000000101000" "0001010000000000000011010000000000000011100000000010111110000000010000100111111111010100011111111011110011111111111000000111111111111000100000000010111101111111111111100000000000010111011111111100111001111111111100010111111111001110000000000001011110000000001010111111111111111000100000000011001101111111111001101" "0001101101111111111101110000000000000101111111111111101110000000000010000000000000111111000000000001011000000000001010111000000000010010111111111101101011111111110010010000000001001010011111111110111100000000000011011000000000111111011111111110111110000000001110101111111111010010100000000000010000000000000000001" "1110111010000000001001000111111110110110011111111100100111111111111001000000000000111111011111111110010001111111110111110000000000100101000000000000101111111111110101110111111111011110111111111110011000000000000011111111111111100011000000000101100111111111111111111111111111010111000000000011001000000000001000010" "0000001010000000000101100000000000010100111111111011110000000000000010111000000000110101011111111101100000000000000011101000000001001100011111111111100101111111110010110000000000000011100000000011010110000000000011011000000000011110011111111101111001111111101011101000000000111001111111111010101011111111111011101" "1100000011111111111111011111111110011110111111111100001011111111110001101000000001101110100000001000000010000000001011000000000000010000100000000110000110000000001000100000000000010111011111111011101100000000001010111000000001010000000000000100000101111111110001000111111111101011011111111001101001111111101111101" "1101001001111111111111000111111111110110000000000010111100000000010010011111111111101001011111111111011001111111111000001000000000100000111111111011100100000000001000001111111111111010011111111100010000000000000001101000000000010010111111111110110101111111111101111111111111110011000000000011010110000000000100100" "0000010011111111110101001000000000100110100000000111101101111111111010011111111111110101100000000000100000000000001000010111111110011000111111111010110011111111111001101000000000010110011111111111011101111111110011100111111110100110111111111110111001111111111101011000000001001001100000000000010010000000001110101" "0000100111111111110000010000000000101001000000000010011011111111111001100000000000110001000000000000110100000000000101001111111111110001000000000001111111111111111000001111111111011101011111111100001100000000000001111000000000010101100000000100001101111111111111001000000000110110111111111011011110000000001001101" "0001011011111111111100111111111111010101011111111101000010000000000110011111111111100101100000000000100111111111101110011000000000010110011111111110011000000000010000110111111111000111011111111110010111111111111110010000000000110000000000000000101010000000001000110000000000110111100000000100100000000000001001101" "1111011100000000001100100000000000101010100000000000000001111111110100001000000000101010011111111101101010000000000100011111111111001011111111111100010001111111111011010000000000001010100000000001000110000000000001010111111111101010100000000000111010000000000111111000000000000111000000000010100101111111110111101" "0001001111111111111001100000000001000010011111111100101101111111111111000111111111111101011111111100100001111111110110101000000000000101011111111101101100000000001100011111111111111101100000000011100010000000000010100111111111011110111111111100011111111111111110101111111111011010111111111111001000000000000111101" "0010010111111111111001100111111111110100100000000001011100000000001101000000000001000010000000000101110101111111111101000000000000111010000000000011100001111111111001111000000000001101011111111110111010000000010000010000000000010001000000000011001101111111110101000111111111000010011111111111001001111111101111101" "0011100110000000001010011000000000110111111111111110011110000000001100101111111110110011111111111101100001111111110000111111111111001110011111111101000001111111110010111111111111010010100000000001111010000000000011010000000000110001000000000001000000000000010100011000000000011011000000000100101110000000001111101" "0100000000000000000010011111111111101010111111111010110111111111101011000000000000010000011111111110010000000000001111010111111111100101100000000010111111111111111111100000000000010101100000000000000000000000000011011000000001100010000000000011111111111111111000011000000000010010111111111110110010000000001101000" "0000100000000000000111000111111111001110000000000101001000000000001101000111111111111011100000000101001101111111111010111000000000101011011111111100010110000000010000100111111111010100000000000011011010000000000010111000000001000100100000000100001101111111110100101000000000100101100000000011100100000000001010000" "0001111001111111101110100111111111010010100000000001110010000000000010010000000001011011000000000100001010000000000100010000000000000010000000000011001000000000001011100000000000100110100000000000111110000000000011100000000000100100100000000111010101111111101100010111111111011101111111111101100000000000010001101" "0011110001111111101110110000000000101011100000000001100010000000000010010111111110110000011111111110011000000000000101011111111110101110111111111001101100000000000111100000000000000010100000000001101110000000001011100111111111000001011111111111110000000000001000110000000001001010100000000001100001111111110001001" "1101110100000000000101001000000001011101000000000000000011111111111011100111111111110011000000000000100101111111101101111111111110011011111111111011001011111111110001001000000000000101111111111101101000000000001010000111111110110100111111111011110101111111111100111000000001001100100000000101001100000000000011110" "1110011100000000010001000111111111011110000000000001100101111111111011110000000000111100111111111110110111111111111110000111111111011100111111111100001110000000001110010111111111101001011111111011111011111111111010001000000000101110111111111111101101111111110111010000000001000011100000000100011001111111101110000" "0010111110000000010001000000000000111010100000000001101001111111110111010111111110111011000000000010100000000000001101000111111111011011100000000000010101111111111110010000000000111101000000000010011100000000000000110111111111011011011111111100101011111111111110011000000000110100100000000010010000000000001101001" "0000111000000000001000001111111111111000011111111111111110000000000000111111111110101000111111111111011011111111111010001000000000010000100000000000000110000000001001110111111110111110100000000100011010000000001011100000000000010000011111111111111110000000001100110111111111111110100000000100000000000000001000101" "0010010110000000001010010111111111110110100000000011111100000000001011010111111110110101000000000000000010000000001011111111111111011101011111111100100000000000001011011111111111100111111111111011111001111111101111100111111111110111111111111011011110000000010001011000000001011101111111111110111110000000000100011" "1110100111111111110001101000000000001110111111111101000001111111101001010000000001000000000000000110000001111111111011101000000000101011000000000100101010000000001101000000000000101110100000000001011001111111111100111111111111110001000000000101110101111111111100000000000000010011000000000010111100000000000011001" "1111001111111111110101010111111111111100000000000000100000000000001011110111111111000111111111111101100111111111111111011111111111010011011111111011111111111111111001001000000000101010111111111111110001111111110011000111111111010110111111111110001110000000001100010111111110111101000000000010011111111111110000100" "1100010110000000001011110111111111100100111111111110000010000000001010111000000000100011000000000011111101111111110110000111111110111000100000000000001101111111111001011111111111001000100000000011001100000000001110001111111111001010111111111110101100000000010000111111111111000000011111111110000111111111110100101" "1100001000000000001110101000000000011111100000000011001011111111111010010111111111001110011111111011100111111111110111111000000000101001111111111111001000000000001010010111111111000011100000000010110010000000001011001000000000100000011111111011011111111111111110100111111111001010111111111111110110000000001101000" "0010111001111111110111011000000000000111111111111100010100000000001000111000000001010010111111111110111000000000001001001000000000010011100000000100010110000000000010000000000000101111100000000001100101111111101110000000000001010111000000000000111101111111101101001111111110111010000000000000110110000000001110100" "0100010110000000000110011111111110111010011111111100011101111111111001110111111111101111011111111110101011111111111010110000000000111001100000000100100100000000000001100000000001011010111111111101010101111111111110001000000001011100100000000010000101111111111100001111111111000110100000000001011100000000001010000" "0010011001111111111100110111111111010010111111111100110001111111111011000111111111100110011111111101111101111111110101000000000000111101000000000011110111111111110010110000000000001100100000000100010111111111110100111111111110110011111111111011111000000000001000110111111111100111000000000000111000000000001001101" "1110001100000000001110100111111110111110011111111100110100000000000010111111111111110000100000000010001101111111110011110000000001000001100000000001010111111111101111110000000000101001111111111101000100000000010001011111111111101101111111111111000001111111111010001111111111111101011111111011111111111111111100001" "0100001111111111111001010000000000001110100000000011001001111111111010110111111111111111011111111101011101111111110000110111111111011000111111111110000101111111110011110000000000100000100000000100001001111111110000100000000000110111000000000011110011111111111011000111111111010010100000000100100101111111111100111" "1100101001111111101110011000000000000010111111111101001010000000001100011111111111111100111111111111001011111111111100011000000000101010100000000100000110000000010000111000000000111110100000000011111010000000000001011111111111110011111111111111111011111111101101101111111110101011011111111101000001111111110111111" "0001110000000000001000010000000001000001011111111110010101111111101110100000000000101010100000000000101011111111110100011111111111000110000000000001111010000000000111101000000000110110000000000010001101111111110101111000000000000001100000000010010110000000000110010111111110111010011111111101111001111111110010000" "0011111110000000010001000111111111101010011111111101011011111111111010011000000000110010000000000101100011111111101111101000000001011100000000000110010001111111110110010000000000011010111111111111000111111111111011101000000001101010000000000010100001111111100110010111111111000101111111111101110100000000001000111" "0011010001111111111110101111111111111111111111111111011010000000001100010111111111101001111111111011100000000000000010011111111111101111000000000010011000000000001000000111111110111100100000000000010011111111110111110111111111101111000000000000101000000000011001000000000001110010100000000100001011111111101110000" "1101110010000000001010111000000000110111111111111110111110000000000111010000000001000101000000000011011010000000000011110111111111100011011111111100101100000000001101110111111111110011100000000010110000000000001101101111111111001000100000000010111101111111111110101000000000100101100000000000011000000000000101101" "0010010000000000000111000111111111110011111111111111010010000000000101001000000000100000011111111100111110000000001101101111111111111110100000000001011111111111111110010000000000001000011111111110100101111111111101000000000000110000111111111101011001111111110011111000000001010011011111111101100000000000000011001" "0000011010000000000001110111111111110110011111111010110001111111111001100000000000010101000000000001110111111111110001010000000001100010000000000101001101111111101110010111111111100011111111111110011001111111111000010000000001000000100000000101100101111111110100011111111111101011100000000000100111111111110100010" "1110100101111111110110110000000000111110100000000011000001111111101110010000000000111100100000000001100000000000001110111111111111110000111111111100010010000000010001000111111111100010000000000011000101111111110011001000000000100101100000000011110000000000001010111000000000011111011111111100010110000000001011111" "0010101010000000001110101111111111101000000000000001100010000000000010101000000000000010000000000001101100000000001100101111111110110100011111111011101110000000000101010111111110011110011111111110110110000000000000000111111111101101111111111100001100000000001111111000000000000010111111111111011011111111110111100" "1110110000000000000100011111111111001100000000000000000111111111110111011000000000001110100000000110010000000000001111110000000001000011000000000100110101111111111100000000000001000001100000000011001111111111110101010000000001001100100000000000111001111111101100101111111111010101011111111100011111111111111010010" "1111110100000000000110110000000000001100000000000010001110000000011001000111111111111111000000000000101000000000000100010111111110111110111111111101010001111111101101011000000000001101011111111101101111111111101111100111111111001010011111111101101011111111111111100000000000000111100000000100110100000000001010001" "0011001010000000010000000111111111111000100000000010110101111111111011111111111110111101000000000100010011111111110001001111111111000100000000000010011011111111111010011111111111001100100000000010101110000000000001001000000000111000111111111011110010000000000001110111111111000111100000000001000010000000000111010" "0000110110000000000101000111111111100011111111111100111100000000000010101111111111010001000000000010001100000000001111000111111111110010100000000000001111111111111001001000000000001110011111111111010000000000000111110111111111100111011111111111001000000000010001100111111111101111111111111100101101111111111010111" "1101110101111111111111001000000000010010011111111100001111111111110000001000000001010111100000000110110101111111111111010000000000000111100000000010010111111111110011010000000001001101000000000100010101111111111001001000000000000100000000000001010101111111101001000000000000000100111111111110110110000000000100101" "1111100100000000001111000111111110111011100000000000001010000000000000111000000000100001000000000101011111111111110010101000000000111010000000000100001011111111101110111111111111110101100000000000110101111111111101000000000000100101000000000000110001111111101110111000000000000000011111111100101000000000000101110" "1101110111111111101101111000000000110101111111111101001110000000010001010000000000010110000000000100011110000000001011111111111111111000100000000010110011111111110100000111111111100110100000000001011010000000000110001111111111011011011111111100001101111111101111001000000000110001000000000011011111111111110010111" "1110011000000000000110011000000000100000000000000100111110000000011010100111111110000100011111111000001110000000001010101111111111101011111111111001110011111111111110001000000000001000000000000011101110000000001011101111111110001111011111111001111100000000001010010000000001001000011111111111110001111111111110100" "1011101111111111101011101000000000100010000000000010111110000000011101100111111110110000011111111011100001111111110101111000000000010011011111111000110010000000000110101111111110101101000000000011111111111111110011100111111111000110111111111000110100000000000011110000000000110000000000000110000110000000000100010" "0000101000000000001111000111111111110011111111111101111010000000001000001000000000101100011111111101111111111111111010011000000000001111100000000000100111111111111000111000000000100010011111111101100111111111110101111000000000110001000000000000011100000000001011011000000000010100111111111100110101111111111010101" "1101101000000000001101001111111111110110000000000001000000000000000110010111111110101010000000000000011111111111110001111111111110100010011111111010110110000000001100010111111110111110011111111100111111111111110110001111111111101111111111111001101010000000011101010000000000011000100000000110100011111111111110010" "0001101101111111101111011000000000010110100000000001100011111111110111100000000000110100011111111100101011111111111111100111111111001100111111111101110000000000001100110000000001000110011111111110000000000000000110010111111111001110000000000011000111111111111010100000000001001011100000000101110010000000000111011" "1101000011111111111011001111111111001100100000000000001101111111101111000111111111111011111111111110111000000000000100101000000000000000100000000010101000000000000100010111111111110010111111111100000101111111111100101111111111100111111111111111111111111111101111100000000000011110100000000000001000000000000000010" "1011110000000000001110010111111110111100011111111101000000000000001111111111111111101111000000000001111001111111110100101000000000111110000000000100010101111111110111100111111111100111000000000000011001111111111100011000000000001010100000000001000011111111110010010000000000100010111111111111100110000000000100000" "0011000001111111111010101111111111010110000000000000111001111111100001010000000000101110000000000010010111111111110011100000000000110010000000000100011100000000000000101000000000000000000000000001101101111111110011010000000000101000100000000010001001111111101000011111111111010110011111111001011001111111111110111" "1110000001111111111111111111111110001110111111111011110111111111100000111000000001110010000000000010000011111111101101101000000001101010000000000111001010000000000110101000000001110101011111111111100010000000000101111000000000001001100000000101101001111111100111000111111111000100011111111101111001111111111011010" "1110111000000000010001011111111111111001011111111111000000000000010001011111111111100000111111111100000100000000000011111111111111011110011111111100101111111111101110000111111111100000111111111110000001111111111001111111111111101000100000000001110010000000000000010000000001000101000000000011010100000000000101110" "0100001100000000001011011000000001011010100000000100110000000000001110110111111111111101011111111100000101111111110110011111111111111011011111111110000111111111110000010000000000001001100000000000111101111111110111001111111110010111111111111100100000000000000010001000000001101010100000000110111000000000001001010" "1011110001111111110010000111111110010010011111111100011010000000000001110000000001100011000000000110100011111111110011101000000000000101000000000010111011111111111011011111111111101001011111111100101101111111111100000000000000101111100000000101110001111111110011010111111111011000011111111011000100000000000110011" "0001101111111111110010000000000000000100100000000000100010000000000000100000000001011010000000000110101110000000001111110000000001011100000000000101010000000000000101111000000001110001011111111101000001111111101110110000000000111111011111111111000101111111110010111111111111000001100000000000101100000000001101001" "1110110100000000000011001000000000101001000000000011111010000000001101010000000000101111011111111110111101111111110111011000000000011000000000000000111101111111111100111000000000101011011111111111100000000000001001110000000001001000100000000010111111111111110010101000000000000101100000000000110011111111110010000" "0000000101111111110011010111111110011010011111111110010111111111110000110000000001110100111111111111101100000000001011001000000000100100100000000101011100000000000001101111111111101111000000000001011010000000001100010000000000011110000000000110110111111111100011001111111111100000111111111011110011111111101110000" "1110101000000000000000110111111111001011000000000000000010000000001011000000000000111110000000000000010000000000000101100000000000001001011111111110010111111111111001001000000000100101111111111110010101111111110001110000000000100010000000000101111111111111110000010000000000000010000000000000101101111111101110101" "1101001101111111111001010000000000000000111111111010111101111111110010111000000001011011100000000100111100000000001100100000000000110101000000000010000011111111110101101000000000110000111111111111000101111111110110001111111111100011100000000110010000000000001011011111111111111111011111111111001100000000010001001" "1100000110000000001111010000000000000111000000000011110000000000000100001111111111000111111111111101100011111111110111000000000000010010011111111111001100000000001101100000000000110101111111111110101110000000000111010000000000100001000000000010100000000000001100000111111111011111111111111101011011111111110000111" "0001100000000000010000001111111111010101100000000100011010000000001101101000000001000000000000000100001001111111101110111000000000101000011111111100000101111111111011010111111111100100100000000000111011111111110001101000000001000010111111111011100011111111111000010111111110111010100000000000010101111111110101011" "1110101010000000000110010000000000000101000000000010111100000000000101101000000000111000111111111110111000000000001101110000000001000100000000000001100111111111110011001111111111011111000000000000111011111111110100011111111111110110000000000000100010000000001001111111111111111110011111111101110101111111111000100" "1101111011111111110101000000000001000110100000000101000000000000001111111000000000001101100000000000110001111111111100111000000000110000100000000010100110000000001100111000000000010101011111111101000001111111110101010000000000110000100000000101010000000000001101011000000000000111111111111100101011111111110111101" "0001110110000000000011111111111111001100100000000011111111111111101111000000000000001100100000000101100001111111111111001111111111001000000000000000111011111111101110100111111111101100111111111100000000000000001011010000000000011111011111111110101110000000000111111000000000111101100000000010101001111111111100101" "1110011110000000001100110000000000010111111111111011101001111111101100010000000000101100100000000110000101111111110110011000000000000100000000000110001110000000000001000000000000110101111111111111000100000000001000101000000001010111000000000110001011111111111111101111111111010000100000000001101110000000010000011" "1100111010000000000111111000000000111110100000000001111100000000000101001000000000110001100000000010011000000000001110000111111111011010100000000010010100000000001111101111111111100110011111111111111000000000000110100000000001000010100000000100011000000000000000011000000001000001000000000001011111111111110001001" "0010001111111111110101111000000000001101100000000010101101111111111111101111111110111011111111111111000100000000000110101111111111000100000000000011011011111111111011001111111111111110011111111101100100000000000001100111111110111110011111111110000010000000010000001000000000000101100000000001000010000000000100110" "0000010000000000001111000111111111101100111111111100010101111111110111001000000000000110100000000010001000000000010000001000000000010001100000000110100011111111111100101000000001000000111111111111101010000000001100100000000001000001100000000000001100000000000010101111111110010110011111111011100100000000001110010" "1100010101111111111011001000000000100100011111111111101011111111101111111000000000110001000000000101101010000000001110000000000000010001000000000100111110000000000110100111111111100001011111111110111100000000001101010000000000111001100000000100011001111111101001111111111110101111111111111100001010000000010001110" "0001100001111111110110111000000001101111000000000110000000000000001011100000000000000101011111111010111100000000001010101111111111000101111111111010011001111111110111001111111110011011000000000001100100000000000110001000000000000000111111111001010110000000001111010111111111100101100000000100011110000000001110100" "1011100010000000000010001111111111000001100000000001001001111111110100001111111111111000000000000010100110000000000101000111111111111111111111111111010100000000001100101000000000000001000000000100010011111111110100001000000000110011100000000011000100000000001011101000000000010001000000000001011001111111111011100" "1101100110000000010001101000000000111000011111111100010011111111110111011000000000000100000000000011001011111111111110011000000000100110111111111100101000000000000111001000000000110100011111111011100011111111110101011111111110111011000000000000010111111111111111011111111111101010011111111100110010000000001001011" "1101000110000000001001011111111111101100111111111101001011111111110101110111111111000110111111111111000001111111110011111111111111001001111111111110100011111111111011000000000000011100100000000100011001111111110011001000000000101011011111111101111011111111111101100000000000111000111111111111010010000000000000001" "0011110101111111111110011000000001000000000000000000111010000000010010001000000000101001011111111011111100000000000111111000000000000111011111111101100001111111111100011111111110110101011111111101011010000000000110010111111111010010000000000010111101111111111111110000000001010110000000000001111011111111111101111" "0010101111111111110111101000000000101101000000000010100101111111110000111111111111101101111111111110110101111111110111000000000000111001000000000001111101111111101110111000000000010010000000000011000001111111111110011000000000111011100000000000101101111111111101100111111110111000111111111011101000000000010001100" "0010001000000000000101010000000000000010000000000000011111111111111010100111111111110100111111111101101110000000000111011111111111000001100000000001011010000000000100011000000000110011011111111110010010000000001111111000000000111100100000000000001110000000001101101111111111011011111111111111001000000000001001101" "1101000011111111111011000000000000010101100000000011110001111111111110110000000001000111111111111110110110000000000010101111111111001000100000000000001001111111101110010000000000010011100000000011111111111111110000100000000000110110000000000011010000000000010001101000000000000010100000000100010010000000000011001" "0010110111111111111000010000000000001011000000000011110010000000001111100000000000101010011111111110010011111111110000100000000000101110011111111101101111111111111100011111111111101011000000000000100100000000000010100000000000001000111111111100011111111111111010001000000000100100100000000101011001111111111100110" "1100011100000000000101100111111111100011111111111011111011111111110011100111111111110011100000000001011010000000001110011111111111100010000000000010111101111111110110010111111111010100111111111011111000000000001011010000000000010100111111111100001000000000000100000111111111111001011111111101101110000000001011000" "1101011110000000000001101000000000111011000000000000011110000000001110010000000000110101011111111100010111111111101110010000000000110011011111111101011011111111110000101111111111101110011111111011011100000000001010101111111111000100000000000011100111111111111010000000000000000100111111111101110110000000001111100" "1111100010000000001011000000000001100011000000000011111000000000000110001000000000100001100000000001010111111111110101010111111111101110011111111111101001111111110110010000000000100010111111111101010011111111111001110000000000100111011111111101010100000000011000110000000001011010000000000001110010000000001101001" "1100101011111111101101011000000000101100100000000100110101111111110110110000000000011100000000000010100000000000000010110111111111011000011111111100110111111111111110011111111111001100000000000001100100000000001101000000000000011111011111111100100001111111110011101000000001001000100000000100100011111111110010110" "0000110000000000000001100111111111111100011111111100010101111111101100011000000000011101100000000011000010000000001100000111111111011100000000000001000011111111111011000111111111101000000000000000010110000000001010100000000000011010011111111101101010000000001100101111111111111111111111111101100010000000000011000" "1110001110000000000000010111111110100100011111111101000111111111101001000000000000111100011111111111111011111111111001011000000001100000011111111110010100000000001011001000000000010011111111111111110111111111110100001111111111101011000000000110001011111111110001101000000000111000000000000001001101111111110101001" "1101111001111111111000011111111111100001100000000001111100000000000000101000000000110101000000000000001000000000001100001111111111100111000000000001000010000000000000101000000000100110111111111110001001111111101110000111111111110011100000000011010011111111110110111111111111000010111111111100111011111111111110010" "1111000110000000000010000111111111010111111111111011011011111111101000101000000000010111111111111111111011111111101110100000000000110010000000000101011101111111110010100000000001010001000000000011100011111111111110001000000000010011100000000100001001111111111011011111111110110010011111111001011101111111110011111" "0010100001111111111100001111111111100001100000000010011011111111111001001111111111101011100000000000010010000000000111110111111111100000000000000000001010000000001011111000000000101111111111111100000001111111110100001111111111110101100000000010000000000000001110101111111111100011000000000010100101111111110010010" "1011011000000000001111100111111111001101100000000011100101111111111011111000000000000000100000000010111001111111111101110111111111101000100000000001011010000000001101001000000001000110100000000011010111111111110001011111111111111001011111111111001110000000000001010000000000011110000000000001110110000000001011011" "1111010011111111111101111111111111100100000000000101101101111111110110110111111111010000111111111100101111111111110110000111111111011100011111111111110110000000001010000111111111001010100000000001010111111111110000000111111111001011011111111011010010000000010110011000000001010110100000000100111010000000000011101" "1110111001111111111001100000000000101100000000000000011001111111111111100111111110101100111111111001010100000000001011011111111111111000100000000001110101111111101110001000000000100000000000000000010010000000000000111111111110110001000000000000101100000000011101110111111111101101000000000101100101111111101110110" "0100000001111111111011100111111111101101111111111100001100000000000010000111111111000001011111111111101111111111111000001000000000001110111111111111011101111111110001100111111111011000011111111110001111111111110001010000000000001101111111111110100111111111111110111111111111000100011111111110101111111111111011011" "1110110100000000001100010111111111011101000000000000001111111111101111110000000000010011100000000010111011111111111010100000000001101111000000000100010000000000001110101000000001011100111111111100111111111111111001000000000001000100100000000000101101111111111001100111111111011100011111111111000111111111110100001" "1100000000000000001100010000000000000101000000000000011010000000001001001000000000011010011111111101010110000000001101101111111111000000100000000001000000000000000100110111111111100100000000000001111001111111110000011111111111100110111111111011011110000000011000110111111111110100000000000011111001111111111001000" "1011111100000000000100110000000000000110100000000011000000000000000001010000000000100110100000000011001111111111111000011000000001100000100000000001100000000000001011000000000000110101100000000011110101111111110001001000000000101001000000000000101000000000000000000000000000101100111111111101011000000000000000011" "1101000001111111111110100111111111111001111111111100100111111111101100000000000001010100100000000101111110000000001011110000000000110101011111111101010100000000001101110000000001100001111111111011010100000000001110010000000000010100011111111111110111111111110100111000000000101110011111111100000011111111111001111" "1110110111111111110011001000000001000100000000000011100110000000000010111000000000110011011111111101111111111111111010010111111111011010100000000000110111111111111000010000000000001001011111111100001111111111110111011000000000110101011111111100011101111111110010101111111111110111000000000011110100000000000001110" "1101001000000000000100111111111111001111000000000000011001111111110001101000000000111111100000000100000111111111110000000000000001001111111111111110100101111111110100111000000000111110011111111100110101111111111101001111111111001000100000000000101010000000000011011000000000011100011111111110100110000000001000110" "0011111000000000000011100111111111010001011111111110111010000000000011111000000000010100011111111101111101111111110111111000000001001000100000000011101110000000000010100000000000110001111111111011101001111111110111101000000000010111100000000001010000000000000000111000000000001010000000000000001011111111110101000" "0000110001111111101101110111111111111100100000000110100111111111111110101111111110110100111111111010110001111111110000011111111110000110000000000000010000000000001101110111111111100011100000000001011110000000001111111111111110010110111111111011101110000000011111011000000000000111100000000101111101111111101110110" "1011111010000000001000111000000000111001000000000011111101111111111101001111111111001010100000000001100110000000001100000000000000011011111111111101111000000000000011001000000001000100100000000000111101111111110010001000000000111010000000000011111000000000000111001111111111110000000000000001011100000000001011001" "1110010010000000001100100000000001111110000000000111110000000000011001001111111111110011111111111001111010000000001100110111111111111010100000000001000010000000001110100111111111000110111111111110001101111111101110000111111111110010100000000000001110000000000010101000000001001000100000000111111011111111111000010" "0011101101111111110101000111111110100010000000000010101011111111101001110111111111110101100000000110100011111111110011011000000000110001111111111111010011111111110001000000000001010001111111111101000110000000000100000000000000110111100000000100100010000000000111010111111111001010100000000000001000000000000110101" "1111011011111111111001000000000000000000111111111100001100000000001010001000000000001010111111111110010000000000010001110000000000111100111111111111010111111111111100100111111111000110111111111011100111111111101110001111111111001000111111111101101000000000001011101111111111011011111111111111110111111111110100110" "0100011110000000001101011000000000000111100000000000010101111111110010011000000000110111100000000011000010000000001001001111111111010000011111111100111111111111110011000111111111001100100000000001101000000000001010101111111111100001100000000010100010000000000100101111111111010100100000000100000000000000010001000" "0000000100000000010000001000000000101101011111111111110001111111110111101000000000110011000000000100101011111111110101100000000001010110000000000010100101111111110110001000000000000101100000000101010111111111111101010000000000110101000000000010001101111111110000000000000000101000111111111110011000000000001111110" "1110011110000000010000110000000000000010111111111101011100000000010101001111111110101011100000000001111110000000001010101111111111011101000000000000100000000000000010000111111110100101111111111100000001111111111101100111111111101010000000000001011110000000011000111000000000001110100000000011011011111111110110101" "1110011001111111110110101000000001101111100000000110100001111111100111010111111111110011100000000110101011111111101111110000000001010001111111111110110100000000001100001000000001010000000000000011001101111111111101000000000000110100100000000001011011111111101011111000000001100001011111111110100100000000011011001" "0001111001111111111100100111111111110101111111111110100011111111111111010000000001000000000000000011010000000000000001101111111111101001100000000001100101111111110010011000000000100010100000000011000101111111110011001111111111110101100000000000110110000000001111011111111111101000111111111011110110000000000000111" "1101110110000000001111001111111110010110100000000010000101111111111011100111111111110011111111111011101100000000000001110111111111001001011111111111010111111111111111111111111111010010111111111101110111111111110001100111111110110001000000000000111100000000001111111111111110110010111111111111000000000000000001100" "0011110110000000001111001000000000111000100000000010011100000000001101110000000000011111111111111101000010000000001011010111111111101111111111111100111101111111110111010000000001011000000000000100100100000000010011010111111111100011011111111100110110000000001010111111111111011001111111111101010110000000000111001" "0001101100000000000111100000000000000000011111111101110011111111111100100111111111111011000000000000111000000000001111110000000000001100000000000010100111111111111010100000000000010010111111111011110101111111110111110000000000101100111111111111111010000000010000111111111111000001111111111111000101111111111010100" "0000111010000000001001000000000000000001111111111111110001111111101000001000000000000000100000000001111011111111111010110000000001101111100000000100101110000000001000000000000000001000111111111101101100000000010010000000000001011100011111111011100111111111101111100000000000100010011111111100010010000000001100000" "0010100111111111111100111111111111000101111111111111110011111111111010001000000000010000011111111001111110000000010000110111111111001011011111111111110000000000001001111111111111000010100000000000110011111111111001000111111111001011100000000011110110000000000010101111111111111010011111111100101001111111110001001" "1110111110000000000111000000000000110101000000000011101101111111101011001111111111101101000000000010110010000000000000010111111111110101000000000010101111111111110111110000000001000100100000000110010100000000010001011000000000000100111111111011000100000000000010110111111111111100100000000000110000000000001000001" "1100100110000000000010100000000000111001100000000011100100000000000111100000000000100011000000000010111000000000001100001000000000000001111111111110010000000000010000001000000000110011100000000100011000000000000011001111111111100110111111111110111011111111111100100000000000111111100000000011001000000000010001110" "1101101110000000001100101000000000001111111111111111010010000000000110010000000001010000000000000100000010000000000101000000000000001100111111111110000110000000001001000111111111100011000000000011010110000000000101111000000001000100111111111101110110000000010100010111111111110101011111111011101000000000000000001" "0011000000000000000001011000000001101110100000000010100111111111111010000000000001000111000000000011010000000000000111000000000001000111111111111101110111111111101110000000000001000001100000000001010010000000010100011000000000101011111111111101100111111111111000111000000001001010000000000001100110000000010101110" "1100010011111111110011100111111111011010111111111110101000000000011001010111111110110111000000000001010110000000010110011000000000010011100000000001001110000000000001001111111110011110011111111011101011111111101100010111111110111111000000000111011000000000000101110111111111110011111111111101001111111111101111101" "1011101010000000001010111000000001101101011111111111100100000000000011001000000000100110100000000110001011111111111010110000000000010110100000000110000001111111110000000000000001110000100000000011000000000000010110110000000000000000011111111010001101111111100101101000000001000101111111111110111110000000001001001" "1101100111111111111000000111111111100010111111111111101010000000011000000111111111111011111111111101100010000000000100010111111110011011111111111011011000000000000000101111111110011011111111111010011011111111111011011111111111001000100000000010110100000000010001100111111110101100111111111110000101111111111101101" "0011000011111111110100000111111111011101000000000101000011111111110100100000000001000111000000000011100100000000000100110000000000001001111111111111111111111111110001010000000000111111111111111100000000000000001000100000000000100011100000000010110101111111110111000111111111001111100000000000001010000000010000110" "0001010001111111110110100000000000001010111111111110101001111111111001001111111111111001111111111011111100000000010010111111111110111101100000000001001010000000000011110111111111001111100000000010101111111111110101100000000000101100100000000100011001111111110110010000000000000011111111111110100110000000000000110" "1011100101111111110110100000000000110100000000000111100111111111101010011111111111110010100000000111100111111111110111100000000001010000000000000100000010000000001110100000000000100001100000000010011100000000001010110000000000001000011111111000011101111111110001001000000000100011011111111111110010000000000100111" "1110010100000000000111001111111111001001111111111100111111111111111011010000000000101001011111111110010000000000000111110000000000110010011111111101000100000000000101011111111111111010011111111101110001111111111101000000000000010000011111111100001101111111110110100111111111000111011111111100000010000000000000101" "1111100110000000000010000111111111111000111111111110000111111111111110110111111101111111000000000000000100000000001111011111111111001011011111111010111101111111111001011111111111110101011111111011100111111111110001111111111111011100100000000110110110000000001001101111111111010100111111111111011001111111101101101" "0001100011111111110011111000000000001101100000000000100000000000001100001000000000001010000000000011110011111111111101101111111111100111000000000001101010000000001110110111111111000110111111111101100011111111111011111111111111011111111111111011100110000000000011001111111111001011011111111101110010000000010000001" "0001000011111111111100100111111111101011111111111110111001111111110110010000000000011111100000000001111010000000010001000111111111100110111111111110010001111111110010101111111111001000100000000010001011111111111010010111111111001000100000000011000110000000001100000111111111011000111111111101110111111111111000000" "1100000000000000000110100000000000111000111111111100101011111111110100101111111111000011100000000010111000000000001001111000000000000110111111111110011010000000001000110000000000001101100000000011101001111111101111100000000000000111000000000000110000000000000110101000000000001110100000000001110110000000001110111" "1100001000000000000101010111111111001111100000000001100010000000010111001111111111011101100000000001100100000000001010101111111110100100111111111100000010000000001001010111111110111010011111111110110001111111111110001111111110011011000000000100011000000000000001101111111110110000111111111110111100000000000000111" "0011010011111111110010001000000000000010000000000001101100000000000110100000000000110100011111111111011111111111110111100111111111110011000000000011010110000000001010100000000000100101111111111110101010000000010010001000000000111101100000000011011000000000010000001000000000100010000000000011111011111111110110010" "1100000011111111110000111111111111110101111111111100101010000000010010000111111111101001100000000011000001111111111101001111111111011000100000000011100010000000001010100000000001000001011111111101111111111111110110101000000000001100000000000000011010000000010000101000000000101000011111111110101100000000001100000" "1110000110000000000001100000000001011010000000000011101010000000001101111000000001010111100000000000011001111111101111011000000000111000111111111110110011111111110111011000000000100011111111111101011100000000001101000000000000101001111111111110001101111111111101010000000000001000011111111111010010000000010011010" "1011110011111111111100101111111111010110100000000010110001111111101111100111111111101001011111111110111011111111111011001111111111101011000000000011000100000000001000010000000000100011011111111111000001111111110111110000000000100100011111111111010100000000000100100000000000111010000000000010001100000000001101011" "1101010010000000001000110111111111010011100000000100001110000000001101110111111111101111111111111111000001111111110000001000000000111010000000000010110111111111110101001000000000110101100000000011100001111111111110101000000001000000100000000100011110000000000001101000000000000111000000000010000011111111111100111" "1100011111111111111000011000000000000100111111111111001111111111110011010111111111110011100000000010111011111111111010010000000000001010100000000010100111111111110010011000000001001111000000000110010100000000001101100000000001011011111111111011101001111111110010111111111111110110011111111111110000000000010010110" "1111011110000000000110001000000001000011100000000110000010000000000000110000000001001010000000000101010001111111101100001000000001011010000000000011011010000000000110011000000000000110000000000001011100000000000111011000000001110001111111111010011101111111101010000000000001000111100000000001000000000000010011000" "1011110100000000000111010000000000101000011111111110001111111111101101100000000000101101100000000010000001111111111100001000000001011001100000000100101111111111111110010000000001000000000000000011101110000000001110000000000001001110000000000001111111111111101110111000000001001010100000000010111110000000001101010" "0010011101111111101101111000000000001111000000000011100001111111111010011000000000010100011111111101000110000000000110000000000000011010100000000011110100000000000101101000000001000000111111111111010101111111110100001111111111001111011111111111101110000000001010001111111111010001000000000100010010000000001010100" "1100101001111111111111110000000001001110100000000100011010000000001001100000000001001010000000000010001111111111111111000000000000001101011111111110110010000000000110010000000001011110000000000010110000000000010000010000000000011011111111111111011111111111110101111000000000011010111111111100001110000000011001101" "1100010110000000000000111000000001000000000000000001000101111111111010000000000001000000000000000000000111111111101000010111111111110010100000000101001000000000000011001000000000100100111111111111111000000000000111000000000000011000111111111110010111111111101110011000000001011101000000000001101000000000000110101" "0010100101111111111100011000000000011110011111111110100011111111110011100111111111110010111111111110011110000000000010001000000000101101000000000000000001111111101110101111111111111100100000000001110010000000001010101111111111100001011111111010100110000000000111011000000000000000011111111101101000000000001101101" "1110111001111111111101010111111110100100011111111101011110000000010000010000000000001111100000000010001000000000010110100111111111110110000000000010011101111111101111011111111110101100011111111101011111111111101111011111111110101000000000000001011100000000001100010111111110111111011111111100010001111111110101110" "0011000010000000001101111000000000010001011111111110111100000000010000000111111111001011111111111010100100000000000011000000000000011110011111111110111001111111110101011000000000001100111111111111100011111111111111000000000000011101000000000011000000000000010110000111111111011101011111111101101111111111111100011" "1111110001111111111100100111111111100110100000000100000000000000001101101000000000001011000000000000110111111111110010001111111111111010100000000010111100000000000000110000000000010101100000000000100010000000000100111000000000101110100000000000100100000000010000101000000000010111111111111110001000000000010000110" "1111101100000000001000011000000000100000100000000101111011111111110001000000000000101000111111111111001001111111110000101000000000011101100000000001110000000000000111000000000000111101000000000001100000000000011000110000000000011000011111111110100011111111111110100000000000011010111111111110011110000000010001100" "0011110100000000000000001000000000100110111111111110011100000000000001011111111111001110011111111100001010000000000001100111111111110001100000000011111111111111110111001111111111001100000000000010011110000000000010100000000000010111100000000011100000000000000110011111111111110110111111111101011110000000010000011" "1011100100000000000101100000000001011000000000000000111011111111101110100000000001011100000000000011001101111111100101010000000001001100000000000010010000000000000000010000000001010010100000000101101110000000000001010000000000010111011111111101010111111111101100110000000001011010111111111100001100000000011010100" "0011100001111111110100111000000000010001000000000010101110000000011001101111111111001000011111111011000110000000011010100111111111011011011111111101111001111111110110101111111110110010011111111101110011111111110000000111111110110110000000000000100111111111111000010111111110111101111111111100111011111111111001011" "1110100111111111111001011111111111010100011111111111000100000000010010000000000000111001111111111111010110000000000001101111111111110011111111111011101111111111111110000000000000000101000000000011000011111111110100111111111110111110000000000101011101111111111101010000000000100001011111111100010100000000000101100" "0001100111111111101111101000000001001011100000000011010100000000000001100111111111100010000000000011110101111111110101111000000000101111100000000100001101111111110001010000000000101011100000000001010010000000010100001000000001000110011111111110100101111111110100110111111111101111011111111011110101111111111101001" "0001100100000000001001111111111110011111111111111111100110000000001011000111111111100110111111111010101010000000001100011111111110000010111111111001011100000000000100011111111110100000000000000001011101111111101110101111111111010100000000000001100010000000000000100111111111011111100000000100011001111111100011101" "1101011000000000001110110000000001101010011111111111010011111111101111110000000001100111000000000010100100000000000110010000000001101110011111111111011011111111101111110000000001001111000000000100101001111111111101110000000000011111000000000000101011111111110111011000000001011011100000000100010000000000000110111" "1011111000000000001010100111111110101001000000000011111000000000011110110111111111001101111111111100010111111111111101101111111111101110011111111001100010000000000111111111111111100000011111111100011001111111101110010111111111101010000000000001100101111111111100100111111111111010011111111100100001111111111011111" "0001111100000000000111000111111111101101100000000100001110000000000011101111111111110101111111111110011011111111101111001000000000110110111111111110011000000000010000011000000000110001011111111101010001111111110010000000000000000101011111111111101001111111110000101111111110111001111111111100000001111111101111000" "1110011101111111110101000111111111110101100000000000000110000000001011011000000001011101111111111111101001111111101011011000000001101100000000000100100111111111110111001000000000000001111111111111000100000000001010011000000000010001000000000010100000000000000111001000000000001111000000000011100110000000000000111" "1101111101111111110000000111111110101010111111111101110110000000010111100111111111011000100000000010101110000000000100101000000000110010100000000011001010000000001110011111111111000011000000000001101101111111111000101111111111010000100000000011111110000000001101010111111111111111011111111101001000000000000000101" "0001011001111111111110110000000000101110111111111101110100000000000000100000000000101101011111111110010100000000001111100000000000101010111111111110000001111111110011010111111111100101011111111110101110000000001111011000000000000001100000000001101001111111110000001000000000111110111111111101100110000000000000010" "0000100011111111110001100111111111101101100000000000001100000000001011100111111111010011000000000000101111111111111001100111111111011101100000000100001110000000000111010000000000111001100000000010001110000000010100101000000000101111000000000001110010000000000110011000000001010110011111111101010001111111110111001" "0011011100000000000101110111111111100110000000000011110100000000001101100000000000111111011111111111111000000000000010101111111111001001000000000001100011111111110100001000000000010111111111111111010101111111110000101000000001001001111111111111011110000000010010010000000001001010111111111101000110000000001000100" "1101010101111111111100010111111111111111100000000011010011111111110111101000000001001000111111111110010111111111111000100000000001011011111111111110010000000000010001001111111111111000000000000001110100000000001111111000000001011011111111111011111011111111111000110000000000111100100000000011110110000000000010101" "0010111000000000001001011000000000101011100000000100011011111111111001110111111111010010011111111111001100000000001110101000000000001011111111111111010100000000000101100000000000100100011111111100011010000000001010110111111111001001000000000011111001111111111110001111111111001110000000000001101001111111110000100" "0100000001111111111110000111111111101100111111111111011001111111101111000111111111001011111111111100110110000000001101000111111111010011000000000010001111111111111111100000000000110100100000000010101011111111101111101111111111010101011111111101101001111111110100100000000000101101100000000010011111111111111100101" "0001110111111111111100011000000000011000000000000011101001111111110001000000000000000101011111111101110011111111110111001000000000101001100000000001000001111111110101101000000000111100000000000001100011111111110001011000000000100011111111111110010000000000001001001111111111101010100000000000111000000000001011111" "0010001110000000000110111111111111000010000000000100010011111111111011011111111111000011100000000000010111111111110000101111111111101101011111111111111010000000010001110000000000101110000000000010100010000000010001111111111111111111100000000001110100000000000011110111111111011010100000000000000110000000001111000" "0000011010000000001011101111111111001010011111111101110101111111101111000000000000011100011111111011111000000000000010110000000000100100100000000000110101111111111111000000000000101111111111111111010010000000001011100111111111001011100000000010100000000000001101110111111111110000011111111111001100000000001001101" "1100010100000000001010010000000000010000100000000001100001111111101100011000000001110011100000000101000101111111110101001000000001101010000000000001100111111111111110010000000001101110100000000101110111111111111110100000000000010010011111111001000010000000001000101000000000010000011111111011101010000000010011001" "1100101110000000000010000000000000110000100000000100000000000000000101001000000000010111100000000001100001111111110101110111111111001110111111111100100010000000001110101000000000100000011111111101110100000000000111000000000000000010011111111101010111111111111101011111111111011110100000000010010101111111111011010" "0100000100000000000011011111111111010000111111111100111110000000000101100000000000101010111111111100110101111111110011110000000000100111111111111110000000000000000101100111111110111001000000000001011110000000001000101000000000101101011111111110001011111111101111101000000001000011011111111101000101111111111111110" "0011101101111111110100001111111111000010011111111110100000000000000101001000000000100000011111111111000111111111111010001000000000001100111111111011110011111111110000001111111111101001100000000010101001111111110001010000000000000101000000000011000010000000000001110111111111110100011111111011111001111111111000100" "0001100001111111111110100000000000000100000000000000011100000000010011101000000000110010111111111111101010000000000001011000000000011110111111111110001001111111110000010000000000100100100000000000000001111111110001100111111111110011111111111110111110000000000100100111111111011010000000000001100011111111111010000" "1110111100000000000101101111111111000111100000000101101110000000000011011111111111001001000000000010010011111111111001100111111110110010000000000001011011111111110100100111111111111000000000000001011011111111110011101000000000011001000000000101001001111111111000100111111110111010011111111100001011111111111111010" "1101011101111111111110010111111111100100011111111110111000000000000011010000000000001011000000000100000000000000001010111000000000010001011111111100000011111111110000101111111111110011000000000010001001111111110110100111111111111010000000000101100111111111111000000111111111001111000000000000101010000000000100010" "0011110011111111111111100000000000010011011111111110101011111111101101111000000000111011111111111101100110000000001010101000000001011101100000000010001000000000000101100000000000000100011111111111010010000000010010010000000000110000100000000010010000000000001100100000000001001100111111111110100010000000001110110" "0000111000000000001010101000000000011111111111111011111011111111111010000111111111001101100000000001001011111111111101001000000000001111011111111110101010000000000001010000000001000110011111111111101000000000001100111000000000001111000000000010110001111111111010001111111111101111000000000001001100000000001111010" "0011001111111111111011100000000000011011011111111111111110000000001100001111111111001111000000000010000110000000000101001000000000010000011111111100010011111111110100100111111110111010000000000010001111111111110111111111111111110111011111111100101101111111110110000000000000011100000000000000100001111111111000000" "1111000010000000000110010111111110110111111111111011101111111111110111010000000000010001100000000000011010000000000100011000000000010101100000000010111010000000001100101111111111000010000000000001111000000000010000100111111111000000111111111111011010000000010001110000000000110011011111111011110101111111111101101" "0010100111111111110010110000000001011011100000000010010100000000000111001000000000101100000000000100000011111111101001111000000000100010100000000101001001111111101111011000000001100110000000000110001010000000001010100000000001101110011111111011000101111111101010100000000001010010000000000011001111111111111111101" "0010010101111111111111010111111111011010000000000011010001111111110011110000000000001111011111111101011100000000000011011000000000100010000000000010001011111111110000000000000000000010011111111011101110000000001101001000000000111000011111111011101000000000000011011000000000011000000000000000100001111111111000001" "1011110101111111101111000111111110101110100000000001011010000000010100011111111111011110011111111011011010000000001101011000000000100001000000000010100101111111111101000000000000100110011111111101010011111111111011001000000000110110000000000001000100000000011000001000000000000100011111111110011111111111101100101" "1101101001111111111011101000000000100110100000000101011011111111111010110000000000001011000000001000000011111111111000010000000000001011011111111110110010000000000011101000000000100001000000000000000010000000000011000000000000110101011111111011000010000000000100101000000001010100011111111101010011111111111111010" "1100010101111111111000110000000000000000011111111101110011111111110010101000000000001001100000000001010100000000000111010000000000000101111111111101011001111111111011010000000000101111011111111101001000000000000001011111111111100000111111111110011000000000000100010000000001000101111111111110100100000000000111011" "1111110110000000000100010000000000101000111111111110000111111111101110111000000000000100000000000011101101111111110110011000000001011110011111111110010001111111110011011000000001010110100000000100100011111111110110100000000000101001011111111011100111111111111111010000000001011110111111111110000110000000001101001" "1101101011111111110000100000000000100100011111111101101100000000000110100000000001000100100000000010010011111111111011101000000000100110111111111101101101111111110100101111111110111110100000000000111111111111110100101000000000011011000000000000001110000000010101010000000001010110000000000001101100000000010100110" "1110011010000000000111001000000001011010100000000100001101111111111010011000000001100011100000000101101001111111111001100000000001011101000000000001010010000000001111011000000000001110100000000010110101111111111001110000000001001101111111111010101111111111111110000000000001011101100000000001000101111111111110011" "1110111101111111111100001111111111100101111111111111111101111111110110110111111110101001011111111110101011111111111101111111111111000011100000000000110000000000010001110111111110100111011111111011111001111111101001000000000000000011011111111110101110000000000100000000000000110001100000000011100000000000001001010" "0011010100000000000100111111111111011100100000000011111001111111110111011111111110101111000000000000001010000000010101111111111111111101000000000011001101111111101110000111111110110110111111111011000111111111101011000111111110110010111111111110100000000000011000011111111110100110011111111100110101111111111011110" "1111111111111111111010111000000001010000000000000000110110000000000111000000000001101001000000000001101101111111111000111000000000010010000000000010110001111111111000001000000000011000100000000110000100000000000010101000000000011010111111111101011111111111101111101000000001010011011111111110010100000000010000111" "0001010010000000000110011000000000000101000000000110101100000000000110101000000001100011100000000000000111111111111010100000000000110111100000000010101011111111110001010000000000000001011111111101001010000000001101000111111111110100011111111111001010000000000111100000000000011011111111111100111010000000010111000" "0011011101111111101110001111111111110000100000000100100111111111111110101000000000001011000000000000000000000000001011011000000000001100100000000100001011111111110111100000000000110100011111111110110000000000001111110111111111011001011111111111010011111111111011100111111111111001011111111110111110000000001101011" "1111110000000000000110101000000000111011011111111110100011111111110001100000000000101010011111111110100101111111110010111000000000010010100000000001111001111111110011010000000000101110111111111100100110000000000110011000000000000100100000000001001000000000000101011000000000111000000000000010011001111111111011110" "0010001111111111111011100111111111110001011111111111100010000000001111111111111111011001011111111001101100000000000011110000000000011011100000000001000010000000000010100000000000100001011111111100000101111111101010001111111111010001000000000111001010000000000111000111111111110111100000000001111001111111110111011" "1111111010000000001010111000000001001010100000000101110111111111111011011000000001010001000000000111101111111111110100101000000000010010100000000100100010000000010001110000000000110110100000000001000000000000000011001000000000011110011111111000001001111111101110110000000000011000011111111011111001111111111100010" "0010101001111111111110100000000001110000000000000010111001111111100100111000000001011101000000000100010101111111110001100000000001100101111111111111100101111111111011111111111111111000000000000011000101111111111010010000000001001110011111111110000001111111111101010000000001000001111111111101100011111111111111011" "1101111100000000001101000111111111101011000000000011010000000000001111100000000000110100100000000010001100000000001101110000000001001010111111111111000010000000001001101000000000011111011111111111010000000000001010111000000001001000100000000100100010000000001111110111111111100001111111111110110110000000000011010" "1101000010000000001000110111111111100100000000000011010110000000000111011000000000011111000000000011111111111111111110111111111110111000111111111101101001111111110011110000000000101110000000000000000100000000000100010000000000011111111111111101010000000000001001000111111111100011100000000011101101111111111100000" "1111000001111111111110000111111111101001100000000000100110000000000000100111111111100001011111111110101100000000011001010111111110111111011111111100001110000000010000010000000000100000011111111110001011111111111001110000000000001001100000000011110100000000001001101111111111011110111111111111010110000000000011110" "0011001100000000001011111111111111110110111111111101011111111111111111000111111111101100111111111111110011111111111111001111111111110000100000000000011011111111110101100000000000110100011111111110001101111111111010010111111111011010000000000011010110000000010000111111111111011001000000000010011110000000010011011" "0011111010000000001011101000000001010000100000000101101001111111111101111000000001000110100000000000011000000000000100110000000000001101111111111101100011111111111111110000000001011011100000000100011011111111110110100000000000000000111111111011011111111111101110111000000000001100000000000011110010000000010010111" "1110110000000000001011011000000001000001111111111110101111111111110101011000000001001101100000000011111110000000001001110000000001000000100000000101011100000000010000101111111111011101111111111111000101111111110110110000000000110000111111111100011101111111110001101111111111100101011111111011101110000000001001010" "0000111001111111111101001111111111111110100000000010011111111111110101000111111111110111100000000100100111111111110100011000000001011111100000000100000001111111101110001000000000100011100000000010010110000000001010000111111111110111111111111110001111111111100110110000000000001011100000000011111110000000001010100" "1110010110000000001111101000000000101000000000000001100100000000010101110111111111110001011111111100111110000000011010110000000000001100011111111111011100000000001011101111111110100110000000000000111011111111111110011000000000000100000000000010000100000000010101011111111111111010111111111011011110000000000000110" "0000011101111111111110011111111110111100011111111110010010000000000110110000000000000111011111111001011010000000000011011111111111011010111111111100111000000000001100110111111110100111011111111111010111111111111101011111111110010001100000000001010110000000000111100000000000000011111111111011101011111111110111001" "0010010000000000001110011000000000100011011111111110011011111111110111100000000001100010011111111111001010000000000110101000000000001001000000000011001111111111110100101000000000101111000000000010110010000000010001100111111111110111100000000000011011111111101111110000000001001000011111111111001000000000001010010" "1110001011111111111010011111111110111100000000000011100000000000000001110111111111000011100000000010101010000000000110111111111110111011100000000001110101111111110001001111111111111001000000000000011111111111111011100111111111000011000000000001101001111111111100011111111111101100000000000100001011111111110100101" "0011111001111111111100011111111111011001100000000010000001111111111100101000000000110111011111111111001100000000001000111111111111111111100000000001010010000000001101000111111111000101000000000001101110000000001110001000000000100010000000000000100001111111110100100000000000100101100000000000110011111111111001011" "0001100100000000001101000000000000000000000000000000010110000000001100110111111111100111000000000001110111111111101101111111111111101011111111111011011110000000000010110000000000010011100000000001000100000000000010101111111111011010000000000000011010000000001011100111111110111111100000000010101101111111111110110" "0100011111111111110001110111111111011111100000000011011101111111101100101111111111110101100000000010010101111111110101111000000001010100100000000101001010000000000000110111111111011001000000000000011010000000001101101000000001100000000000000001010110000000001010001000000001000101000000000001011100000000010011001" "0100100000000000000100111000000000000110011111111110111010000000010000010000000000011001011111111100011110000000010011110000000000011011100000000010000110000000001110000000000000001101011111111010101111111111101101110000000000101101000000000011011000000000010001111000000000000010000000000011101011111111110001111" "1101111111111111101111010000000000001110000000000010110111111111111010111000000000101101100000000001111000000000001000011000000001101001011111111110000011111111111101010000000001010101100000000101011000000000001111001000000000000000011111111100110111111111111011001111111111110111111111111101000000000000000100100" "1101000000000000001010100000000000100010100000000000001001111111110111010000000001001110100000000001000111111111111101001000000000001111111111111111110110000000000111000000000000110011100000000100000101111111110110010111111111101000100000000011101000000000000110010000000000000100000000000011011000000000001111000" "0000101000000000000101100111111111110110000000000011101001111111110100011000000000110001100000000000101001111111110111000000000001110001011111111110011100000000000001010000000000000011000000000101111100000000000111000111111111111110111111111110000111111111101111100111111111100011111111111100101110000000011010110" "1100101111111111111111010111111110010111100000000001010110000000011100111111111111110100011111111101011000000000000110010111111111011011011111111101101101111111111000010111111111010110011111111001010011111111101110000111111111000100100000000000101100000000000000111111111111000001011111111100100111111111100000011" "1101000101111111111011011000000000011010111111111101010000000000001100101111111111101000011111111101000010000000011010100111111110101111011111111100111001111111111100101111111110111001111111111010011011111111101001101111111110100101000000000001101010000000000100011000000000000001111111111111000101111111100110000" "1110000000000000000010110111111111110001111111111111100101111111111101110111111111101110100000000001010001111111110111011000000000101111111111111111010111111111110010010111111111101001100000000100000011111111111111100111111111001010000000000010101001111111111010111111111111111001000000000011010010000000000000000" "1110111101111111111111001000000000000111111111111110000000000000001111100111111111111101111111111111110010000000001110111000000000101110111111111110100100000000000001011000000000111111111111111011101101111111101110110111111111011111000000000100000101111111111001101111111111001111000000000011111000000000000001010" "1101010100000000010000100111111111000101011111111110101010000000011011000000000000101010111111111101010000000000000010101111111111100000100000000010111011111111111010010111111111111111011111111101011110000000000101001000000000101100000000000101111101111111111011110111111111101010111111111111100011111111111010000" "1101111001111111110110100111111110011011100000000011000100000000001110110111111110110101000000000000101010000000010111001111111111001000111111111111100101111111110101011111111110101010011111111101001001111111101110011111111110101011000000000011101110000000011010110111111111101110000000000000010101111111100111111" "1101111101111111111100110000000000111101011111111110010001111111111100110111111111101110000000000101011111111111111011000000000000001111100000000010101100000000000101101000000000110011100000000011101000000000010110010000000001000000111111111110100001111111110101000111111111101111011111111110000000000000000001011" "1100001111111111110101110111111111011001000000000010000000000000010000110000000000100100000000000001100000000000000000011111111111011111111111111111101010000000010001110000000000001110011111111011101101111111110111110111111111101000000000000001111010000000000001111111111111101101100000000010101001111111110001000" "1110101011111111101110011111111111010010011111111110000110000000000111001111111111111100000000000000110010000000001100000111111111110100011111111111010000000000001011101111111111100010000000000000101000000000000001001000000000011101000000000001110100000000001011110111111111011010000000000100001101111111110111000" "0000000111111111110011111000000000001010111111111100011001111111111110000000000000010101000000000001001011111111110000001111111111101110111111111101101100000000000111100111111110111010100000000001100101111111110011100111111111101001000000000010111010000000001111100111111111101101000000000001011110000000001110110" "1111010110000000000000100000000001011101100000000010001111111111111111001000000000011110100000000110000000000000000110001000000000001000111111111101001000000000000001011000000000100001011111111110101011111111111100101000000000110001000000000001100100000000000100111000000000000100000000000010011000000000000000111" "0100001011111111101111110111111111101110000000000010011011111111111000101111111111011010011111111111001010000000000110111000000000010110100000000011011010000000000011000000000001000110011111111100111000000000001101111000000000010011011111111100001101111111111101101111111111100111000000000010010011111111110101011" "0100010110000000000011010111111111001110011111111101110101111111111000111000000001000000111111111101010001111111110100100000000001000001100000000010101101111111110111001111111110110111100000000010010110000000010001110000000000000110000000000000001000000000010001111000000000001011100000000000000111111111110111100" "1011100100000000001111011000000000000110011111111101101110000000001101011111111111101011100000000100011010000000010000000111111111000110011111111111000000000000001001000111111111000101100000000000101111111111111010111111111111111111111111111101000010000000001000111000000000111100011111111100111110000000001001110" "0100011000000000001011100000000000000010000000000011011100000000000101111000000000101011100000000010011010000000000100011111111111110001000000000100010100000000000011000000000000000001111111111100111100000000000101110000000000000010100000000001000101111111111101011000000000001110011111111101000000000000001010001" "0001111101111111101110101000000000010011000000000110000010000000000001000000000001000111000000000100001001111111101101001000000000000111000000000001011000000000001110000000000000110111100000000010010010000000010110101000000001011011011111111101100000000000001101011000000001010100111111111110010111111111110110000" "1101100110000000010000110111111111010001011111111011101010000000001001110000000001000011000000000011001111111111111111100000000000101100011111111100001010000000000000011000000000000010100000000010101000000000001010111000000000110110100000000011110110000000010001100111111111010010111111111100111001111111111101100" "0001010011111111110000001000000000111010000000000100010101111111101100100000000001000101000000000011111111111111110100000000000000000001000000000010011011111111101111110000000000101100011111111110000110000000000000100000000001011100100000000000010001111111111110010000000001100110100000000011111010000000001100101" "0001010001111111110100010000000000001101011111111110011000000000010100111111111111011000100000000000011111111111111101111111111110110001000000000011010001111111111010111111111110110011111111111010111011111111111010000111111110111101100000000010101000000000000011000111111110111001111111111101000000000000000101100" "0000101101111111110100101111111111110010111111111110101011111111111011001111111111001000100000000010110011111111110101010000000000110011000000000100001010000000000110111111111111010000111111111101111101111111111111010000000000100001011111111011111111111111110101000111111111001010000000000100000110000000000111100" "1100010000000000001001101111111111010101111111111101101011111111110100011111111111000101011111111101011110000000000000001111111111111101100000000010011101111111110101101111111111011010000000000100010101111111111111011111111111000101011111111100101100000000010001111000000001001000000000000011010000000000001001010" "1101000101111111111110110000000000000111100000000101111111111111100101101111111111110011100000000100110011111111101101110000000001001010100000000101011011111111101110110000000000010110000000000000011000000000010110101000000000000100011111111010101110000000000110100000000001101011111111111110000110000000010000110" "0001010001111111110100010111111111100011000000000001100101111111111000111000000000011010100000000010111010000000000010001000000000011110111111111011100000000000000110001000000000101111011111111110111100000000001111010111111111110011011111111110100100000000000101101111111111110001011111111111011100000000001010000" "1111100100000000000100111000000000001001111111111101011100000000010010110111111111000000011111111001000101111111111110101000000000000010111111111010000110000000001000000111111110010101111111111010101001111111101101010111111111011010011111111111001001111111111011110111111111010111111111111111100001111111101110111" "0000001110000000000100000000000000010101100000000000100001111111111100010000000000011101000000000001100101111111101011001000000001001110000000000100110010000000001110001000000001101010000000000000100000000000000011000000000000000111011111111011100110000000001001101000000000001111111111111100000000000000000000101" "1100101011111111111001010111111110011100111111111101111110000000000001101111111110100010111111111011101111111111111001000111111111110000011111111010011101111111110000110000000000000111111111111101010011111111111101010111111111001001011111111111011111111111111001111111111110100110111111111101001101111111110011101" "1111011110000000010001101000000000100010111111111100010001111111111100101000000000111000000000000000000110000000001110001111111111000010011111111011111011111111111101001111111111011001100000000010100000000000001000000111111111101001100000000000100010000000000010101111111110111011100000000100000010000000001011111" "0010111100000000000110011000000000111110000000000000000111111111101111101111111111100110011111111110110000000000001111001000000000101001111111111101010000000000001010000111111111110000100000000011011111111111110001100000000000010101011111111011100010000000001011001000000000010100111111111110000101111111101110110" "1111100111111111101111000000000000001010000000000001101001111111101010100000000000011010100000000001011000000000000000000000000000001001111111111101011011111111101101111000000001011001100000000000110010000000010001000000000000011101111111111010011111111111101001111000000000001000011111111101110100000000000110000" "1110011000000000000111100000000001100011100000000001001101111111110011100000000000010100000000000101000101111111111000010111111111101110000000000011000101111111110110100000000000111100111111111101100100000000001101100000000000001100111111111010011110000000001100001000000000010111111111111011101100000000011001011" "0001010011111111111100001000000000011101000000000011010111111111110000111000000000100110011111111111101111111111110010110000000000100101011111111110111000000000001110010111111111111000100000000100010010000000000001100111111111011111011111111100110100000000000100000000000000000011000000000100010111111111101110000" "0010000111111111111111101000000000001000111111111100000110000000010111101111111111110110011111111001011000000000000010010111111111001001111111111011110101111111111010100111111110010101000000000000100101111111100110011111111111010001000000000110010110000000000110101111111110111010111111111100010101111111101000001" "0000100101111111111110101111111111100110011111111100001110000000011011001111111110100111011111111101010010000000000100010111111110101001111111111110110111111111111101100111111110011010011111111101010011111111101101001111111111010100100000000000010101111111111001000111111110111101100000000001110101111111100111100" "0001101110000000000001000000000000001010000000000010111110000000001100001000000000000011000000000000110010000000001000101000000000111100100000000001100001111111110111011000000000010100000000000010000000000000001000100111111111000100100000000101000010000000000001011000000001000011111111111101011111111111111100011" "0001010100000000001110111111111111100100011111111011110000000000011110100111111110110000011111111011011010000000000111111000000000010000111111111100011111111111110001001111111111101000011111111000111001111111111010111111111111100111000000000110000010000000010010100000000000000011000000000000101001111111100010001" "1011011111111111111110000000000000101000100000000100011100000000001010000000000000110111111111111111111100000000000100111111111111011100100000000010111100000000000010101111111110110011111111111011001100000000000100010111111111000101011111111111001010000000010010011000000000100000000000000011000000000000001000010" "1101000110000000001100010000000000111101111111111101100010000000010000101111111111010111111111111111101011111111110000110111111111110010000000000011101001111111111111100111111111111100100000000100110101111111110101001111111111110100111111111011010001111111110100000111111111100100000000000000100110000000001100110" "1100101001111111111010010000000000101001011111111110100000000000001001011000000000011011100000000011111101111111110011010111111111001101000000000000111100000000001001000000000000001011100000000010100000000000001111000111111111111011000000000000111101111111110101111111111111101010100000000011001110000000000110011" "0011000010000000001011100111111111110101000000000000111100000000000000011000000001010000000000000101011110000000000011110000000001110101111111111111100011111111111101011000000000111011000000000011010100000000010010111111111111110011011111111100010001111111100111010000000001101110011111111101110000000000001001001" "0011011011111111110000110000000001000100100000000011001101111111100011001000000000010001000000000111011010000000000000001000000000101010000000000000111111111111111011110000000000001100000000000100000000000000000101110111111111111010011111111111010111111111101111110000000001110011100000000010110010000000010101101" "1110101011111111111011100111111111100110011111111011111101111111101111110000000000000010011111111111000011111111111111011000000000111011111111111011110101111111101111000000000000011010011111111100100010000000010001001000000000100111011111111101110110000000000000000000000000111001111111111100000010000000000100011" "0001010011111111110001000111111111100111111111111101100100000000011100110111111110111010011111111001000100000000000001110111111110011011011111111010011110000000001100110111111110101010111111111101110101111111110010111111111111010001100000000011101111111111111110000000000000001000100000000011110011111111111000010" "0000100001111111110011110000000000001010000000000101001111111111110111001000000000100010100000000010011001111111100100111000000000000100100000000001100100000000001110111000000001000010000000000101000110000000000101111000000001010100011111111001101101111111110000111000000000000001011111111100111110000000010011000" "1101101111111111111110111111111111110100100000000101101010000000000001101000000000000101000000000011011111111111110111110000000001011011000000000101110010000000000010000000000001001001111111111111011000000000010011001000000001000011111111111101010001111111110111011000000001000010011111111111010010000000010001110" "1011101110000000001000111000000000111010011111111110011000000000000100010000000000011001000000000011100110000000000010011000000000101100011111111111101101111111111000110000000000000001011111111011111000000000001001101000000000100000011111111101000101111111111111100111111111101110011111111111011001111111111011100" "0100010111111111111111001000000001100111100000000110110101111111101111100000000001101001100000000110111100000000000011100000000001111001011111111101110111111111110010111000000000111101100000000000101100000000011100110000000001011101111111111101010001111111101000001000000001101011111111111111000000000000000111101" "0001000100000000001100010000000000010111000000000101001010000000000111110111111111110110011111111110110000000000000110011000000000011101111111111110110001111111111010101111111111101101000000000001000110000000001101010000000001010000111111111110100100000000001011011000000001010010111111111101001001111111111001101" "0011111100000000000110100000000001010111011111111110111010000000000000101000000001011000000000000000110001111111110101111000000000001011111111111111010111111111111100101000000000101001000000000100110010000000001111011000000000000011000000000000111010000000000110101000000001000010000000000010101011111111111101001" "1110000001111111110010001111111111000000100000000000101001111111111100001111111111010011100000000000010001111111111110111000000000010010111111111111011111111111111101111111111111010000000000000011001110000000001100101000000000100100100000000010011110000000001001001000000001000100000000000100000111111111101111010" "0011100101111111110110011000000000010010011111111111001011111111111010100000000000010100111111111100111111111111101101111111111111111100011111111100001100000000001100001111111111011011011111111111000000000000000110011111111111010011000000000001000001111111110001110111111111000011100000000011101011111111111000010" "1111101011111111111000110111111111011010000000000001011010000000010010001000000000100111100000000011111010000000001101000000000000101011100000000001010111111111110000000000000001001010011111111100111110000000001001001000000000000111100000000000101010000000001110100000000001001111000000000010110101111111111100110" "1011111101111111111010101111111111100101100000000100010000000000010000110111111111101110100000000011001011111111111001100111111111100100111111111110011110000000001101000111111111100101000000000001000000000000000100011000000000010011111111111111100101111111111000001000000000111100000000000000011110000000001111011" "1111101101111111110011010111111111001100111111111111010011111111111011000000000000110110000000000011110010000000001010101111111111101001100000000011010001111111110010011111111111101111111111111110010110000000010010111111111111111101100000000011100110000000010100000000000000111010111111111110010000000000001100001" "0001010001111111110100001000000000110111100000000110000001111111111100101111111111111010000000000001111011111111101000010000000000110100111111111110000001111111110001011000000001000110000000000100001100000000001001111111111111111011000000000000100111111111111011111000000001001101000000000011100000000000010001111" "1110001001111111110010011111111111001111000000000000010000000000001101010000000000000000000000000000011110000000001011000111111111001010100000000000010101111111110001111111111111101110000000000011010001111111111010010000000000010111000000000000110001111111111010011111111111100010011111111100100000000000000010000" "0011010111111111110011001111111111101011111111111110011110000000000000000111111111010110011111111101000010000000001001110111111111000000011111111011111001111111110011000000000000010001111111111110110101111111111000011000000001000000100000000100001110000000000011011000000000001101011111111011111001111111101111111" "0011110001111111101111010000000001011000100000000001111001111111101011101000000000001010000000000010000100000000000101100111111111101110100000000011101110000000010001000000000000010001000000000000001100000000010110001000000001001000111111111001111111111111110010111000000001000011011111111011111010000000000111011" "1110000000000000000111011111111111011100100000000001101000000000000011101111111111110101100000000010100000000000000101110000000000000111000000000101010011111111110010000000000000111010100000000101000100000000010010101000000001010010100000000000011001111111111001110111111111111100011111111011100010000000000010100" "0011011011111111111111110000000000010111111111111111010010000000010110110000000000010000111111111011110110000000001111011111111111001001100000000010101000000000001101110111111110011010000000000001011101111111110001000111111111010101000000000010110100000000001010010111111110101011000000000010010010000000000100010" "0010010001111111110100111111111111010111011111111011111101111111110100000111111111110101011111111101011001111111110111100111111111001100111111111101001001111111111010101111111111001100100000000100001000000000001100010111111111010010011111111111001100000000001101111111111111100111100000000000111101111111101111101" "0000001110000000001011101111111111110000011111111111101101111111111010110111111111110111100000000001011110000000000010101111111110111111111111111111111000000000001100101000000000011100011111111101110010000000000101110111111111100101111111111100011110000000001100100111111111101101100000000100001110000000010001000" "1101010010000000000111011111111111001100000000000011011010000000010101110000000000011111011111111101010110000000010010110000000000010110111111111110010101111111111110000000000000111011100000000011001011111111110100111111111111100110000000000011101110000000000100010000000000110011011111111011011111111111110001111" "0011010011111111110111100111111110101010100000000000010100000000000010011111111110110011111111111111111100000000010101000111111110101111000000000011100010000000000101001000000000100100011111111111100011111111111101101111111111000101000000000000001110000000000000000111111110011100011111111101000101111111111111110" "0011101010000000000111001111111111101111011111111011110010000000000000111000000000001011000000000011111001111111110100010000000000110010011111111110001011111111111011000000000000011101000000000001111000000000001011111000000000011011000000000010101001111111111001000000000001000100011111111111100100000000000110010" "1011110100000000010000100111111111100111011111111100011000000000000111100111111111001100011111111011100100000000001110010000000000110011100000000001001010000000001100111000000000001100000000000100100000000000000001011111111111000011011111111100101000000000000111010111111111101110111111111100001011111111110110101" "1110101001111111101111011000000000111100011111111111000100000000010010000111111111110011100000000000110000000000000001001000000000001111111111111110000011111111111000111000000000001111000000000100100001111111110011010000000000001010011111111110100000000000010001001111111111111101011111111101000110000000001110101" "0001101001111111101111011111111111001101111111111110111100000000001100100111111111110010000000000010011100000000000010011000000001000101000000000011001010000000010000010111111111101111111111111101101111111111111101101000000000001010000000000100111000000000010101000111111111000100000000000010001110000000000101011" "0100001110000000010010000000000000010001111111111100110110000000010000001111111111100000100000000000110011111111101111000111111111001000000000000000110101111111110011100000000001000000111111111011101010000000010000011000000000111001100000000000101001111111111001001000000000000110000000000001100010000000000110101" "1110100111111111111100000111111111010110111111111101100101111111110111110111111111100111111111111100011110000000000001001000000000111001000000000011010110000000001111011111111111100010100000000011110001111111111110000000000001000001100000000001001101111111110011010111111111000000011111111101110110000000001011000" "1101010101111111111001111000000000100011000000000011111101111111111110111111111111011011000000000000111010000000010001111111111110110000011111111011101100000000001000101111111111111001011111111111010011111111101011101111111111101001000000000000010100000000010100010000000000100110011111111101001100000000000010111" "0011000110000000000111000111111110111011100000000011101010000000000011011111111111101000011111111011101001111111111001101111111110111001111111111011110110000000001011001000000000011100100000000010001100000000000111010111111111001101011111111110000001111111111000100111111111001001011111111100011100000000001010101" "1110100001111111110110101000000001001101000000000011110110000000001001100000000000100011100000000001111101111111110111000000000001000011011111111100110011111111110010000000000001010110111111111111100110000000001101111000000001010110111111111111100101111111111110111000000000100101100000000000100001111111111010101" "1011100110000000000101111111111111100011000000000000101111111111110111111000000000101110000000000010001001111111101011011000000001000000000000000001011101111111110001000000000000110010100000000011110110000000001000011000000000111110111111111100101011111111110100100000000000010110111111111100100100000000000010110" "0011011001111111111001101000000000001101000000000000001011111111111011101111111111001100000000000011010001111111111101000000000000110100000000000001000110000000000100001000000000101000000000000010111101111111110011111000000000101111011111111100011011111111101110011111111111010111000000000010101011111111111001111" "1011101110000000001000001000000001000110000000000111001011111111100110010000000000011101000000000000010001111111110010000000000000010000011111111111101010000000001101100000000000011111100000000100001101111111111001001000000001100101111111111110111111111111110100010000000000010000011111111101000010000000001011110" "1101111110000000000001000000000000101101000000000110010011111111110010100111111111011000100000000010011010000000000101011000000000000000111111111101100000000000001111101111111111110100111111111100111000000000001011011000000000011100000000000100100000000000000110010111111111100010000000000011001010000000000000010" "1111100101111111111001010000000000110010011111111101010110000000001100000111111111011110100000000001110010000000000111011000000000101001100000000011001011111111101111001000000000100010000000000011011101111111110011111111111111010010100000000010011111111111111000100000000000011001100000000000010101111111110100110" "1101101111111111111110010111111111000010100000000011011100000000011010001111111110111111111111111011000111111111111000111111111111000111100000000010110001111111110100110111111110110010011111111111010101111111111000100000000000000101100000000000110101111111111100010111111111010001011111111011110111111111110000111" "0010001010000000000011110111111110101110111111111100001000000000000101111111111111101100111111111100111000000000000000101111111110111100111111111101001110000000000110100111111110111001000000000001100010000000000000011111111110011100111111111110011100000000000100101111111110111010100000000001001111111111100111110" "0011101011111111110100000111111111100000111111111100010110000000000010101000000000011011111111111101101000000000000101111000000000010010100000000000100010000000001011111111111110111001111111111100110111111111111001011000000001000101011111111111101000000000010000011000000000001010011111111101101101111111111110110" "0001101110000000000011001111111111100110100000000000001011111111110000011000000001100111100000000011000101111111111111100000000001101011011111111111010101111111111001110000000000111101000000000010010010000000010100110000000000001000100000000010000010000000000111010000000001100011111111111101101110000000010110100" "1111001010000000000011000111111111000101000000000001000010000000001101110111111111011000011111111011001101111111111010001000000000010011011111111101111111111111110010100111111111000011111111111011010111111111110000010111111111001000011111111111001011111111111101010000000000100110011111111100101011111111101101000" "1110011011111111101111111000000000111110000000000010111111111111110100001000000001001101000000000110001010000000001001001000000001100100000000000100110110000000000000001000000000100000000000000001000010000000010010111111111111100100011111111011000101111111110010111000000001011011111111111011100100000000011000110" "1101001100000000001110011111111111101010000000000001111011111111110101110000000001001101111111111101100111111111101100100000000001010111100000000010110011111111110100111000000000000110111111111111101110000000000101111000000000100001111111111111001000000000000101110000000000110101011111111100101010000000001000011" "1111111111111111111011011000000000010111000000000101000100000000001000111111111111100111000000000000011101111111110110110111111111010111100000000000000110000000000000110111111111111101000000000000010100000000010011100000000000011110100000000010011110000000010110010111111111001110000000000000001010000000000100011" "1100101110000000001101001000000000101101100000000000001100000000000100111111111111110101100000000001010000000000001111011000000000011010000000000001001110000000000011100000000000000011100000000011100101111111111011010000000001011011000000000000001100000000000101111000000001000100111111111100000100000000001001100" "1100101101111111111000001000000001001011000000000100101110000000001111000111111111000010000000000000100100000000001110101111111111101000011111111100100100000000001101111111111111111001011111111111000111111111111101111111111111111011000000000101010000000000001011101111111111111101000000000001111111111111110010111" "0010001111111111111111110111111110110100000000000010110100000000011111010111111110101001111111111001000100000000010100111111111110101011111111111011010101111111111011101111111111010110011111111101111100000000000000101000000000000001100000000010011010000000001001010111111110010110111111111111010011111111111001000" "0010001001111111111011111000000000101010100000000101000111111111111011101000000001000110111111111101010011111111110101000111111111001001011111111100101110000000000101101000000000000100111111111110000110000000000100100111111111001101100000000100001101111111111110100000000000011001000000000010011000000000010100001" "0000100011111111111100011111111111100011100000000100001100000000000001011111111111101111111111111100110010000000001111011111111110010101111111111001011110000000001111100111111111001100011111111010110111111111111111011111111111011010100000000000110100000000001110001000000000010111111111111101001001111111100011111" "0001111010000000001001000000000000101100100000000101101111111111101000100111111111111011100000000001100110000000000011110000000000010010000000000000110101111111111010100000000001000101000000000001110100000000000111100000000001000000011111111100111111111111110000110000000000001101000000000011101000000000010100100" "1101111110000000001010000111111111110111011111111110000010000000010000011111111111110111000000000011001001111111111101100000000000110111100000000100001000000000000000001111111111101001011111111101100001111111101110101000000000101011111111111011011110000000001111100000000000011011111111111110110001111111111100011" "0001010011111111111110010111111111010100011111111110101000000000010001111111111111100110111111111011110001111111101110101111111111011101111111111100011000000000001001101111111111100101100000000100011111111111110110011111111111110000000000000011100110000000000000111111111111011010011111111011110001111111111010111" "1101111111111111110101111000000000111000100000000011000011111111111111000111111110010100111111111010000110000000000001001000000001011110100000000101100010000000000000101111111111110001100000000010110001111111110101111000000001000111000000000010011000000000001001011000000000100010100000000001000010000000000010110" "0000101100000000000011110111111111101110111111111110000110000000001111001000000001100001100000000011001001111111111011110000000000011111111111111100101111111111110001001111111111101001100000000011111111111111110001010111111111110101111111111111111010000000011001110000000001100011100000000001101101111111111001001" "1010010001111111101010010111111111101010100000000001111011111111111100100111111111100011100000000001000111111111110111100000000000001100000000000000001101111111111111001000000000000101100000000010110100000000001001110000000001101001000000000000011011111111101101010111111110101110111111111110010010000000000100000" "0001011111111111110010110000000000110011000000000100010100000000000111101000000000010100111111111101111010000000010010010000000000111110000000000100000011111111110011101000000000101101000000000011110011111111111001000000000000101110100000000000011100000000010010111000000000110101100000000010001110000000000000100" "0100010000000000010001001111111110100111000000000111001111111111111001110000000001010111000000000101001110000000010111001000000000000000111111111111010101111111111000011000000000001001000000000011010100000000001111010111111110111001100000000000001110000000011010000000000000000111100000000000001100000000001110000" "1100010111111111111110001111111111011110111111111011100100000000011000111111111111001010000000000001100000000000000000001111111111011100011111111100101000000000000000110111111110111001000000000011001001111111110001101000000000111101000000000000010000000000000000101111111111101011011111111100000100000000000101100" "1101000000000000001010010111111111001001000000000001111010000000000011001000000000010100000000000000101100000000000000001000000000101001100000000010011111111111110011111111111111001101100000000100001011111111111101000111111111101111011111111111000110000000000101100111111111101010011111111100111010000000001100111" "1111100011111111100101101111111111111001111111111010000110000000010001010111111111001001011111111111000010000000001000001111111111101100000000000000000011111111111111101111111110100101100000000110010110000000010000000111111111110111100000000000000001111111110111111111111111011111111111111011111000000000001101111" "0100100110000000000110101000000000000111000000000110001101111111101110001111111111110111100000000101010100000000001000100000000000010000011111111111010001111111110101000111111111011000100000000000001011111111110010100111111111010100011111111011110110000000000011000000000001100010100000000100101111111111110111010" "1111100111111111111010000000000000000100111111111110011100000000010000101111111110111011111111111010010111111111100011101000000000100101000000000110111110000000011000111111111111001101000000000111011111111111110110011000000000010001100000000010001101111111110000111111111110101110111111111011111010000000001100111" "1111101001111111110000101000000000100100100000000011100100000000010100001000000000100101011111111111011000000000001001101000000000100100100000000001110100000000001110111111111111010101100000000001001110000000001000100000000001001111011111111101111010000000000011011111111111101010111111111101010101111111110100000" "0001011110000000000111110000000000011101011111111100101110000000001111001000000000001101011111111011101011111111111111100111111111101100111111111100110010000000001110100111111110110111000000000010000001111111111001001111111111111100011111111011111010000000000101110000000001000100000000000001101001111111110001111" "1010101111111111111100101111111111110001100000000000101100000000000101001000000000011111000000000001100100000000000111100000000000110010100000000010100110000000000011001111111110100000000000000011110010000000000101101000000000011010011111111101011101111111111100110111111110101000100000000010101100000000000110001" "0011110000000000000001110111111111010010000000000100010100000000001010000000000001110000100000000001000000000000001101010111111110011001011111111000011111111111111100000000000001100111100000000011100011111111110100110111111110011100111111111101101100000000010011100000000000101101011111111110111101111111111000011" "1010100111111111101001000000000000111000111111111110000110000000001011111111111111001100000000000000101101111111111101110000000000001100100000000001011110000000100000101000000000010101000000000100101001111111110100101000000000111101000000000001111001111111110110111111111111100001111111111001100110000000010000001" "0100000000000000000010101111111111000111000000000101001101111111111001101000000001010010000000000000010001111111111110110111111110001100011111111011101010000000000110101111111111100100111111111110000011111111111111101111111110101010111111111011100010000000001100010111111111101110000000000110100000000000000101011" "1110101000000000000001001000000001011001011111111100010000000000000100101000000000011010000000000000001001111111110101010000000000100101011111111110001110000000000001100000000000111000011111111110110111111111111111110000000000001111111111111100001100000000001111100000000000111111000000000011110001111111110111010" "0011001111111111111100010111111111011011000000000001100101111111110100000000000000100010100000000100001100000000010001111111111111000111100000000011010111111111101101110000000001000110000000000001100000000000000110010111111111101010100000000000110010000000011100010000000000101000100000000000100101111111110000100" "0000011010000000000000101000000000111100111111111000111000000000001110100111111111100110111111111000100001111111100010010000000000111101000000000010000011111111111110011111111111111011111111111110111000000000000001110000000000111100111111111100000110000000000010100000000000000010111111111001100011111111111110110" "1111101001111111110001000111111111000010111111111011111010000000000111010000000000110001011111111101101101111111111010011000000000010000111111111101011101111111111111101000000001000010000000000011110000000000001010101000000000000110011111111101100011111111110111110111111111100010100000000001100101111111110010001" "0000111000000000011011110111111110100000000000000001001000000000000111110000000001111000100000000111110010000000001100100111111111001111111111111100101011111111101011110000000000111100000000000001011011111111111101100111111111000001011111111101100110000000000001001000000001101110100000000000101000000000000000010" "1100011100000000001100101000000000101011011111111110001101111111101111101111111111000011100000000011000011111111111110100000000000110000111111111100001111111111101111110111111111011010100000000000000010000000010000110111111111001001111111111100100110000000000001101111111111100010011111111110111000000000001111111" "0000110001111111110101110111111111000010111111111101111111111111111011110111111111000100000000000100010011111111110011111000000000000010000000000011011001111111111000010111111111011110011111111101001110000000001100111111111111100100011111111100010111111111110100010111111111000000011111111110011111111111110000000" "1110111111111111110010000000000000101010000000000001101111111111111100010111111111111000000000000010001111111111111101011111111110111110000000000001111001111111111000110111111110111010011111111101010001111111111000100111111111111100011111111100010101111111110110101000000000100010000000000011000011111111111101000" "0001110000000000000110001111111111110001000000000101011010000000001101100000000000101010000000000001111010000000000110110111111110011001011111111010001111111111100110110000000000110011011111111101001111111111101110000111111111110111111111111100010000000000010011011000000001001011100000000111001110000000000101010" "1111001100000000001010001000000000110001000000000011001000000000010010100111111111111100011111111111010011111111101110110000000000011011100000000100000100000000001101101111111111000110100000000110101010000000000010110000000000000011000000000011100001111111111111110000000001000100011111111010101100000000010001101" "1101111000000000001010111000000000110111100000000100011000000000000010001000000000100110011111111111110011111111111010001000000000101111100000000001111101111111111110110111111111100000000000000000001001111111111101110000000000110000011111111101011110000000000000101111111111001110111111111011110101111111111110111" "0010001011111111111000010000000001100010111111111011110010000000000000100111111111000001011111111101000111111111110010010111111111011010100000000011110010000000010010110000000000101001100000000100001111111111110011100000000000110010011111111110101100000000010011010000000000101100100000000011001101111111101111000" "0001011010000000000100011000000000101100000000000000011000000000001000110000000000110111000000000000110111111111110000100111111110111111100000000011011011111111111000001000000000011111000000000001101111111111110011100111111111110111100000000001001111111111111100010111111110111011011111111100010000000000000100101" "1011100011111111110100101000000000101110111111111110001100000000000110110111111111011111000000000100001000000000001111111000000000001111000000000000100000000000001001010111111111100001011111111110001111111111110010000111111111011010111111111110000111111111111101101000000001001011000000000010001111111111110010011" "1100000011111111101111110000000001011000000000000010001101111111111010111111111111011010011111111101010001111111101111100000000000011100100000000100010000000000010100000111111111111011111111111110010010000000010001010000000001100010111111111100000110000000010000100111111110100110100000000010001110000000001011010" "1101100101111111101100010000000001111000011111111111111000000000000101011111111110011100111111111110110011111111101101010000000000010011000000000000110000000000011110111000000000000000100000000100001100000000001110111000000001100101000000000001110000000000000100111111111110111100011111111100011101111111111000011" "1100010111111111101001011000000000111100100000000010011110000000010001010111111110101001111111111101111101111111110111101000000000111101100000000110001100000000010101000111111111010100000000000110001010000000001100111000000000000001111111111100101111111111111111011000000000100110011111111001101001111111101111101" "1111011010000000000001110111111111001111011111111110001010000000000000001111111111110101011111111110000110000000001001101111111111001111000000000010100010000000001110110111111111001100100000000100001010000000001010011111111111101011111111111110110100000000000111010000000001000110100000000100001110000000000111000" "0010111110000000000111100000000001001101011111111010111110000000001100111111111110111000100000000001100001111111110011100000000000100111000000000011011000000000001011011000000000001011000000000011010001111111111101011111111111100010100000000010001110000000001011110111111111111100011111111011010010000000001000010" "1110100100000000000101110000000000000100100000000000011110000000010110100000000000010001111111111111000001111111101111100000000000100100011111111110011010000000010010100000000000101101011111111110001100000000001111110000000001000001011111111100111110000000010000100000000000100000111111111101111011111111110010000" "1100101001111111101101100000000001101001111111111110010010000000001010000111111110110101111111111010110001111111110000011000000000010101000000000011010011111111111001011111111111110111100000000001111111111111111000111000000001101001111111111101110010000000001100011111111111111011111111111110000100000000001111110" "0001101100000000001111100111111111110010100000000011011001111111101101010000000000011001000000000001010001111111111111111111111111000001011111111111011100000000000111100111111111110010000000000001100111111111101110011111111111110101011111111100111110000000011111100000000000101001000000000011000100000000000011001" "0101110000000000001110001000000000000000000000000101001010000000001011000111111111100100100000000000110110000000011000101111111111010110111111111011101110000000000001011111111111101111011111111111100011111111110000110000000000100110111111111100111010000000001000010000000001101011000000000101100000000000000110011" "0010011101111111111101000111111111010000111111111110010001111111110001101000000001000001100000000010010010000000001110101111111111000101000000000100001010000000001100111111111110111100100000000011010100000000001100110000000000100100011111111100001010000000000000101000000000001111111111111101010101111111110001110" "1011001111111111111000100000000001011100000000000001001010000000011010101111111111110101111111111001010111111111100001001000000000100100100000000001110000000000000010100000000000000000100000000000001011111111110110001000000001110100111111111100101001111111101001101111111111101010011111111100110011111111110111100" "1101010111111111110110000000000000010101011111111111011001111111111010011111111111101011100000000011100000000000000100111111111111110100111111111111001101111111110010100000000000100110111111111101001001111111111001110111111111110000100000000010111110000000001000011111111111000111111111111101011000000000000111000" "1100110011111111111110000000000000011001011111111011110010000000000111101111111111110011111111111011110111111111100000110111111111110111000000000000001010000000010010101111111111100010011111111111100010000000010001010000000000110000011111111100100110000000000111011111111111001110011111111000101110000000001000001" "0100100000000000010111000000000000101111011111111110010101111111111100011000000000000110111111111111101010000000010101111111111111000100000000000001111110000000001010011111111111100000100000000001110110000000001100010111111110110110011111111101100100000000001101111000000000111111000000000101001110000000001110001" "0010100111111111111111001111111111010111011111111101001100000000001001100000000000100110100000000100111000000000000101110000000000010111011111111100001111111111111011111000000001000001100000000000010100000000000111111000000000111001011111111100001010000000011011110000000001001111011111111110110001111111110000011" "1111110111111111101001001000000000011110100000000010110100000000000100000111111111100000111111111100101010000000001000110111111111101101100000000011100100000000000110011111111110100100000000000110000010000000000000110000000001001101100000000011101000000000000101100111111111110100100000000001110011111111110101001" "0001000100000000011001010000000000011000100000000100001111111111110110000000000000101010000000000011110000000000011100000111111110001001100000000000000111111111101110010000000000011100000000000100110010000000001000001111111111000001000000000010110010000000011011010111111111111101000000000101111010000000001110110" "1101110100000000000000001111111111101010111111111011111000000000001111100111111110110011011111111010011010000000000110100000000001000100000000000000100100000000000001011111111111010010100000000000111001111111110110111000000001010100011111111100000011111111101100000111111110011101011111111111110001111111111100010" "0001001110000000000110110111111111010010100000000010100011111111110001010000000000110111000000000101100000000000000100001111111110100110111111111010111000000000000001101000000000101101100000000101000011111111110000110111111110010111011111111011011110000000010111101000000001000101100000000101111010000000000110110" "0010101100000000010000010000000000010000011111111100010010000000001011111111111111011001111111111110111111111111110100110000000001000011000000000001111011111111110010011111111111000001100000000011011011111111111010000000000000010011011111111100110100000000000100001111111111111000000000000000001111111111101110000" "1100010101111111111110000000000000100101111111111100111111111111111001111111111110011110011111111101001010000000000111101000000000111111000000000000000100000000010100001000000000011011100000000000110000000000001111011000000001000111111111111110110011111111111000101111111110110000011111111010010000000000001111000" "1111001000000000000100111000000000111000000000000000010111111111111110000000000001000011100000000100111010000000000110110111111111011101111111111100101011111111111001111111111111011101111111111101111101111111110110011111111110101111100000000011010010000000010110001000000000000001100000000010101011111111110101001" "1111100000000000001010100000000000110110011111111110111001111111110001110000000000100011100000000010011100000000010000100111111111010001000000000001111110000000000011000000000000100100011111111101000101111111110010100111111111101001000000000000011001111111110011010111111110111110100000000011110110000000010000010" "0010000000000000000001000111111111100101100000000010000111111111111111001111111111101010000000000010011110000000001000101111111111010111111111111111000011111111110011100111111111111011000000000001100011111111110001100000000001001010111111111111111000000000001000001000000001001110000000000001010110000000001111001" "0010001110000000001001101000000001010100111111111110111000000000001100110000000000111111100000000011011011111111110111101000000000000001111111111101110001111111101101001000000000010111000000000101110101111111111100100000000000000100100000000011011000000000000001000000000001000011000000000000010101111111111010000" "0011011101111111110010100111111111110110011111111100101100000000001101100111111111111011100000000011111000000000000110101111111111111000111111111111000110000000000111100000000000011101000000000101010101111111110110001000000000011111000000000000000001111111111100101000000000010100100000000011111011111111101111011" "0011001001111111111010101111111111011010000000000010111110000000001101110000000000110000011111111101010011111111110101111111111111011011000000000010010001111111111101111000000000001000111111111110111101111111110010001000000001000111000000000011011011111111111010101000000001000011111111111111100010000000000011011" "1110101110000000010001001111111111000110011111111110101100000000001101000000000000110111000000000000111100000000010000111000000000110010111111111101111010000000000101111000000000110100100000000001111111111111111101011111111111110111111111111101000101111111110010000111111111100001000000000010011110000000000111101" "1110110101111111110000010111111111100110111111111111101000000000001000110000000000000011111111111110011111111111110010101111111111101010100000000000101001111111111110011000000000110001011111111111101110000000000111101111111111001010011111111110100110000000000100111000000000001010011111111101110101111111110010000" "1011110110000000010001001111111111000110000000000100000100000000000000111000000000010101011111111011101101111111110101010000000000100001011111111111111111111111110000110000000000010111100000000000111001111111111011011111111111011111111111111110011010000000000010010000000001000000011111111110001000000000010000101" "0010000010000000001111000111111111110101100000000000000111111111101110001111111110111010000000000011111010000000001110001111111111011011100000000001011110000000000111111000000000011111111111111101001111111111111101001111111111000010100000000001110111111111111101101111111111010111000000000010110101111111101111001" "1101001111111111111010010000000001100110000000000001000000000000011000001111111111011010100000000001101101111111101010010000000000101110000000000101010000000000000001111000000000010011100000000010011010000000001001010000000000001001011111111100101111111111111111011111111110111110011111111100110001111111111001101" "0001110100000000010001100111111111001101111111111101011010000000001010100111111111100010111111111101011101111111110100010000000000101110100000000010011100000000010000100111111111111110000000000000001000000000001111100111111111101010111111111100000001111111111101000111111110111110100000000100001011111111110000000" "0010000000000000001110110000000000110011100000000001100110000000001111001111111111000001011111111011100100000000010001010000000000100101011111111111100010000000010001001111111111110101000000000011000110000000001111000111111111110110111111111100010110000000000110001111111111100010100000000001110101111111111000000" "0000001001111111110100101111111110111001000000000001001100000000001011000111111111110000000000000001001000000000000010010000000001000101011111111011100001111111111110000000000000000110100000000011111001111111111100111000000000100111100000000011011110000000001100010000000000000011011111111111110000000000000000101" "1101001010000000010000010111111111100100111111111110100010000000001010110000000001000110111111111110000100000000000111100000000000011111000000000001101000000000001000000111111111010011000000000101000101111111110011101000000000110100000000000011000010000000000000001000000000011110000000000011101101111111111000100" "0011001111111111111100010000000000111010111111111111110011111111101110011111111111110111100000000100111010000000001001111000000000101011000000000000101101111111110101101111111111111101000000000011110110000000000001000111111111000101011111111101000110000000010101001000000000110011011111111110011001111111110000100" "0100001111111111110011100000000000000010011111111111000010000000010001010111111111111101100000000010101011111111110110011000000000001011111111111110000000000000000100011000000000001110100000000010001001111111110111001111111111000011011111111100100000000000010101010000000000100000100000000000010101111111101111011" "0001111110000000001110100000000000101110111111111100000110000000000011111111111111111010100000000010001101111111110011101000000000011101111111111110010000000000000001000111111111111011000000000010101010000000010001100000000000010101000000000000010101111111110111000000000000101110000000000001001011111111101111011" "0001010000000000000011100000000001000110000000000000111000000000010001011111111111011011111111111111010100000000000000111000000000001100111111111111101110000000001101101000000000110000011111111111001011111111110100111111111111010010111111111101101111111111110011010000000000001011100000000011000000000000000000110" "0000000110000000000011110000000000001100000000000100100101111111111100010000000000010011011111111110110110000000000100010000000000101001111111111110000000000000001110101111111111101100000000000000000110000000010000111000000000001101111111111101100011111111110111111111111111001101000000000001010100000000001001110" "0001011101111111110010100111111111111111100000000010001011111111110001010111111111111110111111111100100110000000000011101000000000010111111111111110010011111111111110000000000001000000100000000001001010000000000000000111111111001000000000000000111111111111110011010000000000100100011111111100100111111111111011011" "1010000010000000000011111000000001010100100000000010001111111111111010000111111110010110111111111001100000000000000011110111111111110011100000000000101100000000001010110000000000011101100000000000100011111111110101111000000001001101011111111110001111111111111010111000000000010000011111111110010101111111110001011" "1100000111111111111010101000000000111011100000000000110010000000010001100000000000001001111111111011011111111111110010010000000000110001111111111111111010000000001001101111111110111110011111111110101101111111110010011000000000110010000000000011010001111111111001011000000000101110100000000001101011111111111001111" "0011000110000000001100000000000000011111011111111110000000000000001101100000000001010000000000000101001100000000001100100111111110110111000000000010110101111111110011100000000000100010000000000011111000000000000100110111111111111000011111111111000010000000011000010000000000111101011111111111111010000000001100111" "1101000110000000000010111000000001101001011111111011011110000000001011101111111111010000011111111100001111111111110000111000000001110110100000000000100010000000000100010111111111101011000000000110101111111111110000011000000001100110000000000011100111111111101100001111111111101100111111111100101000000000000111101" "1110000010000000000001001000000001001011000000000011100010000000001111100000000001000011011111111101111100000000001011010000000000100101011111111110111100000000000110100111111111010001000000000001001100000000001011010000000000101010011111111101000100000000010111011111111111101111100000000000010111111111110101101" "1111000010000000000011001000000000010011100000000000011011111111111100001111111110111100000000000000100101111111101110000111111111111110000000000101111011111111111101000111111111100011000000000100101001111111111001011000000000110000111111111100010011111111111000001111111111000000000000000000001011111111110010100" "0000100110000000000110100111111111010011111111111101101100000000001110011111111111010110111111111100001100000000000010110000000000001010100000000100011001111111111110100111111111111101000000000101010011111111110110111000000000101100100000000010110100000000000011010000000000011101011111111100101010000000001001110" "1100110110000000000111011000000001011101111111111100000110000000011001011111111111100101111111111010101100000000000111101000000001010000000000000101011011111111111010111111111111010100100000000001000110000000000100101000000000111000111111111111001111111111111001101111111110111100111111111010001111111111101111101" "1110001110000000001110101111111111101110100000000101000011111111110111110000000001011110011111111110010101111111111110010111111111100100111111111101000101111111110010011000000000011010100000000101011010000000001010000111111111011010111111111011101110000000011000101000000000101110000000000001000110000000001110101" "0110010001111111111111000111111110110101000000000100111001111111111010001000000001000111000000000100001000000000001010011111111111100001111111111100101011111111110110010111111111101000011111111110001011111111111000000111111111111101111111111011111100000000001110100000000001001011100000000000000000000000000001111" "1101001111111111111101010000000001100110011111111011011100000000000010001111111111011001000000000000000111111111111110011000000000001000100000000010010010000000001111011000000000001110000000000100000100000000000001001000000000100111111111111110001111111111111010101000000000011111111111111110110100000000001000111" "1100010101111111111101110000000000101011011111111111101010000000000111111111111110111101011111111111100011111111110001010000000000100100000000000101101101111111111011111111111111110111000000000110110110000000000101101000000000001111011111111100010100000000000011001000000000100010011111111001101010000000000110000" "0001111100000000000000001000000000010000111111111111010010000000000111000111111111100101011111111011110101111111111101010111111111111011100000000001010001111111110100010111111111000101000000000000000101111111111010110111111111101000100000000011101110000000000000101000000000101000100000000010100010000000000100101" "1011101001111111111100011000000001011111111111111110011010000000001010111111111111111010100000000000000110000000000110111111111111111001011111111101010111111111111101111111111111011001011111111111101011111111110111111000000000100010000000000100011000000000010110011111111111101110100000000011000100000000000101101" "0001010000000000001010011111111110100111000000000000011001111111110011100000000000111001100000000100100010000000010111111111111111100101111111111001110101111111111110100000000000111010000000000010110011111111110011110111111111111010000000000001000010000000000000001000000000011101000000000010000011111111110111011" "1001000101111111110111100000000001111010100000000001010011111111111100100111111111100010011111111011010111111111110000111111111111110010100000000000011000000000000111001111111111100010100000000011011110000000001101101000000000001101111111111111010001111111101010111111111110010011100000000000100010000000001111000" "1001101011111111110101111000000000101001100000000000101000000000000111001111111111010111100000000000001001111111111111101000000001001010100000000100011111111111111001001111111111100101100000000101111110000000000001111000000001100110111111111111001100000000000010011000000000010010000000000000101001111111110010001" "1111111110000000001101110111111111111100100000000000100010000000000101100000000001010001011111111111100010000000000000000111111111111110011111111011110011111111110000011000000000101011000000000110000000000000010000011111111111101100111111111111100000000000001011010000000000010011100000000100011100000000001111110" "1110101110000000000001101000000000011000000000000101101010000000010011010000000001000110100000000011111101111111110011110111111111110010000000000011110010000000001001001111111111100000100000000110011001111111110111010000000000010100100000000000100010000000000011000111111111101100011111111100111110000000001111101" "1110100110000000010001010000000000101001000000000000011001111111110011100000000000101011100000000110010000000000010000011111111111010010100000000010011111111111111001010000000001001000100000000100001000000000000000101111111111111010111111111101110010000000011001100000000000111000000000000001101101111111110111000" "1110111100000000001110100000000001000000011111111110011000000000010100010000000000111100000000000000000001111111111111011111111111111111100000000011010110000000001110100000000000111000100000000001100110000000010001111000000000001000000000000010011100000000010010001111111111011110111111111111001110000000000101110" "0000010101111111110000011000000001100100111111111111001110000000010101000000000000100011011111111011111111111111110001100000000001001010100000000011010000000000001100101000000000000100100000000011011100000000010001011000000000000011000000000000111001111111111111110000000000001011000000000011000100000000000100010" "1010111001111111111100100000000001100001111111111110010110000000001001000111111111011000000000000000001000000000000010111000000001011011100000000101100100000000001100101000000000001010000000000101110000000000001001111000000000001010011111111110010010000000001101001000000000001011100000000010110010000000000000111" "1001011011111111110101100000000000111110011111111111000010000000010100110111111111111010111111111010000001111111111111111000000000101000100000000100001000000000010010010111111111010001000000000101010100000000001101001000000001001111100000000001011111111111110011001111111111111111011111111110001110000000001110011" "0001111101111111111000111000000000111101000000000011101011111111111000100000000001010001111111111110100010000000001011100000000000101000111111111011101111111111111101100000000001100011100000000011001001111111110101010111111110110110000000000000100101111111111111111000000001101000100000000110001001111111110010101" "0000101110000000011110001111111111011011100000000110010001111111110001000000000000100101000000000101101110000000000010000111111110100110011111111010000101111111101000111000000001000101100000000010011101111111101110010111111111001100111111111111001010000000001111011000000001101000100000000110110100000000001001011" "1111100011111111101001111000000000010000011111111111011000000000000001000111111111110101100000000000001011111111101011000000000000110001000000000100111100000000000111101000000000000001011111111110111011111111111010011000000000100110111111111110010000000000010010001000000000110010011111111100010100000000001111010" "1110000100000000000000001111111111000110111111111110010001111111110001001000000000000110011111111101111011111111111110001111111111111000100000000011001100000000001010010000000000001111011111111011111001111111111110111111111111110010111111111110001011111111111010001111111111010001000000000010010100000000000010001" "0010000010000000010001100000000000111010000000000010000110000000000110001111111111100111000000000010111111111111110100001000000000101000111111111101100000000000010001011111111111100111100000000011111000000000000111110111111111111010111111111011111111111111101111011111111111000101111111111111100100000000000011010" "1100111011111111110101100000000000011111111111111100011001111111111011110111111111001011011111111111000100000000001000110000000000011110000000000001010000000000001011110111111111101011011111111111010110000000000000100000000001001001100000000000111110000000001000000000000000101101011111111011110001111111101111011" "0001110100000000000011110000000001001011100000000001101010000000000100001000000000110010011111111111000111111111111011110000000000011001111111111110101110000000000110101000000000100110011111111110110000000000010000010111111111100111111111111101100000000000001010010111111111010111111111111111101111111111111101100" "0110001011111111111000110111111110111011000000000010110010000000000001110111111111011110000000000100000100000000000101100111111111110101100000000010110101111111111011110000000000001110000000000001011110000000001010011111111111000001011111111101110010000000000101101000000001011010000000000011001100000000000001000" "0001101100000000000101001000000000111000111111111010110011111111110111010000000000110000111111111010111001111111101110000000000001011111011111111110000101111111110111110111111111000110111111111111100100000000000111001000000001010100111111111111000000000000010001101111111111011100100000000001001000000000001000100" "0100011000000000001001001000000000110010100000000010010000000000010101101000000001000101000000000001111011111111110101111000000000011000000000000100100100000000010000010000000000000101000000000111010000000000000110001000000000011010111111111111100000000000001001101000000001010010011111111110000101111111110000011" "0000010101111111111101001000000001000111100000000010011101111111111100111111111111010010111111111110111111111111110110010111111111110110100000000100011000000000010010100111111111110110000000000000000110000000001110000000000001000010000000000010101101111111110011110111111111001001111111111001001011111111111101111" "0100110000000000011111111000000000011000100000000100111101111111101011110000000001111100011111111111000110000000011000111111111110001011011111111100001011111111101101000000000001011100100000000101011011111111110100001111111110101001100000000011011000000000010010001000000000110100000000000101111011111111110101010" "0000110000000000001111110000000000001111100000000110011100000000001011101111111111100111100000000000100110000000011010000000000000010011111111111101111001111111110000110111111111111010111111111110001000000000001110110111111111111101000000000000001100000000010101011000000001011001100000000011100101111111110101111" "1100101111111111111011101000000000111011111111111100111100000000000100000111111111000010011111111101111000000000001111101000000000001010000000000001000100000000000011000111111110111110111111111011110100000000001010111111111111010000100000000010100100000000001100010111111111001011000000000000000110000000001110000" "1101100011111111111001100000000000011011011111111111110110000000001011110000000000001000111111111011110010000000000101101111111111100100100000000001110100000000010000111111111111100100100000000001100010000000000111011111111111001001000000000001000010000000000111011000000000010110000000000011110011111111110111101" "0100000001111111110111100111111111010001011111111110011010000000000001011000000001011011011111111111111010000000010111011111111111100000011111111101011011111111111001110000000000000110000000000011101100000000000011111111111111011110000000000010000010000000001101010000000000000101011111111111111010000000001001100" "0100011111111111111010100000000000101000011111111111010001111111110101110000000001001110000000000001110100000000000001100000000000011110011111111010110011111111100111100000000000000101100000000010111110000000000000101111111110100011111111111111010010000000000001100000000000001010100000000101001010000000001110001" "1010011100000000001011100000000000100010000000000001010110000000000111101111111111111111000000000000000101111111110110110000000000111110000000000000110011111111111000111000000000011111111111111110111110000000001100010000000001010001100000000011000110000000010001110111111111100100011111111101001010000000000110011" "0100101011111111110011101111111111101110111111111101110011111111110001011000000001000000000000000011010110000000000011000111111111101000011111111101001101111111111010110000000000001011100000000010111000000000001000001000000000101010111111111111111001111111110110010111111111001111011111111110110000000000000011100" "1110011001111111111010011111111111001000000000000100001100000000000111011000000000001010111111111101101110000000000011111000000000011000011111111100110100000000001100011111111111011101011111111110100101111111111110000000000000011100011111111111000101111111111001100000000001000110100000000011000101111111111101001" "1011011111111111110110110000000000100001100000000010011101111111110001011111111111010010111111111111110111111111111111110000000000110100011111111100101111111111111100011111111111000000111111111111001010000000000110010000000000110111100000000010110011111111101110100111111111001010111111111100111100000000010001100" "1100100100000000001001100000000001100000100000000010101110000000001000010111111111011111100000000010001110000000000010011000000000001001011111111101011000000000010111111000000000001111100000000010001111111111110011111000000000010000011111111100001110000000010000000111111111010010000000000000001100000000001110010" "0010010010000000000100110000000001010000000000000011011100000000000011010111111110110111011111111101101101111111111110001000000001011010011111111110110000000000001000110000000000001000000000000100000110000000010000001111111111111101000000000011011000000000001011010111111111100101011111111011001101111111111010001" "1111001101111111110000010111111111010001011111111111111111111111111100000111111111000111100000000010010011111111110110100000000000001110000000000011011010000000001110001000000000101000100000000000111000000000001101000000000000110110111111111110010101111111111100111111111111001110000000000010001000000000010000011" "0100011100000000001000111111111110111010011111111101111100000000000000011000000001000101011111111100100111111111111110010000000000101001011111111011100010000000001011001111111111111100111111111101111001111111111000110111111111011010111111111100101111111111110000000111111111111101100000000010011011111111110010111" "0100101101111111111001011111111111010010011111111100000010000000000010010111111111001111111111111110110000000000000100100000000000011101011111111111000101111111111110010111111111001000000000000110110001111111111100110000000000101000111111111110110010000000001111101111111111011101011111111111001110000000001110110" "1010101001111111101111111111111111110000011111111110111000000000001101010111111111101110011111111011101101111111101101100000000001001000000000000001101110000000001001110111111111110110100000000110000101111111111001010111111111101000111111111111110101111111111100101000000000110110000000000000100110000000001101101" "0100010000000000010001000111111111010010000000000100011100000000000011011111111110111111011111111011101011111111110011001000000000000110100000000000001011111111110001101000000000001010000000000011000110000000000100010111111111110101011111111111001100000000000001001111111111010010100000000100010100000000000111001" "0000011000000000001000001000000000010011111111111010100000000000010101010111111111100001100000000000000010000000000100001000000001010100000000000110100010000000010000111000000000001000111111111111010110000000001011101000000001101111000000000000011101111111111110011111111111001011011111111101110011111111110110011" "0001100001111111111111101111111111011110100000000100111100000000000000111111111111100000011111111110111100000000000011100000000000101001000000000001010000000000000011100000000001000001100000000100101101111111101111101111111111011110000000000100001010000000011010001000000001010111000000000100010111111111110001100" "1011100001111111110000100000000000010001111111111111111010000000010001001000000001000101100000000011111010000000000110110111111111100100111111111011100111111111111101100000000001000110100000000010001111111111111001111000000000101011000000000001110111111111111010001000000000100110100000000001101000000000000100000" "1110101101111111111010101111111111001001100000000001110100000000000010111000000001010010111111111111001010000000001110011111111111001101011111111101010010000000000010000000000000101001000000000010111000000000001100000111111111101011100000000011101010000000010000111000000000110101011111111110001101111111110110001" "1111011111111111101101110000000000110000111111111111010011111111111111111111111111110000111111111111010011111111101001100111111111101010000000000011001100000000011010110111111111010010000000000011001100000000001100101111111111101110111111111101010000000000000110001111111111110100100000000000101001111111110011100" "0011000110000000000111111111111111100000000000000100010001111111111111110111111110111101111111111100000101111111111111101111111111001110111111111101000001111111101110101000000001000010100000000000111101111111110011001000000001000000111111111110010001111111110000010111111111010110000000000100011101111111110100110" "0100110010000000010100110111111111101010100000000001101111111111110010100000000000100100000000000001101000000000001001101000000000010001011111111010101011111111111111101000000000000001111111111110011110000000010000101111111111011110111111111011101101111111111110111000000001011110000000000000011010000000000000001" "1110011101111111110000100000000000101101011111111011011000000000001110100000000000010110011111111011101101111111110101001000000001001010100000000110100010000000011000011000000000011010100000000111110000000000000011000000000000100000000000000011010010000000000010101111111111110100100000000000110011111111111111001" "0001001110000000001000011111111110111110111111111111001100000000001001101000000001101100111111111111101000000000011000001111111111111000011111111100111100000000000101111000000000000111100000000010111001111111111110111111111110110100000000000001010000000000011110000000000001101011000000000001011111111111111101011" "0100001111111111111001100111111110111000011111111101100110000000000100100000000001000010011111111111010100000000000101001111111111000011000000000100100000000000001001111000000000010001011111111101010010000000000001111000000000111110100000000000011110000000001000111111111110111101100000000011101010000000001110010" "1110000100000000000010110111111111111010111111111110011000000000001010101111111111011010100000000011001110000000001011011000000000010101111111111110110010000000001100010000000000101101100000000000111111111111110110110111111111010101111111111110000110000000010001011111111111101101100000000011010101111111111110010" "0000010101111111101111000000000000110100011111111101000111111111111110101000000000011010000000000010010001111111110000011111111111111110100000000011101100000000001010101111111111001011100000000000101001111111111010011111111111110101000000000100000001111111101111011000000000100001011111111001101100000000010000010" "0000001100000000000011010000000000000111011111111110000111111111111011001111111111000101011111111110110011111111100110110111111111100101000000000000111101111111111110101111111111001100111111111111100001111111111111100000000000111000111111111100110011111111110100100000000000000010011111111101110110000000001101011" "1101001000000000001001110111111111001111100000000011000111111111110000110111111111100000100000000001110000000000001100001000000000101000100000000010110001111111110010110000000001000011011111111110001010000000001101100111111111011000000000000011110111111111111100101111111111100101000000000001111111111111110011100" "1111011010000000011010010000000000001111000000000111011011111111101000100000000001001001100000000100001000000000010000011111111111001100111111111110010011111111111010101000000000001110111111111110111111111111110101100111111110011100011111111111010000000000001011110000000000101001000000000001100011111111111111111" "1110111000000000010011000111111111011010100000000101111110000000001010100000000001011001000000000000000000000000001001011000000000000010111111111101101101111111110100011000000001101110011111111101011100000000001001001111111111101101000000000000111100000000010110101000000000000000000000000011110001111111110001111" "0000001000000000001001011111111111100010000000000000111110000000001000011000000000000010000000000100000011111111111001011111111111110011111111111101000010000000000000010000000000110001000000000000010101111111110100110000000000000011000000000010111111111111111110010111111111010100011111111110101000000000001110100" "0001111000000000011110010000000000001111000000000110011000000000000011100000000001110001100000000001001000000000010011110111111111100100100000000000011111111111110011101000000001010100000000000110000001111111111011011111111111111000000000000001110000000000011011111000000000101010000000000100011001111111110110111" "1101101100000000000100001111111111110001111111111101011010000000010000000000000000111101000000000011011110000000010011100111111111001101000000000001111101111111111011101111111111001100100000000100001110000000000000101111111111101110111111111100011000000000001000001000000000110101011111111110110111111111111111101" "0010001010000000000010110000000000111101100000000010000101111111111101000111111111111011000000000010000101111111101110111111111111100010000000000011011010000000000110001111111111001000100000000000101010000000000101011111111111101000000000000100011000000000010010011111111111110011011111111100101110000000001000101" "1101011100000000001000011000000000101101111111111100001001111111111111111000000000000001111111111100111101111111101111100000000000000110011111111101100101111111110010001111111111101100011111111100010000000000001110000111111111010100011111111011011110000000000111110111111111001111011111111011101000000000000111000" "1001111011111111101011100000000000011111111111111111101110000000000000001111111111001011111111111101110001111111111010100000000001001000000000000110000000000000010101011111111110100111111111111110101100000000001110100111111111111101100000000011110000000000001010000111111110011110011111111100001000000000001100011" "1101101011111111100100010000000000111111111111111100111100000000010111110111111110110110111111111011100101111111110101000000000001100011100000000101110000000000011000001111111110100100011111111110110011111111110011010000000001011110000000000001011000000000000011001111111111000001111111111011111101111111111001000" "1101111011111111111101011111111111000110011111111011101010000000000011110111111110111000111111111111101110000000001011001000000000101101111111111100101101111111110010110111111111101010011111111100101101111111110000100000000000101000011111111100111100000000000101011000000000010100000000000001011111111111111100000" "0100000110000000010110000000000000011000000000000101101010000000001001011000000001010101100000000010101100000000001001010000000000010011111111111010111111111111101100111000000000110011100000000000101101111111110100101111111110011111100000000001000101111111111100100000000000000000100000000000110100000000001111010" "1001111101111111101110011000000001000000111111111011101001111111111100100000000000100001011111111110111100000000000100111000000000101001100000000011000111111111111101111111111111010010100000000101101010000000000011111000000001011011000000000100011001111111111010110000000000000011111111111111000100000000000011000" "1111001001111111101110000111111111110100000000000010011000000000001110110111111111110111100000000010000011111111101101010000000001010001100000000100011110000000001100101111111110101110100000000010010011111111101101111000000000011001111111111011111101111111110110010111111111001110000000000000011111111111111000111" "0010111011111111110010110000000000101100011111111111010000000000010000001111111111100011000000000001101110000000010001100111111111011001100000000001111001111111110000110000000000111100100000000010011111111111110011010111111111001001011111111011110110000000001010111000000000101100100000000011001011111111111010111" "1100001001111111110001111000000000010111011111111110110101111111111110010000000000010111111111111011010101111111101110000000000000101111000000000100000000000000011110011111111111011011100000000011110100000000001011110000000000101111011111111100111101111111110100100111111110101110111111111010001111111111110101100" "0010011111111111101010001000000000101101111111111110010100000000010111011111111110110111111111111100010101111111110110010000000000011100000000000000101110000000000100010000000000100011011111111110110101111111110010110111111111011100111111111101000010000000001101111111111111110001111111111100010000000000001101010" "1110010100000000000000101000000000111111111111111100101110000000001110000111111110101100111111111100111001111111111100001000000001100000100000000100001000000000011000110000000000101001100000000010100101111111111011110000000000111011000000000100001101111111110001010111111110101111111111111110010010000000001010010" "1011100101111111110010101111111111010001011111111100110011111111110111101111111111100101100000000011110010000000010001110111111111111000111111111111001011111111111001110111111111011101111111111111011100000000001001000111111111010011011111111101110011111111110001110000000000010001100000000010000001111111110101101" "0011011010000000001010101111111111101011111111111111000111111111110000101111111111111010000000000010000010000000001011101111111111100101011111111110110101111111111010010111111111100010111111111110111100000000000101111111111110111001100000000010100111111111110101110000000000111000011111111111011111111111110001110" "0011110111111111111000111111111111010111000000000000110000000000000111100111111111000100111111111111110001111111111111010111111111100100111111111101111111111111101111101000000000010010011111111110111000000000000111000000000000010111100000000011001000000000001110111000000000011011100000000001001110000000000001110" "0011011010000000000110100000000000111100100000000011110010000000000101100000000000100011111111111101111101111111101111111111111111011111011111111100111100000000000000100000000000111011111111111110101101111111110001000111111111001010111111111100011000000000011001011111111111111110100000000011111111111111111101010" "0010100100000000001100010111111111101110000000000100010010000000010111111111111111101110011111111110100110000000000100000000000000110111000000000001010100000000010010100111111111000110000000000100010110000000000000011000000000011011100000000100001110000000010100100111111111010110111111111110111001111111111111110" "1111110011111111110001000000000001100111111111111100101001111111111101110111111110001101100000000001011101111111110100110000000001110010000000000011110010000000000110001111111110100110100000000100101011111111110000011000000001001110011111111101110101111111111001111000000000001010011111111100001101111111111001010" "1111101110000000001100111111111111101100011111111110110101111111110001000111111111100001111111111110101011111111101110110111111111011010011111111101111000000000000111000000000000010001100000000000010000000000010001101111111111111110100000000010010111111111110100011000000000110110100000000000000101111111110010111" "0010110010000000010101110000000000001101000000000010110010000000000100100111111111110111100000000011100000000000001101011111111111010000011111111011010000000000000011100000000000100001011111111111111000000000000011011000000000110011111111111011110000000000000011000111111111110011100000000101111001111111110011011" "1110100011111111100111001000000001000000011111111101001100000000001110101111111111110000000000000010000000000000000111111000000001110001100000000011011100000000000000111111111110111010000000000000001010000000001101001000000000110110100000000011001110000000000100100111111111000111111111111010100010000000001010101" "1011000111111111101010001000000001101011011111111010100100000000001110001000000000100100100000000010100100000000001010010000000001000010000000000100100101111111111101010111111111101110100000000010000011111111101111010000000001001001100000000011111000000000000111101111111110110110011111111101001010000000000010111" "0001110111111111111001110111111110110110100000000110111000000000001010000111111111101101111111111110101110000000001101100111111111010101111111111010001111111111111010001000000000001101100000000101001011111111111000011111111111010111000000000011110010000000000000111000000000111001011111111111011010000000001011100" "1100110100000000001011011111111111000111000000000000010111111111111001010000000001000011100000000000101100000000001110000111111111000100100000000001000111111111111100100111111111100101000000000010000110000000001001111000000001000010011111111100001001111111101111101000000000010001000000000001001110000000000100000" "1111001100000000010000000000000000111101111111111101100100000000000010101000000000110011011111111110101110000000001100000111111111100110100000000010000100000000001100111111111111011100000000000011101011111111110010010111111110111111111111111100011110000000000111101111111111100010111111111111010001111111111111111" "1111110111111111111101111000000000000001011111111101010101111111111011101111111111001110000000000100001010000000000001100111111111111000000000000001010101111111111100110000000000111000100000000010100000000000000011111111111110110011111111111111011011111111111000000000000000010101100000000100101010000000010001110" "1110000000000000010001111111111111111000100000000010000111111111110100111000000000111001100000000000110100000000001101011111111110111010111111111111110111111111110101110111111111100101100000000000111011111111111101100111111111010000111111111101101100000000011011001000000001011101111111111110000000000000010001111" "1110111100000000001110011111111111110011111111111111101101111111111100101000000000010110100000000001110011111111111111010111111111111110000000000010011111111111111110110000000000101111111111111101111011111111111011100111111111100011111111111011011110000000000000110000000000100010111111111111110101111111110100011" "0011100000000000000101111111111111100110100000000010101010000000010001000111111111010000111111111110001111111111111000011111111111010111000000000011101001111111110000001000000000101100011111111111110101111111110011010000000000001001111111111101110001111111110111000000000000100010111111111110000110000000000111101" "0100001010000000000000011000000000110110011111111100111010000000010100010000000000111010111111111110111101111111111010010000000000101000100000000100000010000000000110010000000000101000000000000011001000000000000001110000000000100011111111111110111100000000010000000000000001010000000000000011100101111111101111001" "1111100000000000000000000000000001000000111111111111011001111111111000001111111111111001000000000001010000000000001000000000000000011110111111111100100011111111111111010000000000111001011111111110011000000000000010011000000000110000111111111111001110000000000100110000000000100001011111111110100001111111111111001" "1101011001111111110111011111111111011011000000000000101001111111110100001111111111110111011111111100001111111111111010101111111111011010011111111100001010000000000000010000000000010100000000000000100011111111110010011000000001000111100000000010000000000000000110100111111111011001000000000001000000000000001010111" "1110111101111111110110011000000000001000111111111111001001111111110000110111111111010011000000000000100000000000010001111000000000011000100000000100110000000000001100100111111111000010000000000100011101111111111100000111111110111110000000000001101101111111110010101000000000111010111111111101101111111111110101011" "0100011000000000011000111000000000001101000000000110011010000000001101101000000001000011000000000010001000000000011011110000000000011111011111111111101011111111101000011000000000001000100000000001011101111111101110001000000000000010011111111111010110000000010101100000000000110101000000000100001110000000001001111" "1110001000000000001001100111111111010011100000000010101011111111110011011000000000010001100000000011110101111111110011010111111110111100011111111101101011111111111111111000000000111100000000000100011111111111110000000000000000110111011111111100110010000000001011000000000001001010000000000010111101111111110001010" "1011101011111111111110010000000000100111011111111100110110000000010011010000000000100100100000000001111001111111101110111000000001001001000000000010110111111111111000000000000000011111100000000011111011111111111011011000000000011101111111111100110110000000001111110000000000111001111111111010101001111111110111101" "1011100001111111111000010111111111101110111111111110100100000000001101010111111111110010011111111110100100000000001001101000000000100010000000000100011100000000000101011111111111000101000000000110111011111111110001000000000001010111000000000001010110000000001100011000000000100010111111111101011001111111111110011" "0010101111111111111101111111111111111000000000000011110001111111110101100111111111010110000000000010000011111111110100001000000000000110011111111101101110000000000000001111111111111101000000000010111011111111110110110111111111001001100000000100010011111111110011100111111111010100111111111101010010000000001111100" "0001100010000000000110000000000000111111011111111101110111111111111000000000000000011100100000000000111111111111110000000000000000100011100000000100000010000000001111111111111110100100100000000111011101111111101111111000000001100011100000000011011101111111110000101000000000010000011111111001101011111111110011110" "0010010110000000000111100000000000111010011111111101111100000000001110100111111111010101100000000000110000000000001111101000000000110110000000000100001100000000010011111000000000111000100000000110000111111111110111010000000000111101111111111100110000000000001101111000000000100010011111111011111001111111110110111" "0100001010000000001001001000000000001100000000000100010101111111110010101000000001011011011111111101101110000000000001110111111111000000111111111011000001111111110000100000000000010110111111111111110110000000000011010111111111001101011111111101001000000000000101011111111111011010000000000011001111111111110001000" "0110100100000000001010110000000000000110000000000011011110000000001001000000000000111001100000000011111110000000001001001111111111101110111111111100010001111111101101100000000001010000100000000100010111111111110011001111111110111000111111111100111011111111111011001000000000011000100000000001001101111111101110101" "0001010100000000000010100111111111100001100000000011001111111111101110001111111111101101000000000010100000000000000011101111111110100010111111111100110001111111100111001000000000100111100000000101000111111111111110010111111111011011011111111101000110000000000001000000000001110010011111111111010001111111111111101" "1110110011111111111101001000000000000101100000000000110100000000001000110000000000110100111111111100001111111111111001110111111111000001000000000011100101111111110101111000000000011010111111111101111010000000001101111111111111010000011111111101101011111111110100111000000000100111000000000000111110000000010001000" "1110111000000000000011100000000001101001111111111001101101111111111011011111111111010000111111111001010101111111100110000000000001001111100000000101000010000000000001100111111111101010100000000011101110000000001000101000000001101000100000000000011110000000001000001111111110110011011111111010110100000000010000001" "0011110001111111111111111000000000110011100000000110000100000000001010110000000001001010000000000000000100000000000000011111111111001001000000000000111110000000000010000111111111110011011111111110011101111111101110000000000000100111111111111111110010000000010101000000000000110011100000000100011101111111101111011" "1100000011111111111001011000000001001001011111111111100101111111111110111000000000010100100000000011100111111111110101101000000000100011100000000001101010000000010100111111111111001110000000000110100010000000000000111000000000110110100000000011010010000000000100001000000000001110000000000010011001111111110111111" "1011001000000000001010010000000001010011100000000000001001111111111111011111111111001101011111111110011011111111111010001000000000111110100000000101011101111111111100111111111111110011000000000110101111111111110000000000000001001011100000000100000000000000010011011111111111111100100000000001110101111111110011010" "1101000001111111110101100000000001001101000000000001100010000000001111010000000000001000100000000001001110000000001010111000000000011101000000000000110001111111111011011000000000000010000000000011000001111111110110111111111111110100111111111101101111111111111111111000000001010111000000000011011100000000000101011" "0010001111111111111100100000000000100001111111111101001110000000010100111111111110111011000000000001111101111111110101101000000001010001111111111111001111111111110101111111111111011101000000000011000011111111111100001111111111010111011111111111010010000000010111010000000000001110100000000000011010000000001111000" "0100000110000000000011011111111111110010011111111101000010000000010110010000000000011111011111111100100101111111110010000111111111000000011111111111101000000000000100000000000000100000000000000001111010000000010000100111111111010010100000000000011001111111111100001111111111111000100000000001100001111111110111010" "0010101100000000010011000111111110110100100000000110111010000000000101000000000000001000000000000001000110000000001001000111111110110011000000000000000011111111110101000000000001100101100000000110001010000000001101010111111111011111111111111111010100000000011001101000000000011001100000000100011000000000000010110" "1111110000000000010000110111111111111101000000000011101010000000001110000000000001000111100000000000000000000000000110010000000000100001100000000100011101111111111000010000000000011101100000000011100111111111111110010000000000001011100000000011011110000000010000111111111111100110011111111110110100000000001010000" "0101000100000000000011101111111110101100100000000100110000000000001001101000000001010100111111111111001011111111111100111111111111101100111111111011000000000000000010010000000001011100011111111110111111111111110000011111111110111000111111111111101010000000001010011000000000111110100000000011111001111111110100100" "1001111011111111110100110111111111101110011111111111101100000000000010101111111110100101011111111110101100000000000011000000000000000000111111111111101000000000010110001111111111011110100000000001000101111111111110101111111111111111011111111111101011111111110010000111111111010100111111111010010000000000000000001" "1100000111111111110000100000000000101111000000000011011111111111111111000111111110111110000000000011010111111111110101110000000000101111011111111101011011111111111111101111111111000001000000000001001110000000000101101000000000101001111111111100110111111111110001111111111111110011000000000001111110000000000100000" "0000101110000000000100100000000000101000011111111011111100000000010000011000000001000000100000000010101101111111110101110000000000100101011111111111011100000000001010100111111111000100000000000011110010000000000100010000000000001011100000000000011011111111111010101111111111010001111111111111100011111111110001010" "1111010001111111101010010000000000011001111111111110100000000000001100000111111110110001100000000000100011111111111000011111111111001110100000000010100000000000001000001000000000110001000000000011111110000000000000100000000001100101111111111111111011111111111100101111111111011110100000000001101101111111101001111" "1100100100000000010110001111111111111110011111111111110101111111110101001000000001100101100000000110111111111111110111011000000000100010100000000100111010000000000011101000000000000010111111111110011001111111101110111111111111000010100000000001001101111111110010010000000000110000100000000011011100000000010101101" "0000111011111111110101000000000000100010011111111100110010000000011000100111111111010110000000000001100100000000001101001111111111010101000000000000101010000000000001010111111111100111011111111100010101111111111101101000000000011100000000000001000000000000001001001111111111101010011111111110111101111111101100010" "1111100001111111110110010000000000000110100000000100110101111111110111001000000000001110100000000000111100000000001000110000000001010001100000000000001110000000001101000111111111000001000000000010111010000000000110111000000001000010111111111111011101111111111000101000000000100101000000000000011010000000001111001" "1010110110000000001000101111111111111100000000000100110101111111101011100111111111110111100000000011001001111111111011000000000000101100011111111110010100000000000011100111111111110011111111111100000011111111111001010111111110110010100000000100011111111111111001100111111111111100111111111111011010000000001111110" "0010111101111111110011011111111111010111011111111100101000000000000111001000000000001011011111111011100001111111111101001111111111101001100000000101110111111111110110110000000000000011111111111100100010000000001011011000000000011111011111111100000101111111111001011000000000100000100000000001100000000000000010110" "1101111110000000000110011000000000010011100000000100001000000000000001110000000000001001011111111111011011111111111000101111111111000101011111111111011001111111111101000000000000000111000000000001111100000000001100001111111111100100100000000010111111111111110110101000000000100100100000000010011111111111111010101" "0110000111111111101000101111111111110011111111111010111000000000000010111000000000001100111111111010110111111111111001001000000000010001111111111110111111111111111000111000000000000101000000000000101101111111101111111111111111111111111111111100011000000000010011101111111111001010111111111011100111111111111110001" "1101100100000000001011010000000000101001100000000011000110000000000111111111111111100100100000000110000000000000000101011000000000111110011111111101010111111111100110111000000000010110011111111111000110000000001111111111111111010100100000000110001001111111111011111111111111100100100000000011011000000000011000100" "0001011001111111101111011000000001100011011111111001110110000000011001101111111111000010011111111001111001111111101101111000000000010100000000000000010101111111111111000000000000010101111111111100101111111111111110001000000001110000011111111110011010000000000010010000000000001110100000000011110001111111101100110" "1110000001111111111110111000000000000100000000000000010000000000001000010000000000101100000000000010011101111111110000100000000000101011100000000011110100000000001000101111111110111100011111111110111001111111110100000000000001000001111111111111011010000000010010011111111111000110011111111011111100000000001100110" "0001111110000000001111011000000001001101000000000010110010000000000010000000000001000111000000000001001011111111111100111000000001000100100000000101110000000000000101000000000000100110111111111101000100000000001011011000000000010101000000000010001110000000000110101000000001010010111111111101110010000000001111000" "0000010001111111111001110000000000110100111111111101011010000000001011100111111110110110011111111010110011111111101111111111111111110000000000000100100110000000001010010111111111010101000000000100010010000000000000100111111111110000011111111100010010000000000110011111111111111010011111111011111011111111110011000" "1111010000000000001111001111111110100110100000000010101101111111110100001000000001001111111111111111101011111111111101001000000001111001100000000100000100000000000000001000000000100100000000000000101101111111111110111111111110100111100000000001101101111111101011100000000001100010100000000000110110000000000001000" "1111110101111111111000111000000000100100111111111101011110000000010101110111111111100000011111111010011011111111110010010111111111011001100000000110101010000000001010111000000000011101000000000010101110000000001000100000000000010001011111111010010110000000011111000111111110001011100000000001111111111111111111010" "0001000000000000000111011111111111110101000000000001011010000000000011011111111111110110100000000010011010000000010000110000000000101111000000000100111011111111101000110000000000011010011111111100011101111111111111010000000000011010100000000010101001111111101100111000000001011101000000000011010010000000010100111" "1111010110000000000011101000000001010100011111111110101010000000001101001111111111011100100000000011001100000000001000100000000000100111111111111110111110000000001000011111111111000110011111111101000111111111110110000000000001010010000000000100001000000000001100111000000001010000100000000010110011111111111110001" "0010111100000000001001001111111110111010100000000011000010000000000001010000000000000111100000000110010011111111110001110000000000010100111111111110011010000000000001110111111111000110000000000100100001111111110111000111111110111110100000000100010011111111111010010000000001001110111111111011101001111111110101110" "0111011101111111100111110000000001011011011111111000001110000000011000111111111110010100100000000000110110000000001011100111111111100000100000000110111100000000010001111111111111101010000000000011110100000000001100100111111111101110111111111011000000000000001010000111111111011100000000000100000011111111110010111" "0011000100000000000001011000000000000000011111111111000010000000000010011111111111011101111111111100110100000000001000011111111110111001100000000100010111111111110000011111111111000010011111111111111110000000000111110000000000010000000000000011110010000000001010010111111111110101100000000001011100000000010001011" "1001110000000000010111001111111110001111100000000100000011111111100110111000000001110010100000000010010010000000000110001000000010000010100000000000111001111111100100110111111111010011111111111101001100000000010000010111111111011110100000000010101011111111110010110000000010000010100000000010010010000000011011100" "1111111110000000001010111111111111100011000000000010000001111111101111111000000001000101100000000010100010000000001000110000000000101010100000000001111111111111111101011111111111010111000000000001011011111111111111011000000000111010111111111100100110000000001100101111111111111111111111111111111110000000010001100" "0010010110000000001101110000000000101001111111111110000110000000001111110111111111101011011111111101111000000000000101111111111111010011111111111101110110000000000110001111111111010001111111111101111000000000010000010000000000010000100000000001111101111111101111100000000000010000000000000001000101111111111010010" "1111100100000000000101010111111111011001000000000001011001111111111010111111111111110101111111111100101001111111111100001000000000001101100000000011000111111111110110011111111111000001011111111100101101111111111010100111111111010101111111111100101111111111110010001000000000111001100000000100001100000000001111000" "1011000010000000000001111111111111010011100000000010011001111111110101111111111111101111000000000001001010000000000000001000000001000101100000000100010010000000000110011111111111011101000000000010110011111111111101000000000000011100000000000100100000000000000011111000000000011101000000000010000010000000001011111" "0100100010000000001001101000000000110011111111111101110100000000000011011000000000011100011111111110101000000000000010100000000000110001000000000001101100000000001111100111111111010011000000000010001101111111110111100000000000001010011111111101000001111111111101110111111111010111111111111100000011111111101010111" "0100010000000000000011001111111111000100011111111111101111111111111110010111111110111011011111111110100101111111110001100111111111111110111111111101010000000000001010110111111111100101111111111111101010000000000100011111111111100111111111111110000111111111101110010000000000000000111111111101111101111111110000000" "1110000111111111101110011000000001001000100000000001110101111111111101010000000000000101111111111111001001111111110101010000000000110111100000000110010011111111110101111111111111111110111111111011101001111111110101000111111111111001000000000001111110000000000100110000000000100011000000000000010100000000001000101" "0011010100000000001110011000000000000100011111111101101010000000001111001111111111111000111111111100101001111111111100000000000001000011100000000011010111111111110101110000000000110110100000000000010111111111111111011000000001000000111111111101110001111111101110110111111111010011111111111111001001111111101110001" "0001100010000000010001000000000001010101111111111111001111111111111111000000000001000100011111111111010010000000001110000111111111101001100000000001000110000000000101011000000000101010100000000011011011111111110000110000000001010010000000000100110100000000001100110000000000100110011111111100101001111111110110011" "0001100111111111101000011000000001101001111111111010111100000000000111100111111110111011111111111111111111111111110001101111111110011101000000000000111110000000000101000000000000001010100000000100010100000000000100010000000000000110011111111101001000000000010001000111111111101110011111111100110011111111101001111" "0101001001111111101110010000000001100101111111111011101000000000000101111111111111100101011111111111101011111111110000110111111110011011000000000110110100000000001011011111111111101100011111111110011101111111111000011000000000000011011111111010100100000000000010110111111111010100011111111110111111111111111010000" "0011011000000000000001111000000000101001111111111100001000000000000011110111111110100100100000000010110011111111111101001111111111110111100000000001000110000000001011001000000000000101100000000010101001111111111111111111111111101111000000000010010110000000010110101111111110110000011111111011101001111111101100010" "0100100011111111110011000000000001001001100000000011000101111111111100010111111111111001000000000100011010000000000000110111111111100100000000000011011110000000000000001000000001000101100000000000110011111111111011001111111111011101000000000011010000000000001011000000000000111010000000000100001110000000000110011" "0100011011111111111000100111111111011111000000000000001010000000010100101111111111001101111111111100001110000000000011010111111111010000100000000100101110000000000011000000000000110000111111111111100001111111110000111000000000000000011111111010111110000000010110110111111111111001100000000011111101111111110000110" "0110001110000000000001001111111111110001100000000010010010000000000000111000000000000000111111111011111110000000001100111000000000101111000000000100000100000000001100101000000000011000000000000011010100000000001011000111111111101010100000000010110001111111111001100111111111111001000000000010001011111111111111010" "1111011011111111101011111000000000101010011111111111001000000000010000001111111111011100111111111110100111111111111011000000000000010010011111111110100001111111111101001000000000100010111111111100110001111111110110100000000001100100100000000001000011111111111010110000000000011011100000000010000011111111111111010" "1100111010000000011101110111111110111111000000000011010101111111101010010000000001110000000000000010111100000000001100101000000000010110100000000001000001111111111111011000000001000001111111111101101111111111111101001111111111110111100000000101000011111111110100110000000001111000011111111011110110000000010111000" "1111001110000000010010100111111111000111100000000100111110000000001011000000000000101111000000000110111100000000000111111000000001011110000000000010011111111111110011010000000000010100111111111100110001111111110011101111111111111011100000000100001110000000000101000000000000010010111111111101111110000000001110000" "0010110101111111101110101111111111111001111111111100101100000000001001110111111111100100000000000010010101111111111111110000000000111110100000000001101111111111110011000111111111101101000000000000001110000000001110110111111111010000000000000100000010000000001011001000000000110100000000000011101001111111111111010" "0100010101111111101100111000000001001011111111111010110000000000001111001111111111011001111111111011110010000000001011011111111110111110111111111110110110000000011010001000000000000010111111111011100101111111111001000000000001001010111111111001101100000000010100010111111110010010011111111100011100000000000000100" "1100101001111111110110111000000001000110011111111100111100000000000000011000000000011001011111111101110111111111111100111111111111111101011111111111111101111111111000101000000000110110100000000010011000000000000010001000000001000110011111111101100100000000001001111111111111100111000000000011011100000000001000101" "0010010001111111101010000000000001100100011111111010111100000000000101101111111111000010111111111000100000000000001101001000000000000101100000000010000100000000000111101000000000101111000000000000001010000000001101001000000001011100111111111001000010000000001000110111111110101110100000000010110110000000000000011" "1100101010000000000110110111111111110011000000000010001111111111101110010000000001001011000000000011001000000000000010100111111111101100000000000101000101111111110111001000000001000001011111111101101100000000001010111111111111110110100000000001110111111111101001000000000000110101000000000100000011111111111101100" "1111001110000000001111111111111111010010000000000000010100000000000101000000000000001100111111111110001000000000001000100111111111111010111111111111111000000000000001100111111111111111011111111101100001111111110101001000000001000010100000000011001010000000001100110000000001100110111111111100100010000000001110000" "1111010101111111110000101111111111110010111111111110000000000000001100111111111111100011011111111011011100000000001111110111111110101100000000000010011100000000010011100111111111010000111111111111101100000000000010101000000000101000100000000011000010000000011001010000000000101011011111111100000110000000001010011" "1011111100000000010111111000000000010000100000000110101101111111110101100000000000000001000000000101110011111111111011010000000001001011111111111101101111111111110100011111111111110010000000000011100001111111110000101111111111001111100000000011110011111111110000111000000000111000100000000011101000000000000001101" "0011000110000000000001000111111111101000100000000001011100000000010010001111111111101111011111111100111100000000010001010000000000010110100000000000110001111111111100110000000000111100111111111111011001111111110000101000000000110100100000000001101100000000000110111111111111010110000000000001000111111111110101011" "1101111010000000011111001111111110100010000000000110001111111111110011101000000000001110000000000010011110000000000010110000000001100111011111111100011001111111110110101000000000110111000000000000000000000000001000100111111111000100100000000111111011111111101100001000000001001111111111111111010010000000011001000" "0000110101111111101111111000000001000011011111111110010000000000000101100111111111010110111111111111001110000000000111011000000000101001111111111101001001111111110000100111111111000000100000000000011000000000000100111000000000100011111111111111010011111111111010110111111111100100100000000001010010000000000010001" "1111100001111111110000011000000001010110100000000010010110000000010000111111111111100111111111111111010010000000001111011000000000001111100000000000110000000000001001010111111111101000000000000011101100000000001100110000000001100110100000000010000110000000001011111111111111100010011111111100110011111111111011000" "1110000111111111111100111111111111010111000000000010001101111111110111101000000001000000100000000011100000000000010000110000000001101001100000000000100111111111101111110000000000010010011111111111010011111111111000011111111111100011000000000010111011111111110000101000000000000101011111111100001010000000000001110" "0100000100000000000001011111111111010100011111111111110010000000000000100000000000001111111111111110000111111111111000110111111111001100100000000100011010000000001000001000000000011111111111111011110011111111110111111000000000100011100000000100010001111111101111010000000000011000011111111101000111111111110110000" "0011101100000000001011000000000000011010011111111110000001111111110101001000000000110111000000000011001110000000010001011111111111101001100000000001110000000000010100000000000000100111000000000001000111111111111100110000000000011110000000000000010001111111111100100000000001011000111111111011111010000000000100001" "1100011100000000001011101000000000111101100000000101101101111111111111101000000001100100000000000000011111111111111111111000000001010101100000000001110000000000000011001111111111100110011111111110101110000000001010111000000001001011000000000011111001111111110011001000000000100111011111111111000000000000010011001" "1110010110000000000011101000000001010001100000000001111001111111110100110111111111110100111111111100010010000000000010101000000000000101000000000011010110000000010001101000000000001110011111111111101100000000001010101111111111011100000000000010101100000000000100101000000000110010111111111101011001111111111101000" "0010111110000000001010101111111111101111100000000100011111111111110101110111111111000010000000000100001101111111110010101000000000011101011111111111001110000000001011011000000000100100100000000001111001111111111101010000000000100100111111111011111011111111110111101111111111100111000000000001001100000000000110100" "0001110011111111110010001111111111011011100000000011011011111111110100011000000000010001000000000001110011111111110101010111111111100011011111111110000001111111110101011000000000101110111111111110101010000000000000001000000000111101111111111111110110000000000010111000000000011001011111111011011110000000001111001" "1101111101111111111001010000000000010100000000000001101111111111111001011111111111101011000000000100011101111111101110111000000000110111100000000000101101111111101111000111111111010111011111111110110001111111111011111111111111101111000000000100001001111111111010100000000000000100000000000010001100000000000101001" "0010100101111111110100110000000000101000111111111011110100000000000111110000000000001011100000000001101000000000000110011111111110111001100000000010001001111111110101101000000000101000011111111110101001111111110101100111111111010000000000000010001110000000000111001000000000100001011111111101000100000000010010000" "1111101010000000000001100000000000111101111111111101001000000000001100101000000000111110100000000001111101111111110011011000000000000011100000000000000010000000001010011111111111000110111111111110011101111111111110000000000000101111011111111110010010000000000001001000000000010000111111111111011101111111110110010" "1110101111111111100010111111111111100111111111111110110010000000000011100000000000001001111111111100000101111111111100000111111110100001100000000101010100000000010100001000000000010111111111111111010110000000010001100000000000000110011111111111011000000000000010100111111111101000100000000011011000000000000100110" "1100100111111111110100011000000000100011111111111100110001111111110100110111111111011110111111111110110110000000001110110111111111101011011111111101000000000000001101000000000000010100100000000000111101111111111000101111111111001101011111111100001001111111110010100000000000100001000000000010011100000000000011110" "1101111110000000010000000111111111011100000000000001010100000000001110010111111111110101000000000011111000000000001100101111111111101110100000000001001100000000000010111111111111011100000000000011111111111111110011101000000000010100000000000000000001111111110001000000000000100110011111111101001001111111111001010" "0010101101111111101110010111111111011001100000000100010010000000000111010000000001000110111111111101010101111111111000001111111111000110000000000010011011111111111001010111111110111011000000000000011001111111111111000111111110111011000000000001011100000000001101101111111111110000011111111101001101111111111110100" "0001111000000000010101001111111111110010100000000101000110000000000101111000000001001010111111111101110111111111101110010000000001010011011111111101001101111111110111001111111110111011000000000001000000000000001101000000000000110000111111111101110101111111111011010000000000010000000000000000100001111111111101010" "0010110000000000000001000111111111011011100000000000101001111111110000010000000001100110000000000000011100000000001111101111111111100001011111111101010001111111110000000000000000110010111111111011110101111111111110001000000000011000000000000000001111111111101011000000000001010100111111111011111000000000000011000" "1011101111111111111100110000000000001100000000000001110011111111111011110000000001000010000000000100011101111111111010101000000001000100100000000100101011111111110010100111111111000010111111111011101011111111111011100000000000001000000000000100111110000000000101101000000000010110111111111101110110000000001111110" "0101101001111111110101100111111111100101100000000000111001111111111010110000000000001010100000000010011110000000010000101111111111001100100000000011111110000000010100001111111111100110000000000100011101111111110011011000000000000001011111111101010000000000010010001111111111111101000000000000111111111111110101111" "1011100100000000001110110111111111001111111111111111110100000000010000011000000000000001100000000000100111111111110000001000000000001100100000000000101101111111110100110000000000100011000000000011101100000000000010001111111110111010100000000001000101111111101110100111111111001011111111111101101010000000001010101" "0000100011111111111111101000000000011011111111111110101010000000000111001111111111000100100000000010010101111111110001010111111111000111011111111111100010000000000101011111111111011100000000000000001101111111110111101000000000000100100000000010111110000000010000111111111111100111000000000010001000000000000101110" "1011110101111111111001011111111111101001100000000000000110000000000000100000000000100101100000000001101100000000000011101111111111000100011111111111100100000000001011100111111111010110011111111110011110000000001011000000000001000100011111111101111001111111101111010000000000000111111111111110111111111111111010000" "0010101010000000000100101000000000110101111111111110001000000000011101001111111110111010111111111100001111111111110110110111111111111101111111111111100000000000001101010111111111000100011111111111010110000000001100000000000000001101011111111011100010000000000110011111111110111101000000000010100001111111110010110" "1110001100000000010001001111111111111000111111111100101010000000001010000000000000110010011111111101011010000000010001010111111111011111100000000010010010000000000000110000000000101000011111111011111110000000001101100111111111100111100000000010001000000000010001100111111111001000111111111011100010000000010001100" "1100001100000000001100000111111111000001000000000101100011111111110111111000000000000111000000000011000100000000001111001000000001101000100000000101001110000000001011000000000000110110011111111101111011111111101111111111111111101110100000000110000101111111110101100000000001000011000000000000111110000000010110011" "0000100001111111101111010000000000100011011111111001011100000000000101111111111110010000111111111000000010000000001110101111111111101110000000000001100010000000010000111111111111101110111111111101011111111111110001110111111111111110111111111000110001111111111101000000000000000000111111111101101111111111101110011" "1111100100000000010110000000000000111001011111111100101100000000000111111111111111010001000000000000010110000000000010001000000000011110000000000000111000000000001001110000000000011101100000000010000011111111111100110111111111000111000000000100100011111111111000011000000000110100011111111101101000000000000101001" "0100101011111111111000000000000000111111000000000000100000000000001001100111111111101110100000000011100100000000000110010111111111100000011111111111011100000000000100001111111111010000111111111110111110000000001000000000000000001011111111111111111010000000000110010111111111110100000000000001101110000000001011011" "1110101110000000010100110111111111010000000000000100000110000000001000011000000001001011000000000001101011111111111100010111111111110101100000000011000101111111111111111000000000110100011111111101011011111111110010011000000001001000111111111111111000000000000111101000000001000000111111111111010100000000000110100" "0000110011111111101011100000000000010100100000000001111010000000001010100111111111100001011111111101011100000000000100101111111111111011000000000100001100000000000111100111111111000011011111111111100000000000000101101111111111100101011111111100000010000000001100000111111110111111000000000100010111111111110000101" "1100100100000000010101111111111111001100000000000000111101111111111110100111111111100010100000000001101101111111110101100000000000110111000000000100011111111111110001000111111111101010011111111110010010000000010000111111111111111010000000000110110001111111110110010000000000110101000000000100000010000000000111010" "1010011010000000011001001111111110111010100000000011101101111111111011011000000000110101100000000010000001111111110100010000000000111010011111111101011111111111111110010000000000110010000000000011000001111111110100110000000000010001100000000001101011111111101101010000000001010001000000000010001110000000000000101" "0011001011111111101101100000000000011100011111111010100100000000010101010111111111011011000000000000000000000000001111110000000000100001100000000011001110000000000111100000000000000011011111111011011111111111111001001000000001001100111111111101111000000000011100000111111111111010011111111101111001111111100111111" "1111011101111111111111110000000000011010111111111100011010000000010001001111111110111010000000000010011111111111110010111111111111011100100000000100110010000000000100000111111110111001000000000000100001111111111111010000000001101010111111111101011010000000001011100000000000110001100000000000110101111111101001010" "0011110001111111110110101111111111101110111111111101000000000000010000111111111111010001000000000011111110000000001111111111111111010111111111111110111010000000000100110000000000011100000000000010001110000000010001110000000000110000011111111101111101111111110100000000000000000111100000000000101110000000000011001" "1101111101111111110011011000000000100000000000000100100000000000010110001111111111011101000000000000101111111111111011010000000000101110100000000101001100000000010101010000000000110011011111111100000010000000000001111000000001001100011111111101000100000000010001000000000000011100011111111100110111111111101101101" "1001111110000000000011110111111111100010000000000101000101111111110000001000000001110101100000000100000110000000001010000000000000110011011111111100010001111111101000100000000000010010011111111110001000000000000111110111111111111001100000000010000011111111110111110000000001011010111111111110111001111111111001110" "0111110101111111100110110111111111110011011111111011011000000000011100000000000000010000011111111000010001111111111001110111111110101000100000000101100100000000000001010111111111100111000000000000101000000000000010110000000001101111111111111111001000000000000101101111111110111111111111111100011100000000000011101" "0011111111111111111000001000000000111111111111111011001000000000000011011111111111101010111111111101101001111111111110101111111110010010100000000100110000000000000001110111111111110110100000000011110111111111110000001111111111100101011111111010110000000000001110111111111110101011011111111110000010000000000010110" "0001010010000000010010000111111111101101000000000010001010000000010001011000000001000110100000000000100100000000000110001111111111110000000000000001111101111111110001111000000000000000000000000001001000000000001011010000000000101111000000000000000001111111111110111111111111101110011111111111100110000000010010000" "0011001111111111111011101111111110111101000000000100010101111111111000110000000001010101000000000000001111111111110100110000000001010000000000000101000110000000001100110111111111011110000000000000010011111111111010011111111111111010000000000001101001111111111111111111111111111110100000000000101111111111111000110" "1110011100000000010001111111111111101111111111111111010101111111110011101000000000000000100000000101001111111111110100001111111111101000000000000010101011111111110101100000000000000111111111111100101111111111111000110000000000110011000000000101110111111111111100111000000001110000000000000011100011111111111010110" "0011100001111111111010110111111111010010100000000000010010000000010010110000000001011000100000000001010110000000001110110000000001010011000000000110000010000000001110000111111111110110000000000011110010000000000101001111111111010100100000000011100101111111110110101111111111110000000000000001110110000000001110001" "0011000101111111110000001111111111101111100000000000011100000000000100011111111111110111111111111100011010000000010000011111111111011110000000000000011111111111111011010000000000101001011111111111000100000000000010001000000000010100011111111110100110000000000010011111111111110110111111111100110001111111111101011" "1110111011111111110000101000000000010001111111111110111110000000000101011111111111001001000000000011011011111111111111001111111111101011000000000010011100000000010010010111111111111110000000000100011101111111110110100000000000110000011111111101000000000000010111110000000000010111011111111110001011111111101101110" "0101011101111111100010101111111111111001111111110111111111111111111111010000000000010010011111111110001001111111111111100111111110001000100000000101100010000000010100010111111111001001100000000001001111111111110001001000000001001110100000000000011100000000001101110111111110001010011111111101000011111111111011010" "1111111000000000010010010111111110011110100000000111000101111111101011001000000000100101011111111111010010000000000010001111111111110111011111111101001110000000001011100000000000001000000000000011001101111111111101110000000000101010100000000110000011111111111000101000000001110110111111111100100010000000010010011" "1110101100000000010001100111111111010101100000000001100111111111110000101000000001000000011111111111110111111111110011000000000001011001100000000011110101111111110010000111111111101101100000000011110111111111110100011111111110011111000000000101000011111111101110110000000000111111100000000010101010000000010001011" "1111101001111111110100010000000000001110011111111101010000000000001101000000000000000000100000000001011101111111111001100111111110111101100000000100100110000000001101111111111111111001111111111101001101111111110010100111111111110110100000000011001111111111110111111111111111000011111111111101001001111111101001011" "0010111001111111111000100000000000100111000000000001011010000000000110011000000000111000111111111110000100000000001001110111111111010001000000000000101100000000000011111000000000000000100000000100010011111111111110011111111111000001000000000001101001111111110101101000000000100110011111111101110101111111111110010" "1100111011111111111001000111111111010111000000000000101010000000000000000000000000011000111111111110000110000000010000011000000000001101000000000010011100000000010001000111111111101110100000000011101111111111110001110000000000010100100000000000010101111111110100100111111111001001011111111101101101111111111110101" "0011001101111111110100011111111110111101000000000001000011111111110000011000000000111111011111111011100111111111110100110000000000101100000000000010001111111111111101001111111111010101100000000010001001111111111100011111111111000100011111111110011101111111110011101111111111011011100000000010111100000000000100010" "0100111011111111111011000000000000011000011111111101011010000000001011000000000000100111100000000010000110000000000010110111111111000011100000000001001100000000000011101000000000011000000000000010001000000000001010100000000000111100011111111011101110000000000100000111111111100100111111111100010111111111101111000" "1010111000000000001111001111111111011111011111111101111011111111111101001000000000100000000000000001111101111111101101111000000000100111000000000001110100000000001010100111111110111001011111111111011101111111110101010000000000010101100000000001110001111111110000001000000000111111111111111110010110000000010001110" "0100101101111111111000000000000000100111111111111111101111111111110111101000000000010011111111111101101000000000000001111111111110111001011111111110011100000000001111101000000000010011011111111101001001111111110100100111111111100010011111111100111110000000000101001111111111000110011111111111101001111111111111010" "1100110010000000000011000111111111000110000000000011110111111111111010100111111111110011111111111100111001111111110101100111111111110111100000000101001110000000000011111111111111001101011111111101000000000000001011000000000000010101000000000101011100000000010001101000000000000111100000000000011110000000001110100" "0001010001111111100101100000000001011110111111111100000101111111111010111111111111111100111111111101111111111111110110110111111111101110000000000011110001111111111101010111111111001010000000000100000000000000001011100000000001100011100000000001000110000000000001101000000000001110011111111011100110000000000101100" "1100100010000000001111001111111110101001100000000110000100000000000010011000000001110001100000000101100100000000001010110000000001011111000000000000000101111111111111001000000000010011000000000001010111111111110010000111111110011100000000000011100001111111111110010000000001000111011111111101110011111111111010010" "0001100011111111111011110111111111111001111111111111110011111111111011101111111111110000000000000001010110000000001100110000000001101000000000000011011111111111110010000111111111011011100000000001011111111111101111110000000000100110000000000110111101111111110010010000000000000011011111111111011000000000000101000" "0001101011111111110010111000000000100010011111111111001000000000001100111111111111101001111111111011100111111111111001110000000000000010111111111110000000000000001101100111111111100100111111111100110110000000000100110111111111011101000000000011110111111111110111000000000000011100000000000100000010000000010000010" "0010101001111111111110111111111111111111100000000011000110000000000100100111111111010101011111111111001111111111111110010111111111111001111111111011111001111111111101000000000000100110111111111110101101111111111000100000000000010111111111111110111001111111111101111000000001000100011111111110001101111111101111101" "1110100010000000000111000111111111100110111111111110101010000000000110111000000001001011100000000110010001111111110000000000000000101011000000000010101101111111110000100111111111011110100000000011100101111111110011010000000000000100000000000101001111111111111010100000000000010110011111111110100000000000001011100" "0000110010000000000010011111111111110011100000000110001011111111101010010000000001101000011111111110000111111111110110010000000001000111100000000000110001111111110010100111111111111101000000000010001000000000000110010000000000010111000000000011001110000000000000110000000001011101111111111100100100000000001000101" "1110000011111111110110111000000001010000100000000000010010000000000010011111111111110001111111111111110011111111110000001111111111001000100000000000111001111111110110010000000000110010111111111101011000000000001110000000000000101111011111111011010000000000000001001111111110111011100000000000110110000000000000100" "1111110000000000010000010000000000010100011111111100110101111111111010110000000000111100000000000010010001111111110100111111111110111100111111111110000011111111111000101111111110111110000000000000011110000000000110010111111111101001111111111111110110000000001100000111111111100001100000000001001001111111111011111" "0011010101111111111100110000000000001000011111111110011011111111110000000000000000100001100000000000110100000000010010000000000000010011000000000100011110000000001000001000000000100100111111111110100101111111101101111111111111010100011111111101011101111111111101111000000001000000100000000001001011111111101111101" "0010101011111111101110101000000000010110100000000100001111111111111011110111111111001010100000000010110100000000001101111111111111110011011111111011111010000000001010110111111111000001011111111110101011111111101111010111111111100000000000000010000011111111110000000111111111010101111111111110111101111111110011011" "0010000001111111101101100000000000001101011111111011110110000000010100110000000000101011100000000000010101111111110110010111111111110010011111111111001100000000001110010000000000011111100000000000101001111111110100001000000000110101111111111110111100000000000111100111111111111011011111111101110111111111111110111" "0001000100000000010010101000000000111101111111111100000100000000000011111000000000000011100000000001000100000000000111110111111111100110011111111111111101111111110110011000000000011110100000000000010010000000010001001000000001000101100000000000010111111111111101111000000000111101000000000000110001111111111110001" "0011101001111111110011000111111111010000100000000010010110000000000000110000000001000011111111111110100011111111111100000111111111000110000000000010010110000000001101000000000000001010011111111111110000000000001001011111111111001100100000000011000000000000000100100000000000010011100000000000101101111111110001010" "1110010110000000010001011111111111110011011111111110010101111111111101010000000000011111000000000011010010000000001111111000000001000110100000000001101100000000000101110000000000000010011111111101100001111111111001101000000000110110000000000010111100000000000100011111111111011010111111111101011010000000001001011" "0000100100000000010001000111111111100011000000000100101110000000000101100111111111111110011111111110110011111111101111111111111111101111000000000011001101111111111101011111111111010001100000000011110001111111101111001000000001010001100000000011100000000000010001101000000000101010100000000001111111111111111001011" "0100110111111111101100110000000001011101000000000011001100000000000001011111111111100010100000000010100001111111111110010000000000110110100000000001110100000000000101010000000000010100011111111101011100000000000110000000000001001000000000000010000000000000001000101111111111000001100000000100000011111111101010111" "0001011100000000000001110111111111111000100000000001100100000000001110101000000000011000011111111100110001111111110110111000000000010111100000000011100011111111110011001111111111001011100000000000010000000000001110011000000000000011100000000000110111111111111000101000000000111001111111111111000101111111101111010" "0100100101111111101111001000000000010111111111111100101101111111111011010000000000001110100000000010000100000000001011101111111111110101011111111111111010000000010110000000000000000000011111111111110101111111110001011000000000111111000000000000100010000000001001000111111111001000100000000000100011111111111111000" "0001110110000000001101000000000000101001011111111110010111111111111011000000000000011001100000000100100111111111111000010000000001001011011111111111000010000000000011110000000000000000000000000100001101111111110011111000000000110010100000000110000110000000001100001000000000111010111111111100100000000000000000011" "1111110101111111110100000000000000110110111111111101100011111111111111011111111111111111011111111110100001111111111100110000000001000001000000000001111100000000000010100000000000001001100000000001001000000000001111110000000000100010011111111100110110000000001000001111111111000001000000000001100011111111110011111" "0100010101111111110101010000000000011010100000000100011110000000000000100000000001000000000000000100011111111111101111001000000000110011011111111111011110000000000010111000000000001000011111111110100011111111111000001000000000111000000000000010100101111111110100000000000000101000000000000011110110000000000101011" "0100101110000000000000100000000000101110011111111010101110000000000111011111111111110000111111111011110111111111111101110000000000000000100000000010101110000000011001011111111111111111011111111110010010000000001000000000000001101010011111111110110000000000000111001111111110100100100000000000011011111111101101111" "1100110110000000000101101000000000011110000000000001000000000000000010001111111111101001011111111100000111111111111011110111111111011100100000000010011100000000001101111000000000100011000000000011111111111111111100101000000000100100011111111111010010000000000011101111111111101101100000000011110110000000000100100" "1111000000000000010001111111111111001111000000000100101011111111111111110000000001110101100000000000110001111111111110000000000000111111100000000010010011111111110000010000000000110001000000000001001010000000001001111111111110100111000000000010001011111111111101110000000001011110011111111101001110000000010001110" "1110011010000000001101001000000001001010011111111011101011111111111110010111111110101110011111111101111001111111111001110111111110110110100000000110101010000000001011000000000000110111000000000001111110000000001101100000000001000000000000000001111011111111111100011111111111011010111111111101001001111111110011011" "0010100110000000011001010000000000010101100000000111000010000000001000111000000001001000000000000001110100000000001001000000000000111000000000000001101010000000001000010111111111100101011111111110001001111111111111100111111110100100100000000000110101111111110000101000000001001010100000000100000101111111111000010" "1011110110000000001011001000000000100101011111111101011000000000010001111000000000100110000000000010001100000000001000100111111110111010000000000000101110000000000101011111111110111011011111111101111100000000000001110111111111011111000000000011011010000000001000101111111111100110011111111101111001111111110000100" "0011110010000000001010111000000000011100000000000010011010000000001011011111111111110001100000000001100111111111110010011111111111100011011111111011110001111111111110001000000000000001100000000011001110000000010000000111111111001011011111111111111001111111110011111000000000111100011111111100010000000000000101010" "1111001001111111101001000111111111100101111111111111011000000000011101000111111111001001111111111001011100000000000001001111111111000110000000000001100010000000010110100000000000010100111111111101101101111111110001110111111111101010000000000001100010000000001000110111111110110110000000000010010000000000000010111" "0001000110000000000101111000000001000011111111111100101000000000011000111111111111000101111111111101110110000000010001101000000000001111111111111110111000000000001001000000000000111010100000000011100011111111101110001111111111101001011111111101000101111111111110101111111111000111011111111100110001111111101101100" "1111000001111111110111111111111111010011000000000010110100000000001011111111111111001001111111111011110111111111101110111000000000100001011111111100101010000000000000010111111111110100111111111110110110000000001001101111111111110111100000000100001111111111101110101111111111000010100000000011100100000000001101100" "1100000001111111111101001111111111010110000000000100100100000000000010101000000001101001000000000010111010000000010000101000000000101000011111111100101001111111110000001111111111000101011111111101101100000000000110011111111111111111000000000101100101111111101011110000000001101011111111111011101000000000001011110" "0000101000000000011000100111111110110010100000000000011101111111100010100000000001011000111111111110111101111111101110101000000001101011111111111110111011111111110010111000000000000000100000000011110010000000001111111111111110010100100000000111101100000000000110100111111111111001100000000010011000000000011010010" "0010101110000000010100100111111111111010000000000001011001111111111111111111111111001110100000000101011010000000001011001000000000011011100000000101010011111111111000001111111111110100111111111110010100000000001001101111111111011010100000000000010101111111110011000111111111011100100000000011111000000000000101111" "1011111010000000011011010111111110010110000000000001010011111111111001101000000001011000100000000111110011111111110111110000000000110011100000000100000100000000000010000000000000100010111111111101101111111111101110110111111110110110100000000011111001111111111000101000000001110001011111111011100101111111111110110" "1100000000000000011000001111111111000011100000000101101100000000000111111000000001100100100000000001011101111111111110110000000001011110000000000100111000000000001101111111111111000011100000000010010001111111111101110111111111100101100000000100010110000000001010001000000001010000111111111101110111111111111100101" "0001010001111111101101111000000000111001011111111110010010000000001100101000000000011100111111111101111111111111101110011111111111110111100000000010010011111111110111100000000000000001100000000000110000000000010000000111111111010000011111111101110001111111111111010111111111011010111111111110000000000000000000100" "1100010111111111110011101111111110111000100000000010101000000000001110100111111111001001011111111101011001111111110111100111111111110000111111111101010001111111111100100111111111100100011111111101010101111111111101011000000000001011000000000000000001111111110111100000000001000100111111111100001001111111111111101" "0011110010000000000000001000000001000111111111111111000110000000011000100111111110010001000000000000101011111111111000001111111110010001100000000000110010000000011100000000000000011001100000000011011111111111110000001000000001110101011111111010001010000000011100001111111110001001100000000000011111111111101001110" "0100100001111111101100010000000000000100111111111010011000000000010011101111111111111111111111111110111011111111101111110111111111000010000000000001011010000000000010010000000000000011111111111011011110000000001000000000000000110101111111111100000110000000001100010111111110000100000000000011110111111111100110001" "0000101011111111111010001000000000101000011111111101001111111111110010011111111111100101100000000001010000000000000100100000000000110101100000000100010110000000001110101000000000101010011111111111001001111111110011110111111111011011011111111111110100000000000000000000000000010011000000000010100010000000001100111" "1101000000000000000100001111111111001110000000000100001001111111110100011000000000000111000000000001001011111111110101100000000000000111000000000000111001111111110100100000000000100111111111111111101001111111110001011111111110111000000000000100001100000000000001110000000000111101011111111100111100000000011000101" "0010101101111111110100110000000000101000011111111010100110000000010101110111111110011110011111111001111100000000000011110111111111110100100000000101010000000000011001001111111111010001011111111101001011111111111111111000000001101011011111111101111110000000010111000111111110111011111111111110011011111111110100100" "0001100011111111101001001000000000011100111111111110010110000000011011111111111111000100100000000000000001111111111000000111111111001001000000000001101110000000010010011111111111110101100000000001110101111111111100001000000000011000011111111110111101111111111001110000000000100010111111111110001101111111111000001" "0011000011111111111100101111111111100000000000000010010111111111111110011000000001000100000000000010010111111111111000000111111111110011100000000101010001111111110110000000000000010101011111111011110000000000000001000000000000011000111111111101100100000000001110001000000000100111011111111110100010000000010000110" "0101001011111111100010100000000001101001011111111010111011111111111100101000000000001100000000000001101100000000010001101111111111011000100000000011000000000000010010110111111111000000011111111011100000000000001010100000000001011010111111111100001010000000010101011111111110110011011111111110110001111111110011111" "0011001110000000000001110000000001001110111111111011010100000000001010010111111111011010111111111011011100000000000000000111111111000010100000000001111000000000010000011000000000001011000000000001011011111111111010100111111111110100000000000000001010000000010101101000000000100111111111111111001111111111110101011" "1111001110000000000011100000000001011011100000000001001010000000000100001000000000100101111111111010101011111111110110001000000000110110100000000000110000000000001010101111111111010011100000000011110010000000000101011000000000110111000000000001111000000000001101010000000000011110000000000100010000000000000011101" "1101010010000000000101011000000001000001011111111100010001111111101110110111111111000000011111111111011111111111110111110000000000110110111111111100000000000000001001101000000000100000100000000010000101111111110001101111111111010010111111111100010100000000000001000111111111110001000000000010100000000000001110010" "0010010100000000000011101111111111110100111111111011011110000000000010011000000001000111100000000100010110000000000100010000000000111000000000000001110010000000001010110000000000000001011111111100101100000000001111001000000000011000000000000011000110000000000011011000000000111101111111111101110000000000010010000" "1100100100000000000001011111111111001101111111111100101000000000001010001000000000100011100000000010000101111111110100011111111111101100111111111101100011111111111011010111111110111111011111111011111100000000010001011000000000001011111111111110001010000000001001001000000000010111100000000011000000000000001101001" "0100100110000000001101011000000000110000011111111101101010000000010011001000000000100010000000000101000101111111110100000111111111100001000000000101001011111111111000111000000000001101100000000010010100000000000011000000000000001100100000000000000000000000000111100111111111010111000000000000010110000000010010001" "0010011101111111110110110111111111010111111111111011110110000000000101010000000000110111100000000001010111111111110011010000000000110001100000000010010000000000000011000111111111101111111111111101001010000000010000001000000000000011011111111110000000000000000000111000000000011010000000000010011111111111111011101" "0011000011111111101110100000000000110100111111111001110110000000000111100111111111000101011111111101111111111111111000011111111111101001011111111110010000000000010111101111111111011000000000000010010111111111110100001000000000010010111111111110001100000000000101010000000000011010100000000001101111111111100111000" "0100000001111111111100110000000001000111000000000010100001111111110010110111111111100011100000000011011101111111101110000000000000111000100000000000101010000000010000110000000000110101111111111110100001111111101111000000000000001100000000000000101111111111110010011111111111111011000000000011100010000000010001111" "0000010010000000001010010000000000111110100000000011110010000000000111100000000000111000100000000010001001111111111110110111111111111000000000000010001101111111111110010000000000110000111111111101100111111111111111110000000001000111111111111101111111111111110000111000000000101011000000000000011001111111110101011" "0100000011111111101111101111111111111100111111111001111100000000010000101111111110010101011111111010110100000000001101100111111111001111100000000101110110000000001110011000000001000011111111111100000100000000000011000111111111111001100000000001001110000000000101101000000000100000011111111101001001111111101000011" "0001101000000000000011100111111111110101011111111100110000000000001010011000000000101101100000000001011001111111111101101111111111111010111111111111100100000000000010010000000000101111000000000000001101111111110010110000000001001111111111111100000000000000000011110111111111010110000000000001011001111111111111110" "1011011001111111111001100111111111101111100000000101000101111111100111100000000000110100000000000110011100000000001011101000000001001101100000000001010001111111100101010111111111010011100000000001000010000000000001101111111110101000000000000100010001111111110100111000000000100101011111111110110010000000000000000" "0001011100000000000000011000000000001000100000000100010110000000001100011000000000011101000000000001001001111111111000111000000000111111000000000000010110000000001000000000000000001010111111111100001011111111111011011111111111110001000000000010111000000000001101010111111111001110000000000000110010000000000100010" "1011111110000000000110010000000001000010111111111100011000000000001110100111111111101010000000000001101111111111111100101111111111011110011111111110100001111111110101011000000000000110111111111110111001111111101111100000000000111000011111111110111000000000001001010111111111000100000000000001000000000000001100100" "1111001010000000001001101111111111010100000000000000111111111111110001000111111111101100000000000101001000000000001010100000000000001011000000000101111100000000000011101111111111101000111111111111101101111111110100011111111111010011100000000000101000000000000101011000000000000010100000000001011011111111101111101" "1010110010000000000010010000000000001110000000000110100000000000000001101000000000011110100000000101101100000000000101001111111111101110000000000000111001111111101010010111111111111000100000000001011110000000010001101111111111110111000000000000011000000000000001011111111111111111000000000010010110000000000010000" "1110101001111111111101011111111111101000000000000001000000000000010000011111111111110010111111111100111101111111110101111000000000101000011111111100111111111111110000101000000000110100011111111111010101111111110000011111111111111010000000000100010010000000010001010000000001000010011111111110111100000000010000100" "1101000101111111110000010000000000010000100000000000100011111111101110111000000001000011111111111111010011111111110001000000000000010110111111111110010110000000000101000000000000111011111111111100000101111111101110110000000000111101011111111101111010000000000100011000000000000011000000000001001001111111110101100" "0011010111111111111010101111111111101010111111111110110000000000010100111000000001001010111111111111010011111111101110111000000001000111111111111101111000000000000010110000000000001001100000000000011001111111110101000000000000101101100000000010101000000000000110100111111111100110100000000010111111111111101101111" "0011010110000000000011101000000001000000100000000001010010000000000010010000000000100000000000000000100001111111110101111000000000011110000000000010000110000000000011100111111111010101011111111110000001111111110011000111111111010110111111111110010111111111111010000000000000010100100000000011101101111111110010101" "0010001000000000000100111000000000101010000000000000111110000000001010100000000000100010100000000010100011111111110001000111111111100000111111111111000110000000000000110000000001000101011111111100000100000000001011111111111110111001000000000000111111111111110001011111111111100001100000000100010011111111101110010" "0100100111111111111101101111111111101010011111111100111011111111110010100111111111100111011111111110010011111111110010100000000000111101100000000011111111111111111110011000000001000101111111111111111010000000001001110111111110111101111111111111000100000000000110011000000000001001000000000001001111111111110110100" "1100000100000000000001100000000000000100100000000010001100000000001100011000000001110100000000000011100100000000000000100000000001010000100000000001001101111111101011000000000000100010111111111101001110000000000010101000000000010110100000000001000101111111110100101000000000110101011111111111010101111111111010101" "0011011110000000000000111000000000110110100000000001110001111111110100111000000000011101111111111101101101111111110100001000000000100001000000000101010010000000001101000000000000011000000000000001100000000000000011001000000000101111100000000101110111111111111011001111111111101101011111111110101010000000000100111" "0001011000000000001110001000000001000010011111111011000100000000010010111000000000111100011111111101011011111111111110100111111111010101011111111101111101111111111010110111111111100010111111111100100101111111111011101000000001000110100000000000110000000000000111110000000000111001111111111111100101111111111000011" "0010001011111111101101011000000000101011111111111111010000000000001111011000000000111001000000000000110001111111101110110111111111011011000000000001110001111111111010010000000000011110111111111111001111111111110110010000000001010011111111111011000110000000010011101000000000011001100000000001011011111111110101001" "1110010111111111111110001000000000100100111111111100111101111111111010000000000000011101011111111111001101111111110001100000000000100110011111111110010110000000001011101000000001000100111111111101101000000000000011011111111111000000011111111100011111111111101110011000000000110010100000000100010111111111111011000" "0110100011111111100110011000000000001110111111111101111110000000010011100111111111111001111111111010111000000000001110100111111111100001111111111111110100000000010111011111111110111001111111111011111111111111111110110000000000111011011111111101000010000000010100011000000000100000011111111110011011111111101111001" "1111111000000000000111100111111111011000100000000010010111111111111100000111111111001010100000000010101011111111110010101111111111100100100000000100100000000000010101111000000000011111111111111111011000000000000011000000000001000100011111111111000110000000001010001000000001011011011111111101100010000000000101010" "1111110110000000010010110111111111101000000000000010101000000000000001110000000000111010011111111110011000000000001100100000000001001111100000000000110011111111111011001111111110110111011111111101001011111111101111001000000000111100000000000100001101111111111011111000000001010011011111111100001110000000000011010" "0000000010000000001111011111111111011111000000000110010111111111110000000111111111110011000000000101101110000000000011110000000000000101111111111100010111111111110001001111111110110110100000000000100010000000001101111111111111000101100000000011101101111111111101101000000000010000111111111011011000000000000010100" "1100001110000000011110000000000000010001000000000110100011111111111101010000000001000110100000000010010101111111111110101000000000101111100000000100110000000000000100101111111110111111011111111100111110000000001000110111111111100111100000000010001101111111111000100000000001010100100000000010111110000000011000001" "1110000100000000001010000111111111011101011111111111111100000000000000001000000000010000000000000011101011111111111101000111111111110100000000000000100001111111111011111000000000011111011111111101011001111111110111101000000000101001000000000011001100000000001011111111111111001000000000000010011010000000000001000" "0010010010000000000011010000000000111101111111111001111001111111111011010111111111000100111111111001111000000000000100000111111111001010000000000011100100000000010100101000000001000011100000000011011101111111111110000000000001100100111111111010100010000000011000011111111111010000000000000100000111111111110110000" "1110100010000000011000010000000000001000111111111111101001111111110100001000000000100001100000000000111100000000010000100000000000010010011111111101001011111111110010110000000000010111100000000000011000000000010000010111111111010100111111111111001110000000000100010111111111110100000000000011111000000000010010010" "0001100000000000001000011000000000000101111111111100111010000000000001011000000000001101111111111011001010000000001010100000000000100101000000000010100000000000000101000111111111101010100000000000000110000000001000010111111111111110011111111101110000000000001001110000000000000111111111111111001100000000000100111" "0010111110000000000101001000000000110101000000000001011001111111111110111000000000111110111111111011100011111111111011101000000000100101000000000101001100000000010000000000000000100011100000000001011101111111101111110000000000010111100000000001011010000000010001000111111111101111011111111100000001111111110101011" "1100111000000000001101110111111111111011111111111100100010000000001101001000000001011001100000000100011101111111110101010000000000110010000000000000010001111111111000111111111111101101111111111101111110000000001101101000000000010101111111111101010110000000000001110000000001000011100000000011001001111111111111001" "0000011111111111110111010111111111111101111111111111010000000000010100011000000000110111100000000010111110000000001011011000000000101001100000000001001100000000000011101111111111111010111111111101111000000000001011110111111111110010111111111100100100000000000100111000000000100011011111111100011000000000000111011" "1101010010000000000011111111111110111111000000000001000101111111111111011000000000011101100000000010100101111111110000010000000000100100011111111101101101111111111101111111111111010100100000000010111011111111110011000111111111000110000000000001101111111111110101100111111111110010011111111011110010000000000011110" "1111001110000000000011101000000000010001000000000010100011111111110000000000000000010001000000000110000100000000001100111000000000100000100000000011111010000000000000101111111111101010111111111101001000000000001101001111111110111110100000000111110111111111100010110000000001010011100000000010010100000000010010110" "1110111100000000001001001111111111110100011111111101011000000000000100010000000000111011100000000110000110000000000000100000000001000000111111111111100101111111110110001111111111010111111111111101010110000000000011100111111111000010100000000001100111111111110011111000000000101010100000000000000010000000001101111" "1001010010000000010011011111111111010100100000000001011001111111111101001111111111111011100000000101111100000000000110000000000000011011011111111110100100000000000100011000000000000101000000000001110010000000000101100111111111111111000000000101100111111111110101010000000001010010100000000011011100000000011001100" "0110100010000000001010110111111111110001011111111110101111111111111001011111111111010110111111111101011000000000001110100111111111010111000000000011000100000000000000011111111111110011100000000100011000000000001000000000000001100010000000000001110101111111111100001000000000110011111111111101000010000000001001111" }
set HasInitializer 1
set Initializer $ROMData
set NumOfStage 2
set MaxLatency -1
set DelayBudget 3.257
set ClkPeriod 5
set RegisteredInput 0
if {${::AESL::PGuard_simmodel_gen}} {
if {[info proc ap_gen_simcore_mem] == "ap_gen_simcore_mem"} {
    eval "ap_gen_simcore_mem { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
} else {
    puts "@W \[IMPL-102\] Cannot find ap_gen_simcore_mem, check your platform lib"
}
}


if {${::AESL::PGuard_rtl_comp_handler}} {
  ::AP::rtl_comp_handler $MemName
}


set CoreName ROM_nP
if {${::AESL::PGuard_autocg_gen} && ${::AESL::PGuard_autocg_ipmgen}} {
if {[info proc ::AESL_LIB_VIRTEX::xil_gen_ROM] == "::AESL_LIB_VIRTEX::xil_gen_ROM"} {
    eval "::AESL_LIB_VIRTEX::xil_gen_ROM { \
    id ${ID} \
    name ${MemName} \
    corename ${CoreName}  \
    op mem \
    hasByteEnable ${hasByteEnable} \
    reset_level 1 \
    sync_rst true \
    stage_num ${NumOfStage}  \
    registered_input ${RegisteredInput} \
    port_num 1 \
    port_list \{${PortList}\} \
    data_wd ${DataWd} \
    addr_wd ${AddrWd} \
    addr_range ${AddrRange} \
    true_reset ${TrueReset} \
    delay_budget ${DelayBudget} \
    clk_period ${ClkPeriod} \
    HasInitializer ${HasInitializer} \
    rom_data \{${ROMData}\} \
 } "
  } else {
    puts "@W \[IMPL-104\] Cannot find ::AESL_LIB_VIRTEX::xil_gen_ROM, check your platform lib"
  }
}


# clear list
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_begin
    cg_default_interface_gen_bundle_begin
    AESL_LIB_XILADAPTER::native_axis_begin
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 261 \
    name data_0_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_0_V_read \
    op interface \
    ports { data_0_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 262 \
    name data_1_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_1_V_read \
    op interface \
    ports { data_1_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 263 \
    name data_2_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_2_V_read \
    op interface \
    ports { data_2_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 264 \
    name data_3_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_3_V_read \
    op interface \
    ports { data_3_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 265 \
    name data_4_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_4_V_read \
    op interface \
    ports { data_4_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 266 \
    name data_5_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_5_V_read \
    op interface \
    ports { data_5_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 267 \
    name data_6_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_6_V_read \
    op interface \
    ports { data_6_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 268 \
    name data_7_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_7_V_read \
    op interface \
    ports { data_7_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 269 \
    name data_8_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_8_V_read \
    op interface \
    ports { data_8_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 270 \
    name data_9_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_9_V_read \
    op interface \
    ports { data_9_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 271 \
    name data_10_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_10_V_read \
    op interface \
    ports { data_10_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 272 \
    name data_11_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_11_V_read \
    op interface \
    ports { data_11_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 273 \
    name data_12_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_12_V_read \
    op interface \
    ports { data_12_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 274 \
    name data_13_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_13_V_read \
    op interface \
    ports { data_13_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 275 \
    name data_14_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_14_V_read \
    op interface \
    ports { data_14_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 276 \
    name data_15_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_15_V_read \
    op interface \
    ports { data_15_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 277 \
    name data_16_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_16_V_read \
    op interface \
    ports { data_16_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 278 \
    name data_17_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_17_V_read \
    op interface \
    ports { data_17_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 279 \
    name data_18_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_18_V_read \
    op interface \
    ports { data_18_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 280 \
    name data_19_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_19_V_read \
    op interface \
    ports { data_19_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 281 \
    name data_20_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_20_V_read \
    op interface \
    ports { data_20_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 282 \
    name data_21_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_21_V_read \
    op interface \
    ports { data_21_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 283 \
    name data_22_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_22_V_read \
    op interface \
    ports { data_22_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 284 \
    name data_23_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_23_V_read \
    op interface \
    ports { data_23_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 285 \
    name data_24_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_24_V_read \
    op interface \
    ports { data_24_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 286 \
    name data_25_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_25_V_read \
    op interface \
    ports { data_25_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 287 \
    name data_26_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_26_V_read \
    op interface \
    ports { data_26_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 288 \
    name data_27_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_27_V_read \
    op interface \
    ports { data_27_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 289 \
    name data_28_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_28_V_read \
    op interface \
    ports { data_28_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 290 \
    name data_29_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_29_V_read \
    op interface \
    ports { data_29_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 291 \
    name data_30_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_30_V_read \
    op interface \
    ports { data_30_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 292 \
    name data_31_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_31_V_read \
    op interface \
    ports { data_31_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 293 \
    name data_32_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_32_V_read \
    op interface \
    ports { data_32_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 294 \
    name data_33_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_33_V_read \
    op interface \
    ports { data_33_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 295 \
    name data_34_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_34_V_read \
    op interface \
    ports { data_34_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 296 \
    name data_35_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_35_V_read \
    op interface \
    ports { data_35_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 297 \
    name data_36_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_36_V_read \
    op interface \
    ports { data_36_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 298 \
    name data_37_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_37_V_read \
    op interface \
    ports { data_37_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 299 \
    name data_38_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_38_V_read \
    op interface \
    ports { data_38_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 300 \
    name data_39_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_39_V_read \
    op interface \
    ports { data_39_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 301 \
    name data_40_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_40_V_read \
    op interface \
    ports { data_40_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 302 \
    name data_41_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_41_V_read \
    op interface \
    ports { data_41_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 303 \
    name data_42_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_42_V_read \
    op interface \
    ports { data_42_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 304 \
    name data_43_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_43_V_read \
    op interface \
    ports { data_43_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 305 \
    name data_44_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_44_V_read \
    op interface \
    ports { data_44_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 306 \
    name data_45_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_45_V_read \
    op interface \
    ports { data_45_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 307 \
    name data_46_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_46_V_read \
    op interface \
    ports { data_46_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 308 \
    name data_47_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_47_V_read \
    op interface \
    ports { data_47_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 309 \
    name data_48_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_48_V_read \
    op interface \
    ports { data_48_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 310 \
    name data_49_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_49_V_read \
    op interface \
    ports { data_49_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 311 \
    name data_50_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_50_V_read \
    op interface \
    ports { data_50_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 312 \
    name data_51_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_51_V_read \
    op interface \
    ports { data_51_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 313 \
    name data_52_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_52_V_read \
    op interface \
    ports { data_52_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 314 \
    name data_53_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_53_V_read \
    op interface \
    ports { data_53_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 315 \
    name data_54_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_54_V_read \
    op interface \
    ports { data_54_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 316 \
    name data_55_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_55_V_read \
    op interface \
    ports { data_55_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 317 \
    name data_56_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_56_V_read \
    op interface \
    ports { data_56_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 318 \
    name data_57_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_57_V_read \
    op interface \
    ports { data_57_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 319 \
    name data_58_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_58_V_read \
    op interface \
    ports { data_58_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 320 \
    name data_59_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_59_V_read \
    op interface \
    ports { data_59_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 321 \
    name data_60_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_60_V_read \
    op interface \
    ports { data_60_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 322 \
    name data_61_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_61_V_read \
    op interface \
    ports { data_61_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 323 \
    name data_62_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_62_V_read \
    op interface \
    ports { data_62_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 324 \
    name data_63_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_63_V_read \
    op interface \
    ports { data_63_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 325 \
    name data_64_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_64_V_read \
    op interface \
    ports { data_64_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 326 \
    name data_65_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_65_V_read \
    op interface \
    ports { data_65_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 327 \
    name data_66_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_66_V_read \
    op interface \
    ports { data_66_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 328 \
    name data_67_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_67_V_read \
    op interface \
    ports { data_67_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 329 \
    name data_68_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_68_V_read \
    op interface \
    ports { data_68_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 330 \
    name data_69_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_69_V_read \
    op interface \
    ports { data_69_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 331 \
    name data_70_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_70_V_read \
    op interface \
    ports { data_70_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 332 \
    name data_71_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_71_V_read \
    op interface \
    ports { data_71_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 333 \
    name data_72_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_72_V_read \
    op interface \
    ports { data_72_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 334 \
    name data_73_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_73_V_read \
    op interface \
    ports { data_73_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 335 \
    name data_74_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_74_V_read \
    op interface \
    ports { data_74_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 336 \
    name data_75_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_75_V_read \
    op interface \
    ports { data_75_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 337 \
    name data_76_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_76_V_read \
    op interface \
    ports { data_76_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 338 \
    name data_77_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_77_V_read \
    op interface \
    ports { data_77_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 339 \
    name data_78_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_78_V_read \
    op interface \
    ports { data_78_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 340 \
    name data_79_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_79_V_read \
    op interface \
    ports { data_79_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 341 \
    name data_80_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_80_V_read \
    op interface \
    ports { data_80_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 342 \
    name data_81_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_81_V_read \
    op interface \
    ports { data_81_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 343 \
    name data_82_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_82_V_read \
    op interface \
    ports { data_82_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 344 \
    name data_83_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_83_V_read \
    op interface \
    ports { data_83_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 345 \
    name data_84_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_84_V_read \
    op interface \
    ports { data_84_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 346 \
    name data_85_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_85_V_read \
    op interface \
    ports { data_85_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 347 \
    name data_86_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_86_V_read \
    op interface \
    ports { data_86_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 348 \
    name data_87_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_87_V_read \
    op interface \
    ports { data_87_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 349 \
    name data_88_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_88_V_read \
    op interface \
    ports { data_88_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 350 \
    name data_89_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_89_V_read \
    op interface \
    ports { data_89_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 351 \
    name data_90_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_90_V_read \
    op interface \
    ports { data_90_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 352 \
    name data_91_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_91_V_read \
    op interface \
    ports { data_91_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 353 \
    name data_92_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_92_V_read \
    op interface \
    ports { data_92_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 354 \
    name data_93_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_93_V_read \
    op interface \
    ports { data_93_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 355 \
    name data_94_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_94_V_read \
    op interface \
    ports { data_94_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 356 \
    name data_95_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_95_V_read \
    op interface \
    ports { data_95_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 357 \
    name data_96_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_96_V_read \
    op interface \
    ports { data_96_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 358 \
    name data_97_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_97_V_read \
    op interface \
    ports { data_97_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 359 \
    name data_98_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_98_V_read \
    op interface \
    ports { data_98_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 360 \
    name data_99_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_99_V_read \
    op interface \
    ports { data_99_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 361 \
    name data_100_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_100_V_read \
    op interface \
    ports { data_100_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 362 \
    name data_101_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_101_V_read \
    op interface \
    ports { data_101_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 363 \
    name data_102_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_102_V_read \
    op interface \
    ports { data_102_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 364 \
    name data_103_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_103_V_read \
    op interface \
    ports { data_103_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 365 \
    name data_104_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_104_V_read \
    op interface \
    ports { data_104_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 366 \
    name data_105_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_105_V_read \
    op interface \
    ports { data_105_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 367 \
    name data_106_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_106_V_read \
    op interface \
    ports { data_106_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 368 \
    name data_107_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_107_V_read \
    op interface \
    ports { data_107_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 369 \
    name data_108_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_108_V_read \
    op interface \
    ports { data_108_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 370 \
    name data_109_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_109_V_read \
    op interface \
    ports { data_109_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 371 \
    name data_110_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_110_V_read \
    op interface \
    ports { data_110_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 372 \
    name data_111_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_111_V_read \
    op interface \
    ports { data_111_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 373 \
    name data_112_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_112_V_read \
    op interface \
    ports { data_112_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 374 \
    name data_113_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_113_V_read \
    op interface \
    ports { data_113_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 375 \
    name data_114_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_114_V_read \
    op interface \
    ports { data_114_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 376 \
    name data_115_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_115_V_read \
    op interface \
    ports { data_115_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 377 \
    name data_116_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_116_V_read \
    op interface \
    ports { data_116_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 378 \
    name data_117_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_117_V_read \
    op interface \
    ports { data_117_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 379 \
    name data_118_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_118_V_read \
    op interface \
    ports { data_118_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 380 \
    name data_119_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_119_V_read \
    op interface \
    ports { data_119_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 381 \
    name data_120_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_120_V_read \
    op interface \
    ports { data_120_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 382 \
    name data_121_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_121_V_read \
    op interface \
    ports { data_121_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 383 \
    name data_122_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_122_V_read \
    op interface \
    ports { data_122_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 384 \
    name data_123_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_123_V_read \
    op interface \
    ports { data_123_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 385 \
    name data_124_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_124_V_read \
    op interface \
    ports { data_124_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 386 \
    name data_125_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_125_V_read \
    op interface \
    ports { data_125_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 387 \
    name data_126_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_126_V_read \
    op interface \
    ports { data_126_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 388 \
    name data_127_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_127_V_read \
    op interface \
    ports { data_127_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 389 \
    name data_128_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_128_V_read \
    op interface \
    ports { data_128_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 390 \
    name data_129_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_129_V_read \
    op interface \
    ports { data_129_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 391 \
    name data_130_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_130_V_read \
    op interface \
    ports { data_130_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 392 \
    name data_131_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_131_V_read \
    op interface \
    ports { data_131_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 393 \
    name data_132_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_132_V_read \
    op interface \
    ports { data_132_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 394 \
    name data_133_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_133_V_read \
    op interface \
    ports { data_133_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 395 \
    name data_134_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_134_V_read \
    op interface \
    ports { data_134_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 396 \
    name data_135_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_135_V_read \
    op interface \
    ports { data_135_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 397 \
    name data_136_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_136_V_read \
    op interface \
    ports { data_136_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 398 \
    name data_137_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_137_V_read \
    op interface \
    ports { data_137_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 399 \
    name data_138_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_138_V_read \
    op interface \
    ports { data_138_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 400 \
    name data_139_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_139_V_read \
    op interface \
    ports { data_139_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 401 \
    name data_140_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_140_V_read \
    op interface \
    ports { data_140_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 402 \
    name data_141_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_141_V_read \
    op interface \
    ports { data_141_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 403 \
    name data_142_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_142_V_read \
    op interface \
    ports { data_142_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 404 \
    name data_143_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_143_V_read \
    op interface \
    ports { data_143_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 405 \
    name data_144_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_144_V_read \
    op interface \
    ports { data_144_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 406 \
    name data_145_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_145_V_read \
    op interface \
    ports { data_145_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 407 \
    name data_146_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_146_V_read \
    op interface \
    ports { data_146_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 408 \
    name data_147_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_147_V_read \
    op interface \
    ports { data_147_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 409 \
    name data_148_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_148_V_read \
    op interface \
    ports { data_148_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 410 \
    name data_149_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_149_V_read \
    op interface \
    ports { data_149_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 411 \
    name data_150_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_150_V_read \
    op interface \
    ports { data_150_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 412 \
    name data_151_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_151_V_read \
    op interface \
    ports { data_151_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 413 \
    name data_152_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_152_V_read \
    op interface \
    ports { data_152_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 414 \
    name data_153_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_153_V_read \
    op interface \
    ports { data_153_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 415 \
    name data_154_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_154_V_read \
    op interface \
    ports { data_154_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 416 \
    name data_155_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_155_V_read \
    op interface \
    ports { data_155_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 417 \
    name data_156_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_156_V_read \
    op interface \
    ports { data_156_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 418 \
    name data_157_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_157_V_read \
    op interface \
    ports { data_157_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 419 \
    name data_158_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_158_V_read \
    op interface \
    ports { data_158_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 420 \
    name data_159_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_159_V_read \
    op interface \
    ports { data_159_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 421 \
    name data_160_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_160_V_read \
    op interface \
    ports { data_160_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 422 \
    name data_161_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_161_V_read \
    op interface \
    ports { data_161_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 423 \
    name data_162_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_162_V_read \
    op interface \
    ports { data_162_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 424 \
    name data_163_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_163_V_read \
    op interface \
    ports { data_163_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 425 \
    name data_164_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_164_V_read \
    op interface \
    ports { data_164_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 426 \
    name data_165_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_165_V_read \
    op interface \
    ports { data_165_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 427 \
    name data_166_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_166_V_read \
    op interface \
    ports { data_166_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 428 \
    name data_167_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_167_V_read \
    op interface \
    ports { data_167_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 429 \
    name data_168_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_168_V_read \
    op interface \
    ports { data_168_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 430 \
    name data_169_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_169_V_read \
    op interface \
    ports { data_169_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 431 \
    name data_170_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_170_V_read \
    op interface \
    ports { data_170_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 432 \
    name data_171_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_171_V_read \
    op interface \
    ports { data_171_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 433 \
    name data_172_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_172_V_read \
    op interface \
    ports { data_172_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 434 \
    name data_173_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_173_V_read \
    op interface \
    ports { data_173_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 435 \
    name data_174_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_174_V_read \
    op interface \
    ports { data_174_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 436 \
    name data_175_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_175_V_read \
    op interface \
    ports { data_175_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 437 \
    name data_176_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_176_V_read \
    op interface \
    ports { data_176_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 438 \
    name data_177_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_177_V_read \
    op interface \
    ports { data_177_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 439 \
    name data_178_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_178_V_read \
    op interface \
    ports { data_178_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 440 \
    name data_179_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_179_V_read \
    op interface \
    ports { data_179_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 441 \
    name data_180_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_180_V_read \
    op interface \
    ports { data_180_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 442 \
    name data_181_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_181_V_read \
    op interface \
    ports { data_181_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 443 \
    name data_182_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_182_V_read \
    op interface \
    ports { data_182_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 444 \
    name data_183_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_183_V_read \
    op interface \
    ports { data_183_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 445 \
    name data_184_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_184_V_read \
    op interface \
    ports { data_184_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 446 \
    name data_185_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_185_V_read \
    op interface \
    ports { data_185_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 447 \
    name data_186_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_186_V_read \
    op interface \
    ports { data_186_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 448 \
    name data_187_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_187_V_read \
    op interface \
    ports { data_187_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 449 \
    name data_188_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_188_V_read \
    op interface \
    ports { data_188_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 450 \
    name data_189_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_189_V_read \
    op interface \
    ports { data_189_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 451 \
    name data_190_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_190_V_read \
    op interface \
    ports { data_190_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 452 \
    name data_191_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_191_V_read \
    op interface \
    ports { data_191_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 453 \
    name data_192_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_192_V_read \
    op interface \
    ports { data_192_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 454 \
    name data_193_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_193_V_read \
    op interface \
    ports { data_193_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 455 \
    name data_194_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_194_V_read \
    op interface \
    ports { data_194_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 456 \
    name data_195_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_195_V_read \
    op interface \
    ports { data_195_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 457 \
    name data_196_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_196_V_read \
    op interface \
    ports { data_196_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 458 \
    name data_197_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_197_V_read \
    op interface \
    ports { data_197_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 459 \
    name data_198_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_198_V_read \
    op interface \
    ports { data_198_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id 460 \
    name data_199_V_read \
    type other \
    dir I \
    reset_level 1 \
    sync_rst true \
    corename dc_data_199_V_read \
    op interface \
    ports { data_199_V_read { I 16 vector } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -1 \
    name ap_ctrl \
    type ap_ctrl \
    reset_level 1 \
    sync_rst true \
    corename ap_ctrl \
    op interface \
    ports { ap_start { I 1 bit } ap_ready { O 1 bit } ap_done { O 1 bit } ap_idle { O 1 bit } ap_continue { I 1 bit } } \
} "
}

# Direct connection:
if {${::AESL::PGuard_autoexp_gen}} {
eval "cg_default_interface_gen_dc { \
    id -2 \
    name ap_return \
    type ap_return \
    reset_level 1 \
    sync_rst true \
    corename ap_return \
    op interface \
    ports { ap_return { O 1 vector } } \
} "
}


# Adapter definition:
set PortName ap_clk
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_clock] == "cg_default_interface_gen_clock"} {
eval "cg_default_interface_gen_clock { \
    id -3 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_clk \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-113\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}


# Adapter definition:
set PortName ap_rst
set DataWd 1 
if {${::AESL::PGuard_autoexp_gen}} {
if {[info proc cg_default_interface_gen_reset] == "cg_default_interface_gen_reset"} {
eval "cg_default_interface_gen_reset { \
    id -4 \
    name ${PortName} \
    reset_level 1 \
    sync_rst true \
    corename apif_ap_rst \
    data_wd ${DataWd} \
    op interface \
}"
} else {
puts "@W \[IMPL-114\] Cannot find bus interface model in the library. Ignored generation of bus interface for '${PortName}'"
}
}



# merge
if {${::AESL::PGuard_autoexp_gen}} {
    cg_default_interface_gen_dc_end
    cg_default_interface_gen_bundle_end
    AESL_LIB_XILADAPTER::native_axis_end
}


