#include "Ponto.h"
#include "math.h"

Ponto::Ponto(int a, int b)
{
    x = a;
    y = b;
}

    float Ponto::calcula_distancia(const Ponto& P1)
    {
        float distancia = sqrt(pow(P1.x-x,2) + pow(P1.y-y,2));

        return distancia;
    }
