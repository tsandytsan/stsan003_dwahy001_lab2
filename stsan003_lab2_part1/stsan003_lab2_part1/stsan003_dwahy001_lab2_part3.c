/*	Partner(s) Name & E-mail: Daniel Wahyu dwahy001@ucr.edu
 *	Lab Section: 024
 *	Assignment: Lab # 2 Exercise # 3
 *	Exercise Description: [optional - include for your own benefit]
 *	
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <avr/io.h>

int main(void)
{
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRC = 0xFF; PORTC = 0x00; // Configure port B's 8 pins as outputs
	// Initialize output on PORTB to 0x00
	unsigned char temp_input = 0x00;
	while(1)
	{
		unsigned char cntavail = 0x00;
		temp_input = PINA & 0x0F;
		while (temp_input){
			cntavail += temp_input & 0x01;
			temp_input >>= 1;
		}
		
		cntavail = 4 - cntavail;
		if (cntavail == 0x00) {
			cntavail = 0x80;
		}
		PORTC = cntavail;
	}
}
