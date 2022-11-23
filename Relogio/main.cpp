#include <iostream>
#include "Relogio.h"

Relogio::Relogio(){
    hora    = 0;
    minuto  = 0;
    segundo = 0;
    parada = 0;
}
void Relogio::informar_hora(){
    int a, b, c;
    std::cin >> a;
    if(a > 23 || a < 0 ){
        std::cout << "Valor invalido" << endl;
        parada = 1;
    }
    std::cin >> b;

    if(b > 59 || a < 0){
        std::cout << "Valor invalido" << endl;
        parada = 1;
    }
    std::cin >> c;

    if(c > 59 || c < 0){
        std::cout << "Valor invalido" << endl;
        parada = 1;
    }
    hora    = a;
    minuto  = b;
    segundo = c;
}
void Relogio::incrementar_hora(){
    hora++;
}
void Relogio::incrementar_minuto(){
    minuto++;
}
void Relogio::incrementar_segundo(){
    segundo++;
}
void Relogio::decrementar_hora(){
    hora--;
}
void Relogio::decrementar_minuto(){
    minuto--;
}
void Relogio::decrementar_segundo(){
    segundo--;
}
void Relogio::condicoes(){
    if(segundo == 60){
        minuto++;
        segundo = 0;
    }
    if(minuto == 60){
        hora++;
        minuto = 0;
    }
    if(hora == 24){
        hora = 0;
    }
}
void Relogio::exibir_hora(){
    std::cout << hora << ":" << minuto << ":" << segundo << std::endl;
}
void Relogio::exibir_menu(){
    std::cout << "-1 Informar hora\n-2 Incrementar hora\n-3 Incrementar minuto\n-4 Incrementar segundo\n-5 Decrementar hora\n-6 Decrementar minuto\n-7 Decrementar segundo\n-8 Exibir hora\n-9 Sair" << std::endl;
}

int main()
{
    Relogio *obj = new Relogio();
    int opcao;
    do{
        obj-> exibir_menu();
        std::cin >> opcao;

        if(opcao == 1){
            obj-> informar_hora();
            if(obj->parada == 1){
                break;
            }
        }
        if(opcao == 2){
            obj-> incrementar_hora();
        }
        if(opcao == 3){
            obj-> incrementar_minuto();
        }
        if(opcao == 4){
            obj-> incrementar_segundo();
        }
        if(opcao == 5){
            obj-> decrementar_hora();
        }
        if(opcao == 6){
            obj-> decrementar_minuto();
        }
        if(opcao == 7){
            obj-> decrementar_segundo();
        }
        if(opcao == 8){
            obj-> exibir_hora();
        }
    }while(opcao != 9);


    return 0;
}
