#include <lpc214x.h>
#include "LPC2148_delay.h"
#include "LPC2148_LCD_4_BIT_HEADER_FILE.h"

int main()
{
	PINSEL0 = 0X00000000;
	PINSEL1 = 0X00000000;
	PINSEL2 = 0X00000000;
	
	IODIR0 = 0X00000003;
	
	while(1)
	{
		IOSET0 = 0X00000001;
//		delay_ms(1000);
	}
}
