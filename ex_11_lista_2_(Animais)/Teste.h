#ifndef TESTE_H_INCLUDED
#define TESTE_H_INCLUDED
#include "Cachorro.h"
#include "Gato.h"

class Teste : public Cachorro, public Gato
{
public:
    Teste(Cachorro);
    Teste(Gato);
private:

};

#endif // TESTE_H_INCLUDED
