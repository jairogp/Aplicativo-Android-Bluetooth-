  #include <SoftwareSerial.h>
  SoftwareSerial bt(0, 1); 
  // Rx do modulo BT no pino 1
  // Tx do modulo BT no pino 0

  int ch1 = 2;
  int ch2 = 3;
  int ch3 = 4;
  int ch4 = 5;

  void setup(){
  bt.begin(9600);
  pinMode(ch1, OUTPUT);
    digitalWrite(ch1, LOW);
  pinMode(ch2, OUTPUT);
    digitalWrite(ch2, LOW);
  pinMode(ch3, OUTPUT);
    digitalWrite(ch3, LOW);
  pinMode(ch4, OUTPUT);
    digitalWrite(ch4, LOW);
  }

  void bluetooth(){
  char caracter = bt.read();
  if(caracter == 'A')
  {digitalWrite(ch1,HIGH);}
  if(caracter == 'a')
  {digitalWrite(ch1,LOW);}
  if(caracter == 'B')
  {digitalWrite(ch2,HIGH);}
  if(caracter == 'b')
  {digitalWrite(ch2,LOW);}
  if(caracter == 'C')
  {digitalWrite(ch3,HIGH);}
  if(caracter == 'c')
  {digitalWrite(ch3,LOW);}
  if(caracter == 'D')
  {digitalWrite(ch4,HIGH);}
  if(caracter == 'd')
  {digitalWrite(ch4,LOW);} 
  delay(10);}

  void loop(){
  bluetooth();}
