#include "cw.h"


void cw_read_input(uint8_t *input, uint32_t len) {
  for (uint32_t i = 0; i < len; i = i + 1) {
    while (!__uart_rx_av(UART0));
    input[i] = UART0->RX;
  }
}

void cw_write_output(uint8_t *output, uint32_t len) {
  for (uint32_t i = 0; i < len; i = i + 1) {
    while (!__uart_tx_ready(UART0));
    UART0->TX = output[i];
  }
}

void cw_trigger_set() {
  GPIOA->ENO |= (1 << PIN_TRIGGER);
  GPIOA->OUT |= (1 << PIN_TRIGGER);
}

void cw_trigger_rst() {
  GPIOA->ENO &= ~(1 << PIN_TRIGGER);
  GPIOA->OUT &= ~(1 << PIN_TRIGGER);
}

void cw_wait_delay(uint32_t delay) {
  volatile uint32_t cnt = 0;

  while (cnt < delay) {
    cnt = cnt + 1;
  }
}