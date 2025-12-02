#ifndef GPIO8_H 
#define GPIO8_H

#include <stdint.h>

typedef struct {
  volatile uint8_t ENO;
  volatile uint8_t RESERVERD0[3];
  volatile uint8_t IN;
  volatile uint8_t RESERVERD1[3];
  volatile uint8_t OUT;
  volatile uint8_t RESERVERD2[3];
} s_GPIO8;

inline __attribute__ ((always_inline)) void __gpio8_set(s_GPIO8 *GPIO8, uint8_t pin) {
  GPIO8->ENO |= (1 << pin);
  GPIO8->OUT |= (1 << pin);
}

inline __attribute__ ((always_inline)) void __gpio8_rst(s_GPIO8 *GPIO8, uint8_t pin) {
  GPIO8->ENO &= ~(1 << pin);
  GPIO8->OUT &= ~(1 << pin);
}

#endif