const int pinoPIR = 2, ledVermelho = 7;

void setup() {

  pinMode(pinoPIR, INPUT);
  pinMode(ledVermelho, OUTPUT);
  
  delay(20000); 

}

void loop() {

  if (digitalRead(pinoPIR) == HIGH) {

    digitalWrite(ledVermelho, HIGH);
    delay(50); 
    digitalWrite(ledVermelho, LOW);
    delay(50);

  } else {

    digitalWrite(ledVermelho, LOW);

  }
}