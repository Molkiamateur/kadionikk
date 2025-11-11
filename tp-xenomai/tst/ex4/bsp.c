void  BSP_init (void) {
  bcm2835_init();


  // Set the pin to be an output
  bcm2835_gpio_fsel(LED1, BCM2835_GPIO_FSEL_OUTP);
  bcm2835_gpio_fsel(LED2, BCM2835_GPIO_FSEL_OUTP);
  bcm2835_gpio_fsel(LED3, BCM2835_GPIO_FSEL_OUTP);
  bcm2835_gpio_fsel(LED4, BCM2835_GPIO_FSEL_OUTP);
  bcm2835_gpio_fsel(LED5, BCM2835_GPIO_FSEL_OUTP);
  bcm2835_gpio_fsel(LED6, BCM2835_GPIO_FSEL_OUTP);

  bcm2835_gpio_write(LED1, LOW);
  bcm2835_gpio_write(LED2, LOW);
  bcm2835_gpio_write(LED3, LOW);
  bcm2835_gpio_write(LED4, LOW);
  bcm2835_gpio_write(LED5, LOW);
  bcm2835_gpio_write(LED6, LOW);
}

void  BSP_release (void) {
  bcm2835_close();
}


/*
********************************************************************************
*                                             LED SET
*                                     void BSP_SetLED(INT8U lite)
*
* Description : Sets the given LED#
*
* Arguments   : LED# (1 to 6)
*
* Returns     : None
*
* Note(s)     : None
********************************************************************************
*/
void  BSP_setLED (unsigned char lite) {
if(lite == 1)
      bcm2835_gpio_write(LED1, HIGH);
if(lite == 2)
      bcm2835_gpio_write(LED2, HIGH);
if(lite == 3)
      bcm2835_gpio_write(LED3, HIGH);
if(lite == 4)
      bcm2835_gpio_write(LED4, HIGH);
if(lite == 5)
      bcm2835_gpio_write(LED5, HIGH);
if(lite == 6)
      bcm2835_gpio_write(LED6, HIGH);
}


/*
********************************************************************************
*                                             LED CLEAR
*                                      void  BSP_clrLED (INT8U lite)
*
* Description : Clears the given LED#
*
* Arguments   : LED# (1 to 6)
*
* Returns     : None
*
* Note(s)     : None
********************************************************************************
*/
void  BSP_clrLED (unsigned char lite) {
if(lite == 1)
      bcm2835_gpio_write(LED1, LOW);
if(lite == 2)
      bcm2835_gpio_write(LED2, LOW);
if(lite == 3)
      bcm2835_gpio_write(LED3, LOW);
if(lite == 4)
      bcm2835_gpio_write(LED4, LOW);
if(lite == 5)
      bcm2835_gpio_write(LED5, LOW);
if(lite == 6)
      bcm2835_gpio_write(LED6, LOW);
}

