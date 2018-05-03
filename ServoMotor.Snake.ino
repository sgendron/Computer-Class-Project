#include <Servo.h>

Servo sophiaServo;
Servo snakeServo;


void setup() {
  // put your setup code here, to run once:
  sophiaServo.attach(11);
  snakeServo.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 175; i++){
  sophiaServo.write(i);
  delay(10);
  }

  for (int i = 175; i > 0; i--){
    sophiaServo.write(i);
    delay(10);
  } 
  for (int i = 0; i < 175; i++){
  snakeServo.write(i);
  delay(10);
  }

  for (int i = 175; i > 0; i--){
    snakeServo.write(i);
    delay(10);
  }
 }
