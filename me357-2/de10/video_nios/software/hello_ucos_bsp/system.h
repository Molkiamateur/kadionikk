/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'nios2' in SOPC Builder design 'nios2'
 * SOPC Builder design path: ../../nios2.sopcinfo
 *
 * Generated: Wed Dec 10 15:56:47 CET 2025
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x0a000020
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 100000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "fast"
#define ALT_CPU_DATA_ADDR_WIDTH 0x1c
#define ALT_CPU_DCACHE_BYPASS_MASK 0x80000000
#define ALT_CPU_DCACHE_LINE_SIZE 32
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_DCACHE_SIZE 2048
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 100000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 1
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_EXTRA_EXCEPTION_INFO
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 32
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 5
#define ALT_CPU_ICACHE_SIZE 4096
#define ALT_CPU_INITDA_SUPPORTED
#define ALT_CPU_INST_ADDR_WIDTH 0x1c
#define ALT_CPU_NAME "nios2"
#define ALT_CPU_NUM_OF_SHADOW_REG_SETS 0
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x0a000020
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 100000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "fast"
#define NIOS2_DATA_ADDR_WIDTH 0x1c
#define NIOS2_DCACHE_BYPASS_MASK 0x80000000
#define NIOS2_DCACHE_LINE_SIZE 32
#define NIOS2_DCACHE_LINE_SIZE_LOG2 5
#define NIOS2_DCACHE_SIZE 2048
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 1
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_EXTRA_EXCEPTION_INFO
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 32
#define NIOS2_ICACHE_LINE_SIZE_LOG2 5
#define NIOS2_ICACHE_SIZE 4096
#define NIOS2_INITDA_SUPPORTED
#define NIOS2_INST_ADDR_WIDTH 0x1c
#define NIOS2_NUM_OF_SHADOW_REG_SETS 0
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_UP_AVALON_VIDEO_DMA_CONTROLLER
#define __ALTERA_UP_AVALON_VIDEO_RGB_RESAMPLER
#define __SDRAM_64MB
#define __SEG7_IF


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_ENHANCED_INTERRUPT_API_PRESENT
#define ALT_IRQ_BASE NULL
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/jtag_uart"
#define ALT_STDERR_BASE 0xf000060
#define ALT_STDERR_DEV jtag_uart
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/jtag_uart"
#define ALT_STDIN_BASE 0xf000060
#define ALT_STDIN_DEV jtag_uart
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/jtag_uart"
#define ALT_STDOUT_BASE 0xf000060
#define ALT_STDOUT_DEV jtag_uart
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "nios2"


