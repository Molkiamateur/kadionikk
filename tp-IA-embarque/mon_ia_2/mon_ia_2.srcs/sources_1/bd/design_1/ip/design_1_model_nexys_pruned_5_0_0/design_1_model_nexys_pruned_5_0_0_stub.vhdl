-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
-- Date        : Fri Nov 14 17:01:57 2025
-- Host        : fedora running 64-bit unknown
-- Command     : write_vhdl -force -mode synth_stub
--               /home/se01/micha_maraninchi/kadionikk-master/TP_IA_embarque/mon_ia_2/mon_ia_2.srcs/sources_1/bd/design_1/ip/design_1_model_nexys_pruned_5_0_0/design_1_model_nexys_pruned_5_0_0_stub.vhdl
-- Design      : design_1_model_nexys_pruned_5_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity design_1_model_nexys_pruned_5_0_0 is
  Port ( 
    input_1_V_ap_vld : in STD_LOGIC;
    const_size_in_1_ap_vld : out STD_LOGIC;
    const_size_out_1_ap_vld : out STD_LOGIC;
    layer13_out_0_V_ap_vld : out STD_LOGIC;
    ap_clk : in STD_LOGIC;
    ap_rst : in STD_LOGIC;
    ap_start : in STD_LOGIC;
    ap_done : out STD_LOGIC;
    ap_ready : out STD_LOGIC;
    ap_idle : out STD_LOGIC;
    input_1_V : in STD_LOGIC_VECTOR ( 31 downto 0 );
    layer13_out_0_V : out STD_LOGIC_VECTOR ( 13 downto 0 );
    const_size_in_1 : out STD_LOGIC_VECTOR ( 15 downto 0 );
    const_size_out_1 : out STD_LOGIC_VECTOR ( 15 downto 0 )
  );

end design_1_model_nexys_pruned_5_0_0;

architecture stub of design_1_model_nexys_pruned_5_0_0 is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "input_1_V_ap_vld,const_size_in_1_ap_vld,const_size_out_1_ap_vld,layer13_out_0_V_ap_vld,ap_clk,ap_rst,ap_start,ap_done,ap_ready,ap_idle,input_1_V[31:0],layer13_out_0_V[13:0],const_size_in_1[15:0],const_size_out_1[15:0]";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "model_nexys_pruned_5_hls4ml_prj_5,Vivado 2019.2";
begin
end;
