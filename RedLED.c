/****************************************************
 *  RedLED.c                                         
 *  Created on: 10-Mai-2024 09:40:43                      
 *  Implementation of the Class RedLED       
 *  Original author: The Administrator                     
 ****************************************************/

#include "RedLED.h"

int setLedOne(int LedValue)
{
	set_led_1(LedValue);
	return LedValue;
} 

