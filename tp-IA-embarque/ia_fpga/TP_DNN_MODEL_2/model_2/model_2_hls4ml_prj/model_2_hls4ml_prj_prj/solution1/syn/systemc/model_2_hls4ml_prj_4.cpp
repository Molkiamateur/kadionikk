#include "model_2_hls4ml_prj.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void model_2_hls4ml_prj::thread_Block_proc_U0_ap_continue() {
    Block_proc_U0_ap_continue = ap_sync_done.read();
}

void model_2_hls4ml_prj::thread_Block_proc_U0_ap_start() {
    Block_proc_U0_ap_start = (ap_start.read() & (ap_sync_reg_Block_proc_U0_ap_ready.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_Block_proc_U0_start_full_n() {
    Block_proc_U0_start_full_n = ap_const_logic_1;
}

void model_2_hls4ml_prj::thread_Block_proc_U0_start_write() {
    Block_proc_U0_start_write = ap_const_logic_0;
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_0_V() {
    ap_channel_done_layer10_out_0_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_10_V() {
    ap_channel_done_layer10_out_10_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_11_V() {
    ap_channel_done_layer10_out_11_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_12_V() {
    ap_channel_done_layer10_out_12_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_13_V() {
    ap_channel_done_layer10_out_13_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_14_V() {
    ap_channel_done_layer10_out_14_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_15_V() {
    ap_channel_done_layer10_out_15_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_16_V() {
    ap_channel_done_layer10_out_16_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_17_V() {
    ap_channel_done_layer10_out_17_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_18_V() {
    ap_channel_done_layer10_out_18_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_19_V() {
    ap_channel_done_layer10_out_19_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_1_V() {
    ap_channel_done_layer10_out_1_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_20_V() {
    ap_channel_done_layer10_out_20_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_21_V() {
    ap_channel_done_layer10_out_21_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_22_V() {
    ap_channel_done_layer10_out_22_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_23_V() {
    ap_channel_done_layer10_out_23_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_24_V() {
    ap_channel_done_layer10_out_24_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_25_V() {
    ap_channel_done_layer10_out_25_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_26_V() {
    ap_channel_done_layer10_out_26_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_27_V() {
    ap_channel_done_layer10_out_27_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_28_V() {
    ap_channel_done_layer10_out_28_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_29_V() {
    ap_channel_done_layer10_out_29_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_2_V() {
    ap_channel_done_layer10_out_2_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_30_V() {
    ap_channel_done_layer10_out_30_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_31_V() {
    ap_channel_done_layer10_out_31_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_32_V() {
    ap_channel_done_layer10_out_32_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_33_V() {
    ap_channel_done_layer10_out_33_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_34_V() {
    ap_channel_done_layer10_out_34_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_35_V() {
    ap_channel_done_layer10_out_35_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_36_V() {
    ap_channel_done_layer10_out_36_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_37_V() {
    ap_channel_done_layer10_out_37_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_38_V() {
    ap_channel_done_layer10_out_38_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_39_V() {
    ap_channel_done_layer10_out_39_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_3_V() {
    ap_channel_done_layer10_out_3_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_40_V() {
    ap_channel_done_layer10_out_40_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_41_V() {
    ap_channel_done_layer10_out_41_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_42_V() {
    ap_channel_done_layer10_out_42_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_43_V() {
    ap_channel_done_layer10_out_43_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_44_V() {
    ap_channel_done_layer10_out_44_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_45_V() {
    ap_channel_done_layer10_out_45_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_46_V() {
    ap_channel_done_layer10_out_46_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_47_V() {
    ap_channel_done_layer10_out_47_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_48_V() {
    ap_channel_done_layer10_out_48_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_49_V() {
    ap_channel_done_layer10_out_49_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_4_V() {
    ap_channel_done_layer10_out_4_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_5_V() {
    ap_channel_done_layer10_out_5_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_6_V() {
    ap_channel_done_layer10_out_6_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_7_V() {
    ap_channel_done_layer10_out_7_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_8_V() {
    ap_channel_done_layer10_out_8_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer10_out_9_V() {
    ap_channel_done_layer10_out_9_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config10_U0_ap_done.read() & (ap_sync_reg_channel_write_layer10_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer11_out_0_V() {
    ap_channel_done_layer11_out_0_V = dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config11_U0_ap_done.read();
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_0_V() {
    ap_channel_done_layer14_out_0_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_100_V() {
    ap_channel_done_layer14_out_100_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_100_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_101_V() {
    ap_channel_done_layer14_out_101_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_101_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_102_V() {
    ap_channel_done_layer14_out_102_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_102_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_103_V() {
    ap_channel_done_layer14_out_103_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_103_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_104_V() {
    ap_channel_done_layer14_out_104_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_104_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_105_V() {
    ap_channel_done_layer14_out_105_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_105_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_106_V() {
    ap_channel_done_layer14_out_106_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_106_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_107_V() {
    ap_channel_done_layer14_out_107_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_107_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_108_V() {
    ap_channel_done_layer14_out_108_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_108_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_109_V() {
    ap_channel_done_layer14_out_109_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_109_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_10_V() {
    ap_channel_done_layer14_out_10_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_110_V() {
    ap_channel_done_layer14_out_110_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_110_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_111_V() {
    ap_channel_done_layer14_out_111_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_111_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_112_V() {
    ap_channel_done_layer14_out_112_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_112_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_113_V() {
    ap_channel_done_layer14_out_113_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_113_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_114_V() {
    ap_channel_done_layer14_out_114_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_114_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_115_V() {
    ap_channel_done_layer14_out_115_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_115_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_116_V() {
    ap_channel_done_layer14_out_116_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_116_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_117_V() {
    ap_channel_done_layer14_out_117_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_117_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_118_V() {
    ap_channel_done_layer14_out_118_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_118_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_119_V() {
    ap_channel_done_layer14_out_119_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_119_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_11_V() {
    ap_channel_done_layer14_out_11_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_120_V() {
    ap_channel_done_layer14_out_120_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_120_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_121_V() {
    ap_channel_done_layer14_out_121_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_121_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_122_V() {
    ap_channel_done_layer14_out_122_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_122_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_123_V() {
    ap_channel_done_layer14_out_123_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_123_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_124_V() {
    ap_channel_done_layer14_out_124_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_124_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_125_V() {
    ap_channel_done_layer14_out_125_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_125_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_126_V() {
    ap_channel_done_layer14_out_126_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_126_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_127_V() {
    ap_channel_done_layer14_out_127_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_127_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_128_V() {
    ap_channel_done_layer14_out_128_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_128_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_129_V() {
    ap_channel_done_layer14_out_129_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_129_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_12_V() {
    ap_channel_done_layer14_out_12_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_130_V() {
    ap_channel_done_layer14_out_130_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_130_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_131_V() {
    ap_channel_done_layer14_out_131_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_131_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_132_V() {
    ap_channel_done_layer14_out_132_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_132_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_133_V() {
    ap_channel_done_layer14_out_133_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_133_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_134_V() {
    ap_channel_done_layer14_out_134_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_134_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_135_V() {
    ap_channel_done_layer14_out_135_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_135_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_136_V() {
    ap_channel_done_layer14_out_136_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_136_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_137_V() {
    ap_channel_done_layer14_out_137_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_137_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_138_V() {
    ap_channel_done_layer14_out_138_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_138_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_139_V() {
    ap_channel_done_layer14_out_139_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_139_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_13_V() {
    ap_channel_done_layer14_out_13_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_140_V() {
    ap_channel_done_layer14_out_140_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_140_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_141_V() {
    ap_channel_done_layer14_out_141_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_141_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_142_V() {
    ap_channel_done_layer14_out_142_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_142_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_143_V() {
    ap_channel_done_layer14_out_143_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_143_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_144_V() {
    ap_channel_done_layer14_out_144_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_144_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_145_V() {
    ap_channel_done_layer14_out_145_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_145_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_146_V() {
    ap_channel_done_layer14_out_146_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_146_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_147_V() {
    ap_channel_done_layer14_out_147_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_147_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_148_V() {
    ap_channel_done_layer14_out_148_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_148_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_149_V() {
    ap_channel_done_layer14_out_149_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_149_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_14_V() {
    ap_channel_done_layer14_out_14_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_150_V() {
    ap_channel_done_layer14_out_150_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_150_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_151_V() {
    ap_channel_done_layer14_out_151_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_151_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_152_V() {
    ap_channel_done_layer14_out_152_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_152_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_153_V() {
    ap_channel_done_layer14_out_153_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_153_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_154_V() {
    ap_channel_done_layer14_out_154_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_154_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_155_V() {
    ap_channel_done_layer14_out_155_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_155_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_156_V() {
    ap_channel_done_layer14_out_156_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_156_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_157_V() {
    ap_channel_done_layer14_out_157_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_157_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_158_V() {
    ap_channel_done_layer14_out_158_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_158_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_159_V() {
    ap_channel_done_layer14_out_159_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_159_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_15_V() {
    ap_channel_done_layer14_out_15_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_160_V() {
    ap_channel_done_layer14_out_160_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_160_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_161_V() {
    ap_channel_done_layer14_out_161_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_161_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_162_V() {
    ap_channel_done_layer14_out_162_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_162_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_163_V() {
    ap_channel_done_layer14_out_163_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_163_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_164_V() {
    ap_channel_done_layer14_out_164_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_164_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_165_V() {
    ap_channel_done_layer14_out_165_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_165_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_166_V() {
    ap_channel_done_layer14_out_166_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_166_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_167_V() {
    ap_channel_done_layer14_out_167_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_167_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_168_V() {
    ap_channel_done_layer14_out_168_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_168_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_169_V() {
    ap_channel_done_layer14_out_169_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_169_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_16_V() {
    ap_channel_done_layer14_out_16_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_170_V() {
    ap_channel_done_layer14_out_170_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_170_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_171_V() {
    ap_channel_done_layer14_out_171_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_171_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_172_V() {
    ap_channel_done_layer14_out_172_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_172_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_173_V() {
    ap_channel_done_layer14_out_173_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_173_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_174_V() {
    ap_channel_done_layer14_out_174_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_174_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_175_V() {
    ap_channel_done_layer14_out_175_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_175_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_176_V() {
    ap_channel_done_layer14_out_176_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_176_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_177_V() {
    ap_channel_done_layer14_out_177_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_177_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_178_V() {
    ap_channel_done_layer14_out_178_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_178_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_179_V() {
    ap_channel_done_layer14_out_179_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_179_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_17_V() {
    ap_channel_done_layer14_out_17_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_180_V() {
    ap_channel_done_layer14_out_180_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_180_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_181_V() {
    ap_channel_done_layer14_out_181_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_181_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_182_V() {
    ap_channel_done_layer14_out_182_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_182_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_183_V() {
    ap_channel_done_layer14_out_183_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_183_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_184_V() {
    ap_channel_done_layer14_out_184_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_184_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_185_V() {
    ap_channel_done_layer14_out_185_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_185_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_186_V() {
    ap_channel_done_layer14_out_186_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_186_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_187_V() {
    ap_channel_done_layer14_out_187_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_187_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_188_V() {
    ap_channel_done_layer14_out_188_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_188_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_189_V() {
    ap_channel_done_layer14_out_189_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_189_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_18_V() {
    ap_channel_done_layer14_out_18_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_190_V() {
    ap_channel_done_layer14_out_190_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_190_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_191_V() {
    ap_channel_done_layer14_out_191_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_191_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_192_V() {
    ap_channel_done_layer14_out_192_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_192_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_193_V() {
    ap_channel_done_layer14_out_193_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_193_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_194_V() {
    ap_channel_done_layer14_out_194_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_194_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_195_V() {
    ap_channel_done_layer14_out_195_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_195_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_196_V() {
    ap_channel_done_layer14_out_196_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_196_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_197_V() {
    ap_channel_done_layer14_out_197_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_197_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_198_V() {
    ap_channel_done_layer14_out_198_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_198_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_199_V() {
    ap_channel_done_layer14_out_199_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_199_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_19_V() {
    ap_channel_done_layer14_out_19_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_1_V() {
    ap_channel_done_layer14_out_1_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_20_V() {
    ap_channel_done_layer14_out_20_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_21_V() {
    ap_channel_done_layer14_out_21_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_22_V() {
    ap_channel_done_layer14_out_22_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_23_V() {
    ap_channel_done_layer14_out_23_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_24_V() {
    ap_channel_done_layer14_out_24_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_25_V() {
    ap_channel_done_layer14_out_25_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_26_V() {
    ap_channel_done_layer14_out_26_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_27_V() {
    ap_channel_done_layer14_out_27_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_28_V() {
    ap_channel_done_layer14_out_28_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_29_V() {
    ap_channel_done_layer14_out_29_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_2_V() {
    ap_channel_done_layer14_out_2_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_30_V() {
    ap_channel_done_layer14_out_30_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_31_V() {
    ap_channel_done_layer14_out_31_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_32_V() {
    ap_channel_done_layer14_out_32_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_33_V() {
    ap_channel_done_layer14_out_33_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_34_V() {
    ap_channel_done_layer14_out_34_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_35_V() {
    ap_channel_done_layer14_out_35_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_36_V() {
    ap_channel_done_layer14_out_36_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_37_V() {
    ap_channel_done_layer14_out_37_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_38_V() {
    ap_channel_done_layer14_out_38_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_39_V() {
    ap_channel_done_layer14_out_39_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_3_V() {
    ap_channel_done_layer14_out_3_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_40_V() {
    ap_channel_done_layer14_out_40_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_41_V() {
    ap_channel_done_layer14_out_41_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_42_V() {
    ap_channel_done_layer14_out_42_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_43_V() {
    ap_channel_done_layer14_out_43_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_44_V() {
    ap_channel_done_layer14_out_44_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_45_V() {
    ap_channel_done_layer14_out_45_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_46_V() {
    ap_channel_done_layer14_out_46_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_47_V() {
    ap_channel_done_layer14_out_47_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_48_V() {
    ap_channel_done_layer14_out_48_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_49_V() {
    ap_channel_done_layer14_out_49_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_4_V() {
    ap_channel_done_layer14_out_4_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_50_V() {
    ap_channel_done_layer14_out_50_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_50_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_51_V() {
    ap_channel_done_layer14_out_51_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_51_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_52_V() {
    ap_channel_done_layer14_out_52_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_52_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_53_V() {
    ap_channel_done_layer14_out_53_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_53_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_54_V() {
    ap_channel_done_layer14_out_54_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_54_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_55_V() {
    ap_channel_done_layer14_out_55_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_55_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_56_V() {
    ap_channel_done_layer14_out_56_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_56_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_57_V() {
    ap_channel_done_layer14_out_57_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_57_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_58_V() {
    ap_channel_done_layer14_out_58_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_58_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_59_V() {
    ap_channel_done_layer14_out_59_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_59_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_5_V() {
    ap_channel_done_layer14_out_5_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_60_V() {
    ap_channel_done_layer14_out_60_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_60_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_61_V() {
    ap_channel_done_layer14_out_61_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_61_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_62_V() {
    ap_channel_done_layer14_out_62_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_62_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_63_V() {
    ap_channel_done_layer14_out_63_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_63_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_64_V() {
    ap_channel_done_layer14_out_64_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_64_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_65_V() {
    ap_channel_done_layer14_out_65_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_65_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_66_V() {
    ap_channel_done_layer14_out_66_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_66_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_67_V() {
    ap_channel_done_layer14_out_67_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_67_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_68_V() {
    ap_channel_done_layer14_out_68_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_68_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_69_V() {
    ap_channel_done_layer14_out_69_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_69_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_6_V() {
    ap_channel_done_layer14_out_6_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_70_V() {
    ap_channel_done_layer14_out_70_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_70_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_71_V() {
    ap_channel_done_layer14_out_71_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_71_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_72_V() {
    ap_channel_done_layer14_out_72_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_72_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_73_V() {
    ap_channel_done_layer14_out_73_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_73_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_74_V() {
    ap_channel_done_layer14_out_74_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_74_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_75_V() {
    ap_channel_done_layer14_out_75_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_75_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_76_V() {
    ap_channel_done_layer14_out_76_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_76_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_77_V() {
    ap_channel_done_layer14_out_77_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_77_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_78_V() {
    ap_channel_done_layer14_out_78_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_78_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_79_V() {
    ap_channel_done_layer14_out_79_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_79_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_7_V() {
    ap_channel_done_layer14_out_7_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_80_V() {
    ap_channel_done_layer14_out_80_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_80_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_81_V() {
    ap_channel_done_layer14_out_81_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_81_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_82_V() {
    ap_channel_done_layer14_out_82_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_82_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_83_V() {
    ap_channel_done_layer14_out_83_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_83_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_84_V() {
    ap_channel_done_layer14_out_84_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_84_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_85_V() {
    ap_channel_done_layer14_out_85_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_85_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_86_V() {
    ap_channel_done_layer14_out_86_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_86_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_87_V() {
    ap_channel_done_layer14_out_87_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_87_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_88_V() {
    ap_channel_done_layer14_out_88_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_88_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_89_V() {
    ap_channel_done_layer14_out_89_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_89_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_8_V() {
    ap_channel_done_layer14_out_8_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_90_V() {
    ap_channel_done_layer14_out_90_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_90_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_91_V() {
    ap_channel_done_layer14_out_91_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_91_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_92_V() {
    ap_channel_done_layer14_out_92_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_92_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_93_V() {
    ap_channel_done_layer14_out_93_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_93_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_94_V() {
    ap_channel_done_layer14_out_94_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_94_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_95_V() {
    ap_channel_done_layer14_out_95_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_95_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_96_V() {
    ap_channel_done_layer14_out_96_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_96_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_97_V() {
    ap_channel_done_layer14_out_97_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_97_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_98_V() {
    ap_channel_done_layer14_out_98_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_98_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_99_V() {
    ap_channel_done_layer14_out_99_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_99_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer14_out_9_V() {
    ap_channel_done_layer14_out_9_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer14_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_0_V() {
    ap_channel_done_layer15_out_0_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_10_V() {
    ap_channel_done_layer15_out_10_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_11_V() {
    ap_channel_done_layer15_out_11_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_12_V() {
    ap_channel_done_layer15_out_12_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_13_V() {
    ap_channel_done_layer15_out_13_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_14_V() {
    ap_channel_done_layer15_out_14_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_15_V() {
    ap_channel_done_layer15_out_15_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_16_V() {
    ap_channel_done_layer15_out_16_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_17_V() {
    ap_channel_done_layer15_out_17_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_18_V() {
    ap_channel_done_layer15_out_18_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_19_V() {
    ap_channel_done_layer15_out_19_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_1_V() {
    ap_channel_done_layer15_out_1_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_20_V() {
    ap_channel_done_layer15_out_20_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_21_V() {
    ap_channel_done_layer15_out_21_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_22_V() {
    ap_channel_done_layer15_out_22_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_23_V() {
    ap_channel_done_layer15_out_23_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_24_V() {
    ap_channel_done_layer15_out_24_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_25_V() {
    ap_channel_done_layer15_out_25_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_26_V() {
    ap_channel_done_layer15_out_26_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_27_V() {
    ap_channel_done_layer15_out_27_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_28_V() {
    ap_channel_done_layer15_out_28_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_29_V() {
    ap_channel_done_layer15_out_29_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_2_V() {
    ap_channel_done_layer15_out_2_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_30_V() {
    ap_channel_done_layer15_out_30_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_31_V() {
    ap_channel_done_layer15_out_31_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_32_V() {
    ap_channel_done_layer15_out_32_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_33_V() {
    ap_channel_done_layer15_out_33_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_34_V() {
    ap_channel_done_layer15_out_34_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_35_V() {
    ap_channel_done_layer15_out_35_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_36_V() {
    ap_channel_done_layer15_out_36_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_37_V() {
    ap_channel_done_layer15_out_37_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_38_V() {
    ap_channel_done_layer15_out_38_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_39_V() {
    ap_channel_done_layer15_out_39_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_3_V() {
    ap_channel_done_layer15_out_3_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_40_V() {
    ap_channel_done_layer15_out_40_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_41_V() {
    ap_channel_done_layer15_out_41_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_42_V() {
    ap_channel_done_layer15_out_42_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_43_V() {
    ap_channel_done_layer15_out_43_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_44_V() {
    ap_channel_done_layer15_out_44_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_45_V() {
    ap_channel_done_layer15_out_45_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_46_V() {
    ap_channel_done_layer15_out_46_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_47_V() {
    ap_channel_done_layer15_out_47_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_48_V() {
    ap_channel_done_layer15_out_48_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_49_V() {
    ap_channel_done_layer15_out_49_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_4_V() {
    ap_channel_done_layer15_out_4_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_50_V() {
    ap_channel_done_layer15_out_50_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_50_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_51_V() {
    ap_channel_done_layer15_out_51_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_51_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_52_V() {
    ap_channel_done_layer15_out_52_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_52_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_53_V() {
    ap_channel_done_layer15_out_53_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_53_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_54_V() {
    ap_channel_done_layer15_out_54_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_54_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_55_V() {
    ap_channel_done_layer15_out_55_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_55_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_56_V() {
    ap_channel_done_layer15_out_56_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_56_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_57_V() {
    ap_channel_done_layer15_out_57_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_57_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_58_V() {
    ap_channel_done_layer15_out_58_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_58_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_59_V() {
    ap_channel_done_layer15_out_59_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_59_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_5_V() {
    ap_channel_done_layer15_out_5_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_60_V() {
    ap_channel_done_layer15_out_60_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_60_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_61_V() {
    ap_channel_done_layer15_out_61_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_61_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_62_V() {
    ap_channel_done_layer15_out_62_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_62_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_63_V() {
    ap_channel_done_layer15_out_63_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_63_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_64_V() {
    ap_channel_done_layer15_out_64_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_64_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_65_V() {
    ap_channel_done_layer15_out_65_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_65_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_66_V() {
    ap_channel_done_layer15_out_66_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_66_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_67_V() {
    ap_channel_done_layer15_out_67_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_67_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_68_V() {
    ap_channel_done_layer15_out_68_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_68_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_69_V() {
    ap_channel_done_layer15_out_69_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_69_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_6_V() {
    ap_channel_done_layer15_out_6_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_70_V() {
    ap_channel_done_layer15_out_70_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_70_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_71_V() {
    ap_channel_done_layer15_out_71_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_71_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_72_V() {
    ap_channel_done_layer15_out_72_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_72_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_73_V() {
    ap_channel_done_layer15_out_73_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_73_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_74_V() {
    ap_channel_done_layer15_out_74_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_74_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_75_V() {
    ap_channel_done_layer15_out_75_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_75_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_76_V() {
    ap_channel_done_layer15_out_76_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_76_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_77_V() {
    ap_channel_done_layer15_out_77_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_77_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_78_V() {
    ap_channel_done_layer15_out_78_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_78_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_79_V() {
    ap_channel_done_layer15_out_79_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_79_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_7_V() {
    ap_channel_done_layer15_out_7_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_80_V() {
    ap_channel_done_layer15_out_80_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_80_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_81_V() {
    ap_channel_done_layer15_out_81_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_81_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_82_V() {
    ap_channel_done_layer15_out_82_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_82_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_83_V() {
    ap_channel_done_layer15_out_83_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_83_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_84_V() {
    ap_channel_done_layer15_out_84_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_84_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_85_V() {
    ap_channel_done_layer15_out_85_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_85_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_86_V() {
    ap_channel_done_layer15_out_86_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_86_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_87_V() {
    ap_channel_done_layer15_out_87_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_87_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_88_V() {
    ap_channel_done_layer15_out_88_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_88_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_89_V() {
    ap_channel_done_layer15_out_89_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_89_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_8_V() {
    ap_channel_done_layer15_out_8_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_90_V() {
    ap_channel_done_layer15_out_90_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_90_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_91_V() {
    ap_channel_done_layer15_out_91_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_91_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_92_V() {
    ap_channel_done_layer15_out_92_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_92_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_93_V() {
    ap_channel_done_layer15_out_93_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_93_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_94_V() {
    ap_channel_done_layer15_out_94_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_94_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_95_V() {
    ap_channel_done_layer15_out_95_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_95_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_96_V() {
    ap_channel_done_layer15_out_96_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_96_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_97_V() {
    ap_channel_done_layer15_out_97_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_97_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_98_V() {
    ap_channel_done_layer15_out_98_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_98_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_99_V() {
    ap_channel_done_layer15_out_99_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_99_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer15_out_9_V() {
    ap_channel_done_layer15_out_9_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_1_U0_ap_done.read() & (ap_sync_reg_channel_write_layer15_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_0_V() {
    ap_channel_done_layer16_out_0_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_10_V() {
    ap_channel_done_layer16_out_10_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_11_V() {
    ap_channel_done_layer16_out_11_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_12_V() {
    ap_channel_done_layer16_out_12_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_13_V() {
    ap_channel_done_layer16_out_13_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_14_V() {
    ap_channel_done_layer16_out_14_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_15_V() {
    ap_channel_done_layer16_out_15_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_16_V() {
    ap_channel_done_layer16_out_16_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_17_V() {
    ap_channel_done_layer16_out_17_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_18_V() {
    ap_channel_done_layer16_out_18_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_19_V() {
    ap_channel_done_layer16_out_19_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_1_V() {
    ap_channel_done_layer16_out_1_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_20_V() {
    ap_channel_done_layer16_out_20_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_21_V() {
    ap_channel_done_layer16_out_21_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_22_V() {
    ap_channel_done_layer16_out_22_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_23_V() {
    ap_channel_done_layer16_out_23_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_24_V() {
    ap_channel_done_layer16_out_24_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_25_V() {
    ap_channel_done_layer16_out_25_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_26_V() {
    ap_channel_done_layer16_out_26_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_27_V() {
    ap_channel_done_layer16_out_27_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_28_V() {
    ap_channel_done_layer16_out_28_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_29_V() {
    ap_channel_done_layer16_out_29_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_2_V() {
    ap_channel_done_layer16_out_2_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_30_V() {
    ap_channel_done_layer16_out_30_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_31_V() {
    ap_channel_done_layer16_out_31_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_32_V() {
    ap_channel_done_layer16_out_32_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_33_V() {
    ap_channel_done_layer16_out_33_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_34_V() {
    ap_channel_done_layer16_out_34_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_35_V() {
    ap_channel_done_layer16_out_35_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_36_V() {
    ap_channel_done_layer16_out_36_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_37_V() {
    ap_channel_done_layer16_out_37_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_38_V() {
    ap_channel_done_layer16_out_38_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_39_V() {
    ap_channel_done_layer16_out_39_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_3_V() {
    ap_channel_done_layer16_out_3_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_40_V() {
    ap_channel_done_layer16_out_40_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_41_V() {
    ap_channel_done_layer16_out_41_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_42_V() {
    ap_channel_done_layer16_out_42_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_43_V() {
    ap_channel_done_layer16_out_43_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_44_V() {
    ap_channel_done_layer16_out_44_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_45_V() {
    ap_channel_done_layer16_out_45_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_46_V() {
    ap_channel_done_layer16_out_46_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_47_V() {
    ap_channel_done_layer16_out_47_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_48_V() {
    ap_channel_done_layer16_out_48_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_49_V() {
    ap_channel_done_layer16_out_49_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_4_V() {
    ap_channel_done_layer16_out_4_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_5_V() {
    ap_channel_done_layer16_out_5_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_6_V() {
    ap_channel_done_layer16_out_6_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_7_V() {
    ap_channel_done_layer16_out_7_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_8_V() {
    ap_channel_done_layer16_out_8_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer16_out_9_V() {
    ap_channel_done_layer16_out_9_V = (normalize_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_0_U0_ap_done.read() & (ap_sync_reg_channel_write_layer16_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_0_V() {
    ap_channel_done_layer2_out_0_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_100_V() {
    ap_channel_done_layer2_out_100_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_100_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_101_V() {
    ap_channel_done_layer2_out_101_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_101_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_102_V() {
    ap_channel_done_layer2_out_102_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_102_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_103_V() {
    ap_channel_done_layer2_out_103_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_103_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_104_V() {
    ap_channel_done_layer2_out_104_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_104_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_105_V() {
    ap_channel_done_layer2_out_105_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_105_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_106_V() {
    ap_channel_done_layer2_out_106_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_106_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_107_V() {
    ap_channel_done_layer2_out_107_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_107_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_108_V() {
    ap_channel_done_layer2_out_108_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_108_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_109_V() {
    ap_channel_done_layer2_out_109_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_109_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_10_V() {
    ap_channel_done_layer2_out_10_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_110_V() {
    ap_channel_done_layer2_out_110_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_110_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_111_V() {
    ap_channel_done_layer2_out_111_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_111_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_112_V() {
    ap_channel_done_layer2_out_112_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_112_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_113_V() {
    ap_channel_done_layer2_out_113_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_113_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_114_V() {
    ap_channel_done_layer2_out_114_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_114_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_115_V() {
    ap_channel_done_layer2_out_115_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_115_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_116_V() {
    ap_channel_done_layer2_out_116_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_116_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_117_V() {
    ap_channel_done_layer2_out_117_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_117_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_118_V() {
    ap_channel_done_layer2_out_118_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_118_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_119_V() {
    ap_channel_done_layer2_out_119_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_119_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_11_V() {
    ap_channel_done_layer2_out_11_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_120_V() {
    ap_channel_done_layer2_out_120_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_120_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_121_V() {
    ap_channel_done_layer2_out_121_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_121_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_122_V() {
    ap_channel_done_layer2_out_122_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_122_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_123_V() {
    ap_channel_done_layer2_out_123_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_123_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_124_V() {
    ap_channel_done_layer2_out_124_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_124_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_125_V() {
    ap_channel_done_layer2_out_125_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_125_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_126_V() {
    ap_channel_done_layer2_out_126_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_126_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_127_V() {
    ap_channel_done_layer2_out_127_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_127_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_128_V() {
    ap_channel_done_layer2_out_128_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_128_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_129_V() {
    ap_channel_done_layer2_out_129_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_129_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_12_V() {
    ap_channel_done_layer2_out_12_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_130_V() {
    ap_channel_done_layer2_out_130_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_130_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_131_V() {
    ap_channel_done_layer2_out_131_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_131_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_132_V() {
    ap_channel_done_layer2_out_132_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_132_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_133_V() {
    ap_channel_done_layer2_out_133_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_133_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_134_V() {
    ap_channel_done_layer2_out_134_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_134_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_135_V() {
    ap_channel_done_layer2_out_135_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_135_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_136_V() {
    ap_channel_done_layer2_out_136_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_136_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_137_V() {
    ap_channel_done_layer2_out_137_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_137_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_138_V() {
    ap_channel_done_layer2_out_138_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_138_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_139_V() {
    ap_channel_done_layer2_out_139_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_139_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_13_V() {
    ap_channel_done_layer2_out_13_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_140_V() {
    ap_channel_done_layer2_out_140_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_140_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_141_V() {
    ap_channel_done_layer2_out_141_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_141_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_142_V() {
    ap_channel_done_layer2_out_142_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_142_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_143_V() {
    ap_channel_done_layer2_out_143_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_143_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_144_V() {
    ap_channel_done_layer2_out_144_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_144_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_145_V() {
    ap_channel_done_layer2_out_145_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_145_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_146_V() {
    ap_channel_done_layer2_out_146_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_146_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_147_V() {
    ap_channel_done_layer2_out_147_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_147_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_148_V() {
    ap_channel_done_layer2_out_148_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_148_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_149_V() {
    ap_channel_done_layer2_out_149_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_149_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_14_V() {
    ap_channel_done_layer2_out_14_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_150_V() {
    ap_channel_done_layer2_out_150_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_150_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_151_V() {
    ap_channel_done_layer2_out_151_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_151_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_152_V() {
    ap_channel_done_layer2_out_152_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_152_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_153_V() {
    ap_channel_done_layer2_out_153_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_153_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_154_V() {
    ap_channel_done_layer2_out_154_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_154_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_155_V() {
    ap_channel_done_layer2_out_155_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_155_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_156_V() {
    ap_channel_done_layer2_out_156_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_156_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_157_V() {
    ap_channel_done_layer2_out_157_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_157_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_158_V() {
    ap_channel_done_layer2_out_158_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_158_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_159_V() {
    ap_channel_done_layer2_out_159_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_159_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_15_V() {
    ap_channel_done_layer2_out_15_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_160_V() {
    ap_channel_done_layer2_out_160_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_160_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_161_V() {
    ap_channel_done_layer2_out_161_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_161_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_162_V() {
    ap_channel_done_layer2_out_162_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_162_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_163_V() {
    ap_channel_done_layer2_out_163_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_163_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_164_V() {
    ap_channel_done_layer2_out_164_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_164_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_165_V() {
    ap_channel_done_layer2_out_165_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_165_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_166_V() {
    ap_channel_done_layer2_out_166_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_166_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_167_V() {
    ap_channel_done_layer2_out_167_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_167_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_168_V() {
    ap_channel_done_layer2_out_168_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_168_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_169_V() {
    ap_channel_done_layer2_out_169_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_169_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_16_V() {
    ap_channel_done_layer2_out_16_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_170_V() {
    ap_channel_done_layer2_out_170_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_170_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_171_V() {
    ap_channel_done_layer2_out_171_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_171_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_172_V() {
    ap_channel_done_layer2_out_172_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_172_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_173_V() {
    ap_channel_done_layer2_out_173_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_173_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_174_V() {
    ap_channel_done_layer2_out_174_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_174_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_175_V() {
    ap_channel_done_layer2_out_175_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_175_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_176_V() {
    ap_channel_done_layer2_out_176_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_176_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_177_V() {
    ap_channel_done_layer2_out_177_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_177_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_178_V() {
    ap_channel_done_layer2_out_178_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_178_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_179_V() {
    ap_channel_done_layer2_out_179_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_179_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_17_V() {
    ap_channel_done_layer2_out_17_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_180_V() {
    ap_channel_done_layer2_out_180_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_180_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_181_V() {
    ap_channel_done_layer2_out_181_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_181_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_182_V() {
    ap_channel_done_layer2_out_182_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_182_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_183_V() {
    ap_channel_done_layer2_out_183_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_183_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_184_V() {
    ap_channel_done_layer2_out_184_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_184_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_185_V() {
    ap_channel_done_layer2_out_185_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_185_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_186_V() {
    ap_channel_done_layer2_out_186_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_186_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_187_V() {
    ap_channel_done_layer2_out_187_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_187_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_188_V() {
    ap_channel_done_layer2_out_188_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_188_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_189_V() {
    ap_channel_done_layer2_out_189_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_189_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_18_V() {
    ap_channel_done_layer2_out_18_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_190_V() {
    ap_channel_done_layer2_out_190_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_190_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_191_V() {
    ap_channel_done_layer2_out_191_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_191_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_192_V() {
    ap_channel_done_layer2_out_192_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_192_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_193_V() {
    ap_channel_done_layer2_out_193_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_193_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_194_V() {
    ap_channel_done_layer2_out_194_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_194_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_195_V() {
    ap_channel_done_layer2_out_195_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_195_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_196_V() {
    ap_channel_done_layer2_out_196_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_196_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_197_V() {
    ap_channel_done_layer2_out_197_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_197_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_198_V() {
    ap_channel_done_layer2_out_198_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_198_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_199_V() {
    ap_channel_done_layer2_out_199_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_199_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_19_V() {
    ap_channel_done_layer2_out_19_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_1_V() {
    ap_channel_done_layer2_out_1_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_20_V() {
    ap_channel_done_layer2_out_20_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_21_V() {
    ap_channel_done_layer2_out_21_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_22_V() {
    ap_channel_done_layer2_out_22_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_23_V() {
    ap_channel_done_layer2_out_23_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_24_V() {
    ap_channel_done_layer2_out_24_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_25_V() {
    ap_channel_done_layer2_out_25_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_26_V() {
    ap_channel_done_layer2_out_26_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_27_V() {
    ap_channel_done_layer2_out_27_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_28_V() {
    ap_channel_done_layer2_out_28_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_29_V() {
    ap_channel_done_layer2_out_29_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_2_V() {
    ap_channel_done_layer2_out_2_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_30_V() {
    ap_channel_done_layer2_out_30_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_31_V() {
    ap_channel_done_layer2_out_31_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_32_V() {
    ap_channel_done_layer2_out_32_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_33_V() {
    ap_channel_done_layer2_out_33_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_34_V() {
    ap_channel_done_layer2_out_34_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_35_V() {
    ap_channel_done_layer2_out_35_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_36_V() {
    ap_channel_done_layer2_out_36_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_37_V() {
    ap_channel_done_layer2_out_37_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_38_V() {
    ap_channel_done_layer2_out_38_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_39_V() {
    ap_channel_done_layer2_out_39_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_3_V() {
    ap_channel_done_layer2_out_3_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_40_V() {
    ap_channel_done_layer2_out_40_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_41_V() {
    ap_channel_done_layer2_out_41_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_42_V() {
    ap_channel_done_layer2_out_42_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_43_V() {
    ap_channel_done_layer2_out_43_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_44_V() {
    ap_channel_done_layer2_out_44_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_45_V() {
    ap_channel_done_layer2_out_45_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_46_V() {
    ap_channel_done_layer2_out_46_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_47_V() {
    ap_channel_done_layer2_out_47_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_48_V() {
    ap_channel_done_layer2_out_48_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_49_V() {
    ap_channel_done_layer2_out_49_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_4_V() {
    ap_channel_done_layer2_out_4_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_50_V() {
    ap_channel_done_layer2_out_50_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_50_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_51_V() {
    ap_channel_done_layer2_out_51_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_51_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_52_V() {
    ap_channel_done_layer2_out_52_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_52_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_53_V() {
    ap_channel_done_layer2_out_53_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_53_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_54_V() {
    ap_channel_done_layer2_out_54_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_54_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_55_V() {
    ap_channel_done_layer2_out_55_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_55_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_56_V() {
    ap_channel_done_layer2_out_56_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_56_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_57_V() {
    ap_channel_done_layer2_out_57_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_57_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_58_V() {
    ap_channel_done_layer2_out_58_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_58_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_59_V() {
    ap_channel_done_layer2_out_59_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_59_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_5_V() {
    ap_channel_done_layer2_out_5_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_60_V() {
    ap_channel_done_layer2_out_60_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_60_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_61_V() {
    ap_channel_done_layer2_out_61_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_61_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_62_V() {
    ap_channel_done_layer2_out_62_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_62_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_63_V() {
    ap_channel_done_layer2_out_63_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_63_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_64_V() {
    ap_channel_done_layer2_out_64_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_64_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_65_V() {
    ap_channel_done_layer2_out_65_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_65_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_66_V() {
    ap_channel_done_layer2_out_66_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_66_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_67_V() {
    ap_channel_done_layer2_out_67_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_67_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_68_V() {
    ap_channel_done_layer2_out_68_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_68_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_69_V() {
    ap_channel_done_layer2_out_69_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_69_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_6_V() {
    ap_channel_done_layer2_out_6_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_70_V() {
    ap_channel_done_layer2_out_70_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_70_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_71_V() {
    ap_channel_done_layer2_out_71_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_71_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_72_V() {
    ap_channel_done_layer2_out_72_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_72_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_73_V() {
    ap_channel_done_layer2_out_73_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_73_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_74_V() {
    ap_channel_done_layer2_out_74_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_74_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_75_V() {
    ap_channel_done_layer2_out_75_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_75_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_76_V() {
    ap_channel_done_layer2_out_76_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_76_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_77_V() {
    ap_channel_done_layer2_out_77_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_77_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_78_V() {
    ap_channel_done_layer2_out_78_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_78_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_79_V() {
    ap_channel_done_layer2_out_79_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_79_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_7_V() {
    ap_channel_done_layer2_out_7_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_80_V() {
    ap_channel_done_layer2_out_80_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_80_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_81_V() {
    ap_channel_done_layer2_out_81_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_81_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_82_V() {
    ap_channel_done_layer2_out_82_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_82_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_83_V() {
    ap_channel_done_layer2_out_83_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_83_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_84_V() {
    ap_channel_done_layer2_out_84_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_84_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_85_V() {
    ap_channel_done_layer2_out_85_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_85_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_86_V() {
    ap_channel_done_layer2_out_86_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_86_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_87_V() {
    ap_channel_done_layer2_out_87_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_87_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_88_V() {
    ap_channel_done_layer2_out_88_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_88_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_89_V() {
    ap_channel_done_layer2_out_89_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_89_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_8_V() {
    ap_channel_done_layer2_out_8_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_90_V() {
    ap_channel_done_layer2_out_90_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_90_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_91_V() {
    ap_channel_done_layer2_out_91_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_91_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_92_V() {
    ap_channel_done_layer2_out_92_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_92_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_93_V() {
    ap_channel_done_layer2_out_93_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_93_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_94_V() {
    ap_channel_done_layer2_out_94_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_94_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_95_V() {
    ap_channel_done_layer2_out_95_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_95_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_96_V() {
    ap_channel_done_layer2_out_96_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_96_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_97_V() {
    ap_channel_done_layer2_out_97_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_97_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_98_V() {
    ap_channel_done_layer2_out_98_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_98_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_99_V() {
    ap_channel_done_layer2_out_99_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_99_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer2_out_9_V() {
    ap_channel_done_layer2_out_9_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_0_V() {
    ap_channel_done_layer4_out_0_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_100_V() {
    ap_channel_done_layer4_out_100_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_100_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_101_V() {
    ap_channel_done_layer4_out_101_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_101_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_102_V() {
    ap_channel_done_layer4_out_102_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_102_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_103_V() {
    ap_channel_done_layer4_out_103_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_103_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_104_V() {
    ap_channel_done_layer4_out_104_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_104_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_105_V() {
    ap_channel_done_layer4_out_105_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_105_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_106_V() {
    ap_channel_done_layer4_out_106_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_106_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_107_V() {
    ap_channel_done_layer4_out_107_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_107_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_108_V() {
    ap_channel_done_layer4_out_108_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_108_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_109_V() {
    ap_channel_done_layer4_out_109_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_109_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_10_V() {
    ap_channel_done_layer4_out_10_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_110_V() {
    ap_channel_done_layer4_out_110_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_110_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_111_V() {
    ap_channel_done_layer4_out_111_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_111_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_112_V() {
    ap_channel_done_layer4_out_112_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_112_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_113_V() {
    ap_channel_done_layer4_out_113_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_113_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_114_V() {
    ap_channel_done_layer4_out_114_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_114_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_115_V() {
    ap_channel_done_layer4_out_115_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_115_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_116_V() {
    ap_channel_done_layer4_out_116_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_116_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_117_V() {
    ap_channel_done_layer4_out_117_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_117_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_118_V() {
    ap_channel_done_layer4_out_118_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_118_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_119_V() {
    ap_channel_done_layer4_out_119_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_119_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_11_V() {
    ap_channel_done_layer4_out_11_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_120_V() {
    ap_channel_done_layer4_out_120_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_120_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_121_V() {
    ap_channel_done_layer4_out_121_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_121_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_122_V() {
    ap_channel_done_layer4_out_122_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_122_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_123_V() {
    ap_channel_done_layer4_out_123_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_123_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_124_V() {
    ap_channel_done_layer4_out_124_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_124_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_125_V() {
    ap_channel_done_layer4_out_125_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_125_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_126_V() {
    ap_channel_done_layer4_out_126_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_126_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_127_V() {
    ap_channel_done_layer4_out_127_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_127_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_128_V() {
    ap_channel_done_layer4_out_128_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_128_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_129_V() {
    ap_channel_done_layer4_out_129_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_129_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_12_V() {
    ap_channel_done_layer4_out_12_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_130_V() {
    ap_channel_done_layer4_out_130_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_130_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_131_V() {
    ap_channel_done_layer4_out_131_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_131_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_132_V() {
    ap_channel_done_layer4_out_132_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_132_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_133_V() {
    ap_channel_done_layer4_out_133_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_133_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_134_V() {
    ap_channel_done_layer4_out_134_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_134_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_135_V() {
    ap_channel_done_layer4_out_135_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_135_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_136_V() {
    ap_channel_done_layer4_out_136_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_136_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_137_V() {
    ap_channel_done_layer4_out_137_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_137_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_138_V() {
    ap_channel_done_layer4_out_138_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_138_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_139_V() {
    ap_channel_done_layer4_out_139_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_139_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_13_V() {
    ap_channel_done_layer4_out_13_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_140_V() {
    ap_channel_done_layer4_out_140_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_140_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_141_V() {
    ap_channel_done_layer4_out_141_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_141_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_142_V() {
    ap_channel_done_layer4_out_142_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_142_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_143_V() {
    ap_channel_done_layer4_out_143_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_143_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_144_V() {
    ap_channel_done_layer4_out_144_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_144_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_145_V() {
    ap_channel_done_layer4_out_145_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_145_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_146_V() {
    ap_channel_done_layer4_out_146_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_146_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_147_V() {
    ap_channel_done_layer4_out_147_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_147_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_148_V() {
    ap_channel_done_layer4_out_148_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_148_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_149_V() {
    ap_channel_done_layer4_out_149_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_149_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_14_V() {
    ap_channel_done_layer4_out_14_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_150_V() {
    ap_channel_done_layer4_out_150_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_150_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_151_V() {
    ap_channel_done_layer4_out_151_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_151_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_152_V() {
    ap_channel_done_layer4_out_152_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_152_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_153_V() {
    ap_channel_done_layer4_out_153_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_153_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_154_V() {
    ap_channel_done_layer4_out_154_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_154_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_155_V() {
    ap_channel_done_layer4_out_155_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_155_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_156_V() {
    ap_channel_done_layer4_out_156_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_156_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_157_V() {
    ap_channel_done_layer4_out_157_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_157_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_158_V() {
    ap_channel_done_layer4_out_158_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_158_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_159_V() {
    ap_channel_done_layer4_out_159_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_159_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_15_V() {
    ap_channel_done_layer4_out_15_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_160_V() {
    ap_channel_done_layer4_out_160_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_160_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_161_V() {
    ap_channel_done_layer4_out_161_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_161_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_162_V() {
    ap_channel_done_layer4_out_162_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_162_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_163_V() {
    ap_channel_done_layer4_out_163_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_163_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_164_V() {
    ap_channel_done_layer4_out_164_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_164_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_165_V() {
    ap_channel_done_layer4_out_165_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_165_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_166_V() {
    ap_channel_done_layer4_out_166_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_166_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_167_V() {
    ap_channel_done_layer4_out_167_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_167_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_168_V() {
    ap_channel_done_layer4_out_168_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_168_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_169_V() {
    ap_channel_done_layer4_out_169_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_169_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_16_V() {
    ap_channel_done_layer4_out_16_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_170_V() {
    ap_channel_done_layer4_out_170_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_170_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_171_V() {
    ap_channel_done_layer4_out_171_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_171_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_172_V() {
    ap_channel_done_layer4_out_172_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_172_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_173_V() {
    ap_channel_done_layer4_out_173_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_173_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_174_V() {
    ap_channel_done_layer4_out_174_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_174_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_175_V() {
    ap_channel_done_layer4_out_175_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_175_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_176_V() {
    ap_channel_done_layer4_out_176_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_176_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_177_V() {
    ap_channel_done_layer4_out_177_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_177_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_178_V() {
    ap_channel_done_layer4_out_178_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_178_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_179_V() {
    ap_channel_done_layer4_out_179_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_179_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_17_V() {
    ap_channel_done_layer4_out_17_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_180_V() {
    ap_channel_done_layer4_out_180_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_180_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_181_V() {
    ap_channel_done_layer4_out_181_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_181_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_182_V() {
    ap_channel_done_layer4_out_182_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_182_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_183_V() {
    ap_channel_done_layer4_out_183_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_183_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_184_V() {
    ap_channel_done_layer4_out_184_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_184_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_185_V() {
    ap_channel_done_layer4_out_185_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_185_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_186_V() {
    ap_channel_done_layer4_out_186_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_186_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_187_V() {
    ap_channel_done_layer4_out_187_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_187_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_188_V() {
    ap_channel_done_layer4_out_188_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_188_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_189_V() {
    ap_channel_done_layer4_out_189_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_189_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_18_V() {
    ap_channel_done_layer4_out_18_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_190_V() {
    ap_channel_done_layer4_out_190_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_190_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_191_V() {
    ap_channel_done_layer4_out_191_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_191_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_192_V() {
    ap_channel_done_layer4_out_192_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_192_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_193_V() {
    ap_channel_done_layer4_out_193_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_193_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_194_V() {
    ap_channel_done_layer4_out_194_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_194_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_195_V() {
    ap_channel_done_layer4_out_195_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_195_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_196_V() {
    ap_channel_done_layer4_out_196_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_196_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_197_V() {
    ap_channel_done_layer4_out_197_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_197_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_198_V() {
    ap_channel_done_layer4_out_198_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_198_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_199_V() {
    ap_channel_done_layer4_out_199_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_199_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_19_V() {
    ap_channel_done_layer4_out_19_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_1_V() {
    ap_channel_done_layer4_out_1_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_20_V() {
    ap_channel_done_layer4_out_20_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_21_V() {
    ap_channel_done_layer4_out_21_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_22_V() {
    ap_channel_done_layer4_out_22_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_23_V() {
    ap_channel_done_layer4_out_23_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_24_V() {
    ap_channel_done_layer4_out_24_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_25_V() {
    ap_channel_done_layer4_out_25_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_26_V() {
    ap_channel_done_layer4_out_26_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_27_V() {
    ap_channel_done_layer4_out_27_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_28_V() {
    ap_channel_done_layer4_out_28_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_29_V() {
    ap_channel_done_layer4_out_29_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_2_V() {
    ap_channel_done_layer4_out_2_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_30_V() {
    ap_channel_done_layer4_out_30_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_31_V() {
    ap_channel_done_layer4_out_31_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_32_V() {
    ap_channel_done_layer4_out_32_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_33_V() {
    ap_channel_done_layer4_out_33_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_34_V() {
    ap_channel_done_layer4_out_34_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_35_V() {
    ap_channel_done_layer4_out_35_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_36_V() {
    ap_channel_done_layer4_out_36_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_37_V() {
    ap_channel_done_layer4_out_37_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_38_V() {
    ap_channel_done_layer4_out_38_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_39_V() {
    ap_channel_done_layer4_out_39_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_3_V() {
    ap_channel_done_layer4_out_3_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_40_V() {
    ap_channel_done_layer4_out_40_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_41_V() {
    ap_channel_done_layer4_out_41_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_42_V() {
    ap_channel_done_layer4_out_42_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_43_V() {
    ap_channel_done_layer4_out_43_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_44_V() {
    ap_channel_done_layer4_out_44_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_45_V() {
    ap_channel_done_layer4_out_45_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_46_V() {
    ap_channel_done_layer4_out_46_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_47_V() {
    ap_channel_done_layer4_out_47_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_48_V() {
    ap_channel_done_layer4_out_48_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_49_V() {
    ap_channel_done_layer4_out_49_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_4_V() {
    ap_channel_done_layer4_out_4_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_50_V() {
    ap_channel_done_layer4_out_50_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_50_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_51_V() {
    ap_channel_done_layer4_out_51_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_51_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_52_V() {
    ap_channel_done_layer4_out_52_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_52_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_53_V() {
    ap_channel_done_layer4_out_53_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_53_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_54_V() {
    ap_channel_done_layer4_out_54_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_54_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_55_V() {
    ap_channel_done_layer4_out_55_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_55_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_56_V() {
    ap_channel_done_layer4_out_56_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_56_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_57_V() {
    ap_channel_done_layer4_out_57_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_57_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_58_V() {
    ap_channel_done_layer4_out_58_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_58_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_59_V() {
    ap_channel_done_layer4_out_59_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_59_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_5_V() {
    ap_channel_done_layer4_out_5_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_60_V() {
    ap_channel_done_layer4_out_60_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_60_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_61_V() {
    ap_channel_done_layer4_out_61_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_61_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_62_V() {
    ap_channel_done_layer4_out_62_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_62_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_63_V() {
    ap_channel_done_layer4_out_63_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_63_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_64_V() {
    ap_channel_done_layer4_out_64_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_64_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_65_V() {
    ap_channel_done_layer4_out_65_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_65_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_66_V() {
    ap_channel_done_layer4_out_66_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_66_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_67_V() {
    ap_channel_done_layer4_out_67_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_67_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_68_V() {
    ap_channel_done_layer4_out_68_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_68_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_69_V() {
    ap_channel_done_layer4_out_69_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_69_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_6_V() {
    ap_channel_done_layer4_out_6_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_70_V() {
    ap_channel_done_layer4_out_70_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_70_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_71_V() {
    ap_channel_done_layer4_out_71_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_71_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_72_V() {
    ap_channel_done_layer4_out_72_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_72_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_73_V() {
    ap_channel_done_layer4_out_73_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_73_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_74_V() {
    ap_channel_done_layer4_out_74_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_74_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_75_V() {
    ap_channel_done_layer4_out_75_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_75_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_76_V() {
    ap_channel_done_layer4_out_76_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_76_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_77_V() {
    ap_channel_done_layer4_out_77_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_77_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_78_V() {
    ap_channel_done_layer4_out_78_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_78_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_79_V() {
    ap_channel_done_layer4_out_79_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_79_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_7_V() {
    ap_channel_done_layer4_out_7_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_80_V() {
    ap_channel_done_layer4_out_80_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_80_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_81_V() {
    ap_channel_done_layer4_out_81_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_81_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_82_V() {
    ap_channel_done_layer4_out_82_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_82_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_83_V() {
    ap_channel_done_layer4_out_83_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_83_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_84_V() {
    ap_channel_done_layer4_out_84_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_84_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_85_V() {
    ap_channel_done_layer4_out_85_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_85_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_86_V() {
    ap_channel_done_layer4_out_86_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_86_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_87_V() {
    ap_channel_done_layer4_out_87_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_87_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_88_V() {
    ap_channel_done_layer4_out_88_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_88_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_89_V() {
    ap_channel_done_layer4_out_89_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_89_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_8_V() {
    ap_channel_done_layer4_out_8_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_90_V() {
    ap_channel_done_layer4_out_90_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_90_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_91_V() {
    ap_channel_done_layer4_out_91_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_91_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_92_V() {
    ap_channel_done_layer4_out_92_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_92_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_93_V() {
    ap_channel_done_layer4_out_93_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_93_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_94_V() {
    ap_channel_done_layer4_out_94_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_94_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_95_V() {
    ap_channel_done_layer4_out_95_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_95_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_96_V() {
    ap_channel_done_layer4_out_96_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_96_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_97_V() {
    ap_channel_done_layer4_out_97_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_97_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_98_V() {
    ap_channel_done_layer4_out_98_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_98_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_99_V() {
    ap_channel_done_layer4_out_99_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_99_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer4_out_9_V() {
    ap_channel_done_layer4_out_9_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_0_V() {
    ap_channel_done_layer5_out_0_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_10_V() {
    ap_channel_done_layer5_out_10_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_11_V() {
    ap_channel_done_layer5_out_11_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_12_V() {
    ap_channel_done_layer5_out_12_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_13_V() {
    ap_channel_done_layer5_out_13_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_14_V() {
    ap_channel_done_layer5_out_14_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_15_V() {
    ap_channel_done_layer5_out_15_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_16_V() {
    ap_channel_done_layer5_out_16_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_17_V() {
    ap_channel_done_layer5_out_17_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_18_V() {
    ap_channel_done_layer5_out_18_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_19_V() {
    ap_channel_done_layer5_out_19_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_1_V() {
    ap_channel_done_layer5_out_1_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_20_V() {
    ap_channel_done_layer5_out_20_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_21_V() {
    ap_channel_done_layer5_out_21_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_22_V() {
    ap_channel_done_layer5_out_22_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_23_V() {
    ap_channel_done_layer5_out_23_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_24_V() {
    ap_channel_done_layer5_out_24_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_25_V() {
    ap_channel_done_layer5_out_25_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_26_V() {
    ap_channel_done_layer5_out_26_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_27_V() {
    ap_channel_done_layer5_out_27_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_28_V() {
    ap_channel_done_layer5_out_28_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_29_V() {
    ap_channel_done_layer5_out_29_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_2_V() {
    ap_channel_done_layer5_out_2_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_30_V() {
    ap_channel_done_layer5_out_30_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_31_V() {
    ap_channel_done_layer5_out_31_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_32_V() {
    ap_channel_done_layer5_out_32_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_33_V() {
    ap_channel_done_layer5_out_33_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_34_V() {
    ap_channel_done_layer5_out_34_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_35_V() {
    ap_channel_done_layer5_out_35_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_36_V() {
    ap_channel_done_layer5_out_36_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_37_V() {
    ap_channel_done_layer5_out_37_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_38_V() {
    ap_channel_done_layer5_out_38_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_39_V() {
    ap_channel_done_layer5_out_39_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_3_V() {
    ap_channel_done_layer5_out_3_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_40_V() {
    ap_channel_done_layer5_out_40_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_41_V() {
    ap_channel_done_layer5_out_41_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_42_V() {
    ap_channel_done_layer5_out_42_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_43_V() {
    ap_channel_done_layer5_out_43_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_44_V() {
    ap_channel_done_layer5_out_44_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_45_V() {
    ap_channel_done_layer5_out_45_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_46_V() {
    ap_channel_done_layer5_out_46_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_47_V() {
    ap_channel_done_layer5_out_47_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_48_V() {
    ap_channel_done_layer5_out_48_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_49_V() {
    ap_channel_done_layer5_out_49_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_4_V() {
    ap_channel_done_layer5_out_4_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_50_V() {
    ap_channel_done_layer5_out_50_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_50_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_51_V() {
    ap_channel_done_layer5_out_51_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_51_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_52_V() {
    ap_channel_done_layer5_out_52_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_52_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_53_V() {
    ap_channel_done_layer5_out_53_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_53_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_54_V() {
    ap_channel_done_layer5_out_54_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_54_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_55_V() {
    ap_channel_done_layer5_out_55_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_55_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_56_V() {
    ap_channel_done_layer5_out_56_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_56_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_57_V() {
    ap_channel_done_layer5_out_57_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_57_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_58_V() {
    ap_channel_done_layer5_out_58_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_58_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_59_V() {
    ap_channel_done_layer5_out_59_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_59_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_5_V() {
    ap_channel_done_layer5_out_5_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_60_V() {
    ap_channel_done_layer5_out_60_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_60_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_61_V() {
    ap_channel_done_layer5_out_61_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_61_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_62_V() {
    ap_channel_done_layer5_out_62_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_62_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_63_V() {
    ap_channel_done_layer5_out_63_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_63_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_64_V() {
    ap_channel_done_layer5_out_64_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_64_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_65_V() {
    ap_channel_done_layer5_out_65_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_65_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_66_V() {
    ap_channel_done_layer5_out_66_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_66_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_67_V() {
    ap_channel_done_layer5_out_67_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_67_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_68_V() {
    ap_channel_done_layer5_out_68_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_68_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_69_V() {
    ap_channel_done_layer5_out_69_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_69_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_6_V() {
    ap_channel_done_layer5_out_6_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_70_V() {
    ap_channel_done_layer5_out_70_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_70_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_71_V() {
    ap_channel_done_layer5_out_71_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_71_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_72_V() {
    ap_channel_done_layer5_out_72_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_72_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_73_V() {
    ap_channel_done_layer5_out_73_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_73_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_74_V() {
    ap_channel_done_layer5_out_74_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_74_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_75_V() {
    ap_channel_done_layer5_out_75_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_75_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_76_V() {
    ap_channel_done_layer5_out_76_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_76_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_77_V() {
    ap_channel_done_layer5_out_77_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_77_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_78_V() {
    ap_channel_done_layer5_out_78_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_78_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_79_V() {
    ap_channel_done_layer5_out_79_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_79_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_7_V() {
    ap_channel_done_layer5_out_7_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_80_V() {
    ap_channel_done_layer5_out_80_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_80_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_81_V() {
    ap_channel_done_layer5_out_81_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_81_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_82_V() {
    ap_channel_done_layer5_out_82_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_82_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_83_V() {
    ap_channel_done_layer5_out_83_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_83_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_84_V() {
    ap_channel_done_layer5_out_84_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_84_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_85_V() {
    ap_channel_done_layer5_out_85_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_85_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_86_V() {
    ap_channel_done_layer5_out_86_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_86_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_87_V() {
    ap_channel_done_layer5_out_87_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_87_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_88_V() {
    ap_channel_done_layer5_out_88_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_88_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_89_V() {
    ap_channel_done_layer5_out_89_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_89_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_8_V() {
    ap_channel_done_layer5_out_8_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_90_V() {
    ap_channel_done_layer5_out_90_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_90_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_91_V() {
    ap_channel_done_layer5_out_91_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_91_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_92_V() {
    ap_channel_done_layer5_out_92_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_92_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_93_V() {
    ap_channel_done_layer5_out_93_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_93_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_94_V() {
    ap_channel_done_layer5_out_94_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_94_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_95_V() {
    ap_channel_done_layer5_out_95_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_95_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_96_V() {
    ap_channel_done_layer5_out_96_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_96_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_97_V() {
    ap_channel_done_layer5_out_97_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_97_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_98_V() {
    ap_channel_done_layer5_out_98_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_98_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_99_V() {
    ap_channel_done_layer5_out_99_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_99_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer5_out_9_V() {
    ap_channel_done_layer5_out_9_V = (dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_0_V() {
    ap_channel_done_layer7_out_0_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_10_V() {
    ap_channel_done_layer7_out_10_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_11_V() {
    ap_channel_done_layer7_out_11_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_12_V() {
    ap_channel_done_layer7_out_12_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_13_V() {
    ap_channel_done_layer7_out_13_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_14_V() {
    ap_channel_done_layer7_out_14_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_15_V() {
    ap_channel_done_layer7_out_15_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_16_V() {
    ap_channel_done_layer7_out_16_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_17_V() {
    ap_channel_done_layer7_out_17_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_18_V() {
    ap_channel_done_layer7_out_18_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_19_V() {
    ap_channel_done_layer7_out_19_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_1_V() {
    ap_channel_done_layer7_out_1_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_20_V() {
    ap_channel_done_layer7_out_20_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_21_V() {
    ap_channel_done_layer7_out_21_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_22_V() {
    ap_channel_done_layer7_out_22_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_23_V() {
    ap_channel_done_layer7_out_23_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_24_V() {
    ap_channel_done_layer7_out_24_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_25_V() {
    ap_channel_done_layer7_out_25_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_26_V() {
    ap_channel_done_layer7_out_26_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_27_V() {
    ap_channel_done_layer7_out_27_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_28_V() {
    ap_channel_done_layer7_out_28_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_29_V() {
    ap_channel_done_layer7_out_29_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_2_V() {
    ap_channel_done_layer7_out_2_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_30_V() {
    ap_channel_done_layer7_out_30_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_31_V() {
    ap_channel_done_layer7_out_31_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_32_V() {
    ap_channel_done_layer7_out_32_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_33_V() {
    ap_channel_done_layer7_out_33_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_34_V() {
    ap_channel_done_layer7_out_34_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_35_V() {
    ap_channel_done_layer7_out_35_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_36_V() {
    ap_channel_done_layer7_out_36_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_37_V() {
    ap_channel_done_layer7_out_37_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_38_V() {
    ap_channel_done_layer7_out_38_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_39_V() {
    ap_channel_done_layer7_out_39_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_3_V() {
    ap_channel_done_layer7_out_3_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_40_V() {
    ap_channel_done_layer7_out_40_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_41_V() {
    ap_channel_done_layer7_out_41_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_42_V() {
    ap_channel_done_layer7_out_42_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_43_V() {
    ap_channel_done_layer7_out_43_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_44_V() {
    ap_channel_done_layer7_out_44_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_45_V() {
    ap_channel_done_layer7_out_45_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_46_V() {
    ap_channel_done_layer7_out_46_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_47_V() {
    ap_channel_done_layer7_out_47_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_48_V() {
    ap_channel_done_layer7_out_48_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_49_V() {
    ap_channel_done_layer7_out_49_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_4_V() {
    ap_channel_done_layer7_out_4_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_50_V() {
    ap_channel_done_layer7_out_50_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_50_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_51_V() {
    ap_channel_done_layer7_out_51_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_51_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_52_V() {
    ap_channel_done_layer7_out_52_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_52_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_53_V() {
    ap_channel_done_layer7_out_53_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_53_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_54_V() {
    ap_channel_done_layer7_out_54_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_54_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_55_V() {
    ap_channel_done_layer7_out_55_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_55_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_56_V() {
    ap_channel_done_layer7_out_56_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_56_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_57_V() {
    ap_channel_done_layer7_out_57_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_57_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_58_V() {
    ap_channel_done_layer7_out_58_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_58_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_59_V() {
    ap_channel_done_layer7_out_59_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_59_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_5_V() {
    ap_channel_done_layer7_out_5_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_60_V() {
    ap_channel_done_layer7_out_60_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_60_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_61_V() {
    ap_channel_done_layer7_out_61_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_61_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_62_V() {
    ap_channel_done_layer7_out_62_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_62_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_63_V() {
    ap_channel_done_layer7_out_63_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_63_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_64_V() {
    ap_channel_done_layer7_out_64_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_64_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_65_V() {
    ap_channel_done_layer7_out_65_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_65_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_66_V() {
    ap_channel_done_layer7_out_66_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_66_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_67_V() {
    ap_channel_done_layer7_out_67_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_67_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_68_V() {
    ap_channel_done_layer7_out_68_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_68_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_69_V() {
    ap_channel_done_layer7_out_69_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_69_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_6_V() {
    ap_channel_done_layer7_out_6_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_70_V() {
    ap_channel_done_layer7_out_70_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_70_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_71_V() {
    ap_channel_done_layer7_out_71_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_71_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_72_V() {
    ap_channel_done_layer7_out_72_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_72_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_73_V() {
    ap_channel_done_layer7_out_73_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_73_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_74_V() {
    ap_channel_done_layer7_out_74_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_74_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_75_V() {
    ap_channel_done_layer7_out_75_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_75_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_76_V() {
    ap_channel_done_layer7_out_76_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_76_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_77_V() {
    ap_channel_done_layer7_out_77_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_77_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_78_V() {
    ap_channel_done_layer7_out_78_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_78_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_79_V() {
    ap_channel_done_layer7_out_79_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_79_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_7_V() {
    ap_channel_done_layer7_out_7_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_80_V() {
    ap_channel_done_layer7_out_80_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_80_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_81_V() {
    ap_channel_done_layer7_out_81_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_81_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_82_V() {
    ap_channel_done_layer7_out_82_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_82_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_83_V() {
    ap_channel_done_layer7_out_83_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_83_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_84_V() {
    ap_channel_done_layer7_out_84_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_84_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_85_V() {
    ap_channel_done_layer7_out_85_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_85_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_86_V() {
    ap_channel_done_layer7_out_86_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_86_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_87_V() {
    ap_channel_done_layer7_out_87_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_87_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_88_V() {
    ap_channel_done_layer7_out_88_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_88_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_89_V() {
    ap_channel_done_layer7_out_89_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_89_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_8_V() {
    ap_channel_done_layer7_out_8_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_90_V() {
    ap_channel_done_layer7_out_90_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_90_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_91_V() {
    ap_channel_done_layer7_out_91_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_91_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_92_V() {
    ap_channel_done_layer7_out_92_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_92_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_93_V() {
    ap_channel_done_layer7_out_93_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_93_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_94_V() {
    ap_channel_done_layer7_out_94_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_94_V.read() ^ 
  ap_const_logic_1));
}

void model_2_hls4ml_prj::thread_ap_channel_done_layer7_out_95_V() {
    ap_channel_done_layer7_out_95_V = (relu_ap_fixed_ap_fixed_16_6_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_95_V.read() ^ 
  ap_const_logic_1));
}

}

