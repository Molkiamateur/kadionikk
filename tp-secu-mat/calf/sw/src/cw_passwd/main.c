#include "main.h"

void main() {
  // ******************************
  //            VARIABLE
  // ******************************
  uint8_t ready;
  uint8_t input[32];
  uint8_t output[32];
  uint8_t passwd[PASSWD_MAX] = {
    'i', '4', 'c', 'd',
    '8', '1', 'a', 'z',
    'q', 'w', 'e', 'r',
    '3', 'x', 'm', 'k',
    'p', '0', 'l', 't',
    'u', 'u', 'u', 'u',
    '1', 'w', '4', '7',
    '5', '6', '0', 'o'};

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
      cw_read_input(input, PASSWD_LEN);

      volatile uint8_t valid = 'y';

      cw_trigger_set();

      for (uint32_t b = 0; b < PASSWD_LEN; b = b + 1) {
        if (input[b] != passwd[b]) {
          valid = 'n';
          break;
        }
      }

      cw_trigger_rst();

      output[0] = valid;
      cw_write_output(output, 1);
    }
  }
}