#include <iostream>
#include "ex_13.h"
#include "ex_14.h"
#include "ex_15.h"


using namespace std;

int main()
{
    Data d1(15,10,2020);
    Ingresso i1;
    Ingresso i2("Fulano",d1,10);
    IngressoVip iv1(50);

    i2.exibir();
    iv1.imprime_Valor();

    return 0;
}
