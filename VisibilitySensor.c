/****************************************************
 *  VisibilitySensor.c                                         
 *  Created on: 10-Mai-2024 09:40:44                      
 *  Implementation of the Class VisibilitySensor       
 *  Original author: The Administrator                     
 ****************************************************/

#include "VisibilitySensor.h"

int readVisibility()
{
	return read_single_sensor(0);
} 

