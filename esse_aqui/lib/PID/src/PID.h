// importar classe do array de sensores, para ter o erro



class PID {
    float _Kp;    
    float _Ki;
    float _Kd;

    float _P;
    float _I; //sempre vai ser 0
    float _D;

    float _erro;
    float _erro_anterior;
    float _PID;

    public:
        PID(float Kp, float Ki, float Kd, float P, float I, float D, float erro, float erro_ant);
        float calculo_pid(float _Kp, float _Ki, float _Kd, float _P, float _I, float _D, float _erro, float _erro_anterior);



};