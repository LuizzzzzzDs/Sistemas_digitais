#define pin_led1 8
#define pin_led2 9
#define pin_led3 10
#define pin_led4 11



void setup() {
  Serial.begin(9600);
  pinMode(pin_led1, OUTPUT);
  pinMode(pin_led2, OUTPUT);
  pinMode(pin_led3, OUTPUT);
  pinMode(pin_led4, OUTPUT);
}

void loop() {
  if (Serial.available() == 1 ) {
    char i = Serial.read();
    Serial.println(i);
   
    if ( i == '1') {
      digitalWrite(pin_led1, 1);  
    }
    if ( i == '2')
      digitalWrite(pin_led2, 1);{    
      }
     if ( i == '3')
      digitalWrite(pin_led3, 1); {
      }
      if ( i == '4')
      digitalWrite(pin_led4, 1);{
      }    
      if ( i == '5')
        digitalWrite(pin_led1, 0);{
      }
      if ( i == '6')
        digitalWrite(pin_led2, 0);{
      }
      if ( i == '7')
        digitalWrite(pin_led3, 0);{
      }  
      if ( i == '8')
        digitalWrite(pin_led4, 0);{
      }  
      if ( i == '9') {
        digitalWrite(pin_led1, 1);
        digitalWrite(pin_led2, 1);
        digitalWrite(pin_led3, 1);
        digitalWrite(pin_led4, 1);
      } 
      if ( i == '0') {
        digitalWrite(pin_led1, 0);
        digitalWrite(pin_led2, 0);
        digitalWrite(pin_led3, 0);
        digitalWrite(pin_led4, 0);
      }
      
  } 
  }  
    


/*
  Serial.println("Liga LED");
  digitalWrite(pin_led1, 1);
  digitalWrite(pin_led2, 1);
  digitalWrite(pin_led3, 1);
  digitalWrite(pin_led4, 1);
  delay(1000);
   Serial.println("Desliga LED");
  digitalWrite(pin_led1, 0);
  digitalWrite(pin_led2, 0);
  digitalWrite(pin_led3, 0);
  digitalWrite(pin_led4, 0);
  delay(1000);

}
*/
