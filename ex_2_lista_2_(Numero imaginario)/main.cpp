#include <iostream>

using namespace std;

class Numero_im
{
public:
    float real;
    float imaginario;

    Numero_im()
    {

    }
    Numero_im(float x, float y) : real(x), imaginario(y)
    {
        cout << "Real: " << real << endl;
        cout << "Im:   " << imaginario << endl;
        cout << "Objeto criado." << endl;
    }

    friend ostream& operator<< (ostream&, const Numero_im&);
};

    Numero_im operator+ (const Numero_im& num1, const Numero_im& num2)
    {
        Numero_im vetor_soma;
        vetor_soma.real = num1.real + num2.real;
        vetor_soma.imaginario = num1.imaginario + num2.imaginario;
        return vetor_soma;
    }

    Numero_im operator- (const Numero_im& num1, const Numero_im& num2)
    {
        Numero_im vetor_subtracao;
        vetor_subtracao.real = num1.real - num2.real;
        vetor_subtracao.imaginario = num1.imaginario - num2.imaginario;
        return vetor_subtracao;

    }

    Numero_im operator* (const Numero_im& num1, const Numero_im& num2)
    {
        Numero_im vetor_multiplicacao;
        vetor_multiplicacao.real = (num1.real*num2.real)-(num1.imaginario*num2.imaginario);
        vetor_multiplicacao.imaginario = (num1.real*num2.imaginario)+(num1.imaginario*num2.real);
        return vetor_multiplicacao;
    }

    Numero_im operator/ (const Numero_im& num1, const Numero_im& num2)
    {
        Numero_im vetor_divisao;
        vetor_divisao.real = ((num1.real*num2.real)+(num1.imaginario*num2.imaginario))/((num2.real*num2.real)+(num2.imaginario*num2.imaginario));
        vetor_divisao.imaginario = (((num1.real*num2.imaginario)-(num1.imaginario*num2.real))/(((num2.real*num2.real)+(num2.imaginario*num2.imaginario))));
        return vetor_divisao;
    }

    ostream& operator<< (ostream& saida_texto, const Numero_im& numero_imaginario)
    {
        saida_texto  << "(" << numero_imaginario.real << "," << numero_imaginario.imaginario << "i" << ")";
        return saida_texto;
    }

int main()
{
    Numero_im num1(1,2);
    Numero_im num2(2,3);

    cout << "\nSoma: "  << num1 + num2 << endl;
    cout << "Subt: "    << num1 - num2 << endl;
    cout << "Mult: "    << num1 * num2 << endl;
    cout << "Divi: "    << num1 / num2 << endl;

    return 0;
}
