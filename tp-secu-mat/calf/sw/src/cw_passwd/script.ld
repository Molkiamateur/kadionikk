/*
 * File: script.ld
 * Created Date: 2023-03-31 02:52:02 pm
 * Author: Mathieu Escouteloup
 * -----
 * Last Modified: 2025-06-28 11:44:36 am
 * Modified By: Mathieu Escouteloup
 * -----
 * License: See LICENSE.md
 * Copyright (c) 2025 ENSEIRB-MATMECA
 * -----
 * Description: 
 */


MEMORY
{
  RAM      (rwx) : ORIGIN = 0x00000000, LENGTH = 0x00000400
}

BOOT_PC = 0x00000000;
STACK_SIZE = 0x00000020;

SECTIONS
{  
  .ram :
  {
    KEEP(*start.o(.text*));
    *start.o(.rodata*);
    *start.o(.data*);
    *(.text*);
    *(.rodata*);
    *(.data*);
    *(.sdata*);
    *(.bss*);
  } > RAM

  .stack (ORIGIN(RAM) + LENGTH(RAM) - STACK_SIZE) (NOLOAD):
  {
    . = ALIGN(8);
    . = . + STACK_SIZE;
    . = ALIGN(8);
    _stack = . ;
  } > RAM
}
