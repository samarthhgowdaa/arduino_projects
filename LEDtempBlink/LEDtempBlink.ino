int temperature= 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);  
}

void loop() 
{
  if (temperature < 50 && temperature > 10) 
  {
    //do thing A
    digitalWrite(6, HIGH);
    delay(500);
    digitalWrite(6, LOW);
    delay(500);
  }

  else if (temperature > 50 && temperature < 70) 
  {
  //do thing B
  digitalWrite(7, HIGH);
  delay(500);
  digitalWrite(7, LOW);
  delay(500);
  }

  else
  {
  // do thing C
  digitalWrite(8, HIGH);
  delay(500);
  digitalWrite(8, LOW);
  delay(500);
  }
}
