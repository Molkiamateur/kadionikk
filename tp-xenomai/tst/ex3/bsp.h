// Blinks on RPi Plug P1 pin 11 (which is GPIO pin 17)
#define LED6 RPI_GPIO_P1_11
#define LED5 RPI_GPIO_P1_22
#define LED4 RPI_GPIO_P1_18
#define LED3 RPI_GPIO_P1_16
#define LED2 RPI_GPIO_P1_12
#define LED1 RPI_GPIO_P1_26

void  BSP_init(void);
void  BSP_release(void);

void  BSP_setLED(unsigned char lite);
void  BSP_clrLED(unsigned char lite);
