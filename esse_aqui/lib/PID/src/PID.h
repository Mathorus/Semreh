#ifndef PID_H
#define PID_H

class PID {
    float _Kp;    
    float _Ki;
    float _Kd;

    float _J; //ta dando problema o _P ???
    float _I; //sempre vai ser 0
    float _D;

    float _erro;
    float _erro_ant;
    float _PID;

    public:
        PID(float Kp, float Ki, float Kd, float P, float I, float D, float erro, float erro_ant);
        float calculo_pid();
};

#endif