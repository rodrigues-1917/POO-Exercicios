#ifndef BIBLI_CARRO_H_INCLUDED
#define BIBLI_CARRO_H_INCLUDED
#include "bibli_pneu.h"

class Carro
{
public:
    Carro();
    Carro(string);
    Pneu p1;
    Pneu p2;
    Pneu p3;
    Pneu p4;
    Pneu p5;

    void get_durabilidade_pneus();
    void acelerar();
    void frear();
    void set_chassi(string);
    void set_marca(string);
    void set_cor(string);
    void set_peso(int);
    void set_tanque(int);
    void set_km(int);
    void get_chassi();
    void get_velocidade();
    void get_marca();
    void get_cor();
    void get_peso();
    void get_tanque();
    void get_km();
    void get_ficha_tecnica();
    string retorna_chassi();
    string retorna_cor();
    string retorna_marca();
    int retorna_peso();
    int retorna_tanque();
    int retorna_km();

private:
    string chassi;
    string marca;
    string cor;
    int peso;
    int tanque;
    int km;
    int velocidade;

};


#endif // BIBLI_CARRO_H_INCLUDED
