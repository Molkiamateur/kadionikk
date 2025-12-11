-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_s_outbkb_rom is 
    generic(
             DWIDTH     : integer := 6; 
             AWIDTH     : integer := 7; 
             MEM_SIZE    : integer := 100
    ); 
    port (
          addr0      : in std_logic_vector(AWIDTH-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DWIDTH-1 downto 0);
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_s_outbkb_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 to 1=> "000000", 2 to 3=> "000001", 4 to 5=> "000010", 6 to 7=> "000011", 8 to 9=> "000100", 
    10 to 11=> "000101", 12 to 13=> "000110", 14 to 15=> "000111", 16 to 17=> "001000", 18 to 19=> "001001", 
    20 to 21=> "001010", 22 to 23=> "001011", 24 to 25=> "001100", 26 to 27=> "001101", 28 to 29=> "001110", 
    30 to 31=> "001111", 32 to 33=> "010000", 34 to 35=> "010001", 36 to 37=> "010010", 38 to 39=> "010011", 
    40 to 41=> "010100", 42 to 43=> "010101", 44 to 45=> "010110", 46 to 47=> "010111", 48 to 49=> "011000", 
    50 to 51=> "011001", 52 to 53=> "011010", 54 to 55=> "011011", 56 to 57=> "011100", 58 to 59=> "011101", 
    60 to 61=> "011110", 62 to 63=> "011111", 64 to 65=> "100000", 66 to 67=> "100001", 68 to 69=> "100010", 
    70 to 71=> "100011", 72 to 73=> "100100", 74 to 75=> "100101", 76 to 77=> "100110", 78 to 79=> "100111", 
    80 to 81=> "101000", 82 to 83=> "101001", 84 to 85=> "101010", 86 to 87=> "101011", 88 to 89=> "101100", 
    90 to 91=> "101101", 92 to 93=> "101110", 94 to 95=> "101111", 96 to 97=> "110000", 98 to 99=> "110001" );

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

entity dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_s_outbkb is
    generic (
        DataWidth : INTEGER := 6;
        AddressRange : INTEGER := 100;
        AddressWidth : INTEGER := 7);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_s_outbkb is
    component dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_s_outbkb_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_s_outbkb_rom_U :  component dense_resource_ap_fixed_ap_fixed_16_6_5_3_0_config2_s_outbkb_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


