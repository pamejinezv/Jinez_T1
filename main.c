/**
 * @file    RGB.c
 * @brief   Application entry point.
 */
/**Standard input/output to debug console*/
#include <stdio.h>
/**Standard integer definition provided by the compiler*/
#include <stdint.h>
#include "MK64F12.h"

#define DELAY 1000000

void delay(uint32_t delay);


int main(void) {

		SIM->SCGC5 = 0x2000;
		PORTE->PCR[26] = 0x00000100;
		GPIOE->PDOR = 0x04000000;
		GPIOE->PDDR = 0x04000000;

		SIM->SCGC5 |= 0x400;
		PORTB->PCR[21]= 0x00000100;
		GPIOB->PDOR = 0x00600000;
		PORTB->PCR[22]= 0x00000100;
		GPIOB->PDDR = 0x00600000;

	while(1) {

		    GPIOB->PDOR = 0x00400000;
		    delay(DELAY);
			GPIOB->PDOR = 0x00200000;
	        delay(DELAY);
			GPIOE->PDOR = 0;
			delay(DELAY);
			GPIOE->PDOR = 0x04000000;
            delay(DELAY);

	}

    return 0 ;
}

void delay(uint32_t delay)
{
	volatile uint32_t i;

	for(i=0;i<delay;i++){

	}
}


