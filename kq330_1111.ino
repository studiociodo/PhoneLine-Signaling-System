#include "pitches.h"
#include <SoftwareSerial.h>

SoftwareSerial KQ330(10, 11);
volatile boolean pressed = false;
int received = 0;

void button() {
  delay(100);
  if (digitalRead(2) == LOW) {
    pressed = true;
  }
}

void checkforsend() {
  if (pressed) {
    delay(100);
    KQ330.println("{{{{{1111}}}}}");
    KQ330.flush();
    digitalWrite(3, HIGH);
    tone(8, NOTE_F5, 50);
    delay(80);
    digitalWrite(3, LOW);
    digitalWrite(4, HIGH);
    tone(8, NOTE_A5, 50);
    delay(80);
    digitalWrite(4, LOW);
    digitalWrite(5, HIGH);
    tone(8, NOTE_C6, 50);
    delay(80);
    digitalWrite(5, LOW);
    noTone(8);
    KQ330.println("{{{{{1111}}}}}");
    KQ330.flush();
    pressed = false;
  }

}

void sound1() {
  int melody1[] = {
    NOTE_E5, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_A4, NOTE_A4, NOTE_C5, NOTE_E5, NOTE_D5, NOTE_C5, NOTE_B4, NOTE_B4, NOTE_C5, NOTE_D5, NOTE_E5, NOTE_C5, NOTE_A4, NOTE_A4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  };
  int noteDurations1[] = {
    4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 8, 8, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
  };
  for (int repeats = 0; repeats < 10; repeats++) {
    for (int thisNote = 0; thisNote < 30; thisNote++) {
      int noteDuration = 1000 / noteDurations1[thisNote];
      tone(8, melody1[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      if (KQ330.available()) {
        char c = KQ330.read();
      }
      if (pressed) {
        break;
      }
      delay(pauseBetweenNotes);
      noTone(8);
    }
    if (pressed) {
      break;
    }
  }
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  noTone(8);
  received = 0;
  pressed = false;
}


void sound2() {
  int melody2[] = {
    NOTE_G5, NOTE_G5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_E5, NOTE_G5, NOTE_G5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_E5, NOTE_G5, NOTE_G5, NOTE_A5, NOTE_A5, NOTE_B5, NOTE_B5, NOTE_A5, NOTE_B5, NOTE_C6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  };
  int noteDurations2[] = {
    3.5, 8, 3.5, 8, 2, 2, 3.5, 8, 3.5, 8, 2, 2, 2, 2, 2, 2, 3.5, 8, 3.5, 8, 2, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
  };
  for (int repeats = 0; repeats < 10; repeats++) {
    for (int thisNote = 0; thisNote < 31; thisNote++) {
      int noteDuration = 1000 / noteDurations2[thisNote];
      tone(8, melody2[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      if (KQ330.available()) {
        char c = KQ330.read();
      }
      if (pressed) {
        break;
      }
      delay(pauseBetweenNotes);
      noTone(8);
    }
    if (pressed) {
      break;
    }
  }
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  noTone(8);
  received = 0;
  pressed = false;
}


void sound3() {
  int melody3[] = {
    NOTE_AS5, NOTE_AS5, NOTE_AS5, NOTE_D6, NOTE_F5, NOTE_AS5, NOTE_AS5, NOTE_AS5, NOTE_D6, NOTE_F6, NOTE_AS5, NOTE_AS5, NOTE_AS5, NOTE_D6, NOTE_F5, NOTE_D6, NOTE_D6, NOTE_F6, NOTE_F6, NOTE_D6, NOTE_D6, NOTE_AS5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  };

  int noteDurations3[] = {
    4, 4, 8, 8, 4, 4, 4, 8, 8, 4, 4, 4, 8, 8, 4, 5, 16, 5, 16, 5, 16, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
  };
  for (int repeats = 0; repeats < 10; repeats++) {
    for (int thisNote = 0; thisNote < 32; thisNote++) {
      int noteDuration = 1000 / noteDurations3[thisNote];
      tone(8, melody3[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      if (KQ330.available()) {
        char c = KQ330.read();
      }
      if (pressed) {
        break;
      }
      delay(pauseBetweenNotes);
      noTone(8);
    }
    if (pressed) {
      break;
    }
  }
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  noTone(8);
  received = 0;
  pressed = false;
}


void sound4() {
  int melody4[] = {
    NOTE_D5, NOTE_B5, NOTE_B5, NOTE_B5, NOTE_G5, NOTE_A5, NOTE_A5, NOTE_A5, NOTE_G5, NOTE_FS5, NOTE_D5, NOTE_E5, NOTE_FS5, NOTE_G5, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0
  };
  int noteDurations4[] = {
    4, 4, 4, 3.5, 8, 4, 4, 3.5, 8, 4, 4, 4, 4, 4, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1
  };
  for (int repeats = 0; repeats < 10; repeats++) {
    for (int thisNote = 0; thisNote < 24; thisNote++) {
      int noteDuration = 1000 / noteDurations4[thisNote];
      tone(8, melody4[thisNote], noteDuration);
      int pauseBetweenNotes = noteDuration * 1.30;
      if (KQ330.available()) {
        char c = KQ330.read();
      }
      if (pressed) {
        break;
      }
      delay(pauseBetweenNotes);
      noTone(8);
    }
    if (pressed) {
      break;
    }
  }
  delay(100);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  noTone(8);
  received = 0;
  pressed = false;
}


void setup() {
  KQ330.begin(9600);
  //   Serial.begin(9600);
  pinMode(5, OUTPUT);
  tone(8, NOTE_C6, 200);
  digitalWrite(5, HIGH);
  delay(220);
  noTone(8);
  pinMode(4, OUTPUT);
  tone(8, NOTE_A5, 200);
  digitalWrite(4, HIGH);
  delay(220);
  noTone(8);
  pinMode(3, OUTPUT);
  tone(8, NOTE_F5, 200);
  digitalWrite(3, HIGH);
  delay(220);
  noTone(8);
  pinMode(2, INPUT);
  attachInterrupt(digitalPinToInterrupt(2), button, FALLING);
  while (!pressed) {}
  tone(8, NOTE_F6, 200);
  digitalWrite(3, LOW);
  digitalWrite(4, LOW);
  digitalWrite(5, LOW);
  delay(300);
  noTone(8);
  pressed = false;

}


void loop() {
  checkforsend();
  while (KQ330.available()) {
    char c = KQ330.read();
    if (c == '{') {
      received = KQ330.parseInt();
      break;
    } else {
      checkforsend();
    }
  }
  switch (received) {
    case 2222:
      digitalWrite(4, HIGH);
      sound2();
      break;
    case 3333:
      digitalWrite(3, HIGH);
      sound3();
      break;
    case 4444:
      digitalWrite(5, HIGH);
      sound4();
      break;
    default:
      received = 0;
      break;
  }
}
