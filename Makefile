C:: 
	gcc -c devices.c;
	gcc -c MainControl.c;
	gcc -c ControlLogic.c;
	gcc -c SensorInterface.c;
	
	gcc -c PitchControl.c;
	gcc -c AltimeterSensor.c;
	
	gcc -c RollControl.c;
	gcc -c JoystickSensor.c;
	
	gcc -c EngineControl.c;
	gcc -c SpeedSensor.c;
	
	gcc -c ObstacleDetectionControl.c;
	gcc -c ObstacleSensor.c;
	
	gcc -c WarningSystem.c;
	gcc -c RedLED.c;
	gcc -c YellowLED.c;
	gcc -c VisibilitySensor.c;
	gcc -c ModeButton.c;
	
	gcc -c Visualization.c;
	gcc -c Display.c;
	
	gcc -o MainControl MainControl.o devices.o ControlLogic.o PitchControl.o ModeButton.o SensorInterface.o AltimeterSensor.o Visualization.o Display.o VisibilitySensor.o RollControl.o JoystickSensor.o EngineControl.o SpeedSensor.o ObstacleDetectionControl.o ObstacleSensor.o WarningSystem.o RedLED.o YellowLED.o -lrt -lwiringPi -lpthread -lm
clean::
	rm *.o MainControl

all:: C
