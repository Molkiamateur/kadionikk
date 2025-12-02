--
-- File: decoder.vhd
-- Created Date: 2024-10-15 04:35:50 pm
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-23 09:34:09 am
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

library emmk;
use emmk.C_RISCV.all;
use emmk.C_CORE.all;

entity Decoder is
	generic (
		N_ADDR_BIT: integer := 32;
		N_INSTR_BIT: integer := 32;
		N_DATA_BIT: integer := 32;
		N_GPR: integer := 32
	);
	port (
		i_pc	  			: in std_logic_vector(N_ADDR_BIT - 1 downto 0);	
		i_instr	  		: in std_logic_vector(N_INSTR_BIT - 1 downto 0);	

		o_seq					: out std_logic_vector(N_SEQ_BIT - 1 downto 0);

		o_alu_uop			: out std_logic_vector(N_ALU_UOP_BIT - 1 downto 0);		
		o_alu_signed	: out std_logic;	
		o_bru_uop			: out std_logic_vector(N_BRU_UOP_BIT - 1 downto 0);
		o_bru_pc_rel	: out std_logic;					
		o_mem_rw			: out std_logic;		
		o_mem_size		: out std_logic_vector(N_MEM_SIZE_BIT - 1 downto 0);		
		o_mem_signed	: out std_logic;		
		o_wb_en				: out std_logic;
		o_wb_addr			: out std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			

		o_rs1					: out std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			
		o_rs2					: out std_logic_vector((integer(ceil(log2(real(N_GPR)))) - 1) downto 0);			
		o_s1_reg  		: out std_logic;		
		o_s1_data 		: out std_logic_vector(N_DATA_BIT - 1 downto 0);			
		o_s2_reg  		: out std_logic;		
		o_s2_data 		: out std_logic_vector(N_DATA_BIT - 1 downto 0);	
		o_s3_reg  		: out std_logic;		
		o_s3_data 		: out std_logic_vector(N_DATA_BIT - 1 downto 0)	
	);	
end entity Decoder;

