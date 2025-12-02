--
-- File: bootloader.vhd
-- Created Date: 2025-02-13 11:46:57 am
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-24 01:13:53 pm
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
use emmk.C_IO.all;

entity Bootloader is
	generic (
    N_ADDR_BIT: integer := 32;
		N_DATA_BIT: integer := 32
	);
	port (
		i_clock : in std_logic;	
		i_reset : in std_logic;	

		i_boot : in std_logic;

		i_rx_valid : in std_logic;
		i_rx_data : in std_logic_vector(7 downto 0);
		i_tx_ready : in std_logic;
		o_tx_valid : out std_logic;
		o_tx_data : out std_logic_vector(7 downto 0);

		o_bl : out std_logic;

	  o_mem_valid : out std_logic;
	  o_mem_wen : out std_logic_vector((N_DATA_BIT / 8) - 1 downto 0);
	  o_mem_addr : out std_logic_vector(N_ADDR_BIT - 1 downto 0);
	  o_mem_wdata : out std_logic_vector(N_DATA_BIT - 1 downto 0);	
	  i_mem_ready : in std_logic;	
	  i_mem_rdata : in std_logic_vector(N_DATA_BIT - 1 downto 0)
	);	
end entity Bootloader;

architecture Bootloader_arch of Bootloader is
  type fsm_type is (
		S0_BOOT, S1_NUM, S2_CMD, S3_WAIT, S4_END,
		S5_IDLE,
		S5_INIT0START, S5_INIT1OFFSET, S5_INIT2OP0, S5_INIT2OP1, S5_INIT2OP2,
  	S5_SEND,
  	S5_DUMP0START, S5_DUMP1OFFSET, S5_DUMP2OP0, S5_DUMP2OP1, S5_DUMP2OP2 
	);
  signal r_cstate : fsm_type;
  signal s_nstate : fsm_type;

	signal r_num_cnt : std_logic_vector(7 downto 0);
	signal r_byte_cnt : std_logic_vector(15 downto 0);
	signal r_num : std_logic_vector(7 downto 0);
	signal r_cmd : std_logic_vector(7 downto 0);
	signal r_start : std_logic_vector(15 downto 0);
	signal r_offset : std_logic_vector(15 downto 0);
	signal r_bl : std_logic;

	signal r_mem_addr : std_logic_vector(N_ADDR_BIT - 1 downto 0);
	signal r_mem_wen : std_logic_vector((N_DATA_BIT / 8) - 1 downto 0);
	signal r_mem_data : std_logic_vector(7 downto 0);

	signal s_num_cnt : std_logic_vector(7 downto 0);
	signal s_byte_cnt : std_logic_vector(15 downto 0);
	signal s_num : std_logic_vector(7 downto 0);
	signal s_cmd : std_logic_vector(7 downto 0);
	signal s_start : std_logic_vector(15 downto 0);
	signal s_offset : std_logic_vector(15 downto 0);
	signal s_bl : std_logic;

	signal s_mem_addr : std_logic_vector(N_ADDR_BIT - 1 downto 0);
	signal s_mem_wen : std_logic_vector((N_DATA_BIT / 8) - 1 downto 0);
	signal s_mem_data : std_logic_vector(7 downto 0);

	begin		
  	-- ******************************
  	--              FSM
  	-- ******************************
		o_bl <= r_bl;
		o_tx_data <= r_mem_data;
		o_mem_addr <= r_mem_addr;
		o_mem_wen <= r_mem_wen;
		o_mem_wdata(7 downto 0) <= r_mem_data;
		o_mem_wdata(N_DATA_BIT - 1 downto 8) <= (others => '0');

		comb_fsm : process (r_cstate, i_boot, i_rx_valid, i_rx_data, i_tx_ready, i_mem_ready, r_num_cnt, r_byte_cnt, r_num, r_cmd, r_offset)
			begin
				case r_cstate is
    			-- ------------------------------
    			--              BOOT
    			-- ------------------------------
			    when S0_BOOT =>
						s_num_cnt <= (others => '0');
						s_byte_cnt <= (others => '0');
						s_num <= (others => '0');
						s_cmd <= (others => '0');
						s_start <= (others => '0');
						s_offset <= (others => '0');

						if (i_boot = '1') then
							s_nstate <= S1_NUM;
						else
							s_nstate <= S4_END;
						end if;

    			-- ------------------------------
    			--             NUMBER
    			-- ------------------------------
					when S1_NUM =>
						s_num_cnt <= (others => '0');
						s_byte_cnt <= (others => '0');
						s_num <= i_rx_data;
						s_cmd <= (others => '0');
						s_start <= (others => '0');
						s_offset <= (others => '0');

						if (i_rx_valid = '1') then
							if (i_rx_data = x"00") then
								s_nstate <= s4_END;
							else
								s_nstate <= S2_CMD;
							end if;
						else 
							s_nstate <= S1_NUM;
						end if;

    			-- ------------------------------
    			--            COMMAND
    			-- ------------------------------
					when S2_CMD =>
						s_byte_cnt <= (others => '0');
						s_num <= r_num;
						s_cmd <= i_rx_data;
						s_start <= (others => '0');
						s_offset <= (others => '0');

						if (i_rx_valid = '1') then
							s_num_cnt <= r_num_cnt + '1';
							case i_rx_data is
								when C_CMD_IDLE =>
									s_nstate <= S5_IDLE;
								when C_CMD_INIT =>
									s_nstate <= S5_INIT0START;
								when C_CMD_SEND =>
									s_nstate <= S5_SEND;
								when C_CMD_DUMP =>
									s_nstate <= S5_DUMP0START;
								when others =>
									s_nstate <= S5_IDLE;
							end case;
						else 
							s_nstate <= S2_CMD;
							s_num_cnt <= r_num_cnt;
						end if;

    			-- ------------------------------
    			--              WAIT
    			-- ------------------------------
					when S3_WAIT =>			
						s_num_cnt <= r_num_cnt;
						s_byte_cnt <= r_byte_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;
						s_offset <= r_offset;

						if (i_tx_ready = '1') then
							s_nstate <= S4_END;
						else 
							s_nstate <= S3_WAIT;
						end if;		

    			-- ------------------------------
    			--              END
    			-- ------------------------------
					when S4_END =>		
						s_nstate <= S4_END;	
						s_num_cnt <= r_num_cnt;
						s_byte_cnt <= r_byte_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;
						s_offset <= r_offset;

    			-- ------------------------------
    			--              IDLE
    			-- ------------------------------
					when S5_IDLE =>	
						s_num_cnt <= r_num_cnt;
						s_byte_cnt <= r_byte_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;
						s_offset <= r_offset;

						if (r_num_cnt = r_num) then
							s_nstate <= S4_END;
						else 
							s_nstate <= S2_CMD;
						end if;		

    			-- ------------------------------
    			--              INIT
    			-- ------------------------------
					when S5_INIT0START =>
						s_num_cnt <= r_num_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_offset <= r_offset;

						if (i_rx_valid = '1') then
							if (r_byte_cnt(0) = '0') then
								s_nstate <= S5_INIT0START;
								s_byte_cnt <= r_byte_cnt + '1';
								s_start(7 downto 0) <= i_rx_data;
								s_start(15 downto 8) <= r_start(15 downto 8);
							else 
								s_nstate <= S5_INIT1OFFSET;
								s_byte_cnt <= (others => '0');
								s_start(7 downto 0) <= r_start(7 downto 0);
								s_start(15 downto 8) <= i_rx_data;
							end if;
						else 
							s_nstate <= S5_INIT0START;
							s_byte_cnt <= r_byte_cnt;
							s_start <= r_start;
						end if;

					when S5_INIT1OFFSET =>
						s_num_cnt <= r_num_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;

						if (i_rx_valid = '1') then
							if (r_byte_cnt(0) = '0') then
								s_nstate <= S5_INIT1OFFSET;
								s_byte_cnt <= r_byte_cnt + '1';
								s_offset(7 downto 0) <= i_rx_data;
								s_offset(15 downto 8) <= r_offset(15 downto 8);
							else 
								s_nstate <= S5_INIT2OP0;
								s_byte_cnt <= (others => '0');
								s_offset(7 downto 0) <= r_offset(7 downto 0);
								s_offset(15 downto 8) <= i_rx_data;
							end if;
						else 
							s_nstate <= S5_INIT1OFFSET;
							s_byte_cnt <= r_byte_cnt;
							s_offset <= r_offset;
						end if;

					when S5_INIT2OP0 =>
						s_num_cnt <= r_num_cnt;
						s_byte_cnt <= r_byte_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;
						s_offset <= r_offset;

						if (i_rx_valid = '1') then
							s_nstate <= S5_INIT2OP1;
						else 
							s_nstate <= S5_INIT2OP0;
						end if;

					when S5_INIT2OP1 =>
						s_num_cnt <= r_num_cnt;
						s_byte_cnt <= r_byte_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;
						s_offset <= r_offset;

						if (i_mem_ready = '1') then
							s_nstate <= S5_INIT2OP2;	
						else 
							s_nstate <= S5_INIT2OP1;
						end if;

					when S5_INIT2OP2 =>
						s_num_cnt <= r_num_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;
						s_offset <= r_offset;

						if (r_byte_cnt = (r_offset - '1')) then
							s_byte_cnt <= (others => '0');
							if (r_num_cnt = r_num) then
								s_nstate <= s4_END;
							else 
								s_nstate <= S2_CMD;
							end if;
						else 
							s_nstate <= S5_INIT2OP0;
							s_byte_cnt <= r_byte_cnt + '1';
						end if;	

    			-- ------------------------------
    			--              SEND
    			-- ------------------------------
					when S5_SEND =>
						s_num_cnt <= r_num_cnt;
						s_byte_cnt <= r_byte_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;
						s_offset <= r_offset;

						if (i_tx_ready = '1') then
							if (r_num_cnt = r_num) then
								s_nstate <= S4_END;
							else 
								s_nstate <= S2_CMD;
							end if;		
						else 
							s_nstate <= S5_SEND;
						end if;

    			-- ------------------------------
    			--              DUMP
    			-- ------------------------------
					when S5_DUMP0START =>
						s_num_cnt <= r_num_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_offset <= r_offset;

						if (i_rx_valid = '1') then
							if (r_byte_cnt(0) = '0') then
								s_nstate <= S5_DUMP0START;
								s_byte_cnt <= r_byte_cnt + '1';
								s_start(7 downto 0) <= i_rx_data;
								s_start(15 downto 8) <= r_start(15 downto 8);
							else 
								s_nstate <= S5_DUMP1OFFSET;
								s_byte_cnt <= (others => '0');
								s_start(7 downto 0) <= r_start(7 downto 0);
								s_start(15 downto 8) <= i_rx_data;
							end if;
						else 
							s_nstate <= S5_DUMP0START;
							s_byte_cnt <= r_byte_cnt;
							s_start <= r_start;
						end if;

					when S5_DUMP1OFFSET =>
						s_num_cnt <= r_num_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;

						if (i_rx_valid = '1') then
							if (r_byte_cnt(0) = '0') then
								s_nstate <= S5_DUMP1OFFSET;
								s_byte_cnt <= r_byte_cnt + '1';
								s_offset(7 downto 0) <= i_rx_data;
								s_offset(15 downto 8) <= r_offset(15 downto 8);
							else 
								s_nstate <= S5_DUMP2OP0;
								s_byte_cnt <= (others => '0');
								s_offset(7 downto 0) <= r_offset(7 downto 0);
								s_offset(15 downto 8) <= i_rx_data;
							end if;
						else 
							s_nstate <= S5_DUMP1OFFSET;
							s_byte_cnt <= r_byte_cnt;
							s_offset <= r_offset;
						end if;

					when S5_DUMP2OP0 =>
						s_num_cnt <= r_num_cnt;
						s_byte_cnt <= r_byte_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;
						s_offset <= r_offset;

						if (i_mem_ready = '1') then
							s_nstate <= S5_DUMP2OP1;	
						else 
							s_nstate <= S5_DUMP2OP0;
						end if;

					when S5_DUMP2OP1 =>
						s_nstate <= S5_DUMP2OP2;
						s_num_cnt <= r_num_cnt;
						s_byte_cnt <= r_byte_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;
						s_offset <= r_offset;

					when S5_DUMP2OP2 =>
						s_num_cnt <= r_num_cnt;
						s_num <= r_num;
						s_cmd <= r_cmd;
						s_start <= r_start;
						s_offset <= r_offset;

						if (i_tx_ready = '1') then
							if (r_byte_cnt = (r_offset - '1')) then
								s_byte_cnt <= (others => '0');
								if (r_num_cnt = r_num) then
									s_nstate <= s3_WAIT;
								else 
									s_nstate <= S2_CMD;
								end if;
							else 
								s_nstate <= S5_DUMP2OP0;
								s_byte_cnt <= r_byte_cnt + '1';
							end if;	
						else 
							s_nstate <= S5_DUMP2OP2;
							s_byte_cnt <= r_byte_cnt;
						end if;

    			-- ------------------------------
    			--            DEFAULT
    			-- ------------------------------
          when others =>
						s_nstate <= S0_BOOT;
						s_num_cnt <= (others => '0');
						s_byte_cnt <= (others => '0');
						s_num <= (others => '0');
						s_cmd <= (others => '0');
						s_start <= (others => '0');
						s_offset <= (others => '0');
        end case;       
		end process comb_fsm;

    -- ******************************
    --             MEMORY
    -- ******************************
		comb_mem : process (r_cstate, i_boot, i_rx_valid, i_rx_data, i_tx_ready, i_mem_ready, r_num_cnt, r_byte_cnt, r_num, r_cmd, r_offset)
			begin
				case r_cstate is
    			-- ------------------------------
    			--            COMMAND
    			-- ------------------------------
					when S2_CMD =>
						o_mem_valid <= '0';
						s_mem_addr <= (others => '0');

						case i_rx_data is
							when C_CMD_IDLE =>
								s_mem_wen <= (others => '0');
								s_mem_data <= (others => '0');
							when C_CMD_INIT =>
								s_mem_wen(0) <= '1';
								s_mem_wen(N_DATA_BIt / 8 - 1 downto 1) <= (others => '0');
								s_mem_data <= (others => '0');
							when C_CMD_SEND =>
								s_mem_wen <= (others => '0');
								s_mem_data <= x"aa";
							when C_CMD_DUMP =>
								s_mem_wen <= (others => '0');
								s_mem_data <= (others => '0');
							when others =>
								s_mem_wen <= (others => '0');
								s_mem_data <= (others => '0');
							end case;

    			-- ------------------------------
    			--              INIT             
    			-- ------------------------------
					when S5_INIT0START =>
						o_mem_valid <= '0';
						s_mem_addr <= (others => '0');
						s_mem_wen <= r_mem_wen;
						s_mem_data <= (others => '0');

					when S5_INIT1OFFSET =>
						o_mem_valid <= '0';
						s_mem_addr <= r_start;
						s_mem_wen <= r_mem_wen;
						s_mem_data <= r_mem_data;

					when S5_INIT2OP0 =>
						o_mem_valid <= '0';
						s_mem_addr <= r_mem_addr;
						s_mem_wen <= r_mem_wen;
						s_mem_data <= i_rx_data;

					when S5_INIT2OP1 =>
						o_mem_valid <= '1';
						s_mem_addr <= r_mem_addr;
						s_mem_wen <= r_mem_wen;
						s_mem_data <= r_mem_data;

					when S5_INIT2OP2 =>
						o_mem_valid <= '0';
						s_mem_wen <= r_mem_wen;
						s_mem_data <= i_mem_rdata(7 downto 0);
						s_mem_addr <= r_mem_addr + '1';

    			-- ------------------------------
    			--              DUMP
    			-- ------------------------------
					when S5_DUMP0START =>
						o_mem_valid <= '0';
						s_mem_addr <= (others => '0');
						s_mem_wen <= r_mem_wen;
						s_mem_data <= (others => '0');

					when S5_DUMP1OFFSET =>
						o_mem_valid <= '0';
						s_mem_addr <= r_start;
						s_mem_wen <= r_mem_wen;
						s_mem_data <= r_mem_data;

					when S5_DUMP2OP0 =>
						o_mem_valid <= '1';
						s_mem_addr <= r_mem_addr;
						s_mem_wen <= r_mem_wen;
						s_mem_data <= r_mem_data;

					when S5_DUMP2OP1 =>
						o_mem_valid <= '0';
						s_mem_addr <= r_mem_addr;
						s_mem_wen <= r_mem_wen;
						s_mem_data <= i_mem_rdata(7 downto 0);

					when S5_DUMP2OP2 =>
						o_mem_valid <= '0';
						s_mem_wen <= r_mem_wen;
						s_mem_data <= i_mem_rdata(7 downto 0);
						if (i_tx_ready = '1') then
							s_mem_addr <= r_mem_addr + '1';
						else 
							s_mem_addr <= r_mem_addr;
						end if;

    			-- ------------------------------
    			--            DEFAULT
    			-- ------------------------------
          when others =>
						o_mem_valid <= '0';
						s_mem_addr <= (others => '0');
						s_mem_wen <= (others => '0');
						s_mem_data <= (others => '0');
        end case;       
		end process comb_mem;

    -- ******************************
    --               TX
    -- ******************************
		comb_tx : process (r_cstate)
			begin
				case r_cstate is
    			-- ------------------------------
    			--              SEND
    			-- ------------------------------
					when S5_SEND =>
						o_tx_valid <= '1';

    			-- ------------------------------
    			--              DUMP
    			-- ------------------------------
					when S5_DUMP2OP2 =>
						o_tx_valid <= '1';

    			-- ------------------------------
    			--            DEFAULT
    			-- ------------------------------
          when others =>	
						o_tx_valid <= '0';
        end case;       
		end process comb_tx;

    -- ******************************
    --           BOOTLOADER
    -- ******************************
		comb_bl : process (r_cstate)
			begin
				case r_cstate is
					-- ------------------------------
    			--              END
    			-- ------------------------------
					when S4_END =>		
						s_bl <= '0';

    			-- ------------------------------
    			--            DEFAULT
    			-- ------------------------------
          when others =>	
						s_bl <= '1';
        end case;       
		end process comb_bl;

    -- ******************************
    --           SEQUENTIAL
    -- ******************************
		seq : process (i_clock)
			begin
				if (i_clock'event and (i_clock = '1')) then
					if (i_reset = '1') then
						r_cstate <= S0_BOOT;
						r_bl <= '1';
					else 
						r_cstate <= s_nstate;
						r_num_cnt <= s_num_cnt;
						r_byte_cnt <= s_byte_cnt;
						r_num <= s_num;
						r_cmd <= s_cmd;
						r_start <= s_start;
						r_offset <= s_offset;
						r_bl <= s_bl;
						r_mem_addr <= s_mem_addr;
						r_mem_wen <= s_mem_wen;
						r_mem_data <= s_mem_data;
					end if;
				end if;
		end process seq;
end Bootloader_arch;