/*
 * VGA_Char_Buf_Subsystem_Char_Buf_DMA configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_Char_Buf_Subsystem_Char_Buf_DMA altera_up_avalon_video_dma_controller
#define VGA_CHAR_BUF_SUBSYSTEM_CHAR_BUF_DMA_BASE 0xf000000
#define VGA_CHAR_BUF_SUBSYSTEM_CHAR_BUF_DMA_IRQ -1
#define VGA_CHAR_BUF_SUBSYSTEM_CHAR_BUF_DMA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_CHAR_BUF_SUBSYSTEM_CHAR_BUF_DMA_NAME "/dev/VGA_Char_Buf_Subsystem_Char_Buf_DMA"
#define VGA_CHAR_BUF_SUBSYSTEM_CHAR_BUF_DMA_SPAN 16
#define VGA_CHAR_BUF_SUBSYSTEM_CHAR_BUF_DMA_TYPE "altera_up_avalon_video_dma_controller"


/*
 * VGA_Char_Buf_Subsystem_Onchip_SRAM configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_Char_Buf_Subsystem_Onchip_SRAM altera_avalon_onchip_memory2
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_BASE 0x9000000
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_CONTENTS_INFO ""
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_DUAL_PORT 1
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_INIT_CONTENTS_FILE "nios2_VGA_Char_Buf_Subsystem_Onchip_SRAM"
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_INIT_MEM_CONTENT 1
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_INSTANCE_ID "NONE"
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_IRQ -1
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_NAME "/dev/VGA_Char_Buf_Subsystem_Onchip_SRAM"
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_RAM_BLOCK_TYPE "AUTO"
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_SINGLE_CLOCK_OP 1
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_SIZE_MULTIPLE 1
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_SIZE_VALUE 8192
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_SPAN 8192
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_TYPE "altera_avalon_onchip_memory2"
#define VGA_CHAR_BUF_SUBSYSTEM_ONCHIP_SRAM_WRITABLE 1


/*
 * VGA_VGA_Pixel_DMA configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_VGA_Pixel_DMA altera_up_avalon_video_dma_controller
#define VGA_VGA_PIXEL_DMA_BASE 0xf000010
#define VGA_VGA_PIXEL_DMA_IRQ -1
#define VGA_VGA_PIXEL_DMA_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_VGA_PIXEL_DMA_NAME "/dev/VGA_VGA_Pixel_DMA"
#define VGA_VGA_PIXEL_DMA_SPAN 16
#define VGA_VGA_PIXEL_DMA_TYPE "altera_up_avalon_video_dma_controller"


/*
 * VGA_VGA_Pixel_RGB_Resampler configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_VGA_Pixel_RGB_Resampler altera_up_avalon_video_rgb_resampler
#define VGA_VGA_PIXEL_RGB_RESAMPLER_BASE 0xf000020
#define VGA_VGA_PIXEL_RGB_RESAMPLER_IRQ -1
#define VGA_VGA_PIXEL_RGB_RESAMPLER_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_VGA_PIXEL_RGB_RESAMPLER_NAME "/dev/VGA_VGA_Pixel_RGB_Resampler"
#define VGA_VGA_PIXEL_RGB_RESAMPLER_SPAN 4
#define VGA_VGA_PIXEL_RGB_RESAMPLER_TYPE "altera_up_avalon_video_rgb_resampler"


/*
 * bp configuration
 *
 */

#define ALT_MODULE_CLASS_bp altera_avalon_pio
#define BP_BASE 0xf000080
#define BP_BIT_CLEARING_EDGE_REGISTER 1
#define BP_BIT_MODIFYING_OUTPUT_REGISTER 0
#define BP_CAPTURE 1
#define BP_DATA_WIDTH 4
#define BP_DO_TEST_BENCH_WIRING 0
#define BP_DRIVEN_SIM_VALUE 0
#define BP_EDGE_TYPE "FALLING"
#define BP_FREQ 100000000
#define BP_HAS_IN 1
#define BP_HAS_OUT 0
#define BP_HAS_TRI 0
#define BP_IRQ 2
#define BP_IRQ_INTERRUPT_CONTROLLER_ID 0
#define BP_IRQ_TYPE "EDGE"
#define BP_NAME "/dev/bp"
#define BP_RESET_VALUE 0
#define BP_SPAN 16
#define BP_TYPE "altera_avalon_pio"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 32
#define ALT_SYS_CLK TIMER
#define ALT_TIMESTAMP_CLK none


/*
 * jtag_uart configuration
 *
 */

#define ALT_MODULE_CLASS_jtag_uart altera_avalon_jtag_uart
#define JTAG_UART_BASE 0xf000060
#define JTAG_UART_IRQ 1
#define JTAG_UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define JTAG_UART_NAME "/dev/jtag_uart"
#define JTAG_UART_READ_DEPTH 64
#define JTAG_UART_READ_THRESHOLD 8
#define JTAG_UART_SPAN 8
#define JTAG_UART_TYPE "altera_avalon_jtag_uart"
#define JTAG_UART_WRITE_DEPTH 64
#define JTAG_UART_WRITE_THRESHOLD 8


/*
 * leds configuration
 *
 */

#define ALT_MODULE_CLASS_leds altera_avalon_pio
#define LEDS_BASE 0xf0000c0
#define LEDS_BIT_CLEARING_EDGE_REGISTER 0
#define LEDS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define LEDS_CAPTURE 0
#define LEDS_DATA_WIDTH 10
#define LEDS_DO_TEST_BENCH_WIRING 0
#define LEDS_DRIVEN_SIM_VALUE 0
#define LEDS_EDGE_TYPE "NONE"
#define LEDS_FREQ 100000000
#define LEDS_HAS_IN 0
#define LEDS_HAS_OUT 1
#define LEDS_HAS_TRI 0
#define LEDS_IRQ -1
#define LEDS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define LEDS_IRQ_TYPE "NONE"
#define LEDS_NAME "/dev/leds"
#define LEDS_RESET_VALUE 0
#define LEDS_SPAN 16
#define LEDS_TYPE "altera_avalon_pio"


