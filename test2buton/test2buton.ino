#include "note.h"
#include "mario.h"

//comentariu in plus
#define LED_PIN 4             
#define SPEAKER_PIN 2
#define BUTON_PIN 6
#define SENZOR_PIN 7
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
  pinMode(BUTON_PIN, INPUT);
  pinMode(SENZOR_PIN, INPUT);
 digitalWrite(LED_PIN, HIGH);

 Serial.begin(9600);
 
 delay(500);
 
}

int i=0;
bool am_datBip = 0;
void loop()  
{ 

  if (Serial.available()){
    String cmd = Serial.readString();
    digitalWrite(LED_PIN, cmd == "1" ? HIGH : LOW ); 
     Serial.println(cmd);
  }
  return;
  int s=digitalRead(SENZOR_PIN);
  //if(s==HIGH) SunetWelcome();
  
  int btn = digitalRead(BUTON_PIN);
  if (btn==LOW) { 
    digitalWrite(LED_PIN, HIGH);
    if (am_datBip == 0){
      Serial.println("Buton apasat"); //trimite la calc acel text
      tone(SPEAKER_PIN,500, 100);
      am_datBip = 1;
    }
  }
  else{
    digitalWrite(LED_PIN, LOW);
    am_datBip = 0;
  }
   
}
