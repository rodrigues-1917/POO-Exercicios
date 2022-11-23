#ifndef FATORIAL_H_INCLUDED
#define FATORIAL_H_INCLUDED

using namespace std;

class Fatorial
{
public:
    int fatorial;

        Fatorial()
    {
        fatorial = 7;
    }
    Fatorial(int x) : fatorial(x){}

    int c_fat()
    {
        int num;
        for(num = 1; fatorial >= 1; fatorial--)
        {
            num = fatorial*num;
            if(fatorial != 1)
            {
                cout << fatorial << " x ";
            }
            else
            {
                cout << fatorial;
            }
        }
        return num;
    }

    int c_fat2(int x)
    {
        this -> fatorial = x;
        int num;
        for(num = 1; fatorial >= 1; fatorial--)
        {
            num = fatorial*num;
            if(fatorial != 1)
            {
                cout << fatorial << " x ";
            }
            else
            {
                cout << fatorial;
            }
        }
        return num;
    }
};

#endif // FATORIAL_H_INCLUDED
