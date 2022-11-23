#ifndef PIXEL_H_INCLUDED
#define PIXEL_H_INCLUDED
#include <string>

using namespace std;

class Ponto
{
public:
    int x,y;

    Ponto();
    Ponto(int,int);

    float calcula_distancia(const Ponto&);

    int set_x(int);
    int set_y(int);

    void get_x();
    void get_y();

};

class Pixel: public Ponto
{
public:
    string cor;
    int on_off;

    Pixel(string,int);

    void set_cor(string);
    void set_on_off(int);

    void get_cor();
    void get_on_off();
};

#endif // PIXEL_H_INCLUDED
