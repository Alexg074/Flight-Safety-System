/****************************************************
 *  Visualiziation.c                                         
 *  Created on: 10-Mai-2024 12:28:19                      
 *  Implementation of the Class Visualaziation       
 *  Original author: The Administrator                     
 ****************************************************/
#include <pthread.h>
#include "Visualization.h"

void *startVisualization()
{
	while (1){		
		displayAircraftPos();
		displayAltitude();
		displayJoystick();
		displayPilotPower();
		displayPlanePower();
		delay(1000);
	}

	pthread_exit (NULL);
} 

