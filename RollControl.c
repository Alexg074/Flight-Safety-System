/****************************************************
 *  RollControl.c                                         
 *  Created on: 10-Mai-2024 09:40:43                      
 *  Implementation of the Class RollControl       
 *  Original author: The Administrator                     
 ****************************************************/
#include <pthread.h>
#include "RollControl.h"

void *startRollControl()
{
	while (1){
		setGyroX(readJoystickX());
		setGyroY(readJoystickY());

		if (getGyroX() < -15 && getButtonMode()){
			setGyroX(-15);
		}
		else if (getGyroX() > 15 && getButtonMode()){
			setGyroX(15);
		}
		if (getGyroY() < -15 && getButtonMode()){
			setGyroY(-15);
		}
		else if (getGyroY() > 15 && getButtonMode()){
			setGyroY(15);
		}	

		delay(250);
	}

	pthread_exit (NULL);
} 

