
void setup() {
  pinMode(18, OUTPUT);
}

void loop() {
  digitalWrite(18, HIGH); // on
  delay(500);             // 500 millisecond delay
  digitalWrite(18, LOW);  // off
  delay(500);             // 500 millisecond delay.
}