#define pin_led1 8   //definindo pino 8 como led1
#define pin_led2 9   //definindo pino 9 como led2
#define pin_led3 10  //definindo pino 10 como led3
#define pin_botao1 2
#define pin_botao2 3

int conta = 0;
int tic = 0;

void setup() {
  pinMode(pin_led1, OUTPUT);  //definindo led1 saida
  pinMode(pin_led2, OUTPUT);  //definindo led2 saida
  pinMode(pin_led3, OUTPUT);  //definindo led3 saida
  pinMode(pin_botao1, INPUT);
  pinMode(pin_botao2, INPUT);
  Serial.begin(9600);
}

void loop() {
  bool estado1 = digitalRead(pin_botao1);
  bool estado2 = digitalRead(pin_botao2);
  if (estado1 == 1 && tic == 0){
  conta +=1;
  tic +=1;
  }
  if (estado1 == 0) {
    tic = 0;
    Serial.println(conta);
  }
  
}
