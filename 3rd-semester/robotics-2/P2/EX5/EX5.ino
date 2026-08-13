#include <Servo.h>

Servo servoTeste;

void setup() {

  servoTeste.attach(11); 

}

void loop() {

  servoTeste.write(90);

}
