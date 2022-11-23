#include <iostream>
#include "fatorial.h"

using namespace std;

int main()
{
    Fatorial num;

    int resultado = num.c_fat();
    cout << " = " << resultado << endl;

    int resultado2 = num.c_fat2(7);
    cout << " = " << resultado2 << endl;

    return 0;
}
