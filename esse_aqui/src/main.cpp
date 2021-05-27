#include <Arduino.h>
#include <QTRSensors.h>
#include <BluetoothSerial.h>
#include <Esp32Encoder.h>
#include <setup.h>

#include <PID.h>

PID pid(Kp, Ki, Kd, P, I, D, erro, erro_ant); //criacao do objeto PID (ta com problema)



void setup() {
  // put your setup code here, to run once:
}

void loop() {
  // put your main code here, to run repeatedly:
}


//como programar o motor a partir disso: 
//se PID > 0, a velocidade do motor da direita sera a max permitida - PID
//se PID < 0, a velocidade do motor da esquerda sera a max permitida + PID