#include <iostream>
#include "bibli_pneu.h"

Pneu::Pneu     ()
{
    durabilidade    = 5000;
    calibragem      = 30;
    marca           = "Padrao fabrica";
    modelo          = "Padrao fabrica";
    estepe          = true;
}
void Pneu::set_calibragem   (int x)     {calibragem     = x;}
void Pneu::set_durabilidade (int x)     {durabilidade   = x;}
void Pneu::set_marca        (string x)  {marca          = x;}
void Pneu::set_modelo       (string x)  {modelo         = x;}
void Pneu::set_estepe       (bool x)    {estepe         = x;}
void Pneu::get_calibragem   ()          {cout << "Calibragem:   " << calibragem     << endl;}
void Pneu::get_durabilidade ()          {cout << "Durabilidade: " << durabilidade   << endl;}
void Pneu::get_marca        ()          {cout << "Marca:        " << marca          << endl;}
void Pneu::get_modelo       ()          {cout << "Modelo:       " << modelo         << endl;}
void Pneu::get_estepe       ()          {cout << "Estepe:       " << estepe         << endl;}
void Pneu::get_ficha_tecnica()
{
    get_calibragem();
    get_durabilidade();
    get_marca();
    get_modelo();
    get_estepe();
}
int Pneu::retorna_durabilidade(){ return durabilidade; }
