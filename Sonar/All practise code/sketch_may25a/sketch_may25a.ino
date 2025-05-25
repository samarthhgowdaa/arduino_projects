int pot = 13;
int wiper = A0;
int value;

void setup() {
  // put your setup code here, to run once:
  pinMode(pot, OUTPUT);
  Serial.begin(9600);
  
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(pot, HIGH);
  value = analogRead(wiper);
  Serial.println(value);
}
