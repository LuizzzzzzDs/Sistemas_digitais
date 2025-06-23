#define pin_led1 11
#define pin_led2 10
#define pin_led3 9
#define pin_led4 8
#define pin_botao1 2
#define pin_botao2 3

unsigned long tempoAnterior = 0;

unsigned long intervalo1 = 125;
unsigned long intervalo2 = 250;
unsigned long intervalo3 = 500;
unsigned long intervalo4 = 1000;

int contador = 0;
int tick = 0;

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
  
  pinMode(pin_botao1, INPUT_PULLUP);
  pinMode(pin_botao2, INPUT_PULLUP);
}

void loop() {
  bool estadoA = !digitalRead(pin_botao1);
  bool estadoB = !digitalRead(pin_botao2);

  if (estadoA == 1 && tick == 0) {
    tick = 1;
    if (contador == 1) {
      contador = 0;
    } else {
      contador = 1;
      tempoAnterior = millis();
    }
  }

  if (estadoB == 1 && tick == 0) {
    tick = 1;
    if (contador == 2) {
      contador = 0;
    } else {
      contador = 2;
      tempoAnterior = millis();
    }
  }

  if (estadoA == 0 && estadoB == 0) {
    tick = 0;
  }

  if (contador == 0) {
    digitalWrite(pin_led1, LOW);
    digitalWrite(pin_led2, LOW);
    digitalWrite(pin_led3, LOW);
    digitalWrite(pin_led4, LOW);
  }

  unsigned long tempoAtual = millis();
  unsigned long t = tempoAtual - tempoAnterior;

  if (contador == 1) {
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
      digitalWrite(pin_led1, LOW);
      digitalWrite(pin_led2, LOW);
      digitalWrite(pin_led3, LOW);
      digitalWrite(pin_led4, LOW);
    }
  }

  if (contador == 2) {
    if (t >= intervalo1) {
      digitalWrite(pin_led4, HIGH);
    }
    if (t >= intervalo1 + intervalo2) {
      digitalWrite(pin_led3, HIGH);
    }
    if (t >= intervalo1 + intervalo2 + intervalo3) {
      digitalWrite(pin_led2, HIGH);
    }
    if (t >= intervalo1 + intervalo2 + intervalo3 + intervalo4) {
      digitalWrite(pin_led1, HIGH);
    }
    if (t >= intervalo1 + intervalo2 + intervalo3 + intervalo4 + 1000) {
      tempoAnterior = tempoAtual;
      digitalWrite(pin_led1, LOW);
      digitalWrite(pin_led2, LOW);
      digitalWrite(pin_led3, LOW);
      digitalWrite(pin_led4, LOW);
    }
  }
}