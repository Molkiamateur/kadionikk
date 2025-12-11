-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- --------------------------------------------------------------------------------
-- Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
-- Date        : Fri Nov 14 16:55:15 2025
-- Host        : fedora running 64-bit unknown
-- Command     : write_vhdl -force -mode funcsim
--               /home/se01/micha_maraninchi/kadionikk-master/TP_IA_embarque/mon_ia_2/mon_ia_2.srcs/sources_1/bd/design_1/ip/design_1_master_IA_0_0/design_1_master_IA_0_0_sim_netlist.vhdl
-- Design      : design_1_master_IA_0_0
-- Purpose     : This VHDL netlist is a functional simulation representation of the design and should not be modified or
--               synthesized. This netlist cannot be used for SDF annotated simulation.
-- Device      : xc7a100tcsg324-1
-- --------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_master_IA_0_0_master_IA is
  port (
    rst_out : out STD_LOGIC;
    i_data : out STD_LOGIC_VECTOR ( 0 to 0 );
    LEDS : out STD_LOGIC_VECTOR ( 0 to 0 );
    btnl : in STD_LOGIC;
    btnc : in STD_LOGIC;
    o_data : in STD_LOGIC_VECTOR ( 5 downto 0 );
    btnr : in STD_LOGIC
  );
  attribute ORIG_REF_NAME : string;
  attribute ORIG_REF_NAME of design_1_master_IA_0_0_master_IA : entity is "master_IA";
end design_1_master_IA_0_0_master_IA;

architecture STRUCTURE of design_1_master_IA_0_0_master_IA is
  signal i_valid_reg_i_1_n_0 : STD_LOGIC;
  signal rst_out2_out : STD_LOGIC;
  attribute XILINX_LEGACY_PRIM : string;
  attribute XILINX_LEGACY_PRIM of i_valid_reg : label is "LDP";
  attribute SOFT_HLUTNM : string;
  attribute SOFT_HLUTNM of i_valid_reg_i_1 : label is "soft_lutpair0";
  attribute XILINX_LEGACY_PRIM of rst_out_reg : label is "LD";
  attribute SOFT_HLUTNM of rst_out_reg_i_1 : label is "soft_lutpair0";
begin
LEDS1: unisim.vcomponents.LUT6
    generic map(
      INIT => X"FFFFFFFFFFFFFFFE"
    )
        port map (
      I0 => o_data(2),
      I1 => o_data(1),
      I2 => o_data(5),
      I3 => o_data(0),
      I4 => o_data(3),
      I5 => o_data(4),
      O => LEDS(0)
    );
i_valid_reg: unisim.vcomponents.LDPE
    generic map(
      INIT => '1'
    )
        port map (
      D => '0',
      G => i_valid_reg_i_1_n_0,
      GE => '1',
      PRE => btnc,
      Q => i_data(0)
    );
i_valid_reg_i_1: unisim.vcomponents.LUT2
    generic map(
      INIT => X"2"
    )
        port map (
      I0 => btnr,
      I1 => btnl,
      O => i_valid_reg_i_1_n_0
    );
rst_out_reg: unisim.vcomponents.LDCE
    generic map(
      INIT => '0'
    )
        port map (
      CLR => '0',
      D => btnl,
      G => rst_out2_out,
      GE => '1',
      Q => rst_out
    );
rst_out_reg_i_1: unisim.vcomponents.LUT3
    generic map(
      INIT => X"0E"
    )
        port map (
      I0 => btnr,
      I1 => btnl,
      I2 => btnc,
      O => rst_out2_out
    );
end STRUCTURE;
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_master_IA_0_0 is
  port (
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
  attribute NotValidForBitStream : boolean;
  attribute NotValidForBitStream of design_1_master_IA_0_0 : entity is true;
  attribute CHECK_LICENSE_TYPE : string;
  attribute CHECK_LICENSE_TYPE of design_1_master_IA_0_0 : entity is "design_1_master_IA_0_0,master_IA,{}";
  attribute downgradeipidentifiedwarnings : string;
  attribute downgradeipidentifiedwarnings of design_1_master_IA_0_0 : entity is "yes";
  attribute ip_definition_source : string;
  attribute ip_definition_source of design_1_master_IA_0_0 : entity is "module_ref";
  attribute x_core_info : string;
  attribute x_core_info of design_1_master_IA_0_0 : entity is "master_IA,Vivado 2019.2";
end design_1_master_IA_0_0;

architecture STRUCTURE of design_1_master_IA_0_0 is
  signal \<const0>\ : STD_LOGIC;
  signal \^i_data\ : STD_LOGIC_VECTOR ( 25 to 25 );
  attribute x_interface_info : string;
  attribute x_interface_info of clk : signal is "xilinx.com:signal:clock:1.0 clk CLK";
  attribute x_interface_parameter : string;
  attribute x_interface_parameter of clk : signal is "XIL_INTERFACENAME clk, FREQ_HZ 200000000, PHASE 0.0, CLK_DOMAIN /clk_wiz_clk_out1, INSERT_VIP 0";
begin
  ap_start <= \^i_data\(25);
  i_data(31) <= \<const0>\;
  i_data(30) <= \<const0>\;
  i_data(29) <= \<const0>\;
  i_data(28) <= \<const0>\;
  i_data(27) <= \<const0>\;
  i_data(26) <= \<const0>\;
  i_data(25) <= \^i_data\(25);
  i_data(24) <= \<const0>\;
  i_data(23) <= \<const0>\;
  i_data(22) <= \<const0>\;
  i_data(21) <= \<const0>\;
  i_data(20) <= \<const0>\;
  i_data(19) <= \<const0>\;
  i_data(18) <= \<const0>\;
  i_data(17) <= \<const0>\;
  i_data(16) <= \<const0>\;
  i_data(15) <= \<const0>\;
  i_data(14) <= \<const0>\;
  i_data(13) <= \<const0>\;
  i_data(12) <= \<const0>\;
  i_data(11) <= \<const0>\;
  i_data(10) <= \<const0>\;
  i_data(9) <= \<const0>\;
  i_data(8) <= \^i_data\(25);
  i_data(7) <= \<const0>\;
  i_data(6) <= \<const0>\;
  i_data(5) <= \<const0>\;
  i_data(4) <= \<const0>\;
  i_data(3) <= \<const0>\;
  i_data(2) <= \<const0>\;
  i_data(1) <= \<const0>\;
  i_data(0) <= \<const0>\;
  i_valid <= \^i_data\(25);
  state_machine_data(0) <= 'Z';
  state_machine_data(1) <= 'Z';
  state_machine_data(2) <= 'Z';
  state_machine_data(3) <= 'Z';
  state_machine_data(4) <= 'Z';
  state_machine_data(5) <= 'Z';
  state_machine_data(6) <= 'Z';
  state_machine_data(7) <= 'Z';
GND: unisim.vcomponents.GND
     port map (
      G => \<const0>\
    );
\LEDS[1]_INST_0\: unisim.vcomponents.LUT6
    generic map(
      INIT => X"0000000000000001"
    )
        port map (
      I0 => o_data(12),
      I1 => o_data(11),
      I2 => o_data(8),
      I3 => o_data(13),
      I4 => o_data(9),
      I5 => o_data(10),
      O => LEDS(1)
    );
U0: entity work.design_1_master_IA_0_0_master_IA
     port map (
      LEDS(0) => LEDS(0),
      btnc => btnc,
      btnl => btnl,
      btnr => btnr,
      i_data(0) => \^i_data\(25),
      o_data(5 downto 0) => o_data(13 downto 8),
      rst_out => rst_out
    );
end STRUCTURE;
