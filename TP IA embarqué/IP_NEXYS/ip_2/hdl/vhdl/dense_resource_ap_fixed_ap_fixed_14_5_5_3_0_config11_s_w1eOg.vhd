-- ==============================================================
-- Vivado(TM) HLS - High-Level Synthesis from C, C++ and SystemC v2019.2.1 (64-bit)
-- Copyright 1986-2019 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config11_s_w1eOg_rom is 
    generic(
             DWIDTH     : integer := 9; 
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


architecture rtl of dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config11_s_w1eOg_rom is 

signal addr0_tmp : std_logic_vector(AWIDTH-1 downto 0); 
type mem_array is array (0 to MEM_SIZE-1) of std_logic_vector (DWIDTH-1 downto 0); 
signal mem : mem_array := (
    0 => "101110001", 1 => "000000000", 2 => "010010000", 3 to 4=> "000000000", 
    5 => "101110101", 6 to 12=> "000000000", 13 => "010100011", 14 => "000000000", 
    15 => "001111111", 16 => "101010001", 17 => "101001110", 18 => "000000000", 
    19 => "101101111", 20 to 27=> "000000000", 28 => "010010100", 29 => "000000000", 
    30 => "101111111", 31 => "000000000", 32 => "101001010", 33 to 34=> "000000000", 
    35 => "010100110", 36 => "000000000", 37 => "101101111", 38 => "101010011", 
    39 to 40=> "000000000", 41 => "010011111", 42 to 45=> "000000000", 46 => "101110101", 
    47 => "010001101", 48 to 49=> "000000000" );

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

entity dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config11_s_w1eOg is
    generic (
        DataWidth : INTEGER := 9;
        AddressRange : INTEGER := 50;
        AddressWidth : INTEGER := 6);
    port (
        reset : IN STD_LOGIC;
        clk : IN STD_LOGIC;
        address0 : IN STD_LOGIC_VECTOR(AddressWidth - 1 DOWNTO 0);
        ce0 : IN STD_LOGIC;
        q0 : OUT STD_LOGIC_VECTOR(DataWidth - 1 DOWNTO 0));
end entity;

architecture arch of dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config11_s_w1eOg is
    component dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config11_s_w1eOg_rom is
        port (
            clk : IN STD_LOGIC;
            addr0 : IN STD_LOGIC_VECTOR;
            ce0 : IN STD_LOGIC;
            q0 : OUT STD_LOGIC_VECTOR);
    end component;



begin
    dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config11_s_w1eOg_rom_U :  component dense_resource_ap_fixed_ap_fixed_14_5_5_3_0_config11_s_w1eOg_rom
    port map (
        clk => clk,
        addr0 => address0,
        ce0 => ce0,
        q0 => q0);

end architecture;


