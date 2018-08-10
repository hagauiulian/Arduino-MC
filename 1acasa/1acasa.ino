#define PIN_12 12
#define PIN_11 11
#define PIN_10 10
#define PIN_9 9
#define PIN_8 8
#define PIN_7 7
#define PIN_6 6
#define PIN_3 3
#define PIN_2 2
#define SPEAKER 4
void setup() {
  pinMode(PIN_12, OUTPUT);
  pinMode(PIN_11, OUTPUT);
  pinMode(PIN_10, OUTPUT);
  pinMode(PIN_9, OUTPUT);
  pinMode(PIN_8, OUTPUT);
  pinMode(PIN_7, OUTPUT);
  pinMode(PIN_6, OUTPUT);
  pinMode(PIN_3, OUTPUT);
  pinMode(PIN_2, OUTPUT);
  pinMode(SPEAKER, OUTPUT);
}

void loop() {
  digitalWrite(PIN_12, HIGH);
  tone(SPEAKER, 1000, 90);
  delay(100);
  digitalWrite(PIN_11, HIGH);
  tone(SPEAKER, 800, 90);
  delay(100);
  digitalWrite(PIN_10, HIGH);
  tone(SPEAKER, 900, 90);
  delay(100);
  digitalWrite(PIN_9, HIGH);
  tone(SPEAKER, 1000, 90);
  delay(100);
  digitalWrite(PIN_8, HIGH);
  tone(SPEAKER, 900, 90);
  delay(100);
  digitalWrite(PIN_7, HIGH);
  tone(SPEAKER, 800, 90);
  delay(100);
  digitalWrite(PIN_6, HIGH);
  tone(SPEAKER, 900, 90);
  delay(100);
  digitalWrite(PIN_3, HIGH);
  tone(SPEAKER, 1000, 90);
  delay(100);
  digitalWrite(PIN_2, HIGH);
  tone(SPEAKER, 1500, 90);
  
  delay(1000);
  
  digitalWrite(PIN_12, LOW);
  delay(100);
  digitalWrite(PIN_11, LOW);
  delay(100);
  digitalWrite(PIN_10, LOW);
  delay(100);
  digitalWrite(PIN_9, LOW);
  delay(100);
  digitalWrite(PIN_8, LOW);
  delay(100);
  digitalWrite(PIN_7, LOW);
  delay(100);
  digitalWrite(PIN_6, LOW);
  delay(100);
  digitalWrite(PIN_3, LOW);
  delay(100);
  digitalWrite(PIN_2, LOW);
  
  delay(1000);

}
