const int ledPino = 3, min = 0, max = 255;
int contador;

void setup() {
  
  pinMode(ledPino, OUTPUT);
  analogWrite(ledPino, 0);

}

void loop() {
  
  for(contador = min; contador <= max; contador++) {
    analogWrite(ledPino, contador);
    delay(15);
  }

  for(contador = max; contador >= min; contador--) {
    analogWrite(ledPino, contador);
    delay(15);
  }
}
