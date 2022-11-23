#include <iostream>

using namespace std;

class Circulo
{
private:
    float raio,diametro,porcentagem;

    float area()
    {
        return 3.14*((raio)*(raio));
    };
    float circuferencia()
    {
        return diametro*3.14;
    };
public:
    Circulo(){
        raio = 0;
        diametro = 0;
        porcentagem = 0;
        cout << "Raio: " << raio << endl;
        cout << "\nDiametro: " << diametro << endl;
        cout << "\nPorcentagem: " << porcentagem << endl;
        cout << "\nObjeto criado!" << endl;
    };
    void definir_raio_e_diametro_e_porcentagem(int num, int num2, int num3)
    {
        raio = num;
        diametro = num2;
        porcentagem = num3;
    };
    float raio_mais_percentual()
    {
        raio = ((porcentagem/100)*raio)+raio;
        return raio;
    };
    void imprimir_raio_diametro(){
        cout << "\nRaio: " << raio << endl;
        cout << "\nDiametro: " << diametro << endl;
        cout << "\nPorcentagem: " << porcentagem << endl;
    };
    void imprimir_area(){
        cout << "\nArea: " << area() << endl;
    };
    void imprimir_circuferencia(){
        cout << "\nCicuferencia: " << circuferencia() << endl;
    };
    void imprimir_raio_mais_percentual(){
        cout << "\nRaio mais percentual: " << raio_mais_percentual() << endl;
    };
};

int main()
{
    Circulo objeto;

    int raio, diametro, porcentagem;

    cin >> raio;
    cin >> diametro;
    cin >> porcentagem;

    objeto.definir_raio_e_diametro_e_porcentagem(raio,diametro,porcentagem);
    objeto.imprimir_raio_diametro();
    objeto.imprimir_area();
    objeto.imprimir_circuferencia();
    objeto.imprimir_raio_mais_percentual();

    return 0;
}
