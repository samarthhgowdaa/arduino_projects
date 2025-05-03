int ledpin=7;
void setup() {
  pinMode(ledpin,OUTPUT);
}
void loop() {
  digitalWrite(ledpin, HIGH);
  delay(500); //delay is 0.5 sec
  digitalWrite(ledpin, LOW);
  delay(500);
}
