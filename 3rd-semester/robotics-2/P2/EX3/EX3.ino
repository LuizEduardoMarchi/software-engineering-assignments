#include <Ultrasonic.h>

// Configuração dos Pinos
Ultrasonic ultrasonic(6, 7); 
const int buzzer = A3;
const int pinoPIR = 2;      // Sensor de movimento
const int ledVermelho = 13; // LED de alerta

void setup() {
  pinMode(buzzer, OUTPUT);
  pinMode(ledVermelho, OUTPUT);
  pinMode(pinoPIR, INPUT);

  // Calibração inicial do PIR (silenciosa)
  delay(10000); 
}

void loop() {
  // --- PARTE 1: SENSOR PIR & LED ---
  // Se detectar movimento, o LED pisca uma vez bem rápido
  if (digitalRead(pinoPIR) == HIGH) {
    digitalWrite(ledVermelho, HIGH);
    delay(50);
    digitalWrite(ledVermelho, LOW);
  } else {
    digitalWrite(ledVermelho, LOW);
  }

  // --- PARTE 2: ULTRASSÔNICO & BUZZER ---
  int distancia = ultrasonic.read(); 

  if (distancia >= 50) {
    noTone(buzzer);
  } 
  else if (distancia >= 20 && distancia < 50) {
    tone(buzzer, 262); 
    delay(200);        
    noTone(buzzer);
    delay(800);        
  } 
  else if (distancia >= 10 && distancia < 20) {
    tone(buzzer, 440);
    delay(100);        
    noTone(buzzer);
    delay(300);        
  } 
  else if (distancia < 10) {
    tone(buzzer, 1500);
    delay(50);         
    noTone(buzzer);
    delay(50);         
  }

  delay(20); // Pequena pausa para estabilidade do sistema
}