--
-- File: fsm.vhd
-- Created Date: 2025-02-11 06:55:18 am
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-23 09:14:29 am
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

library emmk;
use emmk.C_CORE.all;

entity Fsm is port (
	i_clock : in std_logic;	
	i_reset : in std_logic;	

  i_bl : in std_logic;

  i_fetch_req : in std_logic;
  i_fetch_ack : in std_logic;
	i_seq : in std_logic_vector(N_SEQ_BIT - 1 downto 0);
  i_mem_req : in std_logic;
  i_mem_ack : in std_logic;
  
  o_fetch : out std_logic;
  o_instr : out std_logic;
  o_decoder : out std_logic;
  o_alu : out std_logic;
  o_bru : out std_logic;
  o_mem_req : out std_logic;
  o_mem_ack : out std_logic;
  o_wb : out std_logic);	
end entity Fsm;

architecture Fsm_arch of Fsm is
  type fsm_type is (S0_BOOT, S1_IF0, S1_IF1, S2_ID, S3_ALU, S3_ADDR, S3_BRU, S4_MEM0, S4_MEM1, S5_WB);
  signal r_cstate : fsm_type;
  signal s_nstate : fsm_type;

  attribute keep : boolean;
  attribute keep of r_cstate : signal is true;
  attribute preserve : boolean;
  attribute preserve of r_cstate : signal is true;

	begin
		-- Combinatorial Logic
		comb1 : process (r_cstate, i_bl, i_fetch_req, i_fetch_ack, i_seq, i_mem_req, i_mem_ack)
			begin
			  case r_cstate is
        	when S0_BOOT =>
            if (i_bl = '0') then
              s_nstate <= S1_IF0;
            else
              s_nstate <= S0_BOOT;
            end if;

            o_fetch <= '0';
            o_instr <= '0';
            o_decoder <= '0';
            o_alu <= '0';
            o_bru <= '0';
            o_mem_req <= '0';
            o_mem_ack <= '0';
            o_wb <= '0';

        	when S1_IF0 =>
            if (i_fetch_req = '1') then
        		  s_nstate <= S1_IF1;
            else
              s_nstate <= S1_IF0;
            end if;

            o_fetch <= '1';
            o_instr <= '0';
            o_decoder <= '0';
            o_alu <= '0';
            o_bru <= '0';
            o_mem_req <= '0';
            o_mem_ack <= '0';
            o_wb <= '0';

        	when S1_IF1 =>
            if (i_fetch_ack = '1') then
        		  s_nstate <= S2_ID;
            else
              s_nstate <= S1_IF1;
            end if;

            o_fetch <= '0';
            o_instr <= '1';
            o_decoder <= '0';
            o_alu <= '0';
            o_bru <= '0';
            o_mem_req <= '0';
            o_mem_ack <= '0';
            o_wb <= '0';

        	when S2_ID =>
            case i_seq is 
              when C_SEQ_ALU =>
                s_nstate <= S3_ALU;
              when C_SEQ_BRU =>
                s_nstate <= S3_BRU;
              when C_SEQ_MEM =>
                s_nstate <= S3_ADDR;
              when others =>
                s_nstate <= S1_IF0;
            end case;

            o_fetch <= '0';
            o_instr <= '0';
            o_decoder <= '1';
            o_alu <= '0';
            o_bru <= '0';
            o_mem_req <= '0';
            o_mem_ack <= '0';
            o_wb <= '0';

        	when S3_ALU =>
        		s_nstate <= S5_WB;

            o_fetch <= '0';
            o_instr <= '0';
            o_decoder <= '0';
            o_alu <= '1';
            o_bru <= '0';
            o_mem_req <= '0';
            o_mem_ack <= '0';
            o_wb <= '0';

        	when S3_BRU =>
        		s_nstate <= S5_WB;

            o_fetch <= '0';
            o_instr <= '0';
            o_decoder <= '0';
            o_alu <= '1';
            o_bru <= '1';
            o_mem_req <= '0';
            o_mem_ack <= '0';
            o_wb <= '0';

        	when S3_ADDR =>
        		s_nstate <= S4_MEM0;

            o_fetch <= '0';
            o_instr <= '0';
            o_decoder <= '0';
            o_alu <= '1';
            o_bru <= '0';
            o_mem_req <= '1';
            o_mem_ack <= '0';
            o_wb <= '0';

        	when S4_MEM0 =>
            if (i_mem_req = '1') then
              s_nstate <= S4_MEM1;
            else
              s_nstate <= S4_MEM0;
            end if;

            o_fetch <= '0';
            o_instr <= '0';
            o_decoder <= '0';
            o_alu <= '0';
            o_bru <= '0';
            o_mem_req <= '1';
            o_mem_ack <= '0';
            o_wb <= '0';

        	when S4_MEM1 =>
            if (i_mem_ack = '1') then
              s_nstate <= S5_WB;
            else
              s_nstate <= S4_MEM1;
            end if;

            o_fetch <= '0';
            o_instr <= '0';
            o_decoder <= '0';
            o_alu <= '0';
            o_bru <= '0';
            o_mem_req <= '0';
            o_mem_ack <= '1';
            o_wb <= '0';

        	when S5_WB =>
        		s_nstate <= S1_IF0;

            o_fetch <= '0';
            o_instr <= '0';
            o_decoder <= '0';
            o_alu <= '0';
            o_bru <= '0';
            o_mem_req <= '0';
            o_mem_ack <= '0';
            o_wb <= '1';
            
        	when others =>
        		s_nstate <= S0_BOOT;
            
            o_fetch <= '0';
            o_instr <= '0';
            o_decoder <= '0';
            o_alu <= '0';
            o_bru <= '0';
            o_mem_req <= '0';
            o_mem_ack <= '0';
            o_wb <= '0';
        end case;
		end process comb1;

		-- Sequential Logic
		seq : process (i_clock)
			begin
				if (i_clock'event and (i_clock = '1')) then
					if (i_reset = '1') then
						r_cstate <= S0_BOOT;
					else 
						r_cstate <= s_nstate;
					end if;
				end if;
		end process seq;
end Fsm_arch;