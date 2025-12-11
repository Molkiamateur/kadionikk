----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date: 11/14/2025 04:41:47 PM
-- Design Name: 
-- Module Name: tb_ia - Behavioral
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

entity tb_ia is
--  Port ( );
end tb_ia;

architecture Behavioral of tb_ia is

component design_1_wrapper is
  port (
    BTNC : in STD_LOGIC;
    BTNL : in STD_LOGIC;
    BTNR : in STD_LOGIC;
    LEDS : out STD_LOGIC_VECTOR ( 1 downto 0 );
    clk : in STD_LOGIC
  );
end component;

signal s_BTNC : STD_LOGIC;
signal s_BTNL : STD_LOGIC;
signal s_BTNR : STD_LOGIC;
signal s_LEDS : STD_LOGIC_VECTOR ( 1 downto 0 );
signal clk : STD_LOGIC;

constant clock_period: time := 10 ns;
signal stop_the_clock: boolean;

begin
    uut : design_1_wrapper port map(
                    BTNC => s_BTNC,
                    BTNL => s_BTNL,
                    BTNR => s_BTNR,
                    LEDS => s_LEDS,
                    clk  => clk);
    
    stimulus: process
    begin
        s_BTNC <= '0';
        s_BTNL <= '0';
        s_BTNR <= '0';
        
        wait for clock_period*3;
        s_BTNR  <= '1';
        
        wait for clock_period*3;
        s_BTNR  <= '0';
        
        wait for clock_period;
        s_BTNL <= '1';
        
        wait for clock_period*2;
        s_BTNL <= '0';
        
        wait for clock_period*2;
        s_BTNC <= '1';
        
        wait for clock_period*20;
        s_BTNC <= '0';
        
        wait;
    end process;
    
    clocking: process
    begin
        while not stop_the_clock loop
            clk <= '0', '1' after clock_period / 2;
            wait for clock_period;
        end loop;
        wait;
    end process;
end Behavioral;
