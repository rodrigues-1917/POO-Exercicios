#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

class Conta {

    float saldo=0;
    float numero;

public:

    float deposito(float v);
    float saque(float v);
    void menu();

};

#endif // CONTA_H_INCLUDED
