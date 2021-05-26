#include <Arduino.h>
#include <QTRSensors.h>
#include <BluetoothSerial.h>
#include <Esp32Encoder.h>
#include <setup.h>

void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}



void calc_PID(){
  if(erro == 0){
    I = 0;
  }

  P = erro;
  I = I + erro;

  if(I > 255){
    I = 255;
  }
  else if(I < -255){
    I = -255;
  }

  D = erro - erro_anterior;
  PID = Kp*P + Ki*I + Kd*D;

  erro_anterior = erro;
}

//como programar o motor a partir disso: 
//se PID > 0, a velocidade do motor da direita sera a max permitida - PID
//se PID < 0, a velocidade do motor da esquerda sera a max permitida + PID