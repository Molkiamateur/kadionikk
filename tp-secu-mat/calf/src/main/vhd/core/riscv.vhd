--
-- File: riscv.vhd
-- Created Date: 2024-10-15 04:30:14 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-22 09:26:19 am
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

package C_RISCV is
  -- ******************************
  --            OPCODE
  -- ******************************
	constant OPCODE_LUI     : std_logic_vector(6 downto 0) := "0110111";
	constant OPCODE_AUIPC   : std_logic_vector(6 downto 0) := "0010111";
	constant OPCODE_JAL  		: std_logic_vector(6 downto 0) := "1101111";
	constant OPCODE_JALR 		: std_logic_vector(6 downto 0) := "1100111";
	constant OPCODE_BRANCH	: std_logic_vector(6 downto 0) := "1100011";
	constant OPCODE_LOAD  	: std_logic_vector(6 downto 0) := "0000011";
	constant OPCODE_STORE  	: std_logic_vector(6 downto 0) := "0100011";
	constant OPCODE_OP_IMM  : std_logic_vector(6 downto 0) := "0010011";
	constant OPCODE_OP      : std_logic_vector(6 downto 0) := "0110011";

  -- ******************************
  --            FUNC3
  -- ******************************
	constant FUNC3_JALR    	: std_logic_vector(2 downto 0) := "000";

	constant FUNC3_BEQ    	: std_logic_vector(2 downto 0) := "000";
	constant FUNC3_BNE    	: std_logic_vector(2 downto 0) := "001";
	constant FUNC3_BLT    	: std_logic_vector(2 downto 0) := "100";
	constant FUNC3_BGE    	: std_logic_vector(2 downto 0) := "101";
	constant FUNC3_BLTU   	: std_logic_vector(2 downto 0) := "110";
	constant FUNC3_BGEU   	: std_logic_vector(2 downto 0) := "111";

	constant FUNC3_LB      	: std_logic_vector(2 downto 0) := "000";
	constant FUNC3_LH      	: std_logic_vector(2 downto 0) := "001";
	constant FUNC3_LW      	: std_logic_vector(2 downto 0) := "010";
	constant FUNC3_LBU      : std_logic_vector(2 downto 0) := "100";
	constant FUNC3_LHU     	: std_logic_vector(2 downto 0) := "101";

	constant FUNC3_SB      	: std_logic_vector(2 downto 0) := "000";
	constant FUNC3_SH      	: std_logic_vector(2 downto 0) := "001";
	constant FUNC3_SW      	: std_logic_vector(2 downto 0) := "010";

	constant FUNC3_ADD      : std_logic_vector(2 downto 0) := "000";
	constant FUNC3_SLL      : std_logic_vector(2 downto 0) := "001";
	constant FUNC3_SLT      : std_logic_vector(2 downto 0) := "010";
	constant FUNC3_SLTU     : std_logic_vector(2 downto 0) := "011";
	constant FUNC3_XOR      : std_logic_vector(2 downto 0) := "100";
	constant FUNC3_SR      	: std_logic_vector(2 downto 0) := "101";
	constant FUNC3_OR      	: std_logic_vector(2 downto 0) := "110";
	constant FUNC3_AND     	: std_logic_vector(2 downto 0) := "111";

  -- ******************************
  --            FUNC7
  -- ******************************
	constant FUNC7_ADD     	: std_logic_vector(6 downto 0) := "0000000";
	constant FUNC7_SUB     	: std_logic_vector(6 downto 0) := "0100000";
	constant FUNC7_SRL     	: std_logic_vector(6 downto 0) := "0000000";
	constant FUNC7_SRA     	: std_logic_vector(6 downto 0) := "0100000";
end package C_RISCV;
