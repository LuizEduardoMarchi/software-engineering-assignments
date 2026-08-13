#include <Servo.h>
#include <Ultrasonic.h>

Servo servoControlador;
Ultrasonic ultrassonicoCentral(5, 12);

const int motorDireitoInput1 = 6;
const int motorDireitoInput2 = 7;
const int motorEsquerdoInput3 = 8;
const int motorEsquerdoInput4 = 9;

const int buzzer = A3;

const int enableDireito = 4;
const int enableEsquerdo = 2;

int distancia;

void setup() {

  pinMode(motorDireitoInput1, OUTPUT);
  pinMode(motorDireitoInput2, OUTPUT);
  pinMode(motorEsquerdoInput3, OUTPUT);
  pinMode(motorEsquerdoInput4, OUTPUT);

  pinMode(buzzer, OUTPUT);

  pinMode(enableDireito, OUTPUT);
  pinMode(enableEsquerdo, OUTPUT);

  digitalWrite(enableDireito, HIGH); 
  digitalWrite(enableEsquerdo, HIGH); 

  servoControlador.attach(11);
  olharParaFrente();

}

void loop() {

  olharParaFrente();
  observarObstaculo();

  if (distancia > 25) { 
    andarParaFrente();
  } else {
    pararRobo();
    buzinar();

    observarLadoDireito();
    delay(750);
    observarObstaculo();

    if (distancia > 25) {
      virarDireita();
    } else {
      buzinar();

      observarLadoEsquerdo();
      delay(750);
      observarObstaculo();

      if (distancia > 25) {
        virarEsquerda();
      } else {
        buzinar();

        andarParaTras();
        delay(800);
        virarDireita();
      }
    }
  }
}

void andarParaFrente() {

  digitalWrite(motorDireitoInput1, HIGH);
  digitalWrite(motorDireitoInput2, LOW);

  digitalWrite(motorEsquerdoInput3, LOW);
  digitalWrite(motorEsquerdoInput4, HIGH);

}

void andarParaTras() {

  digitalWrite(motorDireitoInput1, LOW);
  digitalWrite(motorDireitoInput2, HIGH);

  digitalWrite(motorEsquerdoInput3, HIGH);
  digitalWrite(motorEsquerdoInput4, LOW);

}

void virarDireita() {

  digitalWrite(motorDireitoInput1, LOW);
  digitalWrite(motorDireitoInput2, HIGH);

  digitalWrite(motorEsquerdoInput3, LOW);
  digitalWrite(motorEsquerdoInput4, HIGH);
  delay(500); 

  pararRobo();
}

void virarEsquerda() {

  digitalWrite(motorDireitoInput1, HIGH);
  digitalWrite(motorDireitoInput2, LOW);

  digitalWrite(motorEsquerdoInput3, HIGH);
  digitalWrite(motorEsquerdoInput4, LOW);
  delay(500);

  pararRobo();
}

void pararRobo() {

  digitalWrite(motorDireitoInput1, LOW);
  digitalWrite(motorDireitoInput2, LOW);

  digitalWrite(motorEsquerdoInput3, LOW);
  digitalWrite(motorEsquerdoInput4, LOW);

}

void observarObstaculo() {
  distancia = ultrassonicoCentral.read();
}

void olharParaFrente() {
  servoControlador.write(90);
  delay(150);
}

void observarLadoDireito() {
  servoControlador.write(0);
}

void observarLadoEsquerdo() {
  servoControlador.write(180);
}

void buzinar() {

  tone(buzzer, 400);
  delay(200);
  noTone(buzzer);

  tone(buzzer, 400);
  delay(600);
  noTone(buzzer);

}