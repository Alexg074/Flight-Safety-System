/****************************************************
 *  JoystickSensor.c                                         
 *  Created on: 10-Mai-2024 09:40:43                      
 *  Implementation of the Class JoystickSensor       
 *  Original author: The Administrator                     
 ****************************************************/

#include "JoystickSensor.h"

int readJoystickX()
{
	return Read_X_Giroscope();
} 

int readJoystickY()
{
	return Read_Y_Giroscope();
} 

