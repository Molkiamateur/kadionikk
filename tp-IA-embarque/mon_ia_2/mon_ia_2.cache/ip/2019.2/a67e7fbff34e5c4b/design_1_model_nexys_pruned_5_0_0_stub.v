// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
// Date        : Fri Nov 14 17:01:19 2025
// Host        : fedora running 64-bit unknown
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_model_nexys_pruned_5_0_0_stub.v
// Design      : design_1_model_nexys_pruned_5_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "model_nexys_pruned_5_hls4ml_prj_5,Vivado 2019.2" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(input_1_V_ap_vld, const_size_in_1_ap_vld, 
  const_size_out_1_ap_vld, layer13_out_0_V_ap_vld, ap_clk, ap_rst, ap_start, ap_done, ap_ready, 
  ap_idle, input_1_V, layer13_out_0_V, const_size_in_1, const_size_out_1)
/* synthesis syn_black_box black_box_pad_pin="input_1_V_ap_vld,const_size_in_1_ap_vld,const_size_out_1_ap_vld,layer13_out_0_V_ap_vld,ap_clk,ap_rst,ap_start,ap_done,ap_ready,ap_idle,input_1_V[31:0],layer13_out_0_V[13:0],const_size_in_1[15:0],const_size_out_1[15:0]" */;
  input input_1_V_ap_vld;
  output const_size_in_1_ap_vld;
  output const_size_out_1_ap_vld;
  output layer13_out_0_V_ap_vld;
  input ap_clk;
  input ap_rst;
  input ap_start;
  output ap_done;
  output ap_ready;
  output ap_idle;
  input [31:0]input_1_V;
  output [13:0]layer13_out_0_V;
  output [15:0]const_size_in_1;
  output [15:0]const_size_out_1;
endmodule
