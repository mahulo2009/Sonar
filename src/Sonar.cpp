#include "Sonar.h"

Sonar::Sonar() : servo_(0)
{  
}

void Sonar::attachTrigger(int pin)
{
	ultrasonic_.attachTrigger(pin);
}
void Sonar::attachEcho(int pin)
{
	ultrasonic_.attachEcho(pin);
}
void Sonar::attachServo(Servo * servo)
{
	this->servo_=servo;
}

unsigned int Sonar::read()
{
	unsigned int distance =	ultrasonic_.read();
	return distance;
}

void Sonar::moveTo(double angle)
{
	#ifdef SONAR_DEBUG
	Serial.print("Sonar::moveTo:");
  	Serial.print("\t");
  	Serial.print(angle);
   	Serial.print("\n");
	#endif

	this->angle_ = angle;

	if (this->servo_ != 0) {
		this->servo_->writeMicroseconds(1450 + (600/(PI/2.0)) * angle ) ;
	}
}