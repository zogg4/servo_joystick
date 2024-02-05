#include <Servo.h>
int xValue;   // joystick x-axis value 0-1023
int servoPin=9;
int servoPosition; //   0-180 degrees
Servo myServo;

void setup() {

Serial.begin(9600);
myServo.attach(servoPin);

}

void loop() {

xValue=analogRead(A0); // 0-1023   max left=0    max right=1023
Serial.println(xValue);
servoPosition=map(xValue,0,1023,0,180);
myServo.write(servoPosition);

}
