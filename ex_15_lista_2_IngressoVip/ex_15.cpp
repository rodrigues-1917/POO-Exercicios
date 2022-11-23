#include <iostream>
#include "ex_15.h"

IngressoVip::IngressoVip(int _valor)
{
    valor_add = _valor;
}

void IngressoVip::imprime_Valor()
{
    std::cout << "Valor: " << valor_add + valor << std::endl;
}
