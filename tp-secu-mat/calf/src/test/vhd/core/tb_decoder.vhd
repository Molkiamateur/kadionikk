--
-- File: tb_decoder.vhd
-- Created Date: 2024-10-15 01:58:44 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-23 08:31:58 am
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
use ieee.math_real.all;

library vunit_lib;
context vunit_lib.vunit_context;

library emmk;
use emmk.C_CORE.all;
use emmk.C_TB_CONSTS.all;

entity tb_Decoder is
  generic (runner_cfg : string);
end entity;

architecture tb of tb_Decoder is
	constant N_ADDR_BIT: integer := 16;
	constant N_INSTR_BIT: integer := 32;
	constant N_DATA_BIT: integer := 32;
	constant N_GPR: integer := 32;

  component Decoder
	generic (
		N_ADDR_BIT: integer := 16;
		N_INSTR_BIT: integer := 32;
		N_DATA_BIT: integer := 32;
		N_GPR: integer := 32
	); port(
	  i_pc	  	    : in std_logic_vector(N_ADDR_BIT - 1 downto 0);	
	  i_instr	      : in std_logic_vector(N_INSTR_BIT - 1 downto 0);	

	  o_seq					: out std_logic_vector(N_SEQ_BIT - 1 downto 0);
	  o_alu_uop	    : out std_logic_vector(N_ALU_UOP_BIT - 1 downto 0);		
	  o_alu_signed	: out std_logic;	
	  o_bru_uop			: out std_logic_vector(N_BRU_UOP_BIT - 1 downto 0);
	  o_bru_pc_rel	: out std_logic;						
	  o_mem_rw			: out std_logic;		
	  o_mem_size		: out std_logic_vector(N_MEM_SIZE_BIT - 1 downto 0);		
	  o_mem_signed	: out std_logic;
    o_wb_en       : out std_logic;		
	  o_wb_addr		  : out std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);
    
	  o_rs1			    : out std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			
	  o_rs2			    : out std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);	
	  o_s1_reg      : out std_logic;		
	  o_s1_data     : out std_logic_vector(N_DATA_BIT - 1 downto 0);			
	  o_s2_reg      : out std_logic;		
	  o_s2_data     : out std_logic_vector(N_DATA_BIT - 1 downto 0);			
	  o_s3_reg      : out std_logic;		
	  o_s3_data     : out std_logic_vector(N_DATA_BIT - 1 downto 0));	
  end component;

	signal s_instr : std_logic_vector(N_INSTR_BIT - 1 downto 0);	

	signal s_seq : std_logic_vector(N_SEQ_BIT - 1 downto 0);
	signal s_alu_uop : std_logic_vector(N_ALU_UOP_BIT - 1 downto 0);				
	signal s_alu_signed	: std_logic;	
	signal s_bru_uop : std_logic_vector(N_BRU_UOP_BIT - 1 downto 0);	
	signal s_bru_pc_rel : std_logic;					
	signal s_mem_rw	: std_logic;		
	signal s_mem_size : std_logic_vector(N_MEM_SIZE_BIT - 1 downto 0);		
	signal s_mem_signed	: std_logic;
  signal s_wb_en : std_logic;
	signal s_wb_addr	: std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);	

	signal s_rs1 : std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			
	signal s_rs2 : std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			
	signal s_s1_reg : std_logic;		
	signal s_s1_data : std_logic_vector(N_DATA_BIT - 1 downto 0);			
	signal s_s2_reg  : std_logic;		
	signal s_s2_data : std_logic_vector(N_DATA_BIT - 1 downto 0);			
	signal s_s3_reg  : std_logic;		
	signal s_s3_data : std_logic_vector(N_DATA_BIT - 1 downto 0);

  begin
    m_Decoder: Decoder port map (
      i_pc          => x"4000",
      i_instr		    => s_instr,	

      o_seq         => s_seq,
      o_alu_uop     => s_alu_uop, 		
	    o_alu_signed	=> s_alu_signed,
      o_bru_uop      => s_bru_uop, 		
      o_bru_pc_rel   => s_bru_pc_rel, 		
	    o_mem_rw			=> s_mem_rw,		
	    o_mem_size	  => s_mem_size,	
	    o_mem_signed	=> s_mem_signed,
      o_wb_en       => s_wb_en,
      o_wb_addr 	  => s_wb_addr,

      o_rs1         => s_rs1,
      o_rs2         => s_rs2,      
	    o_s1_reg      => s_s1_reg,
	    o_s1_data     => s_s1_data,			
	    o_s2_reg      => s_s2_reg,
	    o_s2_data     => s_s2_data,			
	    o_s3_reg      => s_s3_reg,
	    o_s3_data     => s_s3_data
    );

    main: process
    begin
      -- TEST: START
      test_runner_setup(runner, runner_cfg);
      wait for PERIOD;

      -- TEST: BODY
      -- TEST: T1
      s_instr <= "0000000" & "00000" & "00000" & "000" & "00000" & "0110011";
      wait for PERIOD;

      assert (s_seq = C_SEQ_ALU) report "[s_seq] Error T1: add x0, x0, x0";
      assert (s_alu_uop = C_ALU_ADD) report "[ALU_uop] Error T1: add x0, x0, x0";
      assert (s_alu_signed = '0') report "[ALU_signed] Error T1: add x0, x0, x0";
      assert (s_bru_uop = C_BRU_X) report "[BRU_uop] Error T1: add x0, x0, x0";
      assert (s_bru_pc_rel = '0') report "[BRU_pc_rel] Error T1: add x0, x0, x0";
      assert (s_mem_rw = '0') report "[MEM_rw] Error T1: add x0, x0, x0";
      assert (s_mem_size = C_MEM_X) report "[MEM_size] Error T1: add x0, x0, x0";
      assert (s_mem_signed = '0') report "[MEM_signed] Error T1: add x0, x0, x0";
      assert (s_wb_en = '1') report "[wb_en] Error T1: add x0, x0, x0";
      assert (s_wb_addr = "00000") report "[rd] Error T1: add x0, x0, x0";
      assert (s_rs1 = "00000") report "[rs1] Error T1: add x0, x0, x0";
      assert (s_rs2 = "00000") report "[rs2] Error T1: add x0, x0, x0";
      assert (s_s1_reg = '1') report "[s1_reg] Error T1: add x0, x0, x0";
      assert (s_s1_data = x"00000000") report "[s1_data] Error T1: add x0, x0, x0";
      assert (s_s2_reg = '1') report "[s2_reg] Error T1: add x0, x0, x0";
      assert (s_s2_data = x"00000000") report "[s2_data] Error T1: add x0, x0, x0";
      assert (s_s3_reg = '0') report "[s3_reg] Error T1: add x0, x0, x0";
      assert (s_s3_data = x"00000000") report "[s3_data] Error T1: add x0, x0, x0";
      wait for PERIOD;

      -- TEST: T2
      s_instr <= "0000000" & "00000" & "00100" & "000" & "00100" & "0110011";
      wait for PERIOD;

      assert (s_seq = C_SEQ_ALU) report "[s_seq] Error T2: add x4, x4, x0";
      assert (s_alu_uop = C_ALU_ADD) report "[ALU_uop] Error T2: add x4, x4, x0";
      assert (s_alu_signed = '0') report "[ALU_signed] Error T2: add x4, x4, x0";
      assert (s_bru_uop = C_BRU_X) report "[BRU_uop] Error T2: add x4, x4, x0";
      assert (s_bru_pc_rel = '0') report "[BRU_pc_rel] Error T2: add x4, x4, x0";
      assert (s_mem_rw = '0') report "[MEM_rw] Error T2: add x4, x4, x0";
      assert (s_mem_size = C_MEM_X) report "[MEM_size] Error T2: add x4, x4, x0";
      assert (s_mem_signed = '0') report "[MEM_signed] Error T2: add x4, x4, x0";
      assert (s_wb_en = '1') report "[wb_en] Error T2: add x4, x4, x0";
      assert (s_wb_addr = "00100") report "[rd] Error T2: add x4, x4, x0";
      assert (s_rs1 = "00100") report "[rs1] Error T2: add x4, x4, x0";
      assert (s_rs2 = "00000") report "[rs2] Error T2: add x4, x4, x0";
      assert (s_s1_reg = '1') report "[s1_reg] Error T2: add x4, x4, x0";
      assert (s_s1_data = x"00000000") report "[s1_data] Error T2: add x4, x4, x0";
      assert (s_s2_reg = '1') report "[s2_reg] Error T2: add x4, x4, x0";
      assert (s_s2_data = x"00000000") report "[s2_data] Error T2: add x4, x4, x0";
      assert (s_s3_reg = '0') report "[s3_reg] Error T2: add x4, x4, x0";
      assert (s_s3_data = x"00000000") report "[s3_data] Error T2: add x4, x4, x0";
      wait for PERIOD;

      -- TEST: T3
      s_instr <= "0000000" & "00010" & "00001" & "100" & "00011" & "0110011";
      wait for PERIOD;

      assert (s_seq = C_SEQ_ALU) report "[s_seq] Error T3: xor x3, x1, x2";
      assert (s_alu_uop = C_ALU_XOR) report "[ALU_uop] Error T3: xor x3, x1, x2";
      assert (s_alu_signed = '0') report "[ALU_signed] Error T3: xor x3, x1, x2";
      assert (s_bru_uop = C_BRU_X) report "[BRU_uop] Error T3: xor x3, x1, x2";
      assert (s_bru_pc_rel = '0') report "[BRU_pc_rel] Error T3: xor x3, x1, x2";
      assert (s_mem_rw = '0') report "[MEM_rw] Error T3: xor x3, x1, x2";
      assert (s_mem_size = C_MEM_X) report "[MEM_size] Error T3: xor x3, x1, x2";
      assert (s_mem_signed = '0') report "[MEM_signed] Error T3: xor x3, x1, x2";
      assert (s_wb_en = '1') report "[wb_en] Error T3: xor x3, x1, x2";
      assert (s_wb_addr = "00011") report "[rd] Error T3: xor x3, x1, x2";
      assert (s_rs1 = "00001") report "[rs1] Error T3: xor x3, x1, x2";
      assert (s_rs2 = "00010") report "[rs2] Error T3: xor x3, x1, x2";
      assert (s_s1_reg = '1') report "[s1_reg] Error T3: xor x3, x1, x2";
      assert (s_s1_data = x"00000000") report "[s1_data] Error T3: xor x3, x1, x2";
      assert (s_s2_reg = '1') report "[s2_reg] Error T3: xor x3, x1, x2";
      assert (s_s2_data = x"00000000") report "[s2_data] Error T3: xor x3, x1, x2";
      assert (s_s3_reg = '0') report "[s3_reg] Error T3: xor x3, x1, x2";
      assert (s_s3_data = x"00000000") report "[s3_data] Error T3: xor x3, x1, x2";
      wait for PERIOD;

      -- TEST: END
      wait for PERIOD;
--      assert true report "End of the simulation.";
      test_runner_cleanup(runner); -- Simulation ends here
    end process;
end tb;