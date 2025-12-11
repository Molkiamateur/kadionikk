-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
-- Date        : Fri Nov 14 16:55:15 2025
-- Host        : fedora running 64-bit unknown
-- Command     : write_vhdl -force -mode synth_stub -rename_top decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix -prefix
--               decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix_ design_1_master_IA_0_0_stub.vhdl
-- Design      : design_1_master_IA_0_0
-- Purpose     : Stub declaration of top-level module interface
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
  Port ( 
    clk : in STD_LOGIC;
    btnr : in STD_LOGIC;
    btnc : in STD_LOGIC;
    btnl : in STD_LOGIC;
    LEDS : out STD_LOGIC_VECTOR ( 1 downto 0 );
    ap_done : in STD_LOGIC;
    ap_ready : in STD_LOGIC;
    ap_idle : in STD_LOGIC;
    o_valid : in STD_LOGIC;
    o_data : in STD_LOGIC_VECTOR ( 13 downto 0 );
    state_machine_data : out STD_LOGIC_VECTOR ( 7 downto 0 );
    rst_out : out STD_LOGIC;
    ap_start : out STD_LOGIC;
    i_data : out STD_LOGIC_VECTOR ( 31 downto 0 );
    i_valid : out STD_LOGIC
  );

end decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix;

architecture stub of decalper_eb_ot_sdeen_pot_pi_dehcac_xnilix is
attribute syn_black_box : boolean;
attribute black_box_pad_pin : string;
attribute syn_black_box of stub : architecture is true;
attribute black_box_pad_pin of stub : architecture is "clk,btnr,btnc,btnl,LEDS[1:0],ap_done,ap_ready,ap_idle,o_valid,o_data[13:0],state_machine_data[7:0],rst_out,ap_start,i_data[31:0],i_valid";
attribute x_core_info : string;
attribute x_core_info of stub : architecture is "master_IA,Vivado 2019.2";
begin
end;
