#include <iostream>
#include "bibli_carro.h"

Carro::Carro()
{

}
Carro::Carro(string x)
{
    chassi      = x;
    marca       = "Padrao fabrica";
    cor         = "Padrao fabrica";
    peso        = 0;
    tanque      = 0;
    km          = 0;
    velocidade  = 0;
}
void Carro::get_durabilidade_pneus()
{
    int a = p1.retorna_durabilidade() - km;
    int b = p2.retorna_durabilidade() - km;
    int c = p3.retorna_durabilidade() - km;
    int d = p4.retorna_durabilidade() - km;
    int e = p5.retorna_durabilidade();
    cout << "Durabilidade Pneu 1: " << a << endl;
    cout << "Durabilidade Pneu 2: " << b << endl;
    cout << "Durabilidade Pneu 3: " << c << endl;
    cout << "Durabilidade Pneu 4: " << d << endl;
    cout << "Durabilidade Pneu 5: " << e << endl;
}
void Carro::acelerar            ()              {velocidade++;              }
void Carro::frear               ()              {velocidade--;              }
void Carro::set_chassi          (string x)      {chassi     = x;            }
void Carro::set_marca           (string x)      {marca      = x;            }
void Carro::set_cor             (string x)      {cor        = x;            }
void Carro::set_peso            (int x)         {peso       = x;            }
void Carro::set_tanque          (int x)         {tanque     = x;            }
void Carro::set_km              (int x)         {km         = x;            }
void Carro::get_chassi          ()              {cout << "Chassi:              "   << chassi       << endl;}
void Carro::get_velocidade      ()              {cout << "Velocidade:          "   << velocidade   << endl;}
void Carro::get_marca           ()              {cout << "Marca:               "   << marca        << endl;}
void Carro::get_cor             ()              {cout << "Cor:                 "   << cor          << endl;}
void Carro::get_peso            ()              {cout << "Peso:                "   << peso         << endl;}
void Carro::get_tanque          ()              {cout << "Tanque:              "   << tanque       << endl;}
void Carro::get_km              ()              {cout << "KM:                  "   << km           << endl;}
void Carro::get_ficha_tecnica   ()
{
    get_chassi              ();
    get_marca               ();
    get_cor                 ();
    get_peso                ();
    get_tanque              ();
    get_km                  ();
    get_velocidade          ();
    get_durabilidade_pneus  ();
}
string Carro::retorna_chassi()
{
    return chassi;
}
string Carro::retorna_cor()
{
    return cor;
}
int Carro::retorna_km()
{
    return km;
}
string Carro::retorna_marca()
{
    return marca;
}
int Carro::retorna_peso()
{
    return peso;
}



