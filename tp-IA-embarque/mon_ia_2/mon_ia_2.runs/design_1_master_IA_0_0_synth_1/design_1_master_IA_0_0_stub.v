// Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
// --------------------------------------------------------------------------------
// Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
// Date        : Fri Nov 14 16:55:15 2025
// Host        : fedora running 64-bit unknown
// Command     : write_verilog -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
//               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_master_IA_0_0_stub.v
// Design      : design_1_master_IA_0_0
// Purpose     : Stub declaration of top-level module interface
// Device      : xc7a100tcsg324-1
// --------------------------------------------------------------------------------

// This empty module with port declaration file causes synthesis tools to infer a black box for IP.
// The synthesis directives are for Synopsys Synplify support to prevent IO buffer insertion.
// Please paste the declaration into a Verilog source file or add the file as an additional source.
(* x_core_info = "master_IA,Vivado 2019.2" *)
module decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix(clk, btnr, btnc, btnl, LEDS, ap_done, ap_ready, 
  ap_idle, o_valid, o_data, state_machine_data, rst_out, ap_start, i_data, i_valid)
/* synthesis syn_black_box black_box_pad_pin="clk,btnr,btnc,btnl,LEDS[1:0],ap_done,ap_ready,ap_idle,o_valid,o_data[13:0],state_machine_data[7:0],rst_out,ap_start,i_data[31:0],i_valid" */;
  input clk;
  input btnr;
  input btnc;
  input btnl;
  output [1:0]LEDS;
  input ap_done;
  input ap_ready;
  input ap_idle;
  input o_valid;
  input [13:0]o_data;
  output [7:0]state_machine_data;
  output rst_out;
  output ap_start;
  output [31:0]i_data;
  output i_valid;
endmodule
