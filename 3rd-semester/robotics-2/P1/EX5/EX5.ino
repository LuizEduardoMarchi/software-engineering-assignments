void setup() {

  pinMode(A4, INPUT);
  pinMode(13, OUTPUT);

}

void loop() {

  if(analogRead(A4) <= 409) {
    digitalWrite(13, HIGH);
  } else {
    digitalWrite(13, LOW);
  }

}