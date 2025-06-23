#define pin_led1 8
#define pin_botao1 2

unsigned long tempoAnterior = 0;
unsigned long intervalo = 500;
int contador = 0;
int tick = 0;
bool estadoLed = 0;

void setup() {
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_botao1, INPUT_PULLUP);
}

void loop() {
  bool estadoA = !digitalRead(pin_botao1);
  unsigned long tempoAtual = millis();

  if (estadoA && tick == 0) {
    tick++;
    contador++;
  }

  if (estadoA == 0) {
    tick = 0;
  }

  if ((contador % 2) == 1) {
    if (tempoAtual - tempoAnterior >= intervalo) {
      tempoAnterior = tempoAtual;
      estadoLed = !estadoLed;
      digitalWrite(pin_led1, estadoLed);
    }
  } else {
    digitalWrite(pin_led1, LOW);
    estadoLed = 0;
  }
}