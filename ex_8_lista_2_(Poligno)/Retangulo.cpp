#include <iostream>
#include "Retangulo.h"

Retangulo::Retangulo(int x, int y) : Poligono(x, y){}
double Retangulo::area(){return get_altura() * get_comprimento();}
