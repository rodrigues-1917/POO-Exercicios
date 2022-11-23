#include <iostream>

using namespace std;

class Forma()
{
private:
    string  cor;
    int     peso;
public:
    Forma(string _cor, int _peso)
    {
        cor  = _cor;
        peso = _peso;
    }
    int calcular_area()
};

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
