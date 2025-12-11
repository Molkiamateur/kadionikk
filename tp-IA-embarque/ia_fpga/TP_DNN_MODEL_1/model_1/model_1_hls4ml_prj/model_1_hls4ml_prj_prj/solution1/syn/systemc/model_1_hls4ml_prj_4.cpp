#include "model_1_hls4ml_prj.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void model_1_hls4ml_prj::thread_Block_proc_U0_ap_continue() {
    Block_proc_U0_ap_continue = ap_sync_done.read();
}

void model_1_hls4ml_prj::thread_Block_proc_U0_ap_start() {
    Block_proc_U0_ap_start = (ap_start.read() & (ap_sync_reg_Block_proc_U0_ap_ready.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_Block_proc_U0_start_full_n() {
    Block_proc_U0_start_full_n = ap_const_logic_1;
}

void model_1_hls4ml_prj::thread_Block_proc_U0_start_write() {
    Block_proc_U0_start_write = ap_const_logic_0;
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_0_V() {
    ap_channel_done_layer2_out_0_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_100_V() {
    ap_channel_done_layer2_out_100_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_100_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_101_V() {
    ap_channel_done_layer2_out_101_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_101_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_102_V() {
    ap_channel_done_layer2_out_102_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_102_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_103_V() {
    ap_channel_done_layer2_out_103_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_103_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_104_V() {
    ap_channel_done_layer2_out_104_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_104_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_105_V() {
    ap_channel_done_layer2_out_105_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_105_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_106_V() {
    ap_channel_done_layer2_out_106_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_106_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_107_V() {
    ap_channel_done_layer2_out_107_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_107_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_108_V() {
    ap_channel_done_layer2_out_108_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_108_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_109_V() {
    ap_channel_done_layer2_out_109_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_109_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_10_V() {
    ap_channel_done_layer2_out_10_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_110_V() {
    ap_channel_done_layer2_out_110_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_110_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_111_V() {
    ap_channel_done_layer2_out_111_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_111_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_112_V() {
    ap_channel_done_layer2_out_112_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_112_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_113_V() {
    ap_channel_done_layer2_out_113_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_113_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_114_V() {
    ap_channel_done_layer2_out_114_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_114_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_115_V() {
    ap_channel_done_layer2_out_115_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_115_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_116_V() {
    ap_channel_done_layer2_out_116_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_116_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_117_V() {
    ap_channel_done_layer2_out_117_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_117_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_118_V() {
    ap_channel_done_layer2_out_118_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_118_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_119_V() {
    ap_channel_done_layer2_out_119_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_119_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_11_V() {
    ap_channel_done_layer2_out_11_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_120_V() {
    ap_channel_done_layer2_out_120_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_120_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_121_V() {
    ap_channel_done_layer2_out_121_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_121_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_122_V() {
    ap_channel_done_layer2_out_122_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_122_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_123_V() {
    ap_channel_done_layer2_out_123_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_123_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_124_V() {
    ap_channel_done_layer2_out_124_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_124_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_125_V() {
    ap_channel_done_layer2_out_125_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_125_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_126_V() {
    ap_channel_done_layer2_out_126_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_126_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_127_V() {
    ap_channel_done_layer2_out_127_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_127_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_128_V() {
    ap_channel_done_layer2_out_128_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_128_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_129_V() {
    ap_channel_done_layer2_out_129_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_129_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_12_V() {
    ap_channel_done_layer2_out_12_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_130_V() {
    ap_channel_done_layer2_out_130_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_130_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_131_V() {
    ap_channel_done_layer2_out_131_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_131_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_132_V() {
    ap_channel_done_layer2_out_132_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_132_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_133_V() {
    ap_channel_done_layer2_out_133_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_133_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_134_V() {
    ap_channel_done_layer2_out_134_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_134_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_135_V() {
    ap_channel_done_layer2_out_135_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_135_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_136_V() {
    ap_channel_done_layer2_out_136_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_136_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_137_V() {
    ap_channel_done_layer2_out_137_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_137_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_138_V() {
    ap_channel_done_layer2_out_138_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_138_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_139_V() {
    ap_channel_done_layer2_out_139_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_139_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_13_V() {
    ap_channel_done_layer2_out_13_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_140_V() {
    ap_channel_done_layer2_out_140_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_140_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_141_V() {
    ap_channel_done_layer2_out_141_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_141_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_142_V() {
    ap_channel_done_layer2_out_142_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_142_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_143_V() {
    ap_channel_done_layer2_out_143_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_143_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_144_V() {
    ap_channel_done_layer2_out_144_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_144_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_145_V() {
    ap_channel_done_layer2_out_145_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_145_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_146_V() {
    ap_channel_done_layer2_out_146_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_146_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_147_V() {
    ap_channel_done_layer2_out_147_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_147_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_148_V() {
    ap_channel_done_layer2_out_148_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_148_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_149_V() {
    ap_channel_done_layer2_out_149_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_149_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_14_V() {
    ap_channel_done_layer2_out_14_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_150_V() {
    ap_channel_done_layer2_out_150_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_150_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_151_V() {
    ap_channel_done_layer2_out_151_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_151_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_152_V() {
    ap_channel_done_layer2_out_152_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_152_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_153_V() {
    ap_channel_done_layer2_out_153_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_153_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_154_V() {
    ap_channel_done_layer2_out_154_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_154_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_155_V() {
    ap_channel_done_layer2_out_155_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_155_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_156_V() {
    ap_channel_done_layer2_out_156_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_156_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_157_V() {
    ap_channel_done_layer2_out_157_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_157_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_158_V() {
    ap_channel_done_layer2_out_158_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_158_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_159_V() {
    ap_channel_done_layer2_out_159_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_159_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_15_V() {
    ap_channel_done_layer2_out_15_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_160_V() {
    ap_channel_done_layer2_out_160_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_160_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_161_V() {
    ap_channel_done_layer2_out_161_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_161_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_162_V() {
    ap_channel_done_layer2_out_162_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_162_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_163_V() {
    ap_channel_done_layer2_out_163_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_163_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_164_V() {
    ap_channel_done_layer2_out_164_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_164_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_165_V() {
    ap_channel_done_layer2_out_165_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_165_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_166_V() {
    ap_channel_done_layer2_out_166_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_166_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_167_V() {
    ap_channel_done_layer2_out_167_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_167_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_168_V() {
    ap_channel_done_layer2_out_168_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_168_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_169_V() {
    ap_channel_done_layer2_out_169_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_169_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_16_V() {
    ap_channel_done_layer2_out_16_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_170_V() {
    ap_channel_done_layer2_out_170_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_170_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_171_V() {
    ap_channel_done_layer2_out_171_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_171_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_172_V() {
    ap_channel_done_layer2_out_172_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_172_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_173_V() {
    ap_channel_done_layer2_out_173_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_173_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_174_V() {
    ap_channel_done_layer2_out_174_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_174_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_175_V() {
    ap_channel_done_layer2_out_175_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_175_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_176_V() {
    ap_channel_done_layer2_out_176_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_176_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_177_V() {
    ap_channel_done_layer2_out_177_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_177_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_178_V() {
    ap_channel_done_layer2_out_178_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_178_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_179_V() {
    ap_channel_done_layer2_out_179_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_179_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_17_V() {
    ap_channel_done_layer2_out_17_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_180_V() {
    ap_channel_done_layer2_out_180_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_180_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_181_V() {
    ap_channel_done_layer2_out_181_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_181_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_182_V() {
    ap_channel_done_layer2_out_182_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_182_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_183_V() {
    ap_channel_done_layer2_out_183_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_183_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_184_V() {
    ap_channel_done_layer2_out_184_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_184_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_185_V() {
    ap_channel_done_layer2_out_185_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_185_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_186_V() {
    ap_channel_done_layer2_out_186_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_186_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_187_V() {
    ap_channel_done_layer2_out_187_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_187_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_188_V() {
    ap_channel_done_layer2_out_188_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_188_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_189_V() {
    ap_channel_done_layer2_out_189_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_189_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_18_V() {
    ap_channel_done_layer2_out_18_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_190_V() {
    ap_channel_done_layer2_out_190_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_190_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_191_V() {
    ap_channel_done_layer2_out_191_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_191_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_192_V() {
    ap_channel_done_layer2_out_192_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_192_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_193_V() {
    ap_channel_done_layer2_out_193_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_193_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_194_V() {
    ap_channel_done_layer2_out_194_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_194_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_195_V() {
    ap_channel_done_layer2_out_195_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_195_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_196_V() {
    ap_channel_done_layer2_out_196_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_196_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_197_V() {
    ap_channel_done_layer2_out_197_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_197_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_198_V() {
    ap_channel_done_layer2_out_198_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_198_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_199_V() {
    ap_channel_done_layer2_out_199_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_199_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_19_V() {
    ap_channel_done_layer2_out_19_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_1_V() {
    ap_channel_done_layer2_out_1_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_20_V() {
    ap_channel_done_layer2_out_20_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_21_V() {
    ap_channel_done_layer2_out_21_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_22_V() {
    ap_channel_done_layer2_out_22_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_23_V() {
    ap_channel_done_layer2_out_23_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_24_V() {
    ap_channel_done_layer2_out_24_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_25_V() {
    ap_channel_done_layer2_out_25_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_26_V() {
    ap_channel_done_layer2_out_26_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_27_V() {
    ap_channel_done_layer2_out_27_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_28_V() {
    ap_channel_done_layer2_out_28_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_29_V() {
    ap_channel_done_layer2_out_29_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_2_V() {
    ap_channel_done_layer2_out_2_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_30_V() {
    ap_channel_done_layer2_out_30_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_31_V() {
    ap_channel_done_layer2_out_31_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_32_V() {
    ap_channel_done_layer2_out_32_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_33_V() {
    ap_channel_done_layer2_out_33_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_34_V() {
    ap_channel_done_layer2_out_34_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_35_V() {
    ap_channel_done_layer2_out_35_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_36_V() {
    ap_channel_done_layer2_out_36_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_37_V() {
    ap_channel_done_layer2_out_37_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_38_V() {
    ap_channel_done_layer2_out_38_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_39_V() {
    ap_channel_done_layer2_out_39_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_3_V() {
    ap_channel_done_layer2_out_3_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_40_V() {
    ap_channel_done_layer2_out_40_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_41_V() {
    ap_channel_done_layer2_out_41_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_42_V() {
    ap_channel_done_layer2_out_42_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_43_V() {
    ap_channel_done_layer2_out_43_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_44_V() {
    ap_channel_done_layer2_out_44_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_45_V() {
    ap_channel_done_layer2_out_45_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_46_V() {
    ap_channel_done_layer2_out_46_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_47_V() {
    ap_channel_done_layer2_out_47_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_48_V() {
    ap_channel_done_layer2_out_48_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_49_V() {
    ap_channel_done_layer2_out_49_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_4_V() {
    ap_channel_done_layer2_out_4_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_50_V() {
    ap_channel_done_layer2_out_50_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_50_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_51_V() {
    ap_channel_done_layer2_out_51_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_51_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_52_V() {
    ap_channel_done_layer2_out_52_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_52_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_53_V() {
    ap_channel_done_layer2_out_53_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_53_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_54_V() {
    ap_channel_done_layer2_out_54_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_54_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_55_V() {
    ap_channel_done_layer2_out_55_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_55_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_56_V() {
    ap_channel_done_layer2_out_56_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_56_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_57_V() {
    ap_channel_done_layer2_out_57_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_57_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_58_V() {
    ap_channel_done_layer2_out_58_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_58_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_59_V() {
    ap_channel_done_layer2_out_59_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_59_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_5_V() {
    ap_channel_done_layer2_out_5_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_60_V() {
    ap_channel_done_layer2_out_60_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_60_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_61_V() {
    ap_channel_done_layer2_out_61_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_61_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_62_V() {
    ap_channel_done_layer2_out_62_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_62_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_63_V() {
    ap_channel_done_layer2_out_63_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_63_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_64_V() {
    ap_channel_done_layer2_out_64_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_64_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_65_V() {
    ap_channel_done_layer2_out_65_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_65_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_66_V() {
    ap_channel_done_layer2_out_66_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_66_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_67_V() {
    ap_channel_done_layer2_out_67_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_67_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_68_V() {
    ap_channel_done_layer2_out_68_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_68_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_69_V() {
    ap_channel_done_layer2_out_69_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_69_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_6_V() {
    ap_channel_done_layer2_out_6_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_70_V() {
    ap_channel_done_layer2_out_70_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_70_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_71_V() {
    ap_channel_done_layer2_out_71_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_71_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_72_V() {
    ap_channel_done_layer2_out_72_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_72_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_73_V() {
    ap_channel_done_layer2_out_73_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_73_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_74_V() {
    ap_channel_done_layer2_out_74_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_74_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_75_V() {
    ap_channel_done_layer2_out_75_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_75_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_76_V() {
    ap_channel_done_layer2_out_76_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_76_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_77_V() {
    ap_channel_done_layer2_out_77_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_77_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_78_V() {
    ap_channel_done_layer2_out_78_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_78_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_79_V() {
    ap_channel_done_layer2_out_79_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_79_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_7_V() {
    ap_channel_done_layer2_out_7_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_80_V() {
    ap_channel_done_layer2_out_80_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_80_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_81_V() {
    ap_channel_done_layer2_out_81_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_81_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_82_V() {
    ap_channel_done_layer2_out_82_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_82_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_83_V() {
    ap_channel_done_layer2_out_83_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_83_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_84_V() {
    ap_channel_done_layer2_out_84_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_84_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_85_V() {
    ap_channel_done_layer2_out_85_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_85_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_86_V() {
    ap_channel_done_layer2_out_86_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_86_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_87_V() {
    ap_channel_done_layer2_out_87_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_87_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_88_V() {
    ap_channel_done_layer2_out_88_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_88_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_89_V() {
    ap_channel_done_layer2_out_89_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_89_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_8_V() {
    ap_channel_done_layer2_out_8_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_90_V() {
    ap_channel_done_layer2_out_90_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_90_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_91_V() {
    ap_channel_done_layer2_out_91_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_91_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_92_V() {
    ap_channel_done_layer2_out_92_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_92_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_93_V() {
    ap_channel_done_layer2_out_93_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_93_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_94_V() {
    ap_channel_done_layer2_out_94_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_94_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_95_V() {
    ap_channel_done_layer2_out_95_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_95_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_96_V() {
    ap_channel_done_layer2_out_96_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_96_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_97_V() {
    ap_channel_done_layer2_out_97_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_97_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_98_V() {
    ap_channel_done_layer2_out_98_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_98_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_99_V() {
    ap_channel_done_layer2_out_99_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_99_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer2_out_9_V() {
    ap_channel_done_layer2_out_9_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_done.read() & (ap_sync_reg_channel_write_layer2_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_0_V() {
    ap_channel_done_layer3_out_0_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_100_V() {
    ap_channel_done_layer3_out_100_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_100_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_101_V() {
    ap_channel_done_layer3_out_101_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_101_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_102_V() {
    ap_channel_done_layer3_out_102_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_102_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_103_V() {
    ap_channel_done_layer3_out_103_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_103_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_104_V() {
    ap_channel_done_layer3_out_104_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_104_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_105_V() {
    ap_channel_done_layer3_out_105_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_105_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_106_V() {
    ap_channel_done_layer3_out_106_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_106_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_107_V() {
    ap_channel_done_layer3_out_107_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_107_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_108_V() {
    ap_channel_done_layer3_out_108_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_108_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_109_V() {
    ap_channel_done_layer3_out_109_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_109_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_10_V() {
    ap_channel_done_layer3_out_10_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_110_V() {
    ap_channel_done_layer3_out_110_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_110_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_111_V() {
    ap_channel_done_layer3_out_111_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_111_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_112_V() {
    ap_channel_done_layer3_out_112_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_112_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_113_V() {
    ap_channel_done_layer3_out_113_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_113_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_114_V() {
    ap_channel_done_layer3_out_114_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_114_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_115_V() {
    ap_channel_done_layer3_out_115_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_115_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_116_V() {
    ap_channel_done_layer3_out_116_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_116_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_117_V() {
    ap_channel_done_layer3_out_117_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_117_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_118_V() {
    ap_channel_done_layer3_out_118_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_118_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_119_V() {
    ap_channel_done_layer3_out_119_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_119_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_11_V() {
    ap_channel_done_layer3_out_11_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_120_V() {
    ap_channel_done_layer3_out_120_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_120_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_121_V() {
    ap_channel_done_layer3_out_121_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_121_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_122_V() {
    ap_channel_done_layer3_out_122_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_122_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_123_V() {
    ap_channel_done_layer3_out_123_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_123_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_124_V() {
    ap_channel_done_layer3_out_124_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_124_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_125_V() {
    ap_channel_done_layer3_out_125_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_125_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_126_V() {
    ap_channel_done_layer3_out_126_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_126_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_127_V() {
    ap_channel_done_layer3_out_127_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_127_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_128_V() {
    ap_channel_done_layer3_out_128_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_128_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_129_V() {
    ap_channel_done_layer3_out_129_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_129_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_12_V() {
    ap_channel_done_layer3_out_12_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_130_V() {
    ap_channel_done_layer3_out_130_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_130_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_131_V() {
    ap_channel_done_layer3_out_131_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_131_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_132_V() {
    ap_channel_done_layer3_out_132_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_132_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_133_V() {
    ap_channel_done_layer3_out_133_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_133_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_134_V() {
    ap_channel_done_layer3_out_134_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_134_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_135_V() {
    ap_channel_done_layer3_out_135_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_135_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_136_V() {
    ap_channel_done_layer3_out_136_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_136_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_137_V() {
    ap_channel_done_layer3_out_137_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_137_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_138_V() {
    ap_channel_done_layer3_out_138_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_138_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_139_V() {
    ap_channel_done_layer3_out_139_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_139_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_13_V() {
    ap_channel_done_layer3_out_13_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_140_V() {
    ap_channel_done_layer3_out_140_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_140_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_141_V() {
    ap_channel_done_layer3_out_141_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_141_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_142_V() {
    ap_channel_done_layer3_out_142_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_142_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_143_V() {
    ap_channel_done_layer3_out_143_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_143_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_144_V() {
    ap_channel_done_layer3_out_144_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_144_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_145_V() {
    ap_channel_done_layer3_out_145_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_145_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_146_V() {
    ap_channel_done_layer3_out_146_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_146_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_147_V() {
    ap_channel_done_layer3_out_147_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_147_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_148_V() {
    ap_channel_done_layer3_out_148_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_148_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_149_V() {
    ap_channel_done_layer3_out_149_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_149_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_14_V() {
    ap_channel_done_layer3_out_14_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_150_V() {
    ap_channel_done_layer3_out_150_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_150_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_151_V() {
    ap_channel_done_layer3_out_151_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_151_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_152_V() {
    ap_channel_done_layer3_out_152_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_152_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_153_V() {
    ap_channel_done_layer3_out_153_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_153_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_154_V() {
    ap_channel_done_layer3_out_154_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_154_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_155_V() {
    ap_channel_done_layer3_out_155_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_155_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_156_V() {
    ap_channel_done_layer3_out_156_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_156_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_157_V() {
    ap_channel_done_layer3_out_157_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_157_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_158_V() {
    ap_channel_done_layer3_out_158_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_158_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_159_V() {
    ap_channel_done_layer3_out_159_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_159_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_15_V() {
    ap_channel_done_layer3_out_15_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_160_V() {
    ap_channel_done_layer3_out_160_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_160_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_161_V() {
    ap_channel_done_layer3_out_161_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_161_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_162_V() {
    ap_channel_done_layer3_out_162_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_162_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_163_V() {
    ap_channel_done_layer3_out_163_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_163_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_164_V() {
    ap_channel_done_layer3_out_164_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_164_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_165_V() {
    ap_channel_done_layer3_out_165_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_165_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_166_V() {
    ap_channel_done_layer3_out_166_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_166_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_167_V() {
    ap_channel_done_layer3_out_167_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_167_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_168_V() {
    ap_channel_done_layer3_out_168_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_168_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_169_V() {
    ap_channel_done_layer3_out_169_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_169_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_16_V() {
    ap_channel_done_layer3_out_16_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_170_V() {
    ap_channel_done_layer3_out_170_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_170_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_171_V() {
    ap_channel_done_layer3_out_171_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_171_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_172_V() {
    ap_channel_done_layer3_out_172_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_172_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_173_V() {
    ap_channel_done_layer3_out_173_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_173_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_174_V() {
    ap_channel_done_layer3_out_174_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_174_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_175_V() {
    ap_channel_done_layer3_out_175_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_175_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_176_V() {
    ap_channel_done_layer3_out_176_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_176_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_177_V() {
    ap_channel_done_layer3_out_177_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_177_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_178_V() {
    ap_channel_done_layer3_out_178_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_178_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_179_V() {
    ap_channel_done_layer3_out_179_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_179_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_17_V() {
    ap_channel_done_layer3_out_17_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_180_V() {
    ap_channel_done_layer3_out_180_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_180_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_181_V() {
    ap_channel_done_layer3_out_181_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_181_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_182_V() {
    ap_channel_done_layer3_out_182_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_182_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_183_V() {
    ap_channel_done_layer3_out_183_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_183_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_184_V() {
    ap_channel_done_layer3_out_184_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_184_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_185_V() {
    ap_channel_done_layer3_out_185_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_185_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_186_V() {
    ap_channel_done_layer3_out_186_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_186_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_187_V() {
    ap_channel_done_layer3_out_187_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_187_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_188_V() {
    ap_channel_done_layer3_out_188_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_188_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_189_V() {
    ap_channel_done_layer3_out_189_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_189_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_18_V() {
    ap_channel_done_layer3_out_18_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_190_V() {
    ap_channel_done_layer3_out_190_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_190_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_191_V() {
    ap_channel_done_layer3_out_191_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_191_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_192_V() {
    ap_channel_done_layer3_out_192_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_192_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_193_V() {
    ap_channel_done_layer3_out_193_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_193_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_194_V() {
    ap_channel_done_layer3_out_194_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_194_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_195_V() {
    ap_channel_done_layer3_out_195_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_195_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_196_V() {
    ap_channel_done_layer3_out_196_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_196_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_197_V() {
    ap_channel_done_layer3_out_197_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_197_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_198_V() {
    ap_channel_done_layer3_out_198_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_198_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_199_V() {
    ap_channel_done_layer3_out_199_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_199_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_19_V() {
    ap_channel_done_layer3_out_19_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_1_V() {
    ap_channel_done_layer3_out_1_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_20_V() {
    ap_channel_done_layer3_out_20_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_21_V() {
    ap_channel_done_layer3_out_21_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_22_V() {
    ap_channel_done_layer3_out_22_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_23_V() {
    ap_channel_done_layer3_out_23_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_24_V() {
    ap_channel_done_layer3_out_24_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_25_V() {
    ap_channel_done_layer3_out_25_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_26_V() {
    ap_channel_done_layer3_out_26_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_27_V() {
    ap_channel_done_layer3_out_27_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_28_V() {
    ap_channel_done_layer3_out_28_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_29_V() {
    ap_channel_done_layer3_out_29_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_2_V() {
    ap_channel_done_layer3_out_2_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_30_V() {
    ap_channel_done_layer3_out_30_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_31_V() {
    ap_channel_done_layer3_out_31_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_32_V() {
    ap_channel_done_layer3_out_32_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_33_V() {
    ap_channel_done_layer3_out_33_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_34_V() {
    ap_channel_done_layer3_out_34_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_35_V() {
    ap_channel_done_layer3_out_35_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_36_V() {
    ap_channel_done_layer3_out_36_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_37_V() {
    ap_channel_done_layer3_out_37_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_38_V() {
    ap_channel_done_layer3_out_38_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_39_V() {
    ap_channel_done_layer3_out_39_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_3_V() {
    ap_channel_done_layer3_out_3_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_40_V() {
    ap_channel_done_layer3_out_40_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_41_V() {
    ap_channel_done_layer3_out_41_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_42_V() {
    ap_channel_done_layer3_out_42_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_43_V() {
    ap_channel_done_layer3_out_43_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_44_V() {
    ap_channel_done_layer3_out_44_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_45_V() {
    ap_channel_done_layer3_out_45_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_46_V() {
    ap_channel_done_layer3_out_46_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_47_V() {
    ap_channel_done_layer3_out_47_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_48_V() {
    ap_channel_done_layer3_out_48_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_49_V() {
    ap_channel_done_layer3_out_49_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_4_V() {
    ap_channel_done_layer3_out_4_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_50_V() {
    ap_channel_done_layer3_out_50_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_50_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_51_V() {
    ap_channel_done_layer3_out_51_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_51_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_52_V() {
    ap_channel_done_layer3_out_52_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_52_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_53_V() {
    ap_channel_done_layer3_out_53_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_53_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_54_V() {
    ap_channel_done_layer3_out_54_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_54_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_55_V() {
    ap_channel_done_layer3_out_55_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_55_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_56_V() {
    ap_channel_done_layer3_out_56_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_56_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_57_V() {
    ap_channel_done_layer3_out_57_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_57_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_58_V() {
    ap_channel_done_layer3_out_58_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_58_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_59_V() {
    ap_channel_done_layer3_out_59_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_59_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_5_V() {
    ap_channel_done_layer3_out_5_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_60_V() {
    ap_channel_done_layer3_out_60_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_60_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_61_V() {
    ap_channel_done_layer3_out_61_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_61_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_62_V() {
    ap_channel_done_layer3_out_62_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_62_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_63_V() {
    ap_channel_done_layer3_out_63_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_63_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_64_V() {
    ap_channel_done_layer3_out_64_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_64_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_65_V() {
    ap_channel_done_layer3_out_65_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_65_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_66_V() {
    ap_channel_done_layer3_out_66_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_66_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_67_V() {
    ap_channel_done_layer3_out_67_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_67_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_68_V() {
    ap_channel_done_layer3_out_68_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_68_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_69_V() {
    ap_channel_done_layer3_out_69_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_69_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_6_V() {
    ap_channel_done_layer3_out_6_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_70_V() {
    ap_channel_done_layer3_out_70_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_70_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_71_V() {
    ap_channel_done_layer3_out_71_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_71_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_72_V() {
    ap_channel_done_layer3_out_72_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_72_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_73_V() {
    ap_channel_done_layer3_out_73_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_73_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_74_V() {
    ap_channel_done_layer3_out_74_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_74_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_75_V() {
    ap_channel_done_layer3_out_75_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_75_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_76_V() {
    ap_channel_done_layer3_out_76_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_76_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_77_V() {
    ap_channel_done_layer3_out_77_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_77_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_78_V() {
    ap_channel_done_layer3_out_78_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_78_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_79_V() {
    ap_channel_done_layer3_out_79_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_79_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_7_V() {
    ap_channel_done_layer3_out_7_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_80_V() {
    ap_channel_done_layer3_out_80_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_80_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_81_V() {
    ap_channel_done_layer3_out_81_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_81_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_82_V() {
    ap_channel_done_layer3_out_82_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_82_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_83_V() {
    ap_channel_done_layer3_out_83_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_83_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_84_V() {
    ap_channel_done_layer3_out_84_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_84_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_85_V() {
    ap_channel_done_layer3_out_85_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_85_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_86_V() {
    ap_channel_done_layer3_out_86_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_86_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_87_V() {
    ap_channel_done_layer3_out_87_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_87_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_88_V() {
    ap_channel_done_layer3_out_88_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_88_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_89_V() {
    ap_channel_done_layer3_out_89_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_89_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_8_V() {
    ap_channel_done_layer3_out_8_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_90_V() {
    ap_channel_done_layer3_out_90_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_90_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_91_V() {
    ap_channel_done_layer3_out_91_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_91_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_92_V() {
    ap_channel_done_layer3_out_92_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_92_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_93_V() {
    ap_channel_done_layer3_out_93_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_93_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_94_V() {
    ap_channel_done_layer3_out_94_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_94_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_95_V() {
    ap_channel_done_layer3_out_95_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_95_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_96_V() {
    ap_channel_done_layer3_out_96_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_96_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_97_V() {
    ap_channel_done_layer3_out_97_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_97_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_98_V() {
    ap_channel_done_layer3_out_98_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_98_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_99_V() {
    ap_channel_done_layer3_out_99_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_99_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer3_out_9_V() {
    ap_channel_done_layer3_out_9_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_done.read() & (ap_sync_reg_channel_write_layer3_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_0_V() {
    ap_channel_done_layer4_out_0_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_10_V() {
    ap_channel_done_layer4_out_10_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_11_V() {
    ap_channel_done_layer4_out_11_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_12_V() {
    ap_channel_done_layer4_out_12_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_13_V() {
    ap_channel_done_layer4_out_13_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_14_V() {
    ap_channel_done_layer4_out_14_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_15_V() {
    ap_channel_done_layer4_out_15_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_16_V() {
    ap_channel_done_layer4_out_16_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_17_V() {
    ap_channel_done_layer4_out_17_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_18_V() {
    ap_channel_done_layer4_out_18_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_19_V() {
    ap_channel_done_layer4_out_19_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_1_V() {
    ap_channel_done_layer4_out_1_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_20_V() {
    ap_channel_done_layer4_out_20_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_21_V() {
    ap_channel_done_layer4_out_21_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_22_V() {
    ap_channel_done_layer4_out_22_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_23_V() {
    ap_channel_done_layer4_out_23_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_24_V() {
    ap_channel_done_layer4_out_24_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_25_V() {
    ap_channel_done_layer4_out_25_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_26_V() {
    ap_channel_done_layer4_out_26_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_27_V() {
    ap_channel_done_layer4_out_27_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_28_V() {
    ap_channel_done_layer4_out_28_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_29_V() {
    ap_channel_done_layer4_out_29_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_2_V() {
    ap_channel_done_layer4_out_2_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_30_V() {
    ap_channel_done_layer4_out_30_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_31_V() {
    ap_channel_done_layer4_out_31_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_32_V() {
    ap_channel_done_layer4_out_32_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_33_V() {
    ap_channel_done_layer4_out_33_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_34_V() {
    ap_channel_done_layer4_out_34_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_35_V() {
    ap_channel_done_layer4_out_35_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_36_V() {
    ap_channel_done_layer4_out_36_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_37_V() {
    ap_channel_done_layer4_out_37_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_38_V() {
    ap_channel_done_layer4_out_38_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_39_V() {
    ap_channel_done_layer4_out_39_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_3_V() {
    ap_channel_done_layer4_out_3_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_40_V() {
    ap_channel_done_layer4_out_40_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_41_V() {
    ap_channel_done_layer4_out_41_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_42_V() {
    ap_channel_done_layer4_out_42_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_43_V() {
    ap_channel_done_layer4_out_43_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_44_V() {
    ap_channel_done_layer4_out_44_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_45_V() {
    ap_channel_done_layer4_out_45_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_46_V() {
    ap_channel_done_layer4_out_46_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_47_V() {
    ap_channel_done_layer4_out_47_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_48_V() {
    ap_channel_done_layer4_out_48_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_49_V() {
    ap_channel_done_layer4_out_49_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_4_V() {
    ap_channel_done_layer4_out_4_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_50_V() {
    ap_channel_done_layer4_out_50_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_50_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_51_V() {
    ap_channel_done_layer4_out_51_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_51_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_52_V() {
    ap_channel_done_layer4_out_52_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_52_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_53_V() {
    ap_channel_done_layer4_out_53_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_53_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_54_V() {
    ap_channel_done_layer4_out_54_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_54_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_55_V() {
    ap_channel_done_layer4_out_55_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_55_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_56_V() {
    ap_channel_done_layer4_out_56_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_56_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_57_V() {
    ap_channel_done_layer4_out_57_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_57_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_58_V() {
    ap_channel_done_layer4_out_58_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_58_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_59_V() {
    ap_channel_done_layer4_out_59_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_59_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_5_V() {
    ap_channel_done_layer4_out_5_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_60_V() {
    ap_channel_done_layer4_out_60_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_60_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_61_V() {
    ap_channel_done_layer4_out_61_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_61_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_62_V() {
    ap_channel_done_layer4_out_62_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_62_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_63_V() {
    ap_channel_done_layer4_out_63_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_63_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_64_V() {
    ap_channel_done_layer4_out_64_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_64_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_65_V() {
    ap_channel_done_layer4_out_65_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_65_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_66_V() {
    ap_channel_done_layer4_out_66_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_66_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_67_V() {
    ap_channel_done_layer4_out_67_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_67_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_68_V() {
    ap_channel_done_layer4_out_68_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_68_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_69_V() {
    ap_channel_done_layer4_out_69_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_69_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_6_V() {
    ap_channel_done_layer4_out_6_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_70_V() {
    ap_channel_done_layer4_out_70_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_70_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_71_V() {
    ap_channel_done_layer4_out_71_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_71_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_72_V() {
    ap_channel_done_layer4_out_72_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_72_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_73_V() {
    ap_channel_done_layer4_out_73_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_73_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_74_V() {
    ap_channel_done_layer4_out_74_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_74_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_75_V() {
    ap_channel_done_layer4_out_75_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_75_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_76_V() {
    ap_channel_done_layer4_out_76_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_76_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_77_V() {
    ap_channel_done_layer4_out_77_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_77_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_78_V() {
    ap_channel_done_layer4_out_78_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_78_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_79_V() {
    ap_channel_done_layer4_out_79_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_79_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_7_V() {
    ap_channel_done_layer4_out_7_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_80_V() {
    ap_channel_done_layer4_out_80_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_80_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_81_V() {
    ap_channel_done_layer4_out_81_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_81_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_82_V() {
    ap_channel_done_layer4_out_82_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_82_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_83_V() {
    ap_channel_done_layer4_out_83_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_83_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_84_V() {
    ap_channel_done_layer4_out_84_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_84_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_85_V() {
    ap_channel_done_layer4_out_85_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_85_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_86_V() {
    ap_channel_done_layer4_out_86_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_86_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_87_V() {
    ap_channel_done_layer4_out_87_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_87_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_88_V() {
    ap_channel_done_layer4_out_88_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_88_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_89_V() {
    ap_channel_done_layer4_out_89_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_89_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_8_V() {
    ap_channel_done_layer4_out_8_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_90_V() {
    ap_channel_done_layer4_out_90_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_90_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_91_V() {
    ap_channel_done_layer4_out_91_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_91_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_92_V() {
    ap_channel_done_layer4_out_92_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_92_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_93_V() {
    ap_channel_done_layer4_out_93_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_93_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_94_V() {
    ap_channel_done_layer4_out_94_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_94_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_95_V() {
    ap_channel_done_layer4_out_95_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_95_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_96_V() {
    ap_channel_done_layer4_out_96_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_96_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_97_V() {
    ap_channel_done_layer4_out_97_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_97_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_98_V() {
    ap_channel_done_layer4_out_98_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_98_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_99_V() {
    ap_channel_done_layer4_out_99_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_99_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer4_out_9_V() {
    ap_channel_done_layer4_out_9_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_done.read() & (ap_sync_reg_channel_write_layer4_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_0_V() {
    ap_channel_done_layer5_out_0_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_10_V() {
    ap_channel_done_layer5_out_10_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_11_V() {
    ap_channel_done_layer5_out_11_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_12_V() {
    ap_channel_done_layer5_out_12_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_13_V() {
    ap_channel_done_layer5_out_13_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_14_V() {
    ap_channel_done_layer5_out_14_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_15_V() {
    ap_channel_done_layer5_out_15_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_16_V() {
    ap_channel_done_layer5_out_16_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_17_V() {
    ap_channel_done_layer5_out_17_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_18_V() {
    ap_channel_done_layer5_out_18_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_19_V() {
    ap_channel_done_layer5_out_19_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_1_V() {
    ap_channel_done_layer5_out_1_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_20_V() {
    ap_channel_done_layer5_out_20_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_21_V() {
    ap_channel_done_layer5_out_21_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_22_V() {
    ap_channel_done_layer5_out_22_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_23_V() {
    ap_channel_done_layer5_out_23_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_24_V() {
    ap_channel_done_layer5_out_24_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_25_V() {
    ap_channel_done_layer5_out_25_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_26_V() {
    ap_channel_done_layer5_out_26_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_27_V() {
    ap_channel_done_layer5_out_27_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_28_V() {
    ap_channel_done_layer5_out_28_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_29_V() {
    ap_channel_done_layer5_out_29_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_2_V() {
    ap_channel_done_layer5_out_2_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_30_V() {
    ap_channel_done_layer5_out_30_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_31_V() {
    ap_channel_done_layer5_out_31_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_32_V() {
    ap_channel_done_layer5_out_32_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_33_V() {
    ap_channel_done_layer5_out_33_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_34_V() {
    ap_channel_done_layer5_out_34_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_35_V() {
    ap_channel_done_layer5_out_35_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_36_V() {
    ap_channel_done_layer5_out_36_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_37_V() {
    ap_channel_done_layer5_out_37_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_38_V() {
    ap_channel_done_layer5_out_38_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_39_V() {
    ap_channel_done_layer5_out_39_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_3_V() {
    ap_channel_done_layer5_out_3_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_40_V() {
    ap_channel_done_layer5_out_40_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_41_V() {
    ap_channel_done_layer5_out_41_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_42_V() {
    ap_channel_done_layer5_out_42_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_43_V() {
    ap_channel_done_layer5_out_43_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_44_V() {
    ap_channel_done_layer5_out_44_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_45_V() {
    ap_channel_done_layer5_out_45_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_46_V() {
    ap_channel_done_layer5_out_46_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_47_V() {
    ap_channel_done_layer5_out_47_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_48_V() {
    ap_channel_done_layer5_out_48_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_49_V() {
    ap_channel_done_layer5_out_49_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_4_V() {
    ap_channel_done_layer5_out_4_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_50_V() {
    ap_channel_done_layer5_out_50_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_50_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_51_V() {
    ap_channel_done_layer5_out_51_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_51_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_52_V() {
    ap_channel_done_layer5_out_52_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_52_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_53_V() {
    ap_channel_done_layer5_out_53_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_53_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_54_V() {
    ap_channel_done_layer5_out_54_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_54_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_55_V() {
    ap_channel_done_layer5_out_55_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_55_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_56_V() {
    ap_channel_done_layer5_out_56_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_56_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_57_V() {
    ap_channel_done_layer5_out_57_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_57_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_58_V() {
    ap_channel_done_layer5_out_58_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_58_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_59_V() {
    ap_channel_done_layer5_out_59_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_59_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_5_V() {
    ap_channel_done_layer5_out_5_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_60_V() {
    ap_channel_done_layer5_out_60_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_60_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_61_V() {
    ap_channel_done_layer5_out_61_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_61_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_62_V() {
    ap_channel_done_layer5_out_62_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_62_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_63_V() {
    ap_channel_done_layer5_out_63_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_63_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_64_V() {
    ap_channel_done_layer5_out_64_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_64_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_65_V() {
    ap_channel_done_layer5_out_65_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_65_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_66_V() {
    ap_channel_done_layer5_out_66_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_66_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_67_V() {
    ap_channel_done_layer5_out_67_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_67_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_68_V() {
    ap_channel_done_layer5_out_68_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_68_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_69_V() {
    ap_channel_done_layer5_out_69_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_69_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_6_V() {
    ap_channel_done_layer5_out_6_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_70_V() {
    ap_channel_done_layer5_out_70_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_70_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_71_V() {
    ap_channel_done_layer5_out_71_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_71_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_72_V() {
    ap_channel_done_layer5_out_72_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_72_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_73_V() {
    ap_channel_done_layer5_out_73_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_73_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_74_V() {
    ap_channel_done_layer5_out_74_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_74_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_75_V() {
    ap_channel_done_layer5_out_75_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_75_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_76_V() {
    ap_channel_done_layer5_out_76_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_76_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_77_V() {
    ap_channel_done_layer5_out_77_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_77_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_78_V() {
    ap_channel_done_layer5_out_78_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_78_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_79_V() {
    ap_channel_done_layer5_out_79_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_79_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_7_V() {
    ap_channel_done_layer5_out_7_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_80_V() {
    ap_channel_done_layer5_out_80_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_80_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_81_V() {
    ap_channel_done_layer5_out_81_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_81_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_82_V() {
    ap_channel_done_layer5_out_82_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_82_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_83_V() {
    ap_channel_done_layer5_out_83_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_83_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_84_V() {
    ap_channel_done_layer5_out_84_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_84_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_85_V() {
    ap_channel_done_layer5_out_85_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_85_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_86_V() {
    ap_channel_done_layer5_out_86_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_86_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_87_V() {
    ap_channel_done_layer5_out_87_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_87_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_88_V() {
    ap_channel_done_layer5_out_88_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_88_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_89_V() {
    ap_channel_done_layer5_out_89_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_89_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_8_V() {
    ap_channel_done_layer5_out_8_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_90_V() {
    ap_channel_done_layer5_out_90_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_90_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_91_V() {
    ap_channel_done_layer5_out_91_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_91_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_92_V() {
    ap_channel_done_layer5_out_92_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_92_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_93_V() {
    ap_channel_done_layer5_out_93_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_93_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_94_V() {
    ap_channel_done_layer5_out_94_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_94_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_95_V() {
    ap_channel_done_layer5_out_95_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_95_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_96_V() {
    ap_channel_done_layer5_out_96_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_96_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_97_V() {
    ap_channel_done_layer5_out_97_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_97_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_98_V() {
    ap_channel_done_layer5_out_98_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_98_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_99_V() {
    ap_channel_done_layer5_out_99_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_99_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer5_out_9_V() {
    ap_channel_done_layer5_out_9_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_done.read() & (ap_sync_reg_channel_write_layer5_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_0_V() {
    ap_channel_done_layer6_out_0_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_10_V() {
    ap_channel_done_layer6_out_10_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_11_V() {
    ap_channel_done_layer6_out_11_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_12_V() {
    ap_channel_done_layer6_out_12_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_13_V() {
    ap_channel_done_layer6_out_13_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_14_V() {
    ap_channel_done_layer6_out_14_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_15_V() {
    ap_channel_done_layer6_out_15_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_16_V() {
    ap_channel_done_layer6_out_16_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_17_V() {
    ap_channel_done_layer6_out_17_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_18_V() {
    ap_channel_done_layer6_out_18_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_19_V() {
    ap_channel_done_layer6_out_19_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_1_V() {
    ap_channel_done_layer6_out_1_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_20_V() {
    ap_channel_done_layer6_out_20_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_21_V() {
    ap_channel_done_layer6_out_21_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_22_V() {
    ap_channel_done_layer6_out_22_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_23_V() {
    ap_channel_done_layer6_out_23_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_24_V() {
    ap_channel_done_layer6_out_24_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_25_V() {
    ap_channel_done_layer6_out_25_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_26_V() {
    ap_channel_done_layer6_out_26_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_27_V() {
    ap_channel_done_layer6_out_27_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_28_V() {
    ap_channel_done_layer6_out_28_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_29_V() {
    ap_channel_done_layer6_out_29_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_2_V() {
    ap_channel_done_layer6_out_2_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_30_V() {
    ap_channel_done_layer6_out_30_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_31_V() {
    ap_channel_done_layer6_out_31_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_32_V() {
    ap_channel_done_layer6_out_32_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_33_V() {
    ap_channel_done_layer6_out_33_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_34_V() {
    ap_channel_done_layer6_out_34_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_35_V() {
    ap_channel_done_layer6_out_35_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_36_V() {
    ap_channel_done_layer6_out_36_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_37_V() {
    ap_channel_done_layer6_out_37_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_38_V() {
    ap_channel_done_layer6_out_38_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_39_V() {
    ap_channel_done_layer6_out_39_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_3_V() {
    ap_channel_done_layer6_out_3_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_40_V() {
    ap_channel_done_layer6_out_40_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_41_V() {
    ap_channel_done_layer6_out_41_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_42_V() {
    ap_channel_done_layer6_out_42_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_43_V() {
    ap_channel_done_layer6_out_43_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_44_V() {
    ap_channel_done_layer6_out_44_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_45_V() {
    ap_channel_done_layer6_out_45_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_46_V() {
    ap_channel_done_layer6_out_46_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_47_V() {
    ap_channel_done_layer6_out_47_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_48_V() {
    ap_channel_done_layer6_out_48_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_49_V() {
    ap_channel_done_layer6_out_49_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_4_V() {
    ap_channel_done_layer6_out_4_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_5_V() {
    ap_channel_done_layer6_out_5_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_6_V() {
    ap_channel_done_layer6_out_6_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_7_V() {
    ap_channel_done_layer6_out_7_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_8_V() {
    ap_channel_done_layer6_out_8_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer6_out_9_V() {
    ap_channel_done_layer6_out_9_V = (dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_done.read() & (ap_sync_reg_channel_write_layer6_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_0_V() {
    ap_channel_done_layer7_out_0_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_0_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_10_V() {
    ap_channel_done_layer7_out_10_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_10_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_11_V() {
    ap_channel_done_layer7_out_11_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_11_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_12_V() {
    ap_channel_done_layer7_out_12_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_12_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_13_V() {
    ap_channel_done_layer7_out_13_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_13_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_14_V() {
    ap_channel_done_layer7_out_14_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_14_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_15_V() {
    ap_channel_done_layer7_out_15_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_15_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_16_V() {
    ap_channel_done_layer7_out_16_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_16_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_17_V() {
    ap_channel_done_layer7_out_17_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_17_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_18_V() {
    ap_channel_done_layer7_out_18_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_18_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_19_V() {
    ap_channel_done_layer7_out_19_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_19_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_1_V() {
    ap_channel_done_layer7_out_1_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_1_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_20_V() {
    ap_channel_done_layer7_out_20_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_20_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_21_V() {
    ap_channel_done_layer7_out_21_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_21_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_22_V() {
    ap_channel_done_layer7_out_22_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_22_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_23_V() {
    ap_channel_done_layer7_out_23_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_23_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_24_V() {
    ap_channel_done_layer7_out_24_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_24_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_25_V() {
    ap_channel_done_layer7_out_25_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_25_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_26_V() {
    ap_channel_done_layer7_out_26_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_26_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_27_V() {
    ap_channel_done_layer7_out_27_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_27_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_28_V() {
    ap_channel_done_layer7_out_28_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_28_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_29_V() {
    ap_channel_done_layer7_out_29_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_29_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_2_V() {
    ap_channel_done_layer7_out_2_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_2_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_30_V() {
    ap_channel_done_layer7_out_30_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_30_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_31_V() {
    ap_channel_done_layer7_out_31_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_31_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_32_V() {
    ap_channel_done_layer7_out_32_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_32_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_33_V() {
    ap_channel_done_layer7_out_33_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_33_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_34_V() {
    ap_channel_done_layer7_out_34_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_34_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_35_V() {
    ap_channel_done_layer7_out_35_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_35_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_36_V() {
    ap_channel_done_layer7_out_36_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_36_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_37_V() {
    ap_channel_done_layer7_out_37_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_37_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_38_V() {
    ap_channel_done_layer7_out_38_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_38_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_39_V() {
    ap_channel_done_layer7_out_39_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_39_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_3_V() {
    ap_channel_done_layer7_out_3_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_3_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_40_V() {
    ap_channel_done_layer7_out_40_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_40_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_41_V() {
    ap_channel_done_layer7_out_41_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_41_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_42_V() {
    ap_channel_done_layer7_out_42_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_42_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_43_V() {
    ap_channel_done_layer7_out_43_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_43_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_44_V() {
    ap_channel_done_layer7_out_44_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_44_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_45_V() {
    ap_channel_done_layer7_out_45_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_45_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_46_V() {
    ap_channel_done_layer7_out_46_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_46_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_47_V() {
    ap_channel_done_layer7_out_47_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_47_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_48_V() {
    ap_channel_done_layer7_out_48_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_48_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_49_V() {
    ap_channel_done_layer7_out_49_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_49_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_4_V() {
    ap_channel_done_layer7_out_4_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_4_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_5_V() {
    ap_channel_done_layer7_out_5_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_5_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_6_V() {
    ap_channel_done_layer7_out_6_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_6_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_7_V() {
    ap_channel_done_layer7_out_7_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_7_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_8_V() {
    ap_channel_done_layer7_out_8_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_8_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer7_out_9_V() {
    ap_channel_done_layer7_out_9_V = (relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_done.read() & (ap_sync_reg_channel_write_layer7_out_9_V.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_channel_done_layer8_out_0_V() {
    ap_channel_done_layer8_out_0_V = dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_U0_ap_done.read();
}

void model_1_hls4ml_prj::thread_ap_done() {
    ap_done = ap_sync_done.read();
}

void model_1_hls4ml_prj::thread_ap_idle() {
    ap_idle = (model_1_hls4ml_prj_entry3_U0_ap_idle.read() & model_1_hls4ml_prj_entry694_U0_ap_idle.read() & Block_proc_U0_ap_idle.read() & dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config2_U0_ap_idle.read() & relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config3_U0_ap_idle.read() & dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config4_U0_ap_idle.read() & relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config5_U0_ap_idle.read() & dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config6_U0_ap_idle.read() & relu_ap_fixed_ap_fixed_16_8_5_3_0_relu_config7_U0_ap_idle.read() & dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_U0_ap_idle.read() & sigmoid_ap_fixed_ap_fixed_16_8_5_3_0_sigmoid_config9_U0_ap_idle.read() & (layer2_out_0_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_1_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_2_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_3_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_4_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_5_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_6_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_7_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_8_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_9_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_10_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_11_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_12_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_13_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_14_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_15_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_16_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_17_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_18_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_19_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_20_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_21_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_22_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_23_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_24_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_25_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_26_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_27_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_28_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_29_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_30_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_31_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_32_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_33_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_34_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_35_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_36_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_37_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_38_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_39_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_40_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_41_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_42_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_43_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_44_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_45_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_46_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_47_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_48_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_49_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_50_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_51_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_52_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_53_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_54_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_55_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_56_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_57_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_58_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_59_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_60_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_61_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_62_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_63_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_64_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_65_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_66_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_67_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_68_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_69_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_70_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_71_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_72_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_73_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_74_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_75_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_76_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_77_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_78_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_79_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_80_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_81_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_82_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_83_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_84_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_85_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_86_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_87_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_88_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_89_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_90_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_91_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_92_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_93_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_94_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_95_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_96_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_97_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_98_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_99_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_100_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_101_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_102_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_103_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_104_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_105_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_106_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_107_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_108_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_109_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_110_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_111_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_112_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_113_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_114_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_115_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_116_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_117_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_118_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_119_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_120_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_121_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_122_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_123_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_124_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_125_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_126_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_127_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_128_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_129_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_130_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_131_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_132_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_133_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_134_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_135_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_136_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_137_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_138_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_139_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_140_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_141_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_142_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_143_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_144_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_145_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_146_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_147_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_148_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_149_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_150_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_151_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_152_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_153_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_154_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_155_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_156_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_157_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_158_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_159_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_160_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_161_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_162_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_163_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_164_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_165_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_166_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_167_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_168_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_169_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_170_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_171_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_172_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_173_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_174_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_175_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_176_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_177_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_178_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_179_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_180_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_181_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_182_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_183_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_184_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_185_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_186_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_187_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_188_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_189_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_190_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_191_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_192_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_193_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_194_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_195_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_196_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_197_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_198_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer2_out_199_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_0_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_1_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_2_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_3_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_4_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_5_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_6_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_7_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_8_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_9_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_10_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_11_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_12_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_13_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_14_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_15_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_16_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_17_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_18_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_19_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_20_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_21_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_22_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_23_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_24_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_25_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_26_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_27_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_28_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_29_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_30_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_31_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_32_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_33_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_34_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_35_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_36_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_37_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_38_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_39_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_40_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_41_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_42_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_43_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_44_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_45_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_46_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_47_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_48_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_49_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_50_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_51_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_52_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_53_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_54_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_55_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_56_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_57_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_58_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_59_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_60_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_61_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_62_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_63_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_64_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_65_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_66_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_67_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_68_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_69_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_70_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_71_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_72_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_73_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_74_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_75_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_76_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_77_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_78_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_79_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_80_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_81_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_82_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_83_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_84_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_85_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_86_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_87_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_88_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_89_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_90_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_91_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_92_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_93_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_94_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_95_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_96_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_97_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_98_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_99_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_100_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_101_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_102_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_103_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_104_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_105_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_106_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_107_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_108_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_109_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_110_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_111_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_112_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_113_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_114_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_115_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_116_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_117_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_118_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_119_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_120_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_121_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_122_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_123_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_124_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_125_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_126_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_127_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_128_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_129_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_130_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_131_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_132_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_133_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_134_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_135_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_136_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_137_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_138_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_139_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_140_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_141_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_142_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_143_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_144_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_145_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_146_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_147_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_148_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_149_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_150_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_151_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_152_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_153_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_154_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_155_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_156_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_157_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_158_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_159_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_160_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_161_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_162_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_163_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_164_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_165_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_166_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_167_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_168_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_169_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_170_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_171_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_172_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_173_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_174_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_175_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_176_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_177_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_178_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_179_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_180_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_181_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_182_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_183_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_184_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_185_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_186_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_187_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_188_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_189_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_190_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_191_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_192_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_193_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_194_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_195_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_196_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_197_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_198_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer3_out_199_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_0_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_1_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_2_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_3_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_4_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_5_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_6_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_7_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_8_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_9_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_10_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_11_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_12_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_13_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_14_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_15_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_16_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_17_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_18_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_19_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_20_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_21_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_22_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_23_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_24_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_25_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_26_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_27_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_28_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_29_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_30_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_31_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_32_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_33_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_34_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_35_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_36_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_37_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_38_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_39_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_40_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_41_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_42_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_43_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_44_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_45_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_46_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_47_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_48_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_49_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_50_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_51_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_52_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_53_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_54_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_55_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_56_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_57_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_58_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_59_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_60_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_61_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_62_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_63_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_64_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_65_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_66_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_67_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_68_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_69_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_70_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_71_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_72_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_73_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_74_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_75_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_76_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_77_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_78_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_79_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_80_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_81_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_82_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_83_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_84_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_85_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_86_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_87_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_88_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_89_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_90_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_91_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_92_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_93_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_94_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_95_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_96_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_97_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_98_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer4_out_99_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_0_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_1_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_2_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_3_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_4_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_5_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_6_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_7_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_8_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_9_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_10_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_11_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_12_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_13_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_14_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_15_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_16_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_17_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_18_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_19_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_20_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_21_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_22_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_23_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_24_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_25_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_26_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_27_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_28_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_29_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_30_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_31_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_32_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_33_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_34_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_35_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_36_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_37_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_38_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_39_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_40_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_41_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_42_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_43_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_44_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_45_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_46_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_47_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_48_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_49_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_50_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_51_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_52_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_53_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_54_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_55_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_56_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_57_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_58_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_59_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_60_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_61_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_62_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_63_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_64_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_65_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_66_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_67_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_68_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_69_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_70_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_71_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_72_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_73_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_74_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_75_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_76_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_77_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_78_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_79_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_80_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_81_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_82_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_83_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_84_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_85_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_86_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_87_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_88_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_89_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_90_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_91_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_92_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_93_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_94_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_95_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_96_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_97_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_98_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer5_out_99_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_0_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_1_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_2_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_3_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_4_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_5_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_6_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_7_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_8_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_9_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_10_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_11_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_12_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_13_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_14_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_15_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_16_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_17_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_18_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_19_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_20_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_21_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_22_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_23_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_24_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_25_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_26_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_27_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_28_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_29_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_30_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_31_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_32_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_33_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_34_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_35_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_36_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_37_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_38_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_39_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_40_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_41_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_42_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_43_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_44_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_45_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_46_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_47_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_48_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer6_out_49_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_0_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_1_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_2_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_3_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_4_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_5_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_6_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_7_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_8_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_9_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_10_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_11_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_12_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_13_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_14_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_15_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_16_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_17_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_18_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_19_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_20_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_21_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_22_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_23_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_24_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_25_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_26_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_27_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_28_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_29_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_30_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_31_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_32_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_33_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_34_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_35_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_36_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_37_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_38_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_39_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_40_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_41_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_42_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_43_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_44_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_45_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_46_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_47_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_48_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer7_out_49_V_empty_n.read() ^ 
  ap_const_logic_1) & (layer8_out_0_V_empty_n.read() ^ 
  ap_const_logic_1));
}

void model_1_hls4ml_prj::thread_ap_ready() {
    ap_ready = ap_sync_ready.read();
}

void model_1_hls4ml_prj::thread_ap_sync_Block_proc_U0_ap_ready() {
    ap_sync_Block_proc_U0_ap_ready = (Block_proc_U0_ap_ready.read() | ap_sync_reg_Block_proc_U0_ap_ready.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_0_V() {
    ap_sync_channel_write_layer2_out_0_V = ((ap_channel_done_layer2_out_0_V.read() & 
  layer2_out_0_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_0_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_100_V() {
    ap_sync_channel_write_layer2_out_100_V = ((ap_channel_done_layer2_out_100_V.read() & 
  layer2_out_100_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_100_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_101_V() {
    ap_sync_channel_write_layer2_out_101_V = ((ap_channel_done_layer2_out_101_V.read() & 
  layer2_out_101_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_101_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_102_V() {
    ap_sync_channel_write_layer2_out_102_V = ((ap_channel_done_layer2_out_102_V.read() & 
  layer2_out_102_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_102_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_103_V() {
    ap_sync_channel_write_layer2_out_103_V = ((ap_channel_done_layer2_out_103_V.read() & 
  layer2_out_103_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_103_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_104_V() {
    ap_sync_channel_write_layer2_out_104_V = ((ap_channel_done_layer2_out_104_V.read() & 
  layer2_out_104_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_104_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_105_V() {
    ap_sync_channel_write_layer2_out_105_V = ((ap_channel_done_layer2_out_105_V.read() & 
  layer2_out_105_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_105_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_106_V() {
    ap_sync_channel_write_layer2_out_106_V = ((ap_channel_done_layer2_out_106_V.read() & 
  layer2_out_106_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_106_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_107_V() {
    ap_sync_channel_write_layer2_out_107_V = ((ap_channel_done_layer2_out_107_V.read() & 
  layer2_out_107_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_107_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_108_V() {
    ap_sync_channel_write_layer2_out_108_V = ((ap_channel_done_layer2_out_108_V.read() & 
  layer2_out_108_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_108_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_109_V() {
    ap_sync_channel_write_layer2_out_109_V = ((ap_channel_done_layer2_out_109_V.read() & 
  layer2_out_109_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_109_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_10_V() {
    ap_sync_channel_write_layer2_out_10_V = ((ap_channel_done_layer2_out_10_V.read() & 
  layer2_out_10_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_10_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_110_V() {
    ap_sync_channel_write_layer2_out_110_V = ((ap_channel_done_layer2_out_110_V.read() & 
  layer2_out_110_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_110_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_111_V() {
    ap_sync_channel_write_layer2_out_111_V = ((ap_channel_done_layer2_out_111_V.read() & 
  layer2_out_111_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_111_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_112_V() {
    ap_sync_channel_write_layer2_out_112_V = ((ap_channel_done_layer2_out_112_V.read() & 
  layer2_out_112_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_112_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_113_V() {
    ap_sync_channel_write_layer2_out_113_V = ((ap_channel_done_layer2_out_113_V.read() & 
  layer2_out_113_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_113_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_114_V() {
    ap_sync_channel_write_layer2_out_114_V = ((ap_channel_done_layer2_out_114_V.read() & 
  layer2_out_114_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_114_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_115_V() {
    ap_sync_channel_write_layer2_out_115_V = ((ap_channel_done_layer2_out_115_V.read() & 
  layer2_out_115_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_115_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_116_V() {
    ap_sync_channel_write_layer2_out_116_V = ((ap_channel_done_layer2_out_116_V.read() & 
  layer2_out_116_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_116_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_117_V() {
    ap_sync_channel_write_layer2_out_117_V = ((ap_channel_done_layer2_out_117_V.read() & 
  layer2_out_117_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_117_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_118_V() {
    ap_sync_channel_write_layer2_out_118_V = ((ap_channel_done_layer2_out_118_V.read() & 
  layer2_out_118_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_118_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_119_V() {
    ap_sync_channel_write_layer2_out_119_V = ((ap_channel_done_layer2_out_119_V.read() & 
  layer2_out_119_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_119_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_11_V() {
    ap_sync_channel_write_layer2_out_11_V = ((ap_channel_done_layer2_out_11_V.read() & 
  layer2_out_11_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_11_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_120_V() {
    ap_sync_channel_write_layer2_out_120_V = ((ap_channel_done_layer2_out_120_V.read() & 
  layer2_out_120_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_120_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_121_V() {
    ap_sync_channel_write_layer2_out_121_V = ((ap_channel_done_layer2_out_121_V.read() & 
  layer2_out_121_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_121_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_122_V() {
    ap_sync_channel_write_layer2_out_122_V = ((ap_channel_done_layer2_out_122_V.read() & 
  layer2_out_122_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_122_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_123_V() {
    ap_sync_channel_write_layer2_out_123_V = ((ap_channel_done_layer2_out_123_V.read() & 
  layer2_out_123_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_123_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_124_V() {
    ap_sync_channel_write_layer2_out_124_V = ((ap_channel_done_layer2_out_124_V.read() & 
  layer2_out_124_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_124_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_125_V() {
    ap_sync_channel_write_layer2_out_125_V = ((ap_channel_done_layer2_out_125_V.read() & 
  layer2_out_125_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_125_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_126_V() {
    ap_sync_channel_write_layer2_out_126_V = ((ap_channel_done_layer2_out_126_V.read() & 
  layer2_out_126_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_126_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_127_V() {
    ap_sync_channel_write_layer2_out_127_V = ((ap_channel_done_layer2_out_127_V.read() & 
  layer2_out_127_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_127_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_128_V() {
    ap_sync_channel_write_layer2_out_128_V = ((ap_channel_done_layer2_out_128_V.read() & 
  layer2_out_128_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_128_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_129_V() {
    ap_sync_channel_write_layer2_out_129_V = ((ap_channel_done_layer2_out_129_V.read() & 
  layer2_out_129_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_129_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_12_V() {
    ap_sync_channel_write_layer2_out_12_V = ((ap_channel_done_layer2_out_12_V.read() & 
  layer2_out_12_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_12_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_130_V() {
    ap_sync_channel_write_layer2_out_130_V = ((ap_channel_done_layer2_out_130_V.read() & 
  layer2_out_130_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_130_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_131_V() {
    ap_sync_channel_write_layer2_out_131_V = ((ap_channel_done_layer2_out_131_V.read() & 
  layer2_out_131_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_131_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_132_V() {
    ap_sync_channel_write_layer2_out_132_V = ((ap_channel_done_layer2_out_132_V.read() & 
  layer2_out_132_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_132_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_133_V() {
    ap_sync_channel_write_layer2_out_133_V = ((ap_channel_done_layer2_out_133_V.read() & 
  layer2_out_133_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_133_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_134_V() {
    ap_sync_channel_write_layer2_out_134_V = ((ap_channel_done_layer2_out_134_V.read() & 
  layer2_out_134_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_134_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_135_V() {
    ap_sync_channel_write_layer2_out_135_V = ((ap_channel_done_layer2_out_135_V.read() & 
  layer2_out_135_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_135_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_136_V() {
    ap_sync_channel_write_layer2_out_136_V = ((ap_channel_done_layer2_out_136_V.read() & 
  layer2_out_136_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_136_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_137_V() {
    ap_sync_channel_write_layer2_out_137_V = ((ap_channel_done_layer2_out_137_V.read() & 
  layer2_out_137_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_137_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_138_V() {
    ap_sync_channel_write_layer2_out_138_V = ((ap_channel_done_layer2_out_138_V.read() & 
  layer2_out_138_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_138_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_139_V() {
    ap_sync_channel_write_layer2_out_139_V = ((ap_channel_done_layer2_out_139_V.read() & 
  layer2_out_139_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_139_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_13_V() {
    ap_sync_channel_write_layer2_out_13_V = ((ap_channel_done_layer2_out_13_V.read() & 
  layer2_out_13_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_13_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_140_V() {
    ap_sync_channel_write_layer2_out_140_V = ((ap_channel_done_layer2_out_140_V.read() & 
  layer2_out_140_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_140_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_141_V() {
    ap_sync_channel_write_layer2_out_141_V = ((ap_channel_done_layer2_out_141_V.read() & 
  layer2_out_141_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_141_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_142_V() {
    ap_sync_channel_write_layer2_out_142_V = ((ap_channel_done_layer2_out_142_V.read() & 
  layer2_out_142_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_142_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_143_V() {
    ap_sync_channel_write_layer2_out_143_V = ((ap_channel_done_layer2_out_143_V.read() & 
  layer2_out_143_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_143_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_144_V() {
    ap_sync_channel_write_layer2_out_144_V = ((ap_channel_done_layer2_out_144_V.read() & 
  layer2_out_144_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_144_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_145_V() {
    ap_sync_channel_write_layer2_out_145_V = ((ap_channel_done_layer2_out_145_V.read() & 
  layer2_out_145_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_145_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_146_V() {
    ap_sync_channel_write_layer2_out_146_V = ((ap_channel_done_layer2_out_146_V.read() & 
  layer2_out_146_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_146_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_147_V() {
    ap_sync_channel_write_layer2_out_147_V = ((ap_channel_done_layer2_out_147_V.read() & 
  layer2_out_147_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_147_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_148_V() {
    ap_sync_channel_write_layer2_out_148_V = ((ap_channel_done_layer2_out_148_V.read() & 
  layer2_out_148_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_148_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_149_V() {
    ap_sync_channel_write_layer2_out_149_V = ((ap_channel_done_layer2_out_149_V.read() & 
  layer2_out_149_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_149_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_14_V() {
    ap_sync_channel_write_layer2_out_14_V = ((ap_channel_done_layer2_out_14_V.read() & 
  layer2_out_14_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_14_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_150_V() {
    ap_sync_channel_write_layer2_out_150_V = ((ap_channel_done_layer2_out_150_V.read() & 
  layer2_out_150_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_150_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_151_V() {
    ap_sync_channel_write_layer2_out_151_V = ((ap_channel_done_layer2_out_151_V.read() & 
  layer2_out_151_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_151_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_152_V() {
    ap_sync_channel_write_layer2_out_152_V = ((ap_channel_done_layer2_out_152_V.read() & 
  layer2_out_152_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_152_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_153_V() {
    ap_sync_channel_write_layer2_out_153_V = ((ap_channel_done_layer2_out_153_V.read() & 
  layer2_out_153_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_153_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_154_V() {
    ap_sync_channel_write_layer2_out_154_V = ((ap_channel_done_layer2_out_154_V.read() & 
  layer2_out_154_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_154_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_155_V() {
    ap_sync_channel_write_layer2_out_155_V = ((ap_channel_done_layer2_out_155_V.read() & 
  layer2_out_155_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_155_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_156_V() {
    ap_sync_channel_write_layer2_out_156_V = ((ap_channel_done_layer2_out_156_V.read() & 
  layer2_out_156_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_156_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_157_V() {
    ap_sync_channel_write_layer2_out_157_V = ((ap_channel_done_layer2_out_157_V.read() & 
  layer2_out_157_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_157_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_158_V() {
    ap_sync_channel_write_layer2_out_158_V = ((ap_channel_done_layer2_out_158_V.read() & 
  layer2_out_158_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_158_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_159_V() {
    ap_sync_channel_write_layer2_out_159_V = ((ap_channel_done_layer2_out_159_V.read() & 
  layer2_out_159_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_159_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_15_V() {
    ap_sync_channel_write_layer2_out_15_V = ((ap_channel_done_layer2_out_15_V.read() & 
  layer2_out_15_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_15_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_160_V() {
    ap_sync_channel_write_layer2_out_160_V = ((ap_channel_done_layer2_out_160_V.read() & 
  layer2_out_160_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_160_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_161_V() {
    ap_sync_channel_write_layer2_out_161_V = ((ap_channel_done_layer2_out_161_V.read() & 
  layer2_out_161_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_161_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_162_V() {
    ap_sync_channel_write_layer2_out_162_V = ((ap_channel_done_layer2_out_162_V.read() & 
  layer2_out_162_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_162_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_163_V() {
    ap_sync_channel_write_layer2_out_163_V = ((ap_channel_done_layer2_out_163_V.read() & 
  layer2_out_163_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_163_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_164_V() {
    ap_sync_channel_write_layer2_out_164_V = ((ap_channel_done_layer2_out_164_V.read() & 
  layer2_out_164_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_164_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_165_V() {
    ap_sync_channel_write_layer2_out_165_V = ((ap_channel_done_layer2_out_165_V.read() & 
  layer2_out_165_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_165_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_166_V() {
    ap_sync_channel_write_layer2_out_166_V = ((ap_channel_done_layer2_out_166_V.read() & 
  layer2_out_166_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_166_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_167_V() {
    ap_sync_channel_write_layer2_out_167_V = ((ap_channel_done_layer2_out_167_V.read() & 
  layer2_out_167_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_167_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_168_V() {
    ap_sync_channel_write_layer2_out_168_V = ((ap_channel_done_layer2_out_168_V.read() & 
  layer2_out_168_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_168_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_169_V() {
    ap_sync_channel_write_layer2_out_169_V = ((ap_channel_done_layer2_out_169_V.read() & 
  layer2_out_169_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_169_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_16_V() {
    ap_sync_channel_write_layer2_out_16_V = ((ap_channel_done_layer2_out_16_V.read() & 
  layer2_out_16_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_16_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_170_V() {
    ap_sync_channel_write_layer2_out_170_V = ((ap_channel_done_layer2_out_170_V.read() & 
  layer2_out_170_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_170_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_171_V() {
    ap_sync_channel_write_layer2_out_171_V = ((ap_channel_done_layer2_out_171_V.read() & 
  layer2_out_171_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_171_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_172_V() {
    ap_sync_channel_write_layer2_out_172_V = ((ap_channel_done_layer2_out_172_V.read() & 
  layer2_out_172_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_172_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_173_V() {
    ap_sync_channel_write_layer2_out_173_V = ((ap_channel_done_layer2_out_173_V.read() & 
  layer2_out_173_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_173_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_174_V() {
    ap_sync_channel_write_layer2_out_174_V = ((ap_channel_done_layer2_out_174_V.read() & 
  layer2_out_174_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_174_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_175_V() {
    ap_sync_channel_write_layer2_out_175_V = ((ap_channel_done_layer2_out_175_V.read() & 
  layer2_out_175_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_175_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_176_V() {
    ap_sync_channel_write_layer2_out_176_V = ((ap_channel_done_layer2_out_176_V.read() & 
  layer2_out_176_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_176_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_177_V() {
    ap_sync_channel_write_layer2_out_177_V = ((ap_channel_done_layer2_out_177_V.read() & 
  layer2_out_177_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_177_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_178_V() {
    ap_sync_channel_write_layer2_out_178_V = ((ap_channel_done_layer2_out_178_V.read() & 
  layer2_out_178_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_178_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_179_V() {
    ap_sync_channel_write_layer2_out_179_V = ((ap_channel_done_layer2_out_179_V.read() & 
  layer2_out_179_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_179_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_17_V() {
    ap_sync_channel_write_layer2_out_17_V = ((ap_channel_done_layer2_out_17_V.read() & 
  layer2_out_17_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_17_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_180_V() {
    ap_sync_channel_write_layer2_out_180_V = ((ap_channel_done_layer2_out_180_V.read() & 
  layer2_out_180_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_180_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_181_V() {
    ap_sync_channel_write_layer2_out_181_V = ((ap_channel_done_layer2_out_181_V.read() & 
  layer2_out_181_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_181_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_182_V() {
    ap_sync_channel_write_layer2_out_182_V = ((ap_channel_done_layer2_out_182_V.read() & 
  layer2_out_182_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_182_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_183_V() {
    ap_sync_channel_write_layer2_out_183_V = ((ap_channel_done_layer2_out_183_V.read() & 
  layer2_out_183_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_183_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_184_V() {
    ap_sync_channel_write_layer2_out_184_V = ((ap_channel_done_layer2_out_184_V.read() & 
  layer2_out_184_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_184_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_185_V() {
    ap_sync_channel_write_layer2_out_185_V = ((ap_channel_done_layer2_out_185_V.read() & 
  layer2_out_185_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_185_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_186_V() {
    ap_sync_channel_write_layer2_out_186_V = ((ap_channel_done_layer2_out_186_V.read() & 
  layer2_out_186_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_186_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_187_V() {
    ap_sync_channel_write_layer2_out_187_V = ((ap_channel_done_layer2_out_187_V.read() & 
  layer2_out_187_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_187_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_188_V() {
    ap_sync_channel_write_layer2_out_188_V = ((ap_channel_done_layer2_out_188_V.read() & 
  layer2_out_188_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_188_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_189_V() {
    ap_sync_channel_write_layer2_out_189_V = ((ap_channel_done_layer2_out_189_V.read() & 
  layer2_out_189_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_189_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_18_V() {
    ap_sync_channel_write_layer2_out_18_V = ((ap_channel_done_layer2_out_18_V.read() & 
  layer2_out_18_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_18_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_190_V() {
    ap_sync_channel_write_layer2_out_190_V = ((ap_channel_done_layer2_out_190_V.read() & 
  layer2_out_190_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_190_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_191_V() {
    ap_sync_channel_write_layer2_out_191_V = ((ap_channel_done_layer2_out_191_V.read() & 
  layer2_out_191_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_191_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_192_V() {
    ap_sync_channel_write_layer2_out_192_V = ((ap_channel_done_layer2_out_192_V.read() & 
  layer2_out_192_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_192_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_193_V() {
    ap_sync_channel_write_layer2_out_193_V = ((ap_channel_done_layer2_out_193_V.read() & 
  layer2_out_193_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_193_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_194_V() {
    ap_sync_channel_write_layer2_out_194_V = ((ap_channel_done_layer2_out_194_V.read() & 
  layer2_out_194_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_194_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_195_V() {
    ap_sync_channel_write_layer2_out_195_V = ((ap_channel_done_layer2_out_195_V.read() & 
  layer2_out_195_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_195_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_196_V() {
    ap_sync_channel_write_layer2_out_196_V = ((ap_channel_done_layer2_out_196_V.read() & 
  layer2_out_196_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_196_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_197_V() {
    ap_sync_channel_write_layer2_out_197_V = ((ap_channel_done_layer2_out_197_V.read() & 
  layer2_out_197_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_197_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_198_V() {
    ap_sync_channel_write_layer2_out_198_V = ((ap_channel_done_layer2_out_198_V.read() & 
  layer2_out_198_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_198_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_199_V() {
    ap_sync_channel_write_layer2_out_199_V = ((ap_channel_done_layer2_out_199_V.read() & 
  layer2_out_199_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_199_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_19_V() {
    ap_sync_channel_write_layer2_out_19_V = ((ap_channel_done_layer2_out_19_V.read() & 
  layer2_out_19_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_19_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_1_V() {
    ap_sync_channel_write_layer2_out_1_V = ((ap_channel_done_layer2_out_1_V.read() & 
  layer2_out_1_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_1_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_20_V() {
    ap_sync_channel_write_layer2_out_20_V = ((ap_channel_done_layer2_out_20_V.read() & 
  layer2_out_20_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_20_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_21_V() {
    ap_sync_channel_write_layer2_out_21_V = ((ap_channel_done_layer2_out_21_V.read() & 
  layer2_out_21_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_21_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_22_V() {
    ap_sync_channel_write_layer2_out_22_V = ((ap_channel_done_layer2_out_22_V.read() & 
  layer2_out_22_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_22_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_23_V() {
    ap_sync_channel_write_layer2_out_23_V = ((ap_channel_done_layer2_out_23_V.read() & 
  layer2_out_23_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_23_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_24_V() {
    ap_sync_channel_write_layer2_out_24_V = ((ap_channel_done_layer2_out_24_V.read() & 
  layer2_out_24_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_24_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_25_V() {
    ap_sync_channel_write_layer2_out_25_V = ((ap_channel_done_layer2_out_25_V.read() & 
  layer2_out_25_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_25_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_26_V() {
    ap_sync_channel_write_layer2_out_26_V = ((ap_channel_done_layer2_out_26_V.read() & 
  layer2_out_26_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_26_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_27_V() {
    ap_sync_channel_write_layer2_out_27_V = ((ap_channel_done_layer2_out_27_V.read() & 
  layer2_out_27_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_27_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_28_V() {
    ap_sync_channel_write_layer2_out_28_V = ((ap_channel_done_layer2_out_28_V.read() & 
  layer2_out_28_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_28_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_29_V() {
    ap_sync_channel_write_layer2_out_29_V = ((ap_channel_done_layer2_out_29_V.read() & 
  layer2_out_29_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_29_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_2_V() {
    ap_sync_channel_write_layer2_out_2_V = ((ap_channel_done_layer2_out_2_V.read() & 
  layer2_out_2_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_2_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_30_V() {
    ap_sync_channel_write_layer2_out_30_V = ((ap_channel_done_layer2_out_30_V.read() & 
  layer2_out_30_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_30_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_31_V() {
    ap_sync_channel_write_layer2_out_31_V = ((ap_channel_done_layer2_out_31_V.read() & 
  layer2_out_31_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_31_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_32_V() {
    ap_sync_channel_write_layer2_out_32_V = ((ap_channel_done_layer2_out_32_V.read() & 
  layer2_out_32_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_32_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_33_V() {
    ap_sync_channel_write_layer2_out_33_V = ((ap_channel_done_layer2_out_33_V.read() & 
  layer2_out_33_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_33_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_34_V() {
    ap_sync_channel_write_layer2_out_34_V = ((ap_channel_done_layer2_out_34_V.read() & 
  layer2_out_34_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_34_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_35_V() {
    ap_sync_channel_write_layer2_out_35_V = ((ap_channel_done_layer2_out_35_V.read() & 
  layer2_out_35_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_35_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_36_V() {
    ap_sync_channel_write_layer2_out_36_V = ((ap_channel_done_layer2_out_36_V.read() & 
  layer2_out_36_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_36_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_37_V() {
    ap_sync_channel_write_layer2_out_37_V = ((ap_channel_done_layer2_out_37_V.read() & 
  layer2_out_37_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_37_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_38_V() {
    ap_sync_channel_write_layer2_out_38_V = ((ap_channel_done_layer2_out_38_V.read() & 
  layer2_out_38_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_38_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_39_V() {
    ap_sync_channel_write_layer2_out_39_V = ((ap_channel_done_layer2_out_39_V.read() & 
  layer2_out_39_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_39_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_3_V() {
    ap_sync_channel_write_layer2_out_3_V = ((ap_channel_done_layer2_out_3_V.read() & 
  layer2_out_3_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_3_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_40_V() {
    ap_sync_channel_write_layer2_out_40_V = ((ap_channel_done_layer2_out_40_V.read() & 
  layer2_out_40_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_40_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_41_V() {
    ap_sync_channel_write_layer2_out_41_V = ((ap_channel_done_layer2_out_41_V.read() & 
  layer2_out_41_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_41_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_42_V() {
    ap_sync_channel_write_layer2_out_42_V = ((ap_channel_done_layer2_out_42_V.read() & 
  layer2_out_42_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_42_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_43_V() {
    ap_sync_channel_write_layer2_out_43_V = ((ap_channel_done_layer2_out_43_V.read() & 
  layer2_out_43_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_43_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_44_V() {
    ap_sync_channel_write_layer2_out_44_V = ((ap_channel_done_layer2_out_44_V.read() & 
  layer2_out_44_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_44_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_45_V() {
    ap_sync_channel_write_layer2_out_45_V = ((ap_channel_done_layer2_out_45_V.read() & 
  layer2_out_45_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_45_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_46_V() {
    ap_sync_channel_write_layer2_out_46_V = ((ap_channel_done_layer2_out_46_V.read() & 
  layer2_out_46_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_46_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_47_V() {
    ap_sync_channel_write_layer2_out_47_V = ((ap_channel_done_layer2_out_47_V.read() & 
  layer2_out_47_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_47_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_48_V() {
    ap_sync_channel_write_layer2_out_48_V = ((ap_channel_done_layer2_out_48_V.read() & 
  layer2_out_48_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_48_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_49_V() {
    ap_sync_channel_write_layer2_out_49_V = ((ap_channel_done_layer2_out_49_V.read() & 
  layer2_out_49_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_49_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_4_V() {
    ap_sync_channel_write_layer2_out_4_V = ((ap_channel_done_layer2_out_4_V.read() & 
  layer2_out_4_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_4_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_50_V() {
    ap_sync_channel_write_layer2_out_50_V = ((ap_channel_done_layer2_out_50_V.read() & 
  layer2_out_50_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_50_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_51_V() {
    ap_sync_channel_write_layer2_out_51_V = ((ap_channel_done_layer2_out_51_V.read() & 
  layer2_out_51_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_51_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_52_V() {
    ap_sync_channel_write_layer2_out_52_V = ((ap_channel_done_layer2_out_52_V.read() & 
  layer2_out_52_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_52_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_53_V() {
    ap_sync_channel_write_layer2_out_53_V = ((ap_channel_done_layer2_out_53_V.read() & 
  layer2_out_53_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_53_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_54_V() {
    ap_sync_channel_write_layer2_out_54_V = ((ap_channel_done_layer2_out_54_V.read() & 
  layer2_out_54_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_54_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_55_V() {
    ap_sync_channel_write_layer2_out_55_V = ((ap_channel_done_layer2_out_55_V.read() & 
  layer2_out_55_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_55_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_56_V() {
    ap_sync_channel_write_layer2_out_56_V = ((ap_channel_done_layer2_out_56_V.read() & 
  layer2_out_56_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_56_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_57_V() {
    ap_sync_channel_write_layer2_out_57_V = ((ap_channel_done_layer2_out_57_V.read() & 
  layer2_out_57_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_57_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_58_V() {
    ap_sync_channel_write_layer2_out_58_V = ((ap_channel_done_layer2_out_58_V.read() & 
  layer2_out_58_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_58_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_59_V() {
    ap_sync_channel_write_layer2_out_59_V = ((ap_channel_done_layer2_out_59_V.read() & 
  layer2_out_59_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_59_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_5_V() {
    ap_sync_channel_write_layer2_out_5_V = ((ap_channel_done_layer2_out_5_V.read() & 
  layer2_out_5_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_5_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_60_V() {
    ap_sync_channel_write_layer2_out_60_V = ((ap_channel_done_layer2_out_60_V.read() & 
  layer2_out_60_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_60_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_61_V() {
    ap_sync_channel_write_layer2_out_61_V = ((ap_channel_done_layer2_out_61_V.read() & 
  layer2_out_61_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_61_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_62_V() {
    ap_sync_channel_write_layer2_out_62_V = ((ap_channel_done_layer2_out_62_V.read() & 
  layer2_out_62_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_62_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_63_V() {
    ap_sync_channel_write_layer2_out_63_V = ((ap_channel_done_layer2_out_63_V.read() & 
  layer2_out_63_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_63_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_64_V() {
    ap_sync_channel_write_layer2_out_64_V = ((ap_channel_done_layer2_out_64_V.read() & 
  layer2_out_64_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_64_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_65_V() {
    ap_sync_channel_write_layer2_out_65_V = ((ap_channel_done_layer2_out_65_V.read() & 
  layer2_out_65_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_65_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_66_V() {
    ap_sync_channel_write_layer2_out_66_V = ((ap_channel_done_layer2_out_66_V.read() & 
  layer2_out_66_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_66_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_67_V() {
    ap_sync_channel_write_layer2_out_67_V = ((ap_channel_done_layer2_out_67_V.read() & 
  layer2_out_67_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_67_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_68_V() {
    ap_sync_channel_write_layer2_out_68_V = ((ap_channel_done_layer2_out_68_V.read() & 
  layer2_out_68_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_68_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_69_V() {
    ap_sync_channel_write_layer2_out_69_V = ((ap_channel_done_layer2_out_69_V.read() & 
  layer2_out_69_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_69_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_6_V() {
    ap_sync_channel_write_layer2_out_6_V = ((ap_channel_done_layer2_out_6_V.read() & 
  layer2_out_6_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_6_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_70_V() {
    ap_sync_channel_write_layer2_out_70_V = ((ap_channel_done_layer2_out_70_V.read() & 
  layer2_out_70_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_70_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_71_V() {
    ap_sync_channel_write_layer2_out_71_V = ((ap_channel_done_layer2_out_71_V.read() & 
  layer2_out_71_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_71_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_72_V() {
    ap_sync_channel_write_layer2_out_72_V = ((ap_channel_done_layer2_out_72_V.read() & 
  layer2_out_72_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_72_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_73_V() {
    ap_sync_channel_write_layer2_out_73_V = ((ap_channel_done_layer2_out_73_V.read() & 
  layer2_out_73_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_73_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_74_V() {
    ap_sync_channel_write_layer2_out_74_V = ((ap_channel_done_layer2_out_74_V.read() & 
  layer2_out_74_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_74_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_75_V() {
    ap_sync_channel_write_layer2_out_75_V = ((ap_channel_done_layer2_out_75_V.read() & 
  layer2_out_75_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_75_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_76_V() {
    ap_sync_channel_write_layer2_out_76_V = ((ap_channel_done_layer2_out_76_V.read() & 
  layer2_out_76_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_76_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_77_V() {
    ap_sync_channel_write_layer2_out_77_V = ((ap_channel_done_layer2_out_77_V.read() & 
  layer2_out_77_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_77_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_78_V() {
    ap_sync_channel_write_layer2_out_78_V = ((ap_channel_done_layer2_out_78_V.read() & 
  layer2_out_78_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_78_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_79_V() {
    ap_sync_channel_write_layer2_out_79_V = ((ap_channel_done_layer2_out_79_V.read() & 
  layer2_out_79_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_79_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_7_V() {
    ap_sync_channel_write_layer2_out_7_V = ((ap_channel_done_layer2_out_7_V.read() & 
  layer2_out_7_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_7_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_80_V() {
    ap_sync_channel_write_layer2_out_80_V = ((ap_channel_done_layer2_out_80_V.read() & 
  layer2_out_80_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_80_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_81_V() {
    ap_sync_channel_write_layer2_out_81_V = ((ap_channel_done_layer2_out_81_V.read() & 
  layer2_out_81_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_81_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_82_V() {
    ap_sync_channel_write_layer2_out_82_V = ((ap_channel_done_layer2_out_82_V.read() & 
  layer2_out_82_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_82_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_83_V() {
    ap_sync_channel_write_layer2_out_83_V = ((ap_channel_done_layer2_out_83_V.read() & 
  layer2_out_83_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_83_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_84_V() {
    ap_sync_channel_write_layer2_out_84_V = ((ap_channel_done_layer2_out_84_V.read() & 
  layer2_out_84_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_84_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_85_V() {
    ap_sync_channel_write_layer2_out_85_V = ((ap_channel_done_layer2_out_85_V.read() & 
  layer2_out_85_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_85_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_86_V() {
    ap_sync_channel_write_layer2_out_86_V = ((ap_channel_done_layer2_out_86_V.read() & 
  layer2_out_86_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_86_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_87_V() {
    ap_sync_channel_write_layer2_out_87_V = ((ap_channel_done_layer2_out_87_V.read() & 
  layer2_out_87_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_87_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_88_V() {
    ap_sync_channel_write_layer2_out_88_V = ((ap_channel_done_layer2_out_88_V.read() & 
  layer2_out_88_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_88_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_89_V() {
    ap_sync_channel_write_layer2_out_89_V = ((ap_channel_done_layer2_out_89_V.read() & 
  layer2_out_89_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_89_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_8_V() {
    ap_sync_channel_write_layer2_out_8_V = ((ap_channel_done_layer2_out_8_V.read() & 
  layer2_out_8_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_8_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_90_V() {
    ap_sync_channel_write_layer2_out_90_V = ((ap_channel_done_layer2_out_90_V.read() & 
  layer2_out_90_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_90_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_91_V() {
    ap_sync_channel_write_layer2_out_91_V = ((ap_channel_done_layer2_out_91_V.read() & 
  layer2_out_91_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_91_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_92_V() {
    ap_sync_channel_write_layer2_out_92_V = ((ap_channel_done_layer2_out_92_V.read() & 
  layer2_out_92_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_92_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_93_V() {
    ap_sync_channel_write_layer2_out_93_V = ((ap_channel_done_layer2_out_93_V.read() & 
  layer2_out_93_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_93_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_94_V() {
    ap_sync_channel_write_layer2_out_94_V = ((ap_channel_done_layer2_out_94_V.read() & 
  layer2_out_94_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_94_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_95_V() {
    ap_sync_channel_write_layer2_out_95_V = ((ap_channel_done_layer2_out_95_V.read() & 
  layer2_out_95_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_95_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_96_V() {
    ap_sync_channel_write_layer2_out_96_V = ((ap_channel_done_layer2_out_96_V.read() & 
  layer2_out_96_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_96_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_97_V() {
    ap_sync_channel_write_layer2_out_97_V = ((ap_channel_done_layer2_out_97_V.read() & 
  layer2_out_97_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_97_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_98_V() {
    ap_sync_channel_write_layer2_out_98_V = ((ap_channel_done_layer2_out_98_V.read() & 
  layer2_out_98_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_98_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_99_V() {
    ap_sync_channel_write_layer2_out_99_V = ((ap_channel_done_layer2_out_99_V.read() & 
  layer2_out_99_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_99_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer2_out_9_V() {
    ap_sync_channel_write_layer2_out_9_V = ((ap_channel_done_layer2_out_9_V.read() & 
  layer2_out_9_V_full_n.read()) | ap_sync_reg_channel_write_layer2_out_9_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_0_V() {
    ap_sync_channel_write_layer3_out_0_V = ((ap_channel_done_layer3_out_0_V.read() & 
  layer3_out_0_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_0_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_100_V() {
    ap_sync_channel_write_layer3_out_100_V = ((ap_channel_done_layer3_out_100_V.read() & 
  layer3_out_100_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_100_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_101_V() {
    ap_sync_channel_write_layer3_out_101_V = ((ap_channel_done_layer3_out_101_V.read() & 
  layer3_out_101_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_101_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_102_V() {
    ap_sync_channel_write_layer3_out_102_V = ((ap_channel_done_layer3_out_102_V.read() & 
  layer3_out_102_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_102_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_103_V() {
    ap_sync_channel_write_layer3_out_103_V = ((ap_channel_done_layer3_out_103_V.read() & 
  layer3_out_103_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_103_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_104_V() {
    ap_sync_channel_write_layer3_out_104_V = ((ap_channel_done_layer3_out_104_V.read() & 
  layer3_out_104_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_104_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_105_V() {
    ap_sync_channel_write_layer3_out_105_V = ((ap_channel_done_layer3_out_105_V.read() & 
  layer3_out_105_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_105_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_106_V() {
    ap_sync_channel_write_layer3_out_106_V = ((ap_channel_done_layer3_out_106_V.read() & 
  layer3_out_106_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_106_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_107_V() {
    ap_sync_channel_write_layer3_out_107_V = ((ap_channel_done_layer3_out_107_V.read() & 
  layer3_out_107_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_107_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_108_V() {
    ap_sync_channel_write_layer3_out_108_V = ((ap_channel_done_layer3_out_108_V.read() & 
  layer3_out_108_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_108_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_109_V() {
    ap_sync_channel_write_layer3_out_109_V = ((ap_channel_done_layer3_out_109_V.read() & 
  layer3_out_109_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_109_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_10_V() {
    ap_sync_channel_write_layer3_out_10_V = ((ap_channel_done_layer3_out_10_V.read() & 
  layer3_out_10_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_10_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_110_V() {
    ap_sync_channel_write_layer3_out_110_V = ((ap_channel_done_layer3_out_110_V.read() & 
  layer3_out_110_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_110_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_111_V() {
    ap_sync_channel_write_layer3_out_111_V = ((ap_channel_done_layer3_out_111_V.read() & 
  layer3_out_111_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_111_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_112_V() {
    ap_sync_channel_write_layer3_out_112_V = ((ap_channel_done_layer3_out_112_V.read() & 
  layer3_out_112_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_112_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_113_V() {
    ap_sync_channel_write_layer3_out_113_V = ((ap_channel_done_layer3_out_113_V.read() & 
  layer3_out_113_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_113_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_114_V() {
    ap_sync_channel_write_layer3_out_114_V = ((ap_channel_done_layer3_out_114_V.read() & 
  layer3_out_114_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_114_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_115_V() {
    ap_sync_channel_write_layer3_out_115_V = ((ap_channel_done_layer3_out_115_V.read() & 
  layer3_out_115_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_115_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_116_V() {
    ap_sync_channel_write_layer3_out_116_V = ((ap_channel_done_layer3_out_116_V.read() & 
  layer3_out_116_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_116_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_117_V() {
    ap_sync_channel_write_layer3_out_117_V = ((ap_channel_done_layer3_out_117_V.read() & 
  layer3_out_117_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_117_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_118_V() {
    ap_sync_channel_write_layer3_out_118_V = ((ap_channel_done_layer3_out_118_V.read() & 
  layer3_out_118_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_118_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_119_V() {
    ap_sync_channel_write_layer3_out_119_V = ((ap_channel_done_layer3_out_119_V.read() & 
  layer3_out_119_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_119_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_11_V() {
    ap_sync_channel_write_layer3_out_11_V = ((ap_channel_done_layer3_out_11_V.read() & 
  layer3_out_11_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_11_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_120_V() {
    ap_sync_channel_write_layer3_out_120_V = ((ap_channel_done_layer3_out_120_V.read() & 
  layer3_out_120_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_120_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_121_V() {
    ap_sync_channel_write_layer3_out_121_V = ((ap_channel_done_layer3_out_121_V.read() & 
  layer3_out_121_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_121_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_122_V() {
    ap_sync_channel_write_layer3_out_122_V = ((ap_channel_done_layer3_out_122_V.read() & 
  layer3_out_122_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_122_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_123_V() {
    ap_sync_channel_write_layer3_out_123_V = ((ap_channel_done_layer3_out_123_V.read() & 
  layer3_out_123_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_123_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_124_V() {
    ap_sync_channel_write_layer3_out_124_V = ((ap_channel_done_layer3_out_124_V.read() & 
  layer3_out_124_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_124_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_125_V() {
    ap_sync_channel_write_layer3_out_125_V = ((ap_channel_done_layer3_out_125_V.read() & 
  layer3_out_125_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_125_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_126_V() {
    ap_sync_channel_write_layer3_out_126_V = ((ap_channel_done_layer3_out_126_V.read() & 
  layer3_out_126_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_126_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_127_V() {
    ap_sync_channel_write_layer3_out_127_V = ((ap_channel_done_layer3_out_127_V.read() & 
  layer3_out_127_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_127_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_128_V() {
    ap_sync_channel_write_layer3_out_128_V = ((ap_channel_done_layer3_out_128_V.read() & 
  layer3_out_128_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_128_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_129_V() {
    ap_sync_channel_write_layer3_out_129_V = ((ap_channel_done_layer3_out_129_V.read() & 
  layer3_out_129_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_129_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_12_V() {
    ap_sync_channel_write_layer3_out_12_V = ((ap_channel_done_layer3_out_12_V.read() & 
  layer3_out_12_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_12_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_130_V() {
    ap_sync_channel_write_layer3_out_130_V = ((ap_channel_done_layer3_out_130_V.read() & 
  layer3_out_130_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_130_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_131_V() {
    ap_sync_channel_write_layer3_out_131_V = ((ap_channel_done_layer3_out_131_V.read() & 
  layer3_out_131_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_131_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_132_V() {
    ap_sync_channel_write_layer3_out_132_V = ((ap_channel_done_layer3_out_132_V.read() & 
  layer3_out_132_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_132_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_133_V() {
    ap_sync_channel_write_layer3_out_133_V = ((ap_channel_done_layer3_out_133_V.read() & 
  layer3_out_133_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_133_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_134_V() {
    ap_sync_channel_write_layer3_out_134_V = ((ap_channel_done_layer3_out_134_V.read() & 
  layer3_out_134_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_134_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_135_V() {
    ap_sync_channel_write_layer3_out_135_V = ((ap_channel_done_layer3_out_135_V.read() & 
  layer3_out_135_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_135_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_136_V() {
    ap_sync_channel_write_layer3_out_136_V = ((ap_channel_done_layer3_out_136_V.read() & 
  layer3_out_136_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_136_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_137_V() {
    ap_sync_channel_write_layer3_out_137_V = ((ap_channel_done_layer3_out_137_V.read() & 
  layer3_out_137_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_137_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_138_V() {
    ap_sync_channel_write_layer3_out_138_V = ((ap_channel_done_layer3_out_138_V.read() & 
  layer3_out_138_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_138_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_139_V() {
    ap_sync_channel_write_layer3_out_139_V = ((ap_channel_done_layer3_out_139_V.read() & 
  layer3_out_139_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_139_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_13_V() {
    ap_sync_channel_write_layer3_out_13_V = ((ap_channel_done_layer3_out_13_V.read() & 
  layer3_out_13_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_13_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_140_V() {
    ap_sync_channel_write_layer3_out_140_V = ((ap_channel_done_layer3_out_140_V.read() & 
  layer3_out_140_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_140_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_141_V() {
    ap_sync_channel_write_layer3_out_141_V = ((ap_channel_done_layer3_out_141_V.read() & 
  layer3_out_141_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_141_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_142_V() {
    ap_sync_channel_write_layer3_out_142_V = ((ap_channel_done_layer3_out_142_V.read() & 
  layer3_out_142_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_142_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_143_V() {
    ap_sync_channel_write_layer3_out_143_V = ((ap_channel_done_layer3_out_143_V.read() & 
  layer3_out_143_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_143_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_144_V() {
    ap_sync_channel_write_layer3_out_144_V = ((ap_channel_done_layer3_out_144_V.read() & 
  layer3_out_144_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_144_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_145_V() {
    ap_sync_channel_write_layer3_out_145_V = ((ap_channel_done_layer3_out_145_V.read() & 
  layer3_out_145_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_145_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_146_V() {
    ap_sync_channel_write_layer3_out_146_V = ((ap_channel_done_layer3_out_146_V.read() & 
  layer3_out_146_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_146_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_147_V() {
    ap_sync_channel_write_layer3_out_147_V = ((ap_channel_done_layer3_out_147_V.read() & 
  layer3_out_147_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_147_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_148_V() {
    ap_sync_channel_write_layer3_out_148_V = ((ap_channel_done_layer3_out_148_V.read() & 
  layer3_out_148_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_148_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_149_V() {
    ap_sync_channel_write_layer3_out_149_V = ((ap_channel_done_layer3_out_149_V.read() & 
  layer3_out_149_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_149_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_14_V() {
    ap_sync_channel_write_layer3_out_14_V = ((ap_channel_done_layer3_out_14_V.read() & 
  layer3_out_14_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_14_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_150_V() {
    ap_sync_channel_write_layer3_out_150_V = ((ap_channel_done_layer3_out_150_V.read() & 
  layer3_out_150_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_150_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_151_V() {
    ap_sync_channel_write_layer3_out_151_V = ((ap_channel_done_layer3_out_151_V.read() & 
  layer3_out_151_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_151_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_152_V() {
    ap_sync_channel_write_layer3_out_152_V = ((ap_channel_done_layer3_out_152_V.read() & 
  layer3_out_152_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_152_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_153_V() {
    ap_sync_channel_write_layer3_out_153_V = ((ap_channel_done_layer3_out_153_V.read() & 
  layer3_out_153_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_153_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_154_V() {
    ap_sync_channel_write_layer3_out_154_V = ((ap_channel_done_layer3_out_154_V.read() & 
  layer3_out_154_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_154_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_155_V() {
    ap_sync_channel_write_layer3_out_155_V = ((ap_channel_done_layer3_out_155_V.read() & 
  layer3_out_155_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_155_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_156_V() {
    ap_sync_channel_write_layer3_out_156_V = ((ap_channel_done_layer3_out_156_V.read() & 
  layer3_out_156_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_156_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_157_V() {
    ap_sync_channel_write_layer3_out_157_V = ((ap_channel_done_layer3_out_157_V.read() & 
  layer3_out_157_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_157_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_158_V() {
    ap_sync_channel_write_layer3_out_158_V = ((ap_channel_done_layer3_out_158_V.read() & 
  layer3_out_158_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_158_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_159_V() {
    ap_sync_channel_write_layer3_out_159_V = ((ap_channel_done_layer3_out_159_V.read() & 
  layer3_out_159_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_159_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_15_V() {
    ap_sync_channel_write_layer3_out_15_V = ((ap_channel_done_layer3_out_15_V.read() & 
  layer3_out_15_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_15_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_160_V() {
    ap_sync_channel_write_layer3_out_160_V = ((ap_channel_done_layer3_out_160_V.read() & 
  layer3_out_160_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_160_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_161_V() {
    ap_sync_channel_write_layer3_out_161_V = ((ap_channel_done_layer3_out_161_V.read() & 
  layer3_out_161_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_161_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_162_V() {
    ap_sync_channel_write_layer3_out_162_V = ((ap_channel_done_layer3_out_162_V.read() & 
  layer3_out_162_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_162_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_163_V() {
    ap_sync_channel_write_layer3_out_163_V = ((ap_channel_done_layer3_out_163_V.read() & 
  layer3_out_163_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_163_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_164_V() {
    ap_sync_channel_write_layer3_out_164_V = ((ap_channel_done_layer3_out_164_V.read() & 
  layer3_out_164_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_164_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_165_V() {
    ap_sync_channel_write_layer3_out_165_V = ((ap_channel_done_layer3_out_165_V.read() & 
  layer3_out_165_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_165_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_166_V() {
    ap_sync_channel_write_layer3_out_166_V = ((ap_channel_done_layer3_out_166_V.read() & 
  layer3_out_166_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_166_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_167_V() {
    ap_sync_channel_write_layer3_out_167_V = ((ap_channel_done_layer3_out_167_V.read() & 
  layer3_out_167_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_167_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_168_V() {
    ap_sync_channel_write_layer3_out_168_V = ((ap_channel_done_layer3_out_168_V.read() & 
  layer3_out_168_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_168_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_169_V() {
    ap_sync_channel_write_layer3_out_169_V = ((ap_channel_done_layer3_out_169_V.read() & 
  layer3_out_169_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_169_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_16_V() {
    ap_sync_channel_write_layer3_out_16_V = ((ap_channel_done_layer3_out_16_V.read() & 
  layer3_out_16_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_16_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_170_V() {
    ap_sync_channel_write_layer3_out_170_V = ((ap_channel_done_layer3_out_170_V.read() & 
  layer3_out_170_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_170_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_171_V() {
    ap_sync_channel_write_layer3_out_171_V = ((ap_channel_done_layer3_out_171_V.read() & 
  layer3_out_171_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_171_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_172_V() {
    ap_sync_channel_write_layer3_out_172_V = ((ap_channel_done_layer3_out_172_V.read() & 
  layer3_out_172_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_172_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_173_V() {
    ap_sync_channel_write_layer3_out_173_V = ((ap_channel_done_layer3_out_173_V.read() & 
  layer3_out_173_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_173_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_174_V() {
    ap_sync_channel_write_layer3_out_174_V = ((ap_channel_done_layer3_out_174_V.read() & 
  layer3_out_174_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_174_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_175_V() {
    ap_sync_channel_write_layer3_out_175_V = ((ap_channel_done_layer3_out_175_V.read() & 
  layer3_out_175_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_175_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_176_V() {
    ap_sync_channel_write_layer3_out_176_V = ((ap_channel_done_layer3_out_176_V.read() & 
  layer3_out_176_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_176_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_177_V() {
    ap_sync_channel_write_layer3_out_177_V = ((ap_channel_done_layer3_out_177_V.read() & 
  layer3_out_177_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_177_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_178_V() {
    ap_sync_channel_write_layer3_out_178_V = ((ap_channel_done_layer3_out_178_V.read() & 
  layer3_out_178_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_178_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_179_V() {
    ap_sync_channel_write_layer3_out_179_V = ((ap_channel_done_layer3_out_179_V.read() & 
  layer3_out_179_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_179_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_17_V() {
    ap_sync_channel_write_layer3_out_17_V = ((ap_channel_done_layer3_out_17_V.read() & 
  layer3_out_17_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_17_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_180_V() {
    ap_sync_channel_write_layer3_out_180_V = ((ap_channel_done_layer3_out_180_V.read() & 
  layer3_out_180_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_180_V.read());
}

void model_1_hls4ml_prj::thread_ap_sync_channel_write_layer3_out_181_V() {
    ap_sync_channel_write_layer3_out_181_V = ((ap_channel_done_layer3_out_181_V.read() & 
  layer3_out_181_V_full_n.read()) | ap_sync_reg_channel_write_layer3_out_181_V.read());
}

}

