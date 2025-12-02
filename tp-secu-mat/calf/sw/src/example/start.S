/*
 * File: start.S
 * Created Date: 2023-03-31 02:51:10 pm
 * Author: Mathieu Escouteloup
 * -----
 * Last Modified: 2025-07-03 12:57:51 pm
 * Modified By: Mathieu Escouteloup
 * -----
 * License: See LICENSE.md
 * Copyright (c) 2025 ENSEIRB-MATMECA
 * -----
 * Description: 
 */

#define ADDR_RAM    0x000
#define ADDR_GPIO8  0x800
#define ADDR_UART   0x840

.section .rodata

.section .text
## ******************************
##             BOOT
## ******************************
.globl _start
_start:
  la x2, _stack

  call main

_end_loop:
  j _end_loop

.section .data