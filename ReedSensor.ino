const int reedPin = 7;
const int ledPin = 5;
int reedState = 0;

void setup() {
  pinMode(reedPin, INPUT);
}

void loop() {
  reedState = digitalRead(pinSwitch);
  if (reedState == HIGH) {
    digitalWrite(ledPin, HIGH);
  }
  else {
    digitalWrite(ledPin, LOW);
  }
  delay(500);
}
