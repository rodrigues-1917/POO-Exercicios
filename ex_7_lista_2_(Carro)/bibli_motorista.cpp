#include <iostream>
#include "bibli_motorista.h"
#include "bibli_carro.h"

     Motorista::Motorista       ()          {nome   = "Usuario indefinido";}
     Motorista::Motorista       (string x)  {nome   = x;}
void Motorista::add_carro       (Carro& x)
{
    car = new Carro();
    car->set_chassi (x.retorna_chassi());
    car->set_cor    (x.retorna_cor());
    car->set_km     (x.retorna_km());
}
void Motorista::set_motorista   (string x)  {nome   = x;}
void Motorista::set_cnh         (string x)  {cnh    = x;}
void Motorista::get_motorista   ()          {cout << "Motorista:           "   << nome << endl;}
void Motorista::get_cnh         ()          {cout << "CNH:                 "   << cnh  << endl;}
