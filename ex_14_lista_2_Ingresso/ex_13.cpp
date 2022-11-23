#include <iostream>
#include "ex_13.h"

    Data::Data()
    {
        dia = 27;
        mes = 5;
        ano = 2022;
    };

    Data::Data(int d, int m, int a)
    {
        if(d < 1 || d > 30)
        {
            std::cout << "Dia fora de escala" << std::endl;
            dia = 1;
        }else dia = d;

        if(m < 1 || m > 12)
        {
            std::cout << "Mes fora de escala" << std::endl;
            mes = 1;
        }else mes = m;

        if(a < 1 || a > 2100)
        {
            std::cout << "Ano fora de escala" << std::endl;
            ano = 1;
        }else ano = a;
    };

    int Data::get_dia(){return dia;};
    int Data::get_mes(){return mes;};
    int Data::get_ano(){return ano;};

    void Data::set_dia(int d)
    {
        if(d < 1 || d > 30)
        {
            std::cout << "Dia fora de escala" << std::endl;
        }else dia = d;
    };

    void Data::set_mes(int m)
    {
        if(m < 1 || m > 12)
        {
            std::cout << "Mes fora de escala" << std::endl;
        }else mes = m;
    };

    void Data::set_ano(int a)
    {
        if(a < 1 || a > 2100)
        {
            std::cout << "Ano fora de escala" << std::endl;
        }else ano = a;
    };
