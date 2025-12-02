--
-- File: consts.vhd
-- Created Date: 2024-10-15 04:30:14 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-23 05:09:22 pm
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

package C_IO is  
	constant C_CMD_IDLE : std_logic_vector(7 downto 0) := x"00";
	constant C_CMD_INIT : std_logic_vector(7 downto 0) := x"01";
	constant C_CMD_SEND : std_logic_vector(7 downto 0) := x"02";
	constant C_CMD_DUMP : std_logic_vector(7 downto 0) := x"03";
end package C_IO;
