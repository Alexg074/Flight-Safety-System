#include <stdio.h>    // Used for printf() statements
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <stdint.h>
#include <wiringPi.h> // Include WiringPi library!

#include <time.h>

// #define TRUE 1
// #define FALSE 0

int init_devices();

// functions to read analog channels
int read_single_sensor (int analog_channel); // returs digital value of the channel
int read_all_sensors (int values[]); // returs vector with 8 values of the 8 channels

// functions to turn on/off leds
int set_led_1 (int Led_Value); // Led_Value = 0 (off), 1 (on)
int set_led_2 (int Led_Value);

// functions to read digital inputs 
int read_button (); // returns 1 (button pressed) or 0 (no pressed)
int read_infrared (); // returns 0 (object detected) or 1 (no detected)

// functions to read ultrasound 
int set_trigger (int signal_value); // ultrasound trigger
int read_echo (); // ultrasound echo

// function to move servomotor 
int servo (int position);

int Read_X_Giroscope ();
int Read_Y_Giroscope ();

double get_x_rotation(double x, double y, double z);
double get_y_rotation(double x, double y, double z);
double dist(double a, double b);

int read_word_2c(int addr);

int close_devices ();

