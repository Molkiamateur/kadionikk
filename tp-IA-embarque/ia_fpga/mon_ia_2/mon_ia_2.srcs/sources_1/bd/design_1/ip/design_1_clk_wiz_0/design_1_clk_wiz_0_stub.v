// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
// Date        : Fri Nov 14 16:51:26 2025
// Host        : fedora running 64-bit unknown
// Command     : write_verilog -force -mode synth_stub
//               /home/se01/micha_maraninchi/kadionikk-master/TP_IA_embarque/mon_ia_2/mon_ia_2.srcs/sources_1/bd/design_1/ip/design_1_clk_wiz_0/design_1_clk_wiz_0_stub.v
// Design      : design_1_clk_wiz_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
module design_1_clk_wiz_0(clk_out_100, clk_out_200, clk_out_400, reset, 
  locked, clk_in1)
/* synthesis syn_black_box black_box_pad_pin="clk_out_100,clk_out_200,clk_out_400,reset,locked,clk_in1" */;
  output clk_out_100;
  output clk_out_200;
  output clk_out_400;
  input reset;
  output locked;
  input clk_in1;
endmodule
