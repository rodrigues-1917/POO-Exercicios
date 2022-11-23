#include "Pixel.h"
#include "math.h"

Ponto::Ponto()
{
    x = 0;
    y = 0;
}

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

int Ponto::set_x(int a)
{
    x = a;
}

int Ponto::set_y(int b)
{
    y = b;
}

void Ponto::get_x()
{
    cout << x;
}

void Ponto::get_y()
{
    cout << y;
}




Pixel::Pixel(string x, int b)
{
    cor = x;
    on_off = b;
}

void Pixel::set_cor(string x)
{
    cor = x;
}

void Pixel::set_on_off(int b)
{
    on_off = b;
}

void Pixel::get_cor()
{
    cout << cor;
}

void Pixel::get_on_off()
{
    cout << on_off;
}

