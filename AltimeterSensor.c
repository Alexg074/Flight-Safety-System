/****************************************************
 *  AltimeterSensor.c                                         
 *  Created on: 10-Mai-2024 09:40:43                      
 *  Implementation of the Class AltimeterSensor       
 *  Original author: The Administrator                     
 ****************************************************/

#include "AltimeterSensor.h"

int readAltimeter()
{
	return read_single_sensor(3) * 10;
} 

