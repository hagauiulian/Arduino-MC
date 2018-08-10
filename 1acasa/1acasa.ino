//
//dacă pinii ar fi consecutivi un cod de genul
//
/*
for(int i = START_PIN; i < END_PIN; i++){
    digitalWrite(i, .....
    ....                                  
}
*/
//ar fi suficient

//
// O Posibilă variantă 
//  
#include <assert.h>

#define SPEAKER_PIN 4

//ne definim un vector unde punem pinii
int ledPins[] = { 2, 3, 6, 7, 8, 9, 10, 11, 12 };

//nr elemente == nr elemente din ledPins (**)
int soundFrecv[] = { 1000, 800, 900, 100, 900, 800, 100, 1500 } ;
 
  
int nrLed = sizeof(ledPins)/sizeof(int);


void setup() {
  //verificare (**) 
  assert(nrLed == sizeof(soundFrecv)/sizeof(int));
  
  for(int i=0; i< nrLed; i++) pinMode(i, OUTPUT);
  
  pinMode(SPEAKER_PIN, OUTPUT);
}

void loop() {
  for(int i=0; i< nrLed; i++){ 
      digitalWrite(i, HIGH);
      tone(SPEAKER_PIN, soundFrecv[i], 90);
      delay(100);
  }
  
  delay(1000);

  for(int i=0; i< nrLed; i++){ 
    digitalWrite(i, LOW);
    delay(100);  
  }
  
  delay(1000);

}
