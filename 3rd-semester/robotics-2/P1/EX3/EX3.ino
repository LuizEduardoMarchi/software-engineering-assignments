void setup() {

  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

  digitalWrite(4, LOW);
  digitalWrite(5, LOW);

}

void loop() {

  digitalWrite(3, HIGH);
  delay(8000);
  digitalWrite(3, LOW);

  digitalWrite(5, HIGH);
  delay(6000);
  digitalWrite(5, LOW);

  digitalWrite(4, HIGH);
  delay(2000);
  digitalWrite(4, LOW);

}