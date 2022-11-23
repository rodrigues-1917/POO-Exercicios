#include <iostream>

using namespace std;

class Retangulo
{
public:
    int area(int largura, int altura)
    {
        return largura*altura;
    };

    int perimetro(int largura, int altura)
    {
        return 2*(largura+altura);
    };
};

int main()
{
    Retangulo objeto_1;
    Retangulo objeto_2;
    Retangulo objeto_3;

    cout << objeto_1.area(2,5) << endl;
    cout << objeto_2.area(1,5) << endl;
    cout << objeto_3.area(10,150) << endl;

    cout << objeto_1.perimetro(2,5) << endl;
    cout << objeto_2.perimetro(1,5) << endl;
    cout << objeto_3.perimetro(10,150) << endl;



    return 0;
}
