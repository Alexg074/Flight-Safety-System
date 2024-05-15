/****************************************************
 *  ControlLogic.c                                         
 *  Created on: 10-Mai-2024 09:40:43                      
 *  Implementation of the Class ControlLogic       
 *  Original author: The Administrator                     
 ****************************************************/
#include <stdio.h>    // Used for printf() statements
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdint.h>
#include <wiringPi.h> // Include WiringPi library!
#include <pthread.h>
#include <math.h>
#include <time.h>
#include "devices.h"
#include <semaphore.h>
#include <unistd.h>
#include "ControlLogic.h"
#define NUM_THREADS 6

void startControlThreads()
{
	qint n;
    n = init_devices ();

    pthread_t thread [NUM_THREADS]; 

    pthread_create(&thread[0], NULL, startPitchControl, NULL);
    pthread_create(&thread[1], NULL, startRollControl, NULL);
    pthread_create(&thread[2], NULL, startEngineControl, NULL);
    pthread_create(&thread[3], NULL, startDetectionControl, NULL);
    pthread_create(&thread[4], NULL, startWarningSystem, NULL);	 
	pthread_create(&thread[5], NULL, startVisualization, NULL);	

    pthread_join(thread[0], NULL);
    pthread_join(thread[1], NULL);
    pthread_join(thread[2], NULL);
    pthread_join(thread[3], NULL);
    pthread_join(thread[4], NULL);
    pthread_join(thread[5], NULL);


    close_devices ();

    return (0);
} 

