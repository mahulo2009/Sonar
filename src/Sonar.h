#ifndef Sonar_H
#define Sonar_H

#define SONAR_DEBUG 1

#include "Arduino.h"
#include <Servo.h>
#include <Ultrasonic.h>

class Sonar {
	public:
    	Sonar();
		void attachTrigger(int pin);
		void attachEcho(int pin);
		void attachServo(Servo * servo);
		unsigned int read(int position);
	private:
		Servo * servo_;
		Ultrasonic ultrasonic_;
};
#endif