/*
 * onchip_sram configuration
 *
 */

#define ALT_MODULE_CLASS_onchip_sram altera_avalon_onchip_memory2
#define ONCHIP_SRAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define ONCHIP_SRAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define ONCHIP_SRAM_BASE 0x8000000
#define ONCHIP_SRAM_CONTENTS_INFO ""
#define ONCHIP_SRAM_DUAL_PORT 1
#define ONCHIP_SRAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_SRAM_INIT_CONTENTS_FILE "nios2_onchip_sram"
#define ONCHIP_SRAM_INIT_MEM_CONTENT 1
#define ONCHIP_SRAM_INSTANCE_ID "NONE"
#define ONCHIP_SRAM_IRQ -1
#define ONCHIP_SRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define ONCHIP_SRAM_NAME "/dev/onchip_sram"
#define ONCHIP_SRAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define ONCHIP_SRAM_RAM_BLOCK_TYPE "AUTO"
#define ONCHIP_SRAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define ONCHIP_SRAM_SINGLE_CLOCK_OP 1
#define ONCHIP_SRAM_SIZE_MULTIPLE 1
#define ONCHIP_SRAM_SIZE_VALUE 262144
#define ONCHIP_SRAM_SPAN 262144
#define ONCHIP_SRAM_TYPE "altera_avalon_onchip_memory2"
#define ONCHIP_SRAM_WRITABLE 1


/*
 * sdram configuration
 *
 */

#define ALT_MODULE_CLASS_sdram sdram_64mb
#define SDRAM_BASE 0x0
#define SDRAM_IRQ -1
#define SDRAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SDRAM_NAME "/dev/sdram"
#define SDRAM_SPAN 67108864
#define SDRAM_TYPE "sdram_64mb"


/*
 * seg7 configuration
 *
 */

#define ALT_MODULE_CLASS_seg7 SEG7_IF
#define SEG7_BASE 0xf0000e0
#define SEG7_IRQ -1
#define SEG7_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SEG7_NAME "/dev/seg7"
#define SEG7_SPAN 32
#define SEG7_TYPE "SEG7_IF"


/*
 * switchs configuration
 *
 */

#define ALT_MODULE_CLASS_switchs altera_avalon_pio
#define SWITCHS_BASE 0xf0000a0
#define SWITCHS_BIT_CLEARING_EDGE_REGISTER 0
#define SWITCHS_BIT_MODIFYING_OUTPUT_REGISTER 0
#define SWITCHS_CAPTURE 0
#define SWITCHS_DATA_WIDTH 10
#define SWITCHS_DO_TEST_BENCH_WIRING 0
#define SWITCHS_DRIVEN_SIM_VALUE 0
#define SWITCHS_EDGE_TYPE "NONE"
#define SWITCHS_FREQ 100000000
#define SWITCHS_HAS_IN 1
#define SWITCHS_HAS_OUT 0
#define SWITCHS_HAS_TRI 0
#define SWITCHS_IRQ -1
#define SWITCHS_IRQ_INTERRUPT_CONTROLLER_ID -1
#define SWITCHS_IRQ_TYPE "NONE"
#define SWITCHS_NAME "/dev/switchs"
#define SWITCHS_RESET_VALUE 0
#define SWITCHS_SPAN 16
#define SWITCHS_TYPE "altera_avalon_pio"


/*
 * timer configuration
 *
 */

