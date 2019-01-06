#ifndef Sonar_H
#define Sonar_H

//#define SONAR_DEBUG 1

#include "Arduino.h"
#include <Servo.h>
#include <Ultrasonic.h>
#include <SonarBase.h>

class Sonar : public SonarBase {

	public:

    	Sonar();

		virtual unsigned int read();
		virtual void moveTo(float angle);
		virtual float getAngle() { return angle_; };

		void attachTrigger(int pin);
		void attachEcho(int pin);
		void attachServo(Servo * servo);

	private:
	
		Servo * servo_;
		Ultrasonic ultrasonic_;
		float angle_;
};
#endif

