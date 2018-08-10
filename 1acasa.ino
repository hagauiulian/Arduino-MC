#define PIN_YELLOW 12
#define PIN_RED 11
#define PIN_GREEN 10
void setup() {
  pinMode(PIN_YELLOW, OUTPUT);
  pinMode(PIN_RED, OUTPUT);
  pinMode(PIN_GREEN, OUTPUT);

}

void loop() {
  digitalWrite(PIN_YELLOW, HIGH);
  digitalWrite(PIN_RED, HIGH);
  digitalWrite(PIN_GREEN, HIGH);
  
  delay(1000);
  
  digitalWrite(PIN_YELLOW, LOW);
  digitalWrite(PIN_RED, LOW);
  digitalWrite(PIN_GREEN, LOW);

  delay(1000);

}
