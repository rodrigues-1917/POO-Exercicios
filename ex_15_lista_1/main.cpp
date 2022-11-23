#include <iostream>
#include "Conta.h"

using namespace std;

Conta::Conta(float x)
{
    if(x < 0)
    {
        cout << "Erro. O saldo inicializado foi menor que 0" << endl;
    }
    this -> saldo = x;
}

void Conta::credito(float x)
{
    saldo = saldo + x;
    cout << "\nCredito adicionado, saldo: " << saldo << endl;
}

void Conta::debito(float x)
{
    int valor = saldo - x;
    if(valor < 0)
    {
        cout << "\nNao ha saldo suficiente, operacao nao realizada." << endl;
    }else saldo = valor;

    cout << "\nOperacao realizada, saldo: " << saldo << endl;
}

void Conta::imprime_nome(string x)
{
    cout << x << endl;
}

void Conta::imprime_saldo()
{
    cout << "Saldo: " << saldo << endl;
}

int main()
{
    Conta rogerinho(100);
    Conta marquinho(200);

    Conta conta(10);

    rogerinho.imprime_nome("Rogerinho");
    rogerinho.credito(5);
    rogerinho.debito(500);

    marquinho.imprime_nome("\nMarquinho");
    marquinho.credito(50);
    marquinho.debito(100);

    return 0;
}
