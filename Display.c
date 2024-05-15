/****************************************************
 *  Display.c                                         
 *  Created on: 10-Mai-2024 12:28:19                      
 *  Implementation of the Class Display       
 *  Original author: The Administrator                     
 ****************************************************/

#include "Display.h"

void displayAircraftPos()
{
	printf("Position: Madrid\n"); 
}

void displayAltitude()
{
	printf("Plane Altitude: %d\n", getAltitude()); 
}

void displayJoystick()
{
	printf("JoystickX: %d\n", getGyroX());
	printf("JoystickY: %d\n", getGyroY());  
}

void displayPilotPower()
{
	printf("Pilot Power: %d\n", readSpeed()); 
}

void displayPlanePower()
{
	printf("Plane Power: %d\n", getSpeed()); 
} 

