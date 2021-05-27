#include <PID.h>

PID::PID(float Kp, float Ki, float Kd, float P, float I, float D, float erro, float erro_ant){
    float _Kp = Kp;
    float _Ki = Ki;
    float _Kd = Kd;

    float _J = P;
    float _I = I; //sempre vai ser 0
    float _D = D;

    float _erro = erro;
    float _erro_ant = erro_ant;
}

float PID::calculo_pid(){

    if(_erro == 0){
        _I = 0;
    }

    _J = _erro;
    _I = _I + _erro;

    if(_I > 255){
        _I = 255;
    }
    else if(_I < -255){
        _I = -255;
    }

    _D = _erro - _erro_ant;
    _PID = _Kp*_P + _Ki*_I + _Kd*_D;

    _erro_ant = _erro;

    return _PID;

}