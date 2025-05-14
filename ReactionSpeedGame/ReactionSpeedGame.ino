int button1 = 13;
int button2 = 6;

int indicator1 = 12;
int indicator2 = 8;

int greenLed = 11;
int blueLed = 10;
int redLed = 9;

int buzzer = 7;

bool buttonPressed = 0; //Because the value must be 1 or 0

void setup() {

  pinMode(greenLed, OUTPUT);
  pinMode(blueLed, OUTPUT);
  pinMode(redLed, OUTPUT);

  pinMode(indicator1, OUTPUT);
  pinMode(indicator2, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);

  randomSeed(analogRead(A0));
}
void loop() {

  digitalWrite(greenLed, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(greenLed, LOW);

  digitalWrite(blueLed, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(900);
  digitalWrite(blueLed, LOW);

  digitalWrite(redLed, HIGH);
  digitalWrite(buzzer, HIGH);
  delay(100);
  digitalWrite(buzzer, LOW);
  delay(random(900,4901)); //min to max delay
  digitalWrite(redLed, LOW);

  while (buttonPressed == 0) {
    digitalWrite(indicator1, HIGH);
    digitalWrite(indicator2, HIGH);

    if (digitalRead(button1) == 0) {
      buttonPressed = 1;    // Doesn't work if 0, gets stuck; if 1 moves to the next line of code 
      digitalWrite(indicator2, LOW);
    } 
    else if (digitalRead(button2) == 0) {
      buttonPressed = 1;
      digitalWrite(indicator1, LOW);
    }
  }

  playWinningSound(); // got to learn this, can add a function & then declare it after using void

  digitalWrite(buzzer, LOW);
  delay(1000);
  digitalWrite(indicator1, LOW);
  digitalWrite(indicator2, LOW);
  buttonPressed = 0; // to make sure that it returns to the while loop
}

void playWinningSound() {  // wanted a winning sound, Googled it, & found this
  tone(buzzer, 523);
  delay(150);
  tone(buzzer, 659);
  delay(150);
  tone(buzzer, 784);
  delay(300);
  tone(buzzer, 1046);
  delay(400);
  noTone(buzzer);
}