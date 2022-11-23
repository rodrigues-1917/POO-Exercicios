#ifndef CONTA_H_INCLUDED
#define CONTA_H_INCLUDED

using namespace std;

class Conta
{
private:
    float saldo;
public:
    Conta(float);
    void credito(float);
    void debito(float);
    void imprime_saldo();
    void imprime_opcoes();
    void imprime_nome(string);
};

#endif // CONTA_H_INCLUDED
