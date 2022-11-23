#include <iostream>
#include "Poligono.h"

Poligono::Poligono(int x, int y) : altura(x), comprimento(y){}

int Poligono::get_altura        (){return altura;}
int Poligono::get_comprimento   (){return comprimento;}
double Poligono::area              (){return altura*comprimento*2;}



