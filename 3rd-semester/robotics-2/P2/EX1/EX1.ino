#define NOTE_C4  262
#define NOTE_D4  294
#define NOTE_E4  330
#define NOTE_F4  349
#define NOTE_G4  392
#define NOTE_A4  440
#define NOTE_B4  494
#define NOTE_C5  523
#define NOTE_D5  587
#define NOTE_E5  659
#define NOTE_F5  698
#define NOTE_G5  784
#define NOTE_A5  880
#define NOTE_B5  988
#define NOTE_AS4 466
#define NOTE_AS5 932

int pinoBuzzer = A3;

int melodia[] = {
  NOTE_E5, NOTE_E5, 0, NOTE_E5, 0, NOTE_C5, NOTE_E5, 0, NOTE_G5, 0, NOTE_G4, 0, 
  NOTE_C5, NOTE_G4, NOTE_E4, NOTE_A4, NOTE_B4, NOTE_AS4, NOTE_A4,
  NOTE_G4, NOTE_E5, NOTE_G5, NOTE_A5, NOTE_F5, NOTE_G5, NOTE_E5, NOTE_C5, NOTE_D5, NOTE_B4
};

int duracoes[] = {
  8, 8, 8, 8, 8, 8, 8, 8, 4, 4, 4, 4,
  4, 4, 4, 4, 4, 8, 4,
  6, 6, 6, 4, 8, 4, 4, 8, 8, 4
};

void setup() {

  pinMode(pinoBuzzer, OUTPUT);

}

void loop() {

  for (int i = 0; i < 29; i++) {
    int duracaoNota = 1000 / duracoes[i];
    
    if (melodia[i] == 0) {
      delay(duracaoNota);
    } else {
      tone(pinoBuzzer, melodia[i], duracaoNota);
      delay(duracaoNota * 1.30);
    }
    noTone(pinoBuzzer);
  }

  delay(2000);

}