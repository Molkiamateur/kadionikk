--
-- File: addr.vhd
-- Created Date: 2024-10-15 04:30:14 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-22 01:33:46 pm
-- Modified By: Mathieu Escouteloup
-- Email: mathieu.escouteloup@enseirb-matmeca.fr
-- -----
-- License: See LICENSE.md
-- Copyright (c) 2025 ENSEIRB-MATMECA
-- -----
-- Description: 
--

library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;
use ieee.numeric_std.all;

package C_ADDR is  
  constant N_GPIO8_BIT    : integer := 4;
	constant C_GPIO8_X      : std_logic_vector(N_GPIO8_BIT - 1 downto 0) := "0000";
	constant C_GPIO8_ENO    : std_logic_vector(N_GPIO8_BIT - 1 downto 0) := "0000";
	constant C_GPIO8_IN     : std_logic_vector(N_GPIO8_BIT - 1 downto 0) := "0100";
	constant C_GPIO8_OUT    : std_logic_vector(N_GPIO8_BIT - 1 downto 0) := "1000";

  constant N_UART_BIT     : integer := 5;
	constant C_UART_X       : std_logic_vector(N_UART_BIT - 1 downto 0) := "00000";
	constant C_UART_CONFIG  : std_logic_vector(N_UART_BIT - 1 downto 0) := "00000";
	constant C_UART_NCYCLE  : std_logic_vector(N_UART_BIT - 1 downto 0) := "00100";
	constant C_UART_STATUS  : std_logic_vector(N_UART_BIT - 1 downto 0) := "01000";
	constant C_UART_RX      : std_logic_vector(N_UART_BIT - 1 downto 0) := "10000";
	constant C_UART_TX      : std_logic_vector(N_UART_BIT - 1 downto 0) := "10100";
end package C_ADDR;
