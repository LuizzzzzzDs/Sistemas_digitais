#define pin_led1 8   //definindo pino 8 como led1
#define pin_led2 9   //definindo pino 9 como led2
#define pin_led3 10  //definindo pino 10 como led3
#define pin_botao1 2
#define pin_botao2 3


void setup() {
  pinMode(pin_led1, OUTPUT);  //definindo led1 saida
  pinMode(pin_led2, OUTPUT);  //definindo led2 saida
  pinMode(pin_led3, OUTPUT);  //definindo led3 saida
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
}

void loop() {
  bool estado1 = digitalRead(pin_botao1);
  bool estado2 = digitalRead(pin_botao2);
  if ((estado1 == 1) && (estado2 == 1)) {  //O && é utilizado como "E" ou "and"
    digitalWrite(pin_led1, HIGH);
  } else {
    digitalWrite(pin_led1, LOW);
  }

  if ((estado1 == 1) || (estado2 == 1)) {  // O || é utilizado como Ou
    digitalWrite(pin_led2, HIGH);
  } else {
    digitalWrite(pin_led2, LOW);
  }

  if ((estado1 == 1) ^  (estado2 == 1)) {  //o ^ é utilizado como XOR
    digitalWrite(pin_led3, HIGH);
  } else {
    digitalWrite(pin_led3, LOW);
  }
}