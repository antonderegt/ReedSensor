const int pinSwitch = 7; //Pin Reed
int StatOfSwitch = 0;

void setup() {
pinMode(pinSwitch, INPUT);
}

void loop() {
  StatOfSwitch = digitalRead(pinSwitch); //Leggo il valore del Reed
  if (StatOfSwitch == HIGH) {
    digitalWrite(pinLed, HIGH);
  }
  else {
    digitalWrite(pinLed, LOW);
  }
  delay(500);
}
