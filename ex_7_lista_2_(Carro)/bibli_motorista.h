#ifndef BIBLI_MOTORISTA_H_INCLUDED
#define BIBLI_MOTORISTA_H_INCLUDED
#include <string>
#include "bibli_carro.h"

using namespace std;

class Motorista
{
public:
    Motorista();
    Motorista(string);
    Carro *car;

    void add_carro(Carro&);
    void set_motorista(string);
    void set_cnh(string);
    void get_motorista();
    void get_cnh();

private:
    string nome;
    string cnh;


};

#endif // BIBLI_MOTORISTA_H_INCLUDED
