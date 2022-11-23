#include <iostream>

using namespace std;

class Calculadora{

float num1;
float num2;

public:

float somar       (){return (num1 + num2);}
float subtrair    (){return (num1 - num2);}
float multiplicar (){return (num1 * num2);}
float dividir     (){return (num1 / num2);}


void recebe (){
    cout << "Insira o primeiro valor:" << endl;
    cin >> num1;
    cout << "Insira o segundo valor:" << endl;
    cin >> num2;}

void imprime (float soma, float subt, float mult, float divi){
    cout << "\nSoma:" << soma << endl;
    cout << "Subt:" << subt << endl;
    cout << "Mult:" << mult << endl;
    cout << "Divi:" << divi << endl;}

void imprime_resultado (float x){
    cout << "Resultado:" << x << endl;}
};

int main()
{
    Calculadora c1;

    c1.recebe();

    c1.imprime(c1.somar(),c1.subtrair(),c1.multiplicar(),c1.dividir());

    return 0;
}
