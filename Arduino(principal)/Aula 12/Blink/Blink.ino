// Projeto - Piscar LED/blink
int ledPin = 9;// representa o pino digital 9

void setup() {
    pinMode(ledPin, OUTPUT);//Define ledPin (pino 9) como saída
}

void loop() {
    digitalWrite(ledPin, HIGH);//Coloca ledPin em nível alto 
    delay(1000);//Espera 1000 milissegundos (1 segundo)
    digitalWrite(ledPin, LOW);//Coloca ledPin em nível baixo 
    delay(1000);//Espera 1000 milissegundos (1 segundo)
}
