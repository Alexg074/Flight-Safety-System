/****************************************************
 *  SpeedSensor.c                                         
 *  Created on: 10-Mai-2024 09:40:44                      
 *  Implementation of the Class SpeedSensor       
 *  Original author: The Administrator                     
 ****************************************************/

#include "SpeedSensor.h"

int readSpeed()
{
	return read_single_sensor(2);
} 

