#include <iostream>
#include "Conta.h"

using namespace std;

float Conta::deposito(float v){
    saldo = saldo + v;
}

float Conta::saque(float v){
    saldo = saldo - v;
}

void Conta::menu(){
    float valor;
    int opcao;

        do{
        cout << "1-Depositar\n2-Sacar\n3-Saldo\n\n0-Sair" << endl;
        cin >> opcao;

            switch (opcao){
                case 1:
                    cout << "Valor: " << endl;
                    cin >> valor;
                    deposito(valor);
                    system("cls");
                    cout << "Valor depositado: " << valor << " barao\n" << endl;
                    break;
                case 2:
                    cout << "Valor: " << endl;
                    cin >> valor;
                    saque(valor);
                    system("cls");
                    cout << "Valor sacado: " << valor << " barao\n" << endl;
                    break;
                case 3:
                    system("cls");
                    cout << "Saldo: " << saldo << " barao\n" << endl;
                    break;
                default:
                    system("cls");
                    break;
            }
        }while (opcao != 0);
}
