#define pin_led1 8  //define pino do led

#define pin_botao1 2 //define botao1 pino 2
#define pin_botao2 3 //define botao2 pino 3
#define pin_botao3 4 //define botao3 pino 4

int conta = 0;
int somaA = 0;
int somaB = 0;
int somaC = 0;

int contaA = 0;
int contaB = 0;
int contaC = 0;
void setup()
{
  pinMode(pin_led1, OUTPUT); // valvula
  
  pinMode(pin_botao1, INPUT); // sensor A
  pinMode(pin_botao2, INPUT); // sensor B
}

void loop() {
 conta = (contaA + contaB + contaC);
 bool estadoA = digitalRead(pin_botao1);  //le o botao e declara como booleano(0 ou 1)
 bool estadoB = digitalRead(pin_botao2); //le o botao e declara como booleano(0 ou 1)
 bool estadoC = digitalRead(pin_botao3); //le o botao e declara como booleano(0 ou 1)
  
  if (estadoA == 1 && somaA == 0) { //se botao 1 apertado
    contaA++;
    somaA++;
  }
  
  if (estadoA == 0) { //se botao 1 nao estiver apertado
    somaA = 0;
    contaA = 0;
  }
  
  if (estadoB == 1 && somaB == 0) { //se botao 2 estiver apertado
    contaB++;
    somaB++;
  }
  
  if (estadoB == 0) { //se botao 2 nao estiver apertado
    somaB = 0;
    contaB = 0;
  }
  
  if (estadoC == 1 && somaC == 0) { //se botao 3 estiver apertado
    contaC++;
    somaC++;
  }
  
  if (estadoC == 0) { //se botao 3 nao estiver apertado
    somaC = 0;
    contaC = 0;
  }
  
  if ((conta % 2) == 1) { //se o resto da conta for igual a 1
    digitalWrite(pin_led1, HIGH); //liga o led
  } else {
    digitalWrite(pin_led1, LOW); //desliga o led
  }	
}