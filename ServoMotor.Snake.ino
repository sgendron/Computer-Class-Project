#include <Servo.h>

Servo sophiaServo;
Servo snakeServo;

const int trigPin = 5;
const int echoPin = 6;

long duration;
int distance;

void setup() {
  // put your setup code here, to run once:
  sophiaServo.attach(11);
  snakeServo.attach(10);

  
  pinMode (trigPin, OUTPUT) ;
  pinMode (echoPin, INPUT) ;
  Serial.begin(9600) ;
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

  digitalWrite (trigPin, LOW) ;
  delayMicroseconds (2) ;


  digitalWrite (trigPin, HIGH) ;
  delayMicroseconds (10) ;
  digitalWrite (trigPin, LOW) ;


  duration = pulseIn (echoPin, HIGH) ;
  distance= duration*0.034/2;

  Serial.print ("Distance: ");
  Serial.println(distance) ;

}
