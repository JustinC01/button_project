int ledpin = 5;
int buttonOnPin = 9;
int buttonOffPin = 8;




void setup() {
  pinMode (ledpin, OUTPUT);
  pinMode(buttonOnPin, INPUT_PULLUP);
  pinMode(buttonOffPin, INPUT_PULLUP);

}

void loop() {
  if(digitalRead(buttonOnPin) == LOW)
  {
    digitalWrite(ledpin, HIGH);
    
  }


  if (digitalRead(buttonOffPin) == LOW)
  {
    digitalWrite(ledpin, LOW);
  }

}
