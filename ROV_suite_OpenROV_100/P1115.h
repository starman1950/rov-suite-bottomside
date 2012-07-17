/*
 *  P1115.h
 *  
 *
 *  Created by Chris Konstad on 11/4/11.
 *  Released into the public domain
 *  This Library is used to help the Arduino read the P1115 Pressure sensor
 *  The original voltage to depth conversion was written by Jay Issacs
 *
 */

#ifndef P1115_h
#define P1115_h

#include "Arduino.h"

class P1115
{
	public:
	P1115(int inPin);	//initialize the sensor on a pin
	float getDepthMeters();	//return the depth in meters
	void zeroSensor();	//set the current pressure as 0 meters

	private:
	int pin;
	float depthMeters;
	float kPa;
	float zeroDepth;
	float zeroKPA;
	float zeroReading;
	float reading;

};

#endif                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                              