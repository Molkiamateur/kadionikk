--
-- File: sys.vhd
-- Created Date: 2025-02-11 06:55:18 am
-- Author: Mathieu Escouteloup
-- -----
-- Last Modified: 2025-04-24 01:45:13 pm
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
use emmk.C_ADDR.all;

entity Sys is
	generic (
  	PC_BOOT: std_logic_vector(31 downto 0) := x"00000000";

    N_ADDR_BIT: integer := 16;
    N_INSTR_BIT: integer := 32;
		N_DATA_BIT: integer := 32;
    N_GPR: integer := 8;

		N_RAM_BASE: std_logic_vector(31 downto 0) := x"00000000";
		N_RAM_BYTE: integer := 128;
		INIT_RAM: string := "/home/mescoutelou/learn/riscv-design/sw/hex/sw.ram.mem";
		N_GPIO8_BASE: std_logic_vector(31 downto 0) := x"00000800";
		N_UART_BASE: std_logic_vector(31 downto 0) := x"00000840";
		N_UART_CYCLE: integer := 5208
	);
	port (
		clock : in std_logic;	
		reset : in std_logic;

		io_i_boot : in std_logic;
		
		io_b_gpio_eno : out std_logic_vector(7 downto 0);
		io_b_gpio_in : in std_logic_vector(7 downto 0);
		io_b_gpio_out : out std_logic_vector(7 downto 0);

		io_b_uart_rx : in std_logic;
		io_b_uart_tx : out std_logic
	);	
end entity Sys;

