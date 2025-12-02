--
-- File: uart.vhd
-- Created Date: 2025-02-13 11:46:57 am
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-23 09:16:06 pm
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
use emmk.C_ADDR.all;

entity Uart is
	generic (
		N_DATA_BYTE: integer := 4;
		N_UART_CYCLE: integer := 5208
	);
	port (
		i_clock : in std_logic;	
		i_reset : in std_logic;	

		i_bl : in std_logic;

		i_mem_valid : in std_logic;
		i_mem_addr : in std_logic_vector(N_UART_BIT - 1 downto 0);
		i_mem_wen : in std_logic_vector(N_DATA_BYTE - 1 downto 0);
		i_mem_wdata : in std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);	
		o_mem_ready : out std_logic;	
		o_mem_rdata : out std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);

		o_bl_ready : out std_logic;
		i_bl_valid : in std_logic;
		i_bl_data : in std_logic_vector(7 downto 0);
		o_bl_valid : out std_logic;
		o_bl_data : out std_logic_vector(7 downto 0);

		i_uart_rx : in std_logic;
		o_uart_tx : out std_logic
	);	
end entity Uart;

architecture Uart_arch of Uart is
	component UartRx
		port (
			i_clock : in std_logic;	
			i_reset : in std_logic;	

			i_ncycle : in std_logic_vector(15 downto 0);

			o_valid : out std_logic;
			o_data : out std_logic_vector(7 downto 0);

			i_rx : in std_logic
		);	
	end component;

	component UartTx
		port (
			i_clock : in std_logic;	
			i_reset : in std_logic;	

			i_ncycle : in std_logic_vector(15 downto 0);

			o_ready : out std_logic;
			i_valid : in std_logic;
			i_data : in std_logic_vector(7 downto 0);

			o_tx : out std_logic
		);	
	end component;

	signal r_ncycle : std_logic_vector(15 downto 0);
	signal r_rdata : std_logic_vector(31 downto 0);
	signal r_rx_buf_valid : std_logic;
	signal r_rx_buf_data : std_logic_vector(7 downto 0);

	signal s_ncycle : std_logic_vector(15 downto 0);
	signal s_rdata : std_logic_vector(31 downto 0);
	signal s_tx_ready : std_logic;
	signal s_tx_valid : std_logic;
	signal s_tx_data : std_logic_vector(7 downto 0);
	signal s_rx_valid : std_logic;
	signal s_rx_data : std_logic_vector(7 downto 0);
	signal s_rx_buf_valid : std_logic;
	signal s_rx_buf_data : std_logic_vector(7 downto 0);

	begin
	  o_mem_ready <= '1';

  	-- ******************************
  	--              READ
  	-- ******************************
		comb_read : process (i_mem_addr, r_rdata, r_ncycle, r_rx_buf_valid, r_rx_buf_data, s_tx_ready)
			begin
				o_bl_ready <= s_tx_ready;

				case i_mem_addr is
			    when C_UART_CONFIG =>
						s_rdata <= (others => '0');
			    when C_UART_NCYCLE =>
						s_rdata <= x"0000" & r_ncycle;
					when C_UART_STATUS =>
						s_rdata(4 downto 0) <= s_tx_ready & "000" & r_rx_buf_valid;
						s_rdata(31 downto 5)<= (others => '0');
					when C_UART_RX =>
						s_rdata(7 downto 0) <= r_rx_buf_data;
						s_rdata(31 downto 8)<= (others => '0');
          when others =>  
            s_rdata <= r_rdata;
        end case;       
		end process comb_read;

		comb_rx : process (i_bl, i_mem_valid, i_mem_addr, s_rx_valid, s_rx_data, r_rx_buf_valid, r_rx_buf_data)
			begin
				o_bl_valid <= s_rx_valid;
				o_bl_data <= s_rx_data;

				if ((i_bl = '0') and (s_rx_valid = '1')) then
					s_rx_buf_valid <= '1';
					s_rx_buf_data <= s_rx_data;
				else
					if ((i_mem_valid = '1') and (i_mem_addr = C_UART_RX) and (i_mem_wen = "0")) then 
						s_rx_buf_valid <= '0';
					else
						s_rx_buf_valid <= r_rx_buf_valid;
					end if;
				end if;      
		end process comb_rx;

  	-- ******************************
  	--             WRITE
  	-- ******************************
		comb_write : process (i_bl, i_bl_valid, i_bl_data, i_mem_valid, i_mem_addr, i_mem_wen, i_mem_wdata, r_ncycle)
			begin
				if (i_bl = '1') then
					s_ncycle <= r_ncycle;
					s_tx_valid <= i_bl_valid;
					s_tx_data <= i_bl_data;
				else
					s_tx_data <= i_mem_wdata(7 downto 0);

					case i_mem_addr is
						when C_UART_NCYCLE =>
							if ((i_mem_valid = '1') and (i_mem_wen(1 downto 0) = "11")) then
								s_ncycle <= i_mem_wdata(15 downto 0);
								s_tx_valid <= '0';
							else
								s_ncycle <= r_ncycle;
								s_tx_valid <= '0';
							end if;

						when C_UART_TX =>
							if ((i_mem_valid = '1') and (i_mem_wen(0) = '1')) then
								s_ncycle <= r_ncycle;
								s_tx_valid <= '1';							
							else
								s_ncycle <= r_ncycle;
								s_tx_valid <= '0';
							end if;

						when C_UART_CONFIG =>
							s_ncycle <= r_ncycle;
							s_tx_valid <= '0';
						when others =>
							s_ncycle <= r_ncycle;
							s_tx_valid <= '0';
					end case; 
				end if;				 
		end process comb_write;

    -- ******************************
    --           SEQUENTIAL
    -- ******************************
		seq : process (i_clock)
			begin
				if (i_clock'event and (i_clock = '1')) then
					if (i_reset = '1') then
						r_ncycle <= std_logic_vector(to_unsigned(N_UART_CYCLE, 16));
						r_rx_buf_valid <= '0';
					else 
						r_ncycle <= s_ncycle;
						r_rdata <= s_rdata;
						r_rx_buf_valid <= s_rx_buf_valid;
						r_rx_buf_data <= s_rx_buf_data;
					end if;
				end if;
		end process seq;
		

    -- ******************************
    --               RX
    -- ******************************
		m_rx: UartRx port map (
			i_clock => i_clock,
			i_reset => i_reset,

			i_ncycle => r_ncycle,

			o_valid => s_rx_valid,
			o_data => s_rx_data,

			i_rx => i_uart_rx
		);

    -- ******************************
    --               TX
    -- ******************************
		m_tx: UartTx port map (
			i_clock => i_clock,
			i_reset => i_reset,

			i_ncycle => r_ncycle,

			o_ready => s_tx_ready,
			i_valid => s_tx_valid,
			i_data => s_tx_data,

			o_tx => o_uart_tx
		);
end Uart_arch;