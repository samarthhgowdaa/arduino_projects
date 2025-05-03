int switchState = 0;

void setup() {
  
  pinMode(11, OUTPUT); //green LED
  pinMode(10, OUTPUT); //red LED
  pinMode(9, OUTPUT); //Red LED
  pinMode(13, INPUT);

  //blink LEDs when program starts
  digitalWrite(11, HIGH);
  digitalWrite(10, HIGH);
  digitalWrite(9, HIGH);
  delay(100);
  
  digitalWrite(11, LOW);
  digitalWrite(10, LOW);
  digitalWrite(9, LOW);
  delay(100);

}

void loop() {
  
  switchState = digitalRead(13);
  if (switchState == LOW) {
    //the button is not pressed
    digitalWrite(11, HIGH);
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);
  }
  else {
    //the button is pressed
    digitalWrite(11, LOW);
    digitalWrite(10, LOW);
    digitalWrite(9, HIGH);
    delay(250);
    
    //toggle LEDs
    digitalWrite(11, LOW);
    digitalWrite(10, HIGH);
    digitalWrite(9, LOW);
    delay(250);
  }
}
