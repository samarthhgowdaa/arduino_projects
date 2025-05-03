float myFloatValue= 1;
int myValue= 4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  Serial.println(myValue);
  myValue= myFloatValue+2;
  Serial.println(myValue);
  myValue= myValue-7;
  Serial.println(myValue);
  myValue= myValue*5;
  Serial.println(myValue);
}

void loop() {
  // put your main code here, to run repeatedly:

}
