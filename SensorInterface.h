/****************************************************
 *  SensorInterface.h                                         
 *  Created on: 10-Mai-2024 09:40:43                      
 *  Implementation of the Class SensorInterface       
 *  Original author: The Administrator                     
 ****************************************************/

#if !defined(EA_475A7373_DB4A_41c1_A610_D5CE9673B6BB__INCLUDED_)
#define EA_475A7373_DB4A_41c1_A610_D5CE9673B6BB__INCLUDED_


#ifdef __cplusplus
extern "C" {
#endif

#include "JoystickSensor.h"
#include "AltimeterSensor.h"
#include "ObstacleSensor.h"
#include "VisibilitySensor.h"
#include "SpeedSensor.h"
#include "ModeButton.h"


int getAltitude();
void setAltitude(int newAltitude);
int getSpeed();
void setSpeed(int newSpeed);
int getGyroX();
void setGyroX(int newGyroX);
int getGyroY();
void setGyroY(int newGyroY);
int getInfrared();
void setInfrared(int newInfrared);


#ifdef __cplusplus
}
#endif


#endif /*!defined(EA_475A7373_DB4A_41c1_A610_D5CE9673B6BB__INCLUDED_)*/
 
