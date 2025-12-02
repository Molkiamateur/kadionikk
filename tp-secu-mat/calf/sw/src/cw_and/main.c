#include "main.h"

void main() {
  // ******************************
  //            VARIABLE
  // ******************************
  uint8_t ready;
  uint8_t input[32];
  uint8_t output[32];

  // ******************************
  //         INITIALIZATION
  // ******************************
  UART0->NCYCLE = 2604;
  GPIOA->ENO = 0xFF;
  GPIOA->OUT = 0x00;

  UART0->TX = 'r';

  // ******************************
  //             READY
  // ******************************
  ready = 0;
  while (ready == 0) {
    if (__uart_rx_av(UART0)) {
      input[0] = UART0->RX;
      
      if (input[0] == 'r') {
        __gpio8_set(GPIOA, PIN_LED0);
        ready = 1;
      }
    }
  }

  // ******************************
  //           MAIN LOOP
  // ******************************
  while (1) {
    cw_read_input(input, 1);

    if (input[0] == 's') {
      
    }
  }
}