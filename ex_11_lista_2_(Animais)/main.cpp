#include <iostream>
#include "Teste.h"
#include "Animals.h"
#include "Cachorro.h"

using namespace std;

int main()
{
    Cachorro    alfredo;                                                                // Criando cachorro
    Gato        de_botas;                                                               // Criando gato

    alfredo.set_nome("Cachorro alfredo");                                               // Dando nome ao cachorro
    de_botas.set_nome("Gato de botas");                                                 // Dando nome ao gato

    Teste cao(alfredo);                                                                 // Criando objeto de teste que recebera um cachorro
    Teste cat(de_botas);                                                                // Criando objeto de teste que recebera um gato

    cout << alfredo.get_nome()   << " esta fazendo " << cao.miar() << "\n";                     // Imprimindo nome do cachorro e fazendo-o miar
    cout << de_botas.get_nome()  << " esta fazendo " << cat.latir() << "\n\n";          // Imprimindo nome do gato e fazendo-o latir

    cout << alfredo.get_nome() << " esta " << alfredo.Caminha() << endl;                // Imprimindo nome do cachorro e fazendo-o caminhar
    cout << de_botas.get_nome() << " esta " << de_botas.Caminha() << endl;              // Imprimindo nome do gato e fazendo-o caminhar

    return 0;
}
