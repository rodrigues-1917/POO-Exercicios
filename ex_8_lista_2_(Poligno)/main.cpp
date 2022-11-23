#include <iostream>
#include "Poligono.h"
#include "Retangulo.h"
#include "Triangulo.h"

using namespace std;

int main()
{
    Poligono  num1(5,5);
    Triangulo num2(5,2);
    Retangulo num3(3,2);

    cout << "Area poligono: " << num1.area() << endl;
    cout << "Area triangul: " << num2.area() << endl;
    cout << "Area retangul: " << num3.area() << endl;

    return 0;
}
