#ifndef MAIN_H 
#define MAIN_H

#include <stdint.h>
#include "../common/gpio8.h"
#include "../common/uart.h"

#define ADDR_RAM    0x00000000
#define ADDR_GPIOA  0x00000800
#define ADDR_UART0  0x00000840

#define GPIOA ((s_GPIO8 *) (ADDR_GPIOA))
#define UART0 ((s_UART *) (ADDR_UART0))

void main();

#endif