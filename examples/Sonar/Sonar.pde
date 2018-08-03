#include <Sonar.h>

#define PIN_SONAR_TRIGGER 16
#define PIN_SONAR_ECHO 15

Sonar sonar;

void setup() {
	//Setup Serial line.
  	Serial.begin(115200);
  
 	sonar.attachTrigger(PIN_SONAR_TRIGGER);
	sonar.attachEcho(PIN_SONAR_ECHO);
}

void loop() { 
	unsigned int	distance = sonar.read(0);
	Serial.print("Distance:");
  	Serial.println(distance);
	delay(1000);
}
