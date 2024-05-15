/****************************************************
 *  SensorInterface.c                                         
 *  Created on: 10-Mai-2024 09:40:43                      
 *  Implementation of the Class SensorInterface       
 *  Original author: The Administrator                     
 ****************************************************/

#include "SensorInterface.h"

int altitude;
int speed;
int gyroX;
int gyroY;
int infrared;
int buttonMode;



int getAltitude()
{
	return altitude;
}

void setAltitude(int newAltitude)
{
	altitude = newAltitude;
}

int getSpeed()
{
	return speed;
}

void setSpeed(int newSpeed)
{
	speed = newSpeed;
}

int getGyroX()
{
	return gyroX;
}

void setGyroX(int newGyroX)
{
	gyroX = newGyroX;
}

int getGyroY()
{
	return gyroY;
}

void setGyroY(int newGyroY)
{
	gyroY = newGyroY;
}

int getInfrared()
{
	return infrared;
}

void setInfrared(int newInfrared)
{
	infrared = newInfrared;
} 

int getButtonMode()
{
	return buttonMode;
}

void setButtonMode(int newButtonInput){
	buttonMode = newButtonInput;
}

