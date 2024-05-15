/****************************************************
 *  EngineControl.c                                         
 *  Created on: 10-Mai-2024 09:40:43                      
 *  Implementation of the Class EngineControl       
 *  Original author: The Administrator                     
 ****************************************************/
#include <pthread.h>
#include "EngineControl.h"

void *startEngineControl()
{
	while (1){		
	
		if(readSpeed() > 900  && getButtonMode()){
			setSpeed(900);
		}
		else if(readSpeed() < 400  && getButtonMode()){
			setSpeed(400);
		}
		else setSpeed(readSpeed());
	
		delay(300);
	}

	pthread_exit (NULL);
}

	


