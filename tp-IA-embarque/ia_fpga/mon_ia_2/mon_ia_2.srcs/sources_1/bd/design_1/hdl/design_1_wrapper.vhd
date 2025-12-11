--Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
----------------------------------------------------------------------------------
--Tool Version: Vivado v.2019.2 (lin64) Build 2708876 Wed Nov  6 21:39:14 MST 2019
--Date        : Fri Nov 14 16:43:10 2025
--Host        : fedora running 64-bit unknown
--Command     : generate_target design_1_wrapper.bd
--Design      : design_1_wrapper
--Purpose     : IP block netlist
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
entity design_1_wrapper is
  port (
    BTNC : in STD_LOGIC;
    BTNL : in STD_LOGIC;
    BTNR : in STD_LOGIC;
    LEDS : out STD_LOGIC_VECTOR ( 1 downto 0 );
    clk : in STD_LOGIC
  );
end design_1_wrapper;

architecture STRUCTURE of design_1_wrapper is
  component design_1 is
  port (
    BTNR : in STD_LOGIC;
    BTNC : in STD_LOGIC;
    BTNL : in STD_LOGIC;
    clk : in STD_LOGIC;
    LEDS : out STD_LOGIC_VECTOR ( 1 downto 0 )
  );
  end component design_1;
begin
design_1_i: component design_1
     port map (
      BTNC => BTNC,
      BTNL => BTNL,
      BTNR => BTNR,
      LEDS(1 downto 0) => LEDS(1 downto 0),
      clk => clk
    );
end STRUCTURE;
