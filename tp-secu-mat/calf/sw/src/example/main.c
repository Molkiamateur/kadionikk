#include "main.h"

void main() {
  // ******************************
  //            VARIABLE
  // ******************************
  volatile uint32_t a;
  volatile uint32_t b;
  volatile uint32_t c;

  // ******************************
  //         INITIALIZATION
  // ******************************
  UART0->NCYCLE = 2604;
  GPIOA->ENO = 0xFF;
  GPIOA->OUT = 0x00;

  UART0->TX = 'r';

  // ******************************
  //           MAIN LOOP
  // ******************************
  a = 1;
  b = 2;
  while (1) {
    c = a + b;
  }
}