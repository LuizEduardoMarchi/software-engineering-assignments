const int motorDireitoInput1 = 6;
const int motorDireitoInput2 = 7;

const int motorEsquerdoInput3 = 8;
const int motorEsquerdoInput4 = 9;

const int enableDireito = 4;
const int enableEsquerdo = 2;

void setup() {

  pinMode(motorDireitoInput1, OUTPUT);
  pinMode(motorDireitoInput2, OUTPUT);

  pinMode(motorEsquerdoInput3, OUTPUT);
  pinMode(motorEsquerdoInput4, OUTPUT);

  pinMode(enableDireito, OUTPUT);
  pinMode(enableEsquerdo, OUTPUT);

  digitalWrite(enableDireito, HIGH); 
  digitalWrite(enableEsquerdo, HIGH); 
}

void loop() {

  andarParaFrente();
  delay(3000);
  
  pararRobo();
  delay(2000);
  
  andarParaTras();
  delay(3000);
  
  pararRobo();
  delay(2000);

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

void pararRobo() {

  digitalWrite(motorDireitoInput1, LOW);
  digitalWrite(motorDireitoInput2, LOW);

  digitalWrite(motorEsquerdoInput3, LOW);
  digitalWrite(motorEsquerdoInput4, LOW);

}
