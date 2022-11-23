#include "ex_13.h"
#include <iostream>


using namespace std;

int main()
{
    Data d1;
    Data d2(5,5,2021);

    cout << d1.get_dia() << "/" << d1.get_mes() << "/" << d1.get_ano() << endl;
    cout << d2.get_dia() << "/" << d2.get_mes() << "/" << d2.get_ano() << endl;

    d2.set_dia(35);

    return 0;
}
