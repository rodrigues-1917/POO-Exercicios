#include <iostream>
#include "Pixel.cpp"
#include <string>

using namespace std;

int main()
{
    Pixel P1("Branco",0);
    P1.set_x(5);
    P1.set_y(5);

    P1.get_cor();
    P1.get_on_off();
    P1.get_x();
    P1.get_y();

    return 0;
}