architecture Sys_arch of Sys is
  component Core
  	generic (
  	  PC_BOOT: std_logic_vector(31 downto 0) := x"00000000";

	    N_ADDR_BIT: integer := 32;
	    N_INSTR_BIT: integer := 32;
			N_DATA_BIT: integer := 32;
	    N_GPR: integer := 32
		);
	  port (
		  i_clock : in std_logic;	
		  i_reset : in std_logic;	

		  i_bl : in std_logic;	

		  o_mem_valid : out std_logic;
		  o_mem_wen : out std_logic_vector((N_DATA_BIT / 8) - 1 downto 0);
		  o_mem_addr : out std_logic_vector(N_ADDR_BIT - 1 downto 0);
		  o_mem_wdata : out std_logic_vector(N_DATA_BIT - 1 downto 0);	
		  i_mem_ready : in std_logic;	
		  i_mem_rdata : in std_logic_vector(N_DATA_BIT - 1 downto 0)
	  );
  end component;

  component Ram 
    generic (
			INIT_FILE: string;
			N_DATA: integer := 64;
			N_DATA_BYTE: integer := 4
		);
		port (
			i_clock : in std_logic;	
			i_reset : in std_logic;
	
			i_en : in std_logic;
			i_addr : in std_logic_vector((integer(ceil(log2(real(N_DATA)))) - 1) downto 0);
			i_wen : in std_logic_vector(N_DATA_BYTE - 1 downto 0);
			i_wdata : in std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);		
			o_rdata : out std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0)
		);
  end component;

	component Gpio8
		generic (
			N_DATA_BYTE: integer := 4
		);
		port (
			i_clock : in std_logic;	
			i_reset : in std_logic;	
	
			i_mem_valid : in std_logic;
			i_mem_addr : in std_logic_vector(N_GPIO8_BIT - 1 downto 0);
			i_mem_wen : in std_logic_vector(N_DATA_BYTE - 1 downto 0);
			i_mem_wdata : in std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);	
			o_mem_ready : out std_logic;	
			o_mem_rdata : out std_logic_vector(N_DATA_BYTE * 8 - 1 downto 0);
	
			o_gpio_eno : out std_logic_vector(7 downto 0);
			i_gpio_in : in std_logic_vector(7 downto 0);
			o_gpio_out : out std_logic_vector(7 downto 0)
		);	
	end component;

	component Uart
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
	end component;

	component Bootloader
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
	end component;

  signal r_valid : std_logic;
	signal r_addr : std_logic_vector(N_ADDR_BIT - 1 downto 0);

  signal s_valid : std_logic;
	signal s_addr : std_logic_vector(N_ADDR_BIT - 1 downto 0);

  signal s_core_valid : std_logic;
	signal s_core_addr : std_logic_vector(N_ADDR_BIT - 1 downto 0);
	signal s_core_wen : std_logic_vector((N_DATA_BIT / 8) - 1 downto 0);
	signal s_core_wdata : std_logic_vector(N_DATA_BIT - 1 downto 0);	
	signal s_core_ready : std_logic;	
	signal s_core_rdata : std_logic_vector(N_DATA_BIT - 1 downto 0);

  signal s_ram_valid : std_logic;
	signal s_ram_addr : std_logic_vector((integer(ceil(log2(real(N_RAM_BYTE / 4)))) - 1) downto 0);
	signal s_ram_wen : std_logic_vector((N_DATA_BIT / 8) - 1 downto 0);
	signal s_ram_wdata : std_logic_vector(N_DATA_BIT - 1 downto 0);	
	signal s_ram_ready : std_logic;	
	signal s_ram_rdata : std_logic_vector(N_DATA_BIT - 1 downto 0);

  signal s_gpio8_valid : std_logic;
	signal s_gpio8_addr : std_logic_vector(N_GPIO8_BIT - 1 downto 0);
	signal s_gpio8_wen : std_logic_vector((N_DATA_BIT / 8) - 1 downto 0);
	signal s_gpio8_wdata : std_logic_vector(N_DATA_BIT - 1 downto 0);	
	signal s_gpio8_ready : std_logic;	
	signal s_gpio8_rdata : std_logic_vector(N_DATA_BIT - 1 downto 0);

  signal s_uart_valid : std_logic;
	signal s_uart_addr : std_logic_vector(N_UART_BIT - 1 downto 0);
	signal s_uart_wen : std_logic_vector((N_DATA_BIT / 8) - 1 downto 0);
	signal s_uart_wdata : std_logic_vector(N_DATA_BIT - 1 downto 0);	
	signal s_uart_ready : std_logic;	
	signal s_uart_rdata : std_logic_vector(N_DATA_BIT - 1 downto 0);

  signal s_boot_valid : std_logic;
	signal s_boot_addr : std_logic_vector(N_ADDR_BIT - 1 downto 0);
	signal s_boot_wen : std_logic_vector((N_DATA_BIT / 8) - 1 downto 0);
	signal s_boot_wdata : std_logic_vector(N_DATA_BIT - 1 downto 0);	
	signal s_boot_ready : std_logic;	
	signal s_boot_rdata : std_logic_vector(N_DATA_BIT - 1 downto 0);

  signal s_main_valid : std_logic;
	signal s_main_addr : std_logic_vector(N_ADDR_BIT - 1 downto 0);
	signal s_main_wen : std_logic_vector((N_DATA_BIT / 8) - 1 downto 0);
	signal s_main_wdata : std_logic_vector(N_DATA_BIT - 1 downto 0);	
	signal s_main_ready : std_logic;	
	signal s_main_rdata : std_logic_vector(N_DATA_BIT - 1 downto 0);
	signal s_main_rdata_shift : std_logic_vector(N_DATA_BIT - 1 downto 0);

	signal s_bl_rx_valid : std_logic;
	signal s_bl_rx_data : std_logic_vector(7 downto 0);
	signal s_bl_tx_ready : std_logic;
	signal s_bl_tx_valid : std_logic;
	signal s_bl_tx_data : std_logic_vector(7 downto 0);

	signal s_bl : std_logic;

	begin
  	-- ******************************
  	--              CPU
  	-- ******************************
    m_core: Core 
			generic map (
				PC_BOOT => PC_BOOT,

				N_ADDR_BIT => N_ADDR_BIT,
				N_INSTR_BIT => N_INSTR_BIT,
				N_DATA_BIT => N_DATA_BIT,
				N_GPR => N_GPR
			)
			port map (
  		  i_clock => clock,	
  		  i_reset => reset,

				i_bl => s_bl,

  		  o_mem_valid => s_core_valid,
  		  o_mem_addr => s_core_addr,
  		  o_mem_wen => s_core_wen,
  		  o_mem_wdata => s_core_wdata,
  		  i_mem_ready => s_core_ready,
  		  i_mem_rdata => s_core_rdata
    	);

  	-- ******************************
  	--              RAM
  	-- ******************************
    m_ram: Ram 
      generic map (
        INIT_FILE => INIT_RAM,
				N_DATA => (N_RAM_BYTE / 4),
				N_DATA_BYTE => (N_DATA_BIT / 8)
      )
      port map (
  	    i_clock => clock,	
  	    i_reset => reset,	

  	    i_en => s_ram_valid,
  	    i_addr => s_ram_addr,
  	    i_wen => s_ram_wen,
  	    i_wdata => s_ram_wdata,
  	    o_rdata => s_ram_rdata
      );

  	-- ******************************
  	--              GPIO8
  	-- ******************************
		m_gpio8: Gpio8
			generic map (
				N_DATA_BYTE => (N_DATA_BIT / 8)
			)
			port map (
				i_clock  => clock,	
				i_reset  => reset,	

				i_mem_valid => s_gpio8_valid,
				i_mem_addr => s_gpio8_addr,
				i_mem_wen => s_gpio8_wen,
				i_mem_wdata => s_gpio8_wdata,
				o_mem_ready => s_gpio8_ready,	
				o_mem_rdata => s_gpio8_rdata,

				o_gpio_eno => io_b_gpio_eno,
				i_gpio_in => io_b_gpio_in,
				o_gpio_out => io_b_gpio_out
			);

  	-- ******************************
  	--              UART
  	-- ******************************
		m_uart: Uart
			generic map (
				N_DATA_BYTE => (N_DATA_BIT / 8),
				N_UART_CYCLE => N_UART_CYCLE
			)
			port map (
				i_clock  => clock,	
				i_reset  => reset,	

				i_bl => s_bl,

				i_mem_valid => s_uart_valid,
				i_mem_addr => s_uart_addr,
				i_mem_wen => s_uart_wen,
				i_mem_wdata => s_uart_wdata,
				o_mem_ready => s_uart_ready,	
				o_mem_rdata => s_uart_rdata,

				o_bl_ready => s_bl_tx_ready,
				i_bl_valid => s_bl_tx_valid,
				i_bl_data => s_bl_tx_data,
				o_bl_valid => s_bl_rx_valid,
				o_bl_data => s_bl_rx_data,

				i_uart_rx => io_b_uart_rx,
				o_uart_tx => io_b_uart_tx
			);

  	-- ******************************
  	--           BOOTLOADER
  	-- ******************************
		m_bootloader: Bootloader
			generic map (
				N_ADDR_BIT => N_ADDR_BIT,
				N_DATA_BIT => N_DATA_BIT
			)
			port map (
				i_clock => clock,	
				i_reset => reset,	

				i_boot => io_i_boot,

				i_rx_valid => s_bl_rx_valid,
				i_rx_data => s_bl_rx_data,
				i_tx_ready => s_bl_tx_ready,
				o_tx_valid => s_bl_tx_valid,
				o_tx_data => s_bl_tx_data,

				o_bl => s_bl,

			  o_mem_valid => s_boot_valid,
			  o_mem_wen => s_boot_wen,
			  o_mem_addr => s_boot_addr,
			  o_mem_wdata => s_boot_wdata,	
			  i_mem_ready => s_boot_ready,	
			  i_mem_rdata => s_boot_rdata
			);

  	-- ******************************
  	--          INTERCONNECT
  	-- ******************************
  	-- ------------------------------
  	--              MAIN
  	-- ------------------------------
		comb_main : process (s_bl, s_core_valid, s_core_addr, s_core_wen, s_core_wdata, s_boot_valid, s_boot_addr, s_boot_wen, s_boot_wdata, s_main_ready, s_main_rdata_shift)
			begin
				s_boot_rdata <= s_main_rdata_shift;
				s_core_rdata <= s_main_rdata_shift;

				if (s_bl = '1') then
					s_main_valid <= s_boot_valid; 
					s_main_addr <= s_boot_addr;
					s_main_wen <= s_boot_wen;
					s_main_wdata <= s_boot_wdata;
					s_boot_ready <= s_main_ready;
					s_core_ready <= '0';
				else
					s_main_valid <= s_core_valid; 
					s_main_addr <= s_core_addr;
					s_main_wen <= s_core_wen;
					s_main_wdata <= s_core_wdata;
					s_core_ready <= s_main_ready;
					s_boot_ready <= '0';
				end if;
		end process comb_main;

  	-- ------------------------------
  	--              REQ
  	-- ------------------------------
		comb_req : process (s_bl, s_main_valid, s_main_addr, s_main_wen, s_main_wdata, s_ram_ready, s_gpio8_ready, s_uart_ready)
			begin
				s_ram_addr <= s_main_addr((integer(ceil(log2(real(N_RAM_BYTE / 4)))) + 2 - 1) downto 2);
				for I in 0 to 3 loop
					if I < to_integer(unsigned(s_main_addr(1 downto 0))) then
  					s_ram_wen(I) <= '0';
  				else	
  					s_ram_wen(I) <= s_main_wen(I - to_integer(unsigned(s_main_addr(1 downto 0))));
					end if;
				end loop;
				for I in 0 to 31 loop
					if I < (to_integer(unsigned(s_main_addr(1 downto 0))) * 8) then
  					s_ram_wdata(I) <= '0';
  				else	
  					s_ram_wdata(I) <= s_main_wdata(I - (to_integer(unsigned(s_main_addr(1 downto 0))) * 8));
  				end if;
				end loop;
				
				s_gpio8_addr <= s_main_addr(N_GPIO8_BIT - 1 downto 0);
				s_gpio8_wen <= s_main_wen;
				s_gpio8_wdata <= s_main_wdata;
				s_uart_addr <= s_main_addr(N_UART_BIT - 1 downto 0);
				s_uart_wen <= s_main_wen;
				s_uart_wdata <= s_main_wdata;

				if ((s_main_addr >= N_RAM_BASE(N_ADDR_BIT - 1 downto 0)) and (s_main_addr < (N_RAM_BASE(N_ADDR_BIT - 1 downto 0) + std_logic_vector(to_unsigned(N_RAM_BYTE, N_ADDR_BIT))))) then
					s_ram_valid <= s_main_valid;
					s_gpio8_valid <= '0';
					s_uart_valid <= '0';

					s_main_ready <= '1';
				elsif ((s_main_addr >= N_GPIO8_BASE(N_ADDR_BIT - 1 downto 0)) and (s_main_addr < (N_GPIO8_BASE(N_ADDR_BIT - 1 downto 0) + x"40"))) then
					s_ram_valid <= '0';
					s_gpio8_valid <= s_main_valid;
					s_uart_valid <= '0';

					s_main_ready <= s_gpio8_ready;
				elsif ((s_main_addr >= N_UART_BASE(N_ADDR_BIT - 1 downto 0)) and (s_main_addr < (N_UART_BASE(N_ADDR_BIT - 1 downto 0) + x"40"))) then
					s_ram_valid <= '0';
					s_gpio8_valid <= '0';
					s_uart_valid <= s_main_valid;

					s_main_ready <= s_uart_ready;
				else
					s_ram_valid <= '0';
					s_gpio8_valid <= '0';
					s_uart_valid <= '0';

					s_main_ready <= '1';
				end if;  
		end process comb_req;

  	-- ------------------------------
  	--              ACK
  	-- ------------------------------
		comb_ack : process (r_valid, r_addr, s_main_valid, s_main_ready, s_main_addr, s_ram_rdata, s_gpio8_rdata, s_uart_rdata)
			begin
				if ((r_addr >= N_RAM_BASE(N_ADDR_BIT - 1 downto 0)) and (r_addr < (N_RAM_BASE(N_ADDR_BIT - 1 downto 0) + std_logic_vector(to_unsigned(N_RAM_BYTE, N_ADDR_BIT))))) then
					s_main_rdata <= s_ram_rdata;
				elsif ((r_addr >= N_GPIO8_BASE(N_ADDR_BIT - 1 downto 0)) and (r_addr < (N_GPIO8_BASE(N_ADDR_BIT - 1 downto 0) + x"40"))) then
					s_main_rdata <= s_gpio8_rdata;
				elsif ((r_addr >= N_UART_BASE(N_ADDR_BIT - 1 downto 0)) and (r_addr < (N_UART_BASE(N_ADDR_BIT - 1 downto 0) + x"40"))) then
					s_main_rdata <= s_uart_rdata;
				else
					s_main_rdata <= (others => '0');
				end if; 

				if (r_valid = '1') then
					s_valid <= '0';
					s_addr <= r_addr;
				else
					s_valid <= s_main_valid and s_main_ready;
					s_addr <= s_main_addr;
				end if;   
		end process comb_ack;

		comb_shift : process (r_addr, s_main_rdata)
			begin
				for I in 0 to 31 loop
					if I < (31 - to_integer(unsigned(r_addr(1 downto 0))) * 8 + 1) then
						s_main_rdata_shift(I) <= s_main_rdata(I + to_integer(unsigned(r_addr(1 downto 0))) * 8);
					else
						s_main_rdata_shift(I) <= '0';
					end if;
				end loop;
		end process comb_shift;

    -- ******************************
    --           SEQUENTIAL
    -- ******************************
		seq : process (clock)
			begin
				if (clock'event and (clock = '1')) then
					if (reset = '1') then
						r_valid <= '0';
					else 
						r_valid <= s_valid;
						r_addr <= s_addr;
					end if;
				end if;
		end process seq;

  	-- ******************************
  	--              DEBUG
  	-- ******************************

end Sys_arch;