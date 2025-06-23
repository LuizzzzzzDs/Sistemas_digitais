void setup() {
  pinMode(2, INPUT);    // Botão no pino 2
  pinMode(13, OUTPUT);  // LED no pino 13
}

void loop() {
  if (digitalRead(2) == HIGH) {
    digitalWrite(13, HIGH); // Liga o LED
  } else {
    digitalWrite(13, LOW);  // Desliga o LED
  }
}