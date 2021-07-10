
void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
}

void loop() {
  for(int i = 0; i<5; i++)
  {
    digitalWrite(13, HIGH);
    delay(2000);
    digitalWrite(13, LOW);
    delay(2000);
  }
  for(int i = 0; i<5; i++)
  {
    digitalWrite(13, HIGH);
    delay(500);
    digitalWrite(13, LOW);
    delay(500);
  }
  
}
