#ifndef PONTO_H_INCLUDED
#define PONTO_H_INCLUDED

class Ponto
{
public:
    int x,y;

    Ponto(int,int);

    float calcula_distancia(const Ponto&);

    int set_x(int);
    int set_y(int);

    void get_x();
    void get_y();

};

#endif // PONTO_H_INCLUDED
