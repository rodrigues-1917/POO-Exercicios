#include <iostream>

using namespace std;

template <typename T>
    T Maior(T num1, T num2)
    {
        return ((num1 > num2)? num1 : num2);
    }

int main()
{
    cout << Maior(12.5, 126) << endl;

    return 0;
}

// O erro acontece na linha 13, pois a sintaxe não está correta.
// Tendo dois numeros de tipo diferente, é preciso após o "Maior" ter "<tipo>"
// Forma correta: cout << Maior <float> (12.5, 126) << endl;
