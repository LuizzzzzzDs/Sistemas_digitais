#define pin_led1 11
#define pin_led2 10
#define pin_led3 9
#define pin_led4 8

unsigned long tempoAnterior = 0;

unsigned long intervalo1 = 125;
unsigned long intervalo2 = 250;
unsigned long intervalo3 = 500;
unsigned long intervalo4 = 1000;

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
}

void loop() {
  unsigned long tempoAtual = millis();
  unsigned long t = tempoAtual - tempoAnterior;

  digitalWrite(pin_led1, LOW);
  digitalWrite(pin_led2, LOW);
  digitalWrite(pin_led3, LOW);
  digitalWrite(pin_led4, LOW);

  if (t >= intervalo1) {
    digitalWrite(pin_led1, HIGH);
  }

  if (t >= intervalo1 + intervalo2) {
    digitalWrite(pin_led2, HIGH);
  }

  if (t >= intervalo1 + intervalo2 + intervalo3) {
    digitalWrite(pin_led3, HIGH);
  }

  if (t >= intervalo1 + intervalo2 + intervalo3 + intervalo4) {
    digitalWrite(pin_led4, HIGH);
  }

  if (t >= intervalo1 + intervalo2 + intervalo3 + intervalo4 + 1000) {
    tempoAnterior = tempoAtual; 
  }
}