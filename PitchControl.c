/****************************************************
 *  PitchControl.c                                         
 *  Created on: 10-Mai-2024 09:40:43                      
 *  Implementation of the Class PitchControl       
 *  Original author: The Administrator                     
 ****************************************************/
#include <pthread.h>
#include "PitchControl.h"

void *startPitchControl()
{
	while (1){
		if(readAltimeter() > 8000 && getButtonMode()) {
			setAltitude(8000);
		} else if (readAltimeter() < 3000 && getButtonMode()) {
			setAltitude(3000);
		} else {
			setAltitude(readAltimeter());
		}
		delay(400);
	}
 
  pthread_exit (NULL);
} 

