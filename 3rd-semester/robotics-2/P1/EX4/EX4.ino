int i, contagem = 1;

void setup() {

  pinMode(2, INPUT); 
  pinMode(7, OUTPUT);

  digitalWrite(7, LOW); 

}

void loop() {

  if (digitalRead(2) == HIGH) {
    
    while(digitalRead(2) == HIGH); 
    delay(50);

    for(i = 1; i <= contagem; i++) {
      
      digitalWrite(7, HIGH);
      delay(500); 
      
      digitalWrite(7, LOW);
      delay(500);
      
    }

    contagem++;
  }
}