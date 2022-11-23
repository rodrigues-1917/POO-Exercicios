#include <iostream>
#include "bibli_motorista.h"
#include "bibli_carro.h"

using namespace std;

int main()
{
    Motorista user1 ("kalebe");
    Carro     civic ("Civic");


    user1.add_carro(civic);
    user1.car->get_ficha_tecnica();

    user1.car->acelerar();
    user1.car->set_cor("Preto");

    user1.car->get_ficha_tecnica();

    return 0;
}
