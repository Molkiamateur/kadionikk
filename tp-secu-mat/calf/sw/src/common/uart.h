#ifndef UART_H 
#define UART_H

#include <stdint.h>


typedef struct {
  volatile uint32_t CONFIG;
  volatile uint32_t NCYCLE;
  volatile uint32_t STATUS;
  volatile uint32_t RESERVERD0;
  volatile uint8_t RX;
  volatile uint8_t RESERVERD1[3];
  volatile uint8_t TX;
  volatile uint8_t RESERVERD2[3];
} s_UART;


inline __attribute__ ((always_inline)) uint8_t __uart_rx_av(s_UART *UART) {
  return (UART->STATUS & 0x01);
}

inline __attribute__ ((always_inline)) uint8_t __uart_tx_ready(s_UART *UART) {
  return (UART->STATUS & 0x10);
}

#endif