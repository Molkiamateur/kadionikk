----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 11/14/2025 03:52:26 PM
-- Design Name: 
-- Module Name: master_IA - Behavioral
-- Project Name: 
-- Target Devices: 
-- Tool Versions: 
-- Description: 
-- 
-- Dependencies: 
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
-- 
----------------------------------------------------------------------------------


library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx leaf cells in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity master_IA is
    Port ( clk : in STD_LOGIC;
           btnr : in STD_LOGIC;
           btnc : in STD_LOGIC;
           btnl : in STD_LOGIC;
           LEDS : out STD_LOGIC_VECTOR(1 downto 0);
           ap_done : in STD_LOGIC;
           ap_ready : in STD_LOGIC;
           ap_idle : in STD_LOGIC;
           o_valid : in STD_LOGIC;
           o_data : in STD_LOGIC_VECTOR (13 downto 0);
           state_machine_data : out STD_LOGIC_VECTOR (7 downto 0);
           rst_out : out STD_LOGIC;
           ap_start : out STD_LOGIC;
           i_data : out STD_LOGIC_VECTOR (31 downto 0);
           i_valid : out STD_LOGIC);
end master_IA;

architecture Behavioral of master_IA is

signal input_data : STD_LOGIC_VECTOR (31 downto 0) := "00000010000000000000000100000000";

begin

    btn : process(btnl, btnc, btnr)
    begin
        if btnc = '1' then
            i_data <= input_data;
            i_valid <= '1';
            ap_start <= '1';
            
        elsif btnl = '1' then
            rst_out <= '1';
            
        elsif btnr = '1' then
            i_valid <= '0';
            rst_out <= '0';
            ap_start <= '0';
            i_data <= "00000000000000000000000000000000";
        end if;
    end process;
    
    res : process(ap_ready)
    begin
        if o_data >= "00000100000000" then
            LEDS <= "01";
        else
            LEDS <= "10";
        end if;
    end process;

end Behavioral;
