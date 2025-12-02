--
-- File: uart_tx.vhd
-- Created Date: 2025-02-13 11:46:57 am
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-23 03:56:21 pm
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

entity UartTx is
	port (
		i_clock : in std_logic;	
		i_reset : in std_logic;	

		i_ncycle : in std_logic_vector(15 downto 0);

		o_ready : out std_logic;
		i_valid : in std_logic;
		i_data : in std_logic_vector(7 downto 0);

		o_tx : out std_logic
	);	
end entity UartTx;

architecture UartTx_arch of UartTx is
  type fsm_type is (S0_IDLE, S1_START, S2_DATA, S3_STOP);
  signal r_cstate : fsm_type;
  signal s_nstate : fsm_type;

	signal r_data : std_logic_vector(7 downto 0);
	signal r_bit_cnt : std_logic_vector(2 downto 0);
	signal r_cycle_cnt : std_logic_vector(15 downto 0);
	signal r_tx : std_logic;

	signal s_data : std_logic_vector(7 downto 0);
	signal s_bit_cnt : std_logic_vector(2 downto 0);
	signal s_cycle_cnt : std_logic_vector(15 downto 0);
	signal s_tx : std_logic;

	begin
		o_tx <= r_tx;
		
  	-- ******************************
  	--              FSM
  	-- ******************************
		comb : process (r_cstate, i_ncycle, i_valid, i_data, r_bit_cnt, r_cycle_cnt, r_data)
			begin
				case r_cstate is
			    when S0_IDLE =>
						o_ready <= '1';
						s_data <= i_data;
						s_bit_cnt <= (others => '0');
						s_cycle_cnt <= (others => '0');
						s_tx <= '1';

						if (i_valid = '1') then
							s_nstate <= S1_START;
						else
							s_nstate <= S0_IDLE;
						end if;

					when S1_START =>
						o_ready <= '0';
						s_data <= r_data;
						s_bit_cnt <= (others => '0');
						s_tx <= '0';

						if (r_cycle_cnt = i_ncycle) then
							s_nstate <= S2_DATA;
							s_cycle_cnt <= (others => '0');
						else 
							s_nstate <= S1_START;
							s_cycle_cnt <= r_cycle_cnt + '1';
						end if;

					when S2_DATA =>
						o_ready <= '0';
						s_tx <= r_data(0);

						if (r_cycle_cnt = i_ncycle) then
							s_data <= '0' & r_data(7 downto 1);
							s_cycle_cnt <= (others => '0');

							if (r_bit_cnt = x"7") then
								s_nstate <= S3_STOP;
								s_bit_cnt <= (others => '0');
							else
								s_nstate <= S2_DATA;
								s_bit_cnt <= r_bit_cnt + '1';
							end if;
						else
							s_nstate <= S2_DATA;
							s_data <= r_data;
							s_bit_cnt <= r_bit_cnt;
							s_cycle_cnt <= r_cycle_cnt + '1';
						end if;

					when S3_STOP =>
						o_ready <= '0';
						s_data <= r_data;
						s_bit_cnt <= r_bit_cnt;
						s_tx <= '1';

						if (r_cycle_cnt = i_ncycle) then
							s_nstate <= S0_IDLE;
							s_cycle_cnt <= (others => '0');
						else 
							s_nstate <= S3_STOP;
							s_cycle_cnt <= r_cycle_cnt + '1';
						end if;

          when others =>
						o_ready <= '0';

						s_nstate <= S0_IDLE;
						s_data <= (others => '0');
						s_bit_cnt <= (others => '0');
						s_cycle_cnt <= (others => '0');
						s_tx <= '1';
        end case;       
		end process comb;

    -- ******************************
    --           SEQUENTIAL
    -- ******************************
		seq : process (i_clock)
			begin
				if (i_clock'event and (i_clock = '1')) then
					if (i_reset = '1') then
						r_cstate <= S0_IDLE;
						r_tx <= '1';
					else 
						r_cstate <= s_nstate;
						r_data <= s_data;
						r_bit_cnt <= s_bit_cnt;
						r_cycle_cnt <= s_cycle_cnt;
						r_tx <= s_tx;
					end if;
				end if;
		end process seq;
end UartTx_arch;