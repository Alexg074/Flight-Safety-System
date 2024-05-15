/****************************************************
 *  ObstacleDetectionControl.c                                         
 *  Created on: 10-Mai-2024 09:40:43                      
 *  Implementation of the Class ObstacleDetectionControl       
 *  Original author: The Administrator                     
 ****************************************************/
#include <pthread.h>
#include "ObstacleDetectionControl.h"

void *startDetectionControl()
{
	
	int cnt = 0;
	while (1){
		setInfrared(readObstacle());
		if (readObstacle()) {
			cnt = 15;
		}
		else cnt--;
		
		if(cnt > 0){
			
			setLedTwo(1);
		}
		else {
			setLedTwo(0);
		}
		
		delay(200);		
	}

  pthread_exit (NULL);
} 

