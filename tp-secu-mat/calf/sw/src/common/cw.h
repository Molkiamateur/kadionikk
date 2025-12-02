#ifndef CW_H 
#define CW_H

#include <stdint.h>
#include "gpio8.h"
#include "uart.h"

#define ADDR_RAM    0x00000000
#define ADDR_GPIOA  0x00000800
#define ADDR_UART0  0x00000840

#define GPIOA ((s_GPIO8 *) (ADDR_GPIOA))
#define UART0 ((s_UART *) (ADDR_UART0))

#define PIN_LED0    0
#define PIN_LED1    1
#define PIN_LED2    2
#define PIN_TRIGGER 3

void cw_read_input(uint8_t *input, uint32_t len);
void cw_write_output(uint8_t *output, uint32_t len);
void cw_trigger_set();
void cw_trigger_rst();
void cw_wait_delay(uint32_t delay);

#endif