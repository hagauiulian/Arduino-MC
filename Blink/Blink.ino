#include "note.h"
#include "mario.h"


#define LED_PIN 4             
#define SPEAKER_PIN 2
//această funcție se executa o singură dată la pornire

int frecv[] = {NOTE_F1, 500, 1000  };
int durate[] = {melody[0], 2000, 3000} ;


void SunetWelcome(){
   int size = sizeof(melody) / sizeof(int);
  for(int i=0;i<size;i++){
    int noteDuration = 1000 / tempo[i];

      tone(SPEAKER_PIN, melody[i], noteDuration);

      // to distinguish the notes, set a minimum time between them.
      // the note's duration + 30% seems to work well:
      int pauseBetweenNotes = noteDuration * 1.30;
      delay(pauseBetweenNotes);

      // stop the tone playing:
      noTone(SPEAKER_PIN);
  } 
}

void setup()
{
  pinMode(LED_PIN, OUTPUT);
  pinMode(SPEAKER_PIN, OUTPUT);// configurează pinul 3 ca pin de ieșire 

  SunetWelcome();
  noTone(SPEAKER_PIN);
}

int i=0;

void loop()  
{ 
  

  digitalWrite(LED_PIN, HIGH);   //pune tensiune (+5V) pe pinul LED_PIN
                                 //acum intre LED_PIN și GND (-) avem ~5V (led-ul este aprins)                                 
  delay(200 /* milisec*/);      //wait 1 secundă             
  
  digitalWrite(LED_PIN, LOW);    //pune 0V pe pinul LED_PIN 
                                 //acum intre pinul LED_PIN și GND(-) avem ~0V  (led-ul este stins)
  delay(200);
   
}
