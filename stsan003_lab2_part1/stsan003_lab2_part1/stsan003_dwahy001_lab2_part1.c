/*	Partner(s) Name & E-mail: Daniel Wahyu dwahy001@ucr.edu
 *	Lab Section: 024
 *	Assignment: Lab # 2 Exercise # 1
 *	Exercise Description: [optional - include for your own benefit]
 *	
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */

#include <avr/io.h>

int main(void)
{
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs
	// Initialize output on PORTB to 0x00
	unsigned char temp_input = 0x00;
	unsigned char temp_output = 0x00;
	while(1)
	{
		temp_input = PINA & 0x03;
		if (temp_input == 0x01) {
			temp_output = 0x01;
		} else {
			temp_output = 0x00;
		}
		
		PORTB = temp_output;
	}
}


