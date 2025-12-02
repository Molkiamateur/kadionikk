--
-- File: tb_consts.vhd
-- Created Date: 2024-10-15 04:30:14 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-22 04:03:45 pm
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

package C_TB_CONSTS is
  constant PERIOD : time := 20 ns;
	constant HALF_PERIOD : time := PERIOD / 2;
	constant QUARTER_PERIOD : time := PERIOD / 4;
end package C_TB_CONSTS;
