int trig = 10;
int echo = 11;

long duration;  //Larger number than int
float distance;

void setup() {
  // put your setup code here, to run once:
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(trig, LOW);
  delay(10);  //milliseconds

  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);

  duration = pulseIn(echo, HIGH);

  //distance = duration/1000000 * 343/2 * 100; //converting it to milli secs and distance in centimeters
  distance = duration * 0.017;  //simplified version

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println("cm");
}
