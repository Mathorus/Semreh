#include <PID.h>

PID::PID(float Kp, float Ki, float Kd, float P, float I, float D, float erro, float erro_ant){
    float _Kp = Kp;
    float _Ki = Ki;
    float _Kd = Kd;

    float _P = P;
    float _I = I; //sempre vai ser 0
    float _D = D;

    float _erro = erro;
    float _erro_ant = erro_ant;

    this->calculo_pid(float _Kp, float _Ki, float _Kd, float _P, float _I, float _D, float _erro, float _erro_anterior);
}

float PID::calculo_pid(float Kp, float Ki, float Kd, float P, float I, float D, float erro, float erro_ant){

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

    D = erro - erro_ant;
    _PID = Kp*P + Ki*I + Kd*D;

    erro_ant = erro;

}