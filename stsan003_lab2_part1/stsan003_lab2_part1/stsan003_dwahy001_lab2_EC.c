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
	DDRB = 0x00; PORTB = 0xFF;
	DDRC = 0x00; PORTC = 0xFF; 
	DDRD = 0xFF; PORTD = 0x00;
	unsigned char sumOfABC = 0x00;
	while(1)
	{
		sumOfABC = PINA + PINB + PINC;
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