architecture Decoder_arch of Decoder is
	begin
    -- Direct affectation
    o_rs1 <= i_instr((15 + integer(ceil(log2(real(N_GPR)))) - 1) downto 15); 
    o_rs2 <= i_instr((20 + integer(ceil(log2(real(N_GPR)))) - 1) downto 20); 
    o_wb_addr <= i_instr((7 + integer(ceil(log2(real(N_GPR)))) - 1) downto 7); 

		-- Combinatorial Logic
		comb1 : process (i_instr, i_pc)
			begin
			  case i_instr(6 downto 0) is
			  	when OPCODE_LUI =>			-- LUI
						o_seq <= C_SEQ_ALU;

			  		o_alu_uop <= C_ALU_ADD;
			  		o_alu_signed <= '0';
			  		o_bru_uop <= C_BRU_X;
						o_bru_pc_rel	<= '0';				
			  		o_mem_rw <= '0';
			  		o_mem_size <= C_MEM_X;
			  		o_mem_signed <= '0';
						o_wb_en <= '1';

						o_s1_reg <= '0';		
						o_s1_data <= (others => '0');			
						o_s2_reg <= '0';		
						o_s2_data <= i_instr(31 downto 12) & x"000";
						o_s3_reg <= '0';		
						o_s3_data <= (others => '0');		
			  	when OPCODE_AUIPC =>		-- AUIPC
						o_seq <= C_SEQ_ALU;

			  		o_alu_uop <= C_ALU_ADD;
			  		o_alu_signed <= '0';
			  		o_bru_uop <= C_BRU_X;
						o_bru_pc_rel	<= '0';				
			  		o_mem_rw <= '0';
			  		o_mem_size <= C_MEM_X;
			  		o_mem_signed <= '0';
						o_wb_en <= '1';

						o_s1_reg <= '0';		
						o_s1_data <= std_logic_vector(resize(unsigned(i_pc), N_DATA_BIT));			
						o_s2_reg <= '0';		
						o_s2_data <= i_instr(31 downto 12) & x"000";
						o_s3_reg <= '0';		
						o_s3_data <= (others => '0');	
			  	when OPCODE_JAL =>		-- JAL
						o_seq <= C_SEQ_BRU;

			  		o_alu_uop <= C_ALU_ADD;
			  		o_alu_signed <= '0';
			  		o_bru_uop <= C_BRU_J;
						o_bru_pc_rel	<= '1';				
			  		o_mem_rw <= '0';
			  		o_mem_size <= C_MEM_X;
			  		o_mem_signed <= '0';
						o_wb_en <= '1';

						o_s1_reg <= '0';		
						o_s1_data <= (others => '0');			
						o_s2_reg <= '0';		
						o_s2_data <= (others => '0');
						o_s3_reg <= '0';		
						o_s3_data(20 downto 0) <= i_instr(31) & i_instr(19 downto 12) & i_instr(20) & i_instr(30 downto 21) & '0' ;
						o_s3_data(31 downto 21) <= (others => i_instr(31));
			  	when OPCODE_JALR =>		-- JALR
						if (i_instr(14 downto 12) = FUNC3_JALR) then
							o_seq <= C_SEQ_BRU;
							o_wb_en <= '1';
						else
							o_seq <= C_SEQ_ALU;
							o_wb_en <= '0';
						end if;

			  		o_alu_uop <= C_ALU_ADD;
			  		o_alu_signed <= '0';
			  		o_bru_uop <= C_BRU_J;
						o_bru_pc_rel	<= '0';
			  		o_mem_rw <= '0';
			  		o_mem_size <= C_MEM_X;
			  		o_mem_signed <= '0';

						o_s1_reg <= '1';		
						o_s1_data <= (others => '0');			
						o_s2_reg <= '0';		
						o_s2_data(N_DATA_BIT - 1 downto 12) <= (others => i_instr(31));
						o_s2_data(11 downto 0) <= i_instr(31 downto 25) & i_instr(11 downto 7);
						o_s3_reg <= '0';		
						o_s3_data <= (others => '0');	
			  	when OPCODE_BRANCH =>		-- BRANCH
						o_wb_en <= '0';

			  		case i_instr(14 downto 12) is
			  			when FUNC3_BEQ =>		-- BEQ
								o_seq <= C_SEQ_BRU;
			  				o_bru_uop <= C_BRU_BEQ;
			  			when FUNC3_BNE =>		-- BNE
								o_seq <= C_SEQ_BRU;
			  				o_bru_uop <= C_BRU_BNE;
			  			when FUNC3_BLT =>		-- BLT
								o_seq <= C_SEQ_BRU;
			  				o_bru_uop <= C_BRU_BLT;
			  			when FUNC3_BGE =>		-- BGE
								o_seq <= C_SEQ_BRU;
			  				o_bru_uop <= C_BRU_BGE;
			  			when FUNC3_BLTU =>	-- BLTU
								o_seq <= C_SEQ_BRU;
			  				o_bru_uop <= C_BRU_BLTU;
			  			when FUNC3_BGEU =>	-- BGEU
								o_seq <= C_SEQ_BRU;
			  				o_bru_uop <= C_BRU_BGEU;
							when others =>
								o_seq <= C_SEQ_ALU;
			  				o_bru_uop <= C_BRU_X;
			  		end case;

			  		o_alu_uop <= C_ALU_ADD;
			  		o_alu_signed <= '0';
						o_bru_pc_rel	<= '1';
			  		o_mem_rw <= '0';
			  		o_mem_size <= C_MEM_X;
			  		o_mem_signed <= '0';

						o_s1_reg <= '1';		
						o_s1_data <= (others => '0');			
						o_s2_reg <= '1';		
						o_s2_data <= (others => '0');	
						o_s3_reg <= '0';		
						o_s3_data(N_DATA_BIT - 1 downto 13) <= (others => i_instr(31));
						o_s3_data(12 downto 0) <= i_instr(31) & i_instr(7) & i_instr(30 downto 25) & i_instr(11 downto 8) & '0';
			  	when OPCODE_LOAD =>			-- LOAD		
						o_seq <= C_SEQ_MEM;
	
						o_alu_uop <= C_ALU_ADD;	
			  		o_alu_signed <= '0';
			  		o_bru_uop <= C_BRU_X;
						o_bru_pc_rel	<= '0';
			  		o_mem_rw <= '0';

						o_wb_en <= '1';
						o_s1_reg <= '1';		
						o_s1_data <= (others => '0');			
						o_s2_reg <= '0';		
						o_s2_data(N_DATA_BIT - 1 downto 12) <= (others => i_instr(31));
						o_s2_data(11 downto 0) <= i_instr(31 downto 20);
						o_s3_reg <= '0';		
						o_s3_data <= (others => '0');	

						case i_instr(14 downto 12) is
							when FUNC3_LB =>
								o_mem_size <= C_MEM_B;
			  				o_mem_signed <= '1';
							when FUNC3_LBU =>
								o_mem_size <= C_MEM_B;
			  				o_mem_signed <= '0';
							when FUNC3_LH =>
								o_mem_size <= C_MEM_H;
			  				o_mem_signed <= '1';
							when FUNC3_LHU =>
								o_mem_size <= C_MEM_H;
			  				o_mem_signed <= '0';
							when FUNC3_LW =>
								o_mem_size <= C_MEM_W;
			  				o_mem_signed <= '1';
							when others =>
								o_mem_size <= C_MEM_W;
			  				o_mem_signed <= '1';
						end case;
			  	when OPCODE_STORE =>			-- STORE		
						o_seq <= C_SEQ_MEM;	
	
						o_alu_uop <= C_ALU_ADD;	
			  		o_alu_signed <= '0';
			  		o_bru_uop <= C_BRU_X;
						o_bru_pc_rel	<= '0';
			  		o_mem_rw <= '1';
			  		o_mem_signed <= '0';

						o_wb_en <= '0';
						o_s1_reg <= '1';		
						o_s1_data <= (others => '0');			
						o_s2_reg <= '0';		
						o_s2_data(N_DATA_BIT - 1 downto 12) <= (others => i_instr(31));
						o_s2_data(11 downto 0) <= i_instr(31 downto 25) & i_instr(11 downto 7);
						o_s3_reg <= '1';		
						o_s3_data <= (others => '0');	

						case i_instr(14 downto 12) is
							when FUNC3_SB =>
								o_mem_size <= C_MEM_B;
							when FUNC3_SH =>
								o_mem_size <= C_MEM_H;
							when FUNC3_SW =>
								o_mem_size <= C_MEM_W;
							when others =>
								o_mem_size <= C_MEM_W;
						end case;

			  	when OPCODE_OP_IMM =>		-- OP IMMEDIATE		
						o_seq <= C_SEQ_ALU;

			  		o_bru_uop <= C_BRU_X;
						o_bru_pc_rel	<= '0';
			  		o_mem_rw <= '0';
			  		o_mem_size <= C_MEM_X;
			  		o_mem_signed <= '0';
			
						case i_instr(14 downto 12) is
							when FUNC3_ADD =>
								o_alu_uop <= C_ALU_ADD;
								o_alu_signed <= '0';
								o_wb_en <= '1';
							when FUNC3_SLL =>
								o_alu_uop <= C_ALU_SLL;
								o_alu_signed <= '0';
								o_wb_en <= '1';
							when FUNC3_SLT =>
								o_alu_uop <= C_ALU_SLT;
								o_alu_signed <= '1';
								o_wb_en <= '1';
							when FUNC3_SLTU =>
								o_alu_uop <= C_ALU_SLT;
								o_alu_signed <= '0';
								o_wb_en <= '1';
							when FUNC3_XOR =>
								o_alu_uop <= C_ALU_XOR;
								o_alu_signed <= '0';
								o_wb_en <= '1';
							when FUNC3_SR =>
								o_alu_uop <= C_ALU_SR;
								o_wb_en <= '1';
								case i_instr(31 downto 25) is
									when FUNC7_SRL =>
										o_alu_signed <= '0';
									when FUNC7_SRA =>
										o_alu_signed <= '1';
									when others =>
										o_alu_signed <= '0';
								end case;
							when FUNC3_OR =>
								o_alu_uop <= C_ALU_OR;
								o_alu_signed <= '0';
								o_wb_en <= '1';
							when FUNC3_AND =>
								o_alu_uop <= C_ALU_AND;
								o_alu_signed <= '0';
								o_wb_en <= '1';
							when others =>
								o_alu_uop <= C_ALU_ADD;
								o_alu_signed <= '0';
								o_wb_en <= '0';
						end case;

						o_s1_reg <= '1';		
						o_s1_data <= (others => '0');			
						o_s2_reg <= '0';		
						o_s2_data(N_DATA_BIT - 1 downto 12) <= (others => i_instr(31));
						o_s2_data(11 downto 0) <= i_instr(31 downto 20);
						o_s3_reg <= '0';		
						o_s3_data <= (others => '0');	

			  	when OPCODE_OP =>				-- OP
						o_seq <= C_SEQ_ALU;
						
			  		o_bru_uop <= C_BRU_X;
						o_bru_pc_rel	<= '0';
			  		o_mem_rw <= '0';
			  		o_mem_size <= C_MEM_X;
			  		o_mem_signed <= '0';

						case i_instr(14 downto 12) is
							when FUNC3_ADD =>
								o_alu_uop <= C_ALU_ADD;
								o_wb_en <= '1';
								case i_instr(31 downto 25) is
									when FUNC7_ADD =>
										o_alu_signed <= '0';
									when FUNC7_SUB =>
										o_alu_signed <= '1';
									when others =>
										o_alu_signed <= '0';
								end case;
							when FUNC3_SLL =>
								o_alu_uop <= C_ALU_SLL;
								o_alu_signed <= '0';
								o_wb_en <= '1';
							when FUNC3_SLT =>
								o_alu_uop <= C_ALU_SLT;
								o_alu_signed <= '1';
								o_wb_en <= '1';
							when FUNC3_SLTU =>
								o_alu_uop <= C_ALU_SLT;
								o_alu_signed <= '0';
								o_wb_en <= '1';
							when FUNC3_XOR =>
								o_alu_uop <= C_ALU_XOR;
								o_alu_signed <= '0';
								o_wb_en <= '1';
							when FUNC3_SR =>
								o_alu_uop <= C_ALU_SR;
								o_wb_en <= '1';
								case i_instr(31 downto 25) is
									when FUNC7_SRL =>
										o_alu_signed <= '0';
									when FUNC7_SRA =>
										o_alu_signed <= '1';
									when others =>
										o_alu_signed <= '0';
								end case;
							when FUNC3_OR =>
								o_alu_uop <= C_ALU_OR;
								o_alu_signed <= '0';
								o_wb_en <= '1';
							when FUNC3_AND =>
								o_alu_uop <= C_ALU_AND;
								o_alu_signed <= '0';
								o_wb_en <= '1';
							when others =>
								o_alu_uop <= C_ALU_ADD;
								o_alu_signed <= '0';
								o_wb_en <= '0';
						end case;

						o_s1_reg <= '1';		
						o_s1_data <= (others => '0');			
						o_s2_reg <= '1';		
						o_s2_data <= (others => '0');
						o_s3_reg <= '0';		
						o_s3_data <= (others => '0');	

					when others =>					-- DEFAULT
						o_seq <= C_SEQ_ALU;
						
						o_alu_uop <= C_ALU_X;		
			  		o_alu_signed <= '0';
			  		o_bru_uop <= C_BRU_X;
						o_bru_pc_rel	<= '0';
			  		o_mem_rw <= '0';
			  		o_mem_size <= C_MEM_X;
			  		o_mem_signed <= '0';
						o_wb_en <= '0';

						o_s1_reg <= '0';		
						o_s1_data <= (others => '0');			
						o_s2_reg <= '0';		
						o_s2_data <= (others => '0');
						o_s3_reg <= '0';		
						o_s3_data <= (others => '0');	
			end case;
		end process comb1;
end Decoder_arch;