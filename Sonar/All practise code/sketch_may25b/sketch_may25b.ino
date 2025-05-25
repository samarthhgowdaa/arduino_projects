int r = 9;
int g = 10;
int b = 11;

void setup() {
  // put your setup code here, to run once:
  pinMode(r, OUTPUT);
  pinMode(g, OUTPUT);
  pinMode(b, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //digitalWrite(r, HIGH);
  //digitalWrite(g, HIGH);
  //digitalWrite(b, HIGH);
  analogWrite(b, 1000);

}
