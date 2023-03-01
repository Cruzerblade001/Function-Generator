/*
 * IncFile2.h
 *
 * Created: 11-07-2022 23:58:47
 *  Author: ADMIN
 */ 


#ifndef INCFILE2_H_
#define INCFILE2_H_

#define F_CPU 16000000UL						//--- F_CPU Defined 16MHz
#include <avr/io.h>								//--- AVR IO lib File
#include <util/delay.h>							//--- Delay Lib file
#include <util/twi.h>							//--- TWI Status File
#include <math.h>								//--- Math Func
#define SCL_CLK 400000L							//--- SCL for TWI
#define BITRATE(TWSR)	((F_CPU/SCL_CLK)-16)/(2*pow(4,(TWSR&((1<<TWPS0)|(1<<TWPS1)))))		//--- Bitrate formula

void twi_init();
void twi_repeated_start();
void twi_write_cmd(unsigned char address);
void twi_write_dwr(unsigned char val);
void twi_stop();
char twi_read_ack();
char twi_read_nack();




#endif /* INCFILE2_H_ */
