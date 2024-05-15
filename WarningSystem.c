/****************************************************
 *  WarningSystem.c                                         
 *  Created on: 10-Mai-2024 09:40:44                      
 *  Implementation of the Class WarningSystem       
 *  Original author: The Administrator                     
 ****************************************************/
#include <pthread.h>
#include "WarningSystem.h"

void *startWarningSystem()
{
	while (1){
		if (!readButton()){
			setButtonMode(!getButtonMode());
		}
		printf("button: %d\n", getButtonMode()); 
		//printf("visibility: %d\n", readVisibility()); 
		//printf("infrared: %d\n", getInfrared()); 
		//printf("altitude: %d\n", readAltimeter()); 
		//printf("speed: %d\n", readSpeed()); 
		
		//if (readAltimeter() < 8000 && readAltimeter() > 3000 && !getInfrared()){
				//printf("RISK: None\n");
				//setLedOne(0);
		//}
		//else if (readAltimeter() > 8000 && !getInfrared()){
			//printf("RISK: Low\n");
			//setLedOne(1);
		//}
		//else if (readAltimeter() < 3000 && !getInfrared()){
			//printf("RISK: Middle\n");
			//setLedOne(1);
		//}
		//else if (readAltimeter() < 8000 && getAltitude() > 3000 && getInfrared()){
			//printf("RISK: High\n");
		//}
		//else if (readAltimeter() > 8000 && getInfrared()){
			//printf("RISK: High\n");
			//setLedOne(1);
		//}
		//else if (readAltimeter() < 3000 && getInfrared() && getSpeed() < 800){
			//printf("RISK: Very High\n");
			//setLedOne(1);
		//}
		//else if (readAltimeter() < 3000 && getInfrared() && getSpeed() > 800){
			//printf("RISK: Extremely High\n");
			//setLedOne(1);
		//}
		
		// Adjusted the lighting
		if (readVisibility() > 200 && getInfrared()){
			printf("WARNING OBSTACLE DETECTED\n");
		}
		else if (readVisibility() < 200 && getInfrared() && getButtonMode()){
			printf("LOW VISIBILITY, INITILIAZING EVASION\n");
		}
		else if (readVisibility() < 200 && getInfrared() && !getButtonMode()){
			printf("NOT IN AUTOMATIC, PLEASE EVADE\n");
		}
		
		delay(200);
	}
	
	pthread_exit (NULL);
} 

