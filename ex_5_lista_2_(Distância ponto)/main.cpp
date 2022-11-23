#include <iostream>
#include "Ponto.cpp"

using namespace std;

int main()
{
    Ponto P1(2,2);
    Ponto P2(5,1);

    cout << P1.calcula_distancia(P2) << endl;

    return 0;
}
