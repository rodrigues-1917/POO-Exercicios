#ifndef POLIGONO_H_INCLUDED
#define POLIGONO_H_INCLUDED

using namespace std;

class Poligono
{
public:
    Poligono(int, int);
    int get_altura();
    int get_comprimento();
    double area();
private:
    int altura, comprimento;
};

#endif // POLIGONO_H_INCLUDED
