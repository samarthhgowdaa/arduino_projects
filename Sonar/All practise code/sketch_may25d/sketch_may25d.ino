#include<Servo.h>

Servo myservo;

int potOut = A0;
int value;
int angle;

void setup() {
  // put your setup code here, to run once:
  myservo.attach(3);
  pinMode(potOut, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  value = analogRead(potOut);
  angle = map(value, 0, 1023, 0, 180);
  myservo.write(angle);
  Serial.println(angle);

}
