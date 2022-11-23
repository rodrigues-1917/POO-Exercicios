#ifndef EX_14_H_INCLUDED
#define EX_14_H_INCLUDED
#include <string>
#include "ex_13.h"

class Ingresso
{
protected:
    std::string nome_comprador;
    Data Data_evento;
    int valor;

public:
    Ingresso();
    Ingresso(std::string, Data&, int);
    void exibir();
    void imprime_Valor();
};

#endif // EX_14_H_INCLUDED
