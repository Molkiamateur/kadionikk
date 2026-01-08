void BSP_init(void);

void BSP_setLED(unsigned char lite);
void BSP_clrLED(unsigned char lite);

unsigned int BSP_readSW();

#define ON 			0
#define OFF 		1
unsigned int BSP_readBP(unsigned char nbr);

void SEG7_on(void);
void SEG7_off(void);
void SEG7_Decimal(unsigned int value);
