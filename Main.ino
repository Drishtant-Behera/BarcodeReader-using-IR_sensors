#include <Convert.h>
#include <iostream>
#include <cmath>

Convert convert;

int ActivateIR1 = 15;
int ActivateIR2 = 12;
int ActivateIR3 = 4;
int ActivateIR4 = 16;
int ActivateIR5 = 17;
int ActivateIR6 = 21;
int ActivateIR7 = 18;

int buttonPIN = 22;

void setup() {
  Serial.begin(9600);

  pinMode(ActivateIR1, INPUT);
  pinMode(ActivateIR2, INPUT);
  pinMode(ActivateIR3, INPUT);
  pinMode(ActivateIR4, INPUT);
  pinMode(ActivateIR5, INPUT);
  pinMode(ActivateIR6, INPUT);
  pinMode(ActivateIR7, INPUT);

  pinMode(buttonPIN, INPUT);
}

void loop() {
  int Activate1 = digitalRead(ActivateIR1);
  int Activate2 = digitalRead(ActivateIR2);
  int Activate3 = digitalRead(ActivateIR3);
  int Activate4 = digitalRead(ActivateIR4);
  int Activate5 = digitalRead(ActivateIR5);
  int Activate6 = digitalRead(ActivateIR6);
  int Activate7 = digitalRead(ActivateIR7);

  int Binary = (Activate1) + (Activate2) + (Activate3) + (Activate4) + (Activate5) + (Activate6) + (Activate7);
  Serial.println(Binary);
}


