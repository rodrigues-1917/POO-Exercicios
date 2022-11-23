#include <iostream>
#include "Triangulo.h"

Triangulo::Triangulo(int x, int y) : Poligono(x, y){}
double Triangulo::area(){return (get_altura() * get_comprimento())/2;}
