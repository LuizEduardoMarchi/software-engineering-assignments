const int ledPino = 3, ldrPino = A4, min = 0, max = 255;
int leitura;

void setup() {

  pinMode(ledPino, OUTPUT);
  pinMode(ldrPino, INPUT);

}

void loop() {

  leitura = analogRead(ldrPino);

  if(leitura <= 306) {
    analogWrite(ledPino, max);
  } 
  else if (leitura <= 767) {
    analogWrite(ledPino, 127);
  } 
  else {
    analogWrite(ledPino, 0);
  }

  delay(100);

}