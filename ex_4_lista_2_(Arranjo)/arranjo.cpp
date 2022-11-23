#include "arranjo.h"

    Fatorial::Fatorial()
    {
        fatorial = 7;
    }
    Fatorial::Fatorial(int x) : fatorial(x){}

    int Fatorial::c_fat()
    {
        int num;
        for(num = 1; fatorial >= 1; fatorial--)
        {
            num = fatorial*num;
        }
        return num;
    }

    int Fatorial::c_fat2(int x)
    {
        this -> fatorial = x;
        int num;
        for(num = 1; fatorial >= 1; fatorial--)
        {
            num = fatorial*num;

        }
        return num;
    }


    int Arranjo::arranjo(int n, int k)
    {
        Fatorial num1;

        int numerador   = num1.c_fat2(n);
        int denominador = num1.c_fat2((n-k));

        return numerador/denominador;
    }
