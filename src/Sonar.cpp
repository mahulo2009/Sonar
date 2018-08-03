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

unsigned int Sonar::read(int position)
{
	if (this->servo_ != 0) {
		this->servo_->write(position);
	}

	unsigned int distance =	ultrasonic_.read();
	return distance;
}
