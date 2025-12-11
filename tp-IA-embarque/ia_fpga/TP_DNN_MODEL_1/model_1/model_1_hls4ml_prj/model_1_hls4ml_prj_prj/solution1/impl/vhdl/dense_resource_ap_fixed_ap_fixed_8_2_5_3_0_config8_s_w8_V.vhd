-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_rom is 
    generic(
             DWIDTH     : integer := 6; 
             AWIDTH     : integer := 6; 
             MEM_SIZE    : integer := 50
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "110011", 1 => "011110", 2 => "111111", 3 => "100001", 4 to 5=> "100101", 
    6 => "110000", 7 => "100010", 8 => "110001", 9 => "100001", 10 => "101111", 
    11 => "101100", 12 => "000100", 13 => "100000", 14 => "110100", 15 => "010000", 
    16 => "011110", 17 => "000110", 18 => "001010", 19 => "000001", 20 => "101011", 
    21 => "110010", 22 => "110001", 23 => "001101", 24 => "001110", 25 => "101001", 
    26 to 27=> "101110", 28 => "010111", 29 => "110011", 30 => "000100", 31 => "001010", 
    32 => "110100", 33 => "111101", 34 => "010100", 35 => "110001", 36 => "000010", 
    37 => "010100", 38 => "001011", 39 => "100111", 40 => "010111", 41 => "000100", 
    42 => "001101", 43 => "001010", 44 => "101000", 45 => "100011", 46 => "110001", 
    47 => "110000", 48 => "110101", 49 => "000101" );

attribute syn_rom_style : string;
attribute syn_rom_style of mem : signal is "select_rom";
attribute ROM_STYLE : string;
attribute ROM_STYLE of mem : signal is "distributed";

begin 


memory_access_guard_0: process (addr0) 
begin
      addr0_tmp <= addr0;
--synthesis translate_off
      if (CONV_INTEGER(addr0) > mem_size-1) then
           addr0_tmp <= (others => '0');
      else 
           addr0_tmp <= addr0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(addr0_tmp)); 
        end if;
    end if;
end process;

end rtl;

Library IEEE;
use IEEE.std_logic_1164.all;

entity dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V is
    generic (
        DataWidth : INTEGER := 6;
        AddressRange : INTEGER := 50;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V is
    component dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_rom_U :  component dense_resource_ap_fixed_ap_fixed_8_2_5_3_0_config8_s_w8_V_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


