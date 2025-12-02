--
-- File: consts.vhd
-- Created Date: 2024-10-15 04:30:14 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-22 08:53:59 am
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

package C_CORE is  
  constant N_SEQ_BIT      : integer := 2;
	constant C_SEQ_X        : std_logic_vector(N_SEQ_BIT - 1 downto 0) := "00";
	constant C_SEQ_ALU      : std_logic_vector(N_SEQ_BIT - 1 downto 0) := "00";
	constant C_SEQ_BRU      : std_logic_vector(N_SEQ_BIT - 1 downto 0) := "01";
	constant C_SEQ_MEM      : std_logic_vector(N_SEQ_BIT - 1 downto 0) := "10";
  
  constant N_ALU_UOP_BIT  : integer := 3;
	constant C_ALU_X        : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0) := "000";
	constant C_ALU_ADD      : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0) := "000";
	constant C_ALU_SLL      : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0) := "001";
  constant C_ALU_SLT      : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0) := "010";
  constant C_ALU_XOR      : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0) := "100";
  constant C_ALU_SR       : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0) := "101";
  constant C_ALU_OR       : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0) := "110";
  constant C_ALU_AND      : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0) := "111";

  constant N_BRU_UOP_BIT  : integer := 3;
  constant C_BRU_X        : std_logic_vector(N_BRU_UOP_BIT - 1 downto 0) := "000";
  constant C_BRU_BEQ      : std_logic_vector(N_BRU_UOP_BIT - 1 downto 0) := "000";
  constant C_BRU_BNE      : std_logic_vector(N_BRU_UOP_BIT - 1 downto 0) := "001";
  constant C_BRU_J        : std_logic_vector(N_BRU_UOP_BIT - 1 downto 0) := "010";
  constant C_BRU_BLT      : std_logic_vector(N_BRU_UOP_BIT - 1 downto 0) := "100";
  constant C_BRU_BGE      : std_logic_vector(N_BRU_UOP_BIT - 1 downto 0) := "101";
  constant C_BRU_BLTU     : std_logic_vector(N_BRU_UOP_BIT - 1 downto 0) := "110";
  constant C_BRU_BGEU     : std_logic_vector(N_BRU_UOP_BIT - 1 downto 0) := "111";

  constant N_MEM_SIZE_BIT : integer := 2;
  constant C_MEM_X        : std_logic_vector(N_MEM_SIZE_BIT - 1 downto 0) := "00";
  constant C_MEM_B        : std_logic_vector(N_MEM_SIZE_BIT - 1 downto 0) := "00";
  constant C_MEM_H        : std_logic_vector(N_MEM_SIZE_BIT - 1 downto 0) := "01";
  constant C_MEM_W        : std_logic_vector(N_MEM_SIZE_BIT - 1 downto 0) := "10";
end package C_CORE;