#define ALT_MODULE_CLASS_timer altera_avalon_timer
#define TIMER_ALWAYS_RUN 0
#define TIMER_BASE 0xf000040
#define TIMER_COUNTER_SIZE 32
#define TIMER_FIXED_PERIOD 0
#define TIMER_FREQ 100000000
#define TIMER_IRQ 0
#define TIMER_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_LOAD_VALUE 99999
#define TIMER_MULT 0.001
#define TIMER_NAME "/dev/timer"
#define TIMER_PERIOD 1
#define TIMER_PERIOD_UNITS "ms"
#define TIMER_RESET_OUTPUT 0
#define TIMER_SNAPSHOT 1
#define TIMER_SPAN 32
#define TIMER_TICKS_PER_SEC 1000
#define TIMER_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_TYPE "altera_avalon_timer"


/*
 * ucosii configuration
 *
 */

#define OS_ARG_CHK_EN 1
#define OS_CPU_HOOKS_EN 1
#define OS_DEBUG_EN 1
#define OS_EVENT_NAME_EN 1
#define OS_FLAGS_NBITS 16
#define OS_FLAG_ACCEPT_EN 1
#define OS_FLAG_DEL_EN 1
#define OS_FLAG_EN 1
#define OS_FLAG_NAME_EN 1
#define OS_FLAG_QUERY_EN 1
#define OS_FLAG_WAIT_CLR_EN 1
#define OS_LOWEST_PRIO 20
#define OS_MAX_EVENTS 60
#define OS_MAX_FLAGS 20
#define OS_MAX_MEM_PART 60
#define OS_MAX_QS 20
#define OS_MAX_TASKS 10
#define OS_MBOX_ACCEPT_EN 1
#define OS_MBOX_DEL_EN 1
#define OS_MBOX_EN 1
#define OS_MBOX_POST_EN 1
#define OS_MBOX_POST_OPT_EN 1
#define OS_MBOX_QUERY_EN 1
#define OS_MEM_EN 1
#define OS_MEM_NAME_EN 1
#define OS_MEM_QUERY_EN 1
#define OS_MUTEX_ACCEPT_EN 1
#define OS_MUTEX_DEL_EN 1
#define OS_MUTEX_EN 1
#define OS_MUTEX_QUERY_EN 1
#define OS_Q_ACCEPT_EN 1
#define OS_Q_DEL_EN 1
#define OS_Q_EN 1
#define OS_Q_FLUSH_EN 1
#define OS_Q_POST_EN 1
#define OS_Q_POST_FRONT_EN 1
#define OS_Q_POST_OPT_EN 1
#define OS_Q_QUERY_EN 1
#define OS_SCHED_LOCK_EN 1
#define OS_SEM_ACCEPT_EN 1
#define OS_SEM_DEL_EN 1
#define OS_SEM_EN 1
#define OS_SEM_QUERY_EN 1
#define OS_SEM_SET_EN 1
#define OS_TASK_CHANGE_PRIO_EN 1
#define OS_TASK_CREATE_EN 1
#define OS_TASK_CREATE_EXT_EN 1
#define OS_TASK_DEL_EN 1
#define OS_TASK_IDLE_STK_SIZE 512
#define OS_TASK_NAME_EN 1
#define OS_TASK_PROFILE_EN 1
#define OS_TASK_QUERY_EN 1
#define OS_TASK_REG_TBL_SIZE 32
#define OS_TASK_STAT_EN 1
#define OS_TASK_STAT_STK_CHK_EN 1
#define OS_TASK_STAT_STK_SIZE 512
#define OS_TASK_SUSPEND_EN 1
#define OS_TASK_SW_HOOK_EN 1
#define OS_TASK_TMR_PRIO 0
#define OS_TASK_TMR_STK_SIZE 512
#define OS_THREAD_SAFE_NEWLIB 1
#define OS_TICKS_PER_SEC TIMER_TICKS_PER_SEC
#define OS_TICK_STEP_EN 1
#define OS_TIME_DLY_HMSM_EN 1
#define OS_TIME_DLY_RESUME_EN 1
#define OS_TIME_GET_SET_EN 1
#define OS_TIME_TICK_HOOK_EN 1
#define OS_TMR_CFG_MAX 16
#define OS_TMR_CFG_NAME_EN 1
#define OS_TMR_CFG_TICKS_PER_SEC 10
#define OS_TMR_CFG_WHEEL_SIZE 2
#define OS_TMR_EN 0

#endif /* __SYSTEM_H_ */
