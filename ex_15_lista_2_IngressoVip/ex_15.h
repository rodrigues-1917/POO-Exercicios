#ifndef EX_15_H_INCLUDED
#define EX_15_H_INCLUDED
#include "ex_14.h"

class IngressoVip : public Ingresso
{
private:
    int valor_add;

public:
    IngressoVip(int);
    void imprime_Valor();
};

#endif // EX_15_H_INCLUDED
