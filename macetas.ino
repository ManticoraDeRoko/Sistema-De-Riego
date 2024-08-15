#include <SoftwareSerial.h>
SoftwareSerial sw(0,1);


char maceta;
int macetaA = 10;
int macetaB = 9;
int macetaC = 8;
int macetaD = 7;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  sw.begin(9600);
  pinMode(macetaA, OUTPUT);
  pinMode(macetaB, OUTPUT);
  pinMode(macetaC, OUTPUT);
  pinMode(macetaD, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  /*if(Serial.available()>0){
    char c = Serial.read();
    sw.println(c);
  }
  if(sw.available()>0){
    char c = sw.read();
    Serial.print(c);
  }*/
  if(Serial.available()>0){
    maceta = Serial.read();
    Serial.println(maceta);
  }

  digitalWrite(macetaA,LOW);
  digitalWrite(macetaB,LOW);
  digitalWrite(macetaC,LOW);
  digitalWrite(macetaD,LOW);

  if(maceta ==' '){
    digitalWrite(macetaA,LOW);
    digitalWrite(macetaB,LOW);
    digitalWrite(macetaC,LOW);
    digitalWrite(macetaD,LOW);
  }
  
  if (maceta == 'a'){
    Serial.println();
    digitalWrite(macetaA,HIGH);
    Serial.println("MacetaA");
    delay(3000);
  }

  if (maceta == 'b'){
    Serial.println();
    digitalWrite(macetaB,HIGH);
    Serial.println("MacetaB");
    delay(3000);
  }  

  if (maceta == 'c'){
    Serial.println();
    digitalWrite(macetaC,HIGH);
    Serial.println("MacetaC");
    delay(3000);
  }
   
  if (maceta == 'd'){
    Serial.println();
    digitalWrite(macetaD,HIGH);
    Serial.println("MacetaD");
    delay(3000);
  }
  
  maceta = ' ';
}
