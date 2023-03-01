#include <avr/io.h>
#include <util/twi.h>			//--- Give Status of I2C Bus will operation
#define F_CPU	16000000UL
#include <util/delay.h>
#include "twi_lcd.h"


int main(void)
{

    			twi_init();								//--- TWI Initialize
    			twi_lcd_init();							//--- TWI LCD Initialize
	/* Replace with your application code */
	while (1)
	{

			twi_lcd_msg("1.freq - 50Hz");			    //--- Send a String to LCD
		    twi_lcd_cmd(0xC0);						//--- Select 2nd Row
		    twi_lcd_msg("2.freq - 100Hz");
			_delay_ms(500);           //--- Send a String to LCD
			twi_lcd_cmd(0x01);
			twi_lcd_msg("3.freq - 150Hz");
			_delay_ms(500); 
			twi_lcd_cmd(0x01);
						                           
	}
}
