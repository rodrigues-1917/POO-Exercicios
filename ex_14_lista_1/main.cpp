#include <iostream>
#include "Data.h"

using namespace std;

Data::Data()
{
    dia = 1;
    mes = 1;
    ano = 1;
    cout << "Objeto criado! Data: " << dia << "/" << mes << "/" << ano << endl;
}

Data::Data(int x, int y)
{
    dia = 2;
    this -> mes = x;
    this -> ano = y;
    cout << "Objeto criado! Data: " << dia << "/" << mes << "/" << ano << endl;
}

void Data::informe_hora()
{
    int x,y,z;
    cout << "\nDia: " << endl;
    cin >> x;
    cout << "\nMes: " << endl;
    cin >> y;
    cout << "\nAno: " << endl;
    cin >> z;
    this -> dia = x;
    this -> mes = y;
    this -> ano = z;
    cout << "\nData alterada!" << endl;
}

void Data::incrementar_ano()
{
    ano++;
    cout << "\nAno incrementado" << endl;
}

void Data::incrementar_mes()
{
    mes++;
    cout << "\nMes incrementado" << endl;
}

void Data::incrementar_dia()
{
    dia++;
    cout << "\nDia incrementado" << endl;
}

void Data::dec_ano()
{
    ano--;
    cout << "\nAno decrementado" << endl;
}

void Data::dec_mes()
{
    mes--;
    cout << "\nMes decrementado" << endl;
}

void Data::dec_dia()
{
    dia--;
    cout << "\nDia decrementado" << endl;
}

void Data::exibir_opcoes()
{
    cout << "\n1- Informe a hora\n2- ++ ano\n3- ++ mes\n4- ++ dia\n5- -- ano\n6- -- mes\n7- -- dia\n8- Ajustar data\n9- Exibir data\n10- Sair" << endl;
}

void Data::exibir_data()
{
    cout << dia << "/" << mes << "/" << ano << endl;
}

int main()
{
    Data objeto1;
    Data objeto2(04,2000);

    int opcao;

    do
    {
        objeto2.exibir_opcoes();
        cin >> opcao;
        switch(opcao)
        {
        case 1:
            objeto2.informe_hora();
            break;
        case 2:
            objeto2.incrementar_ano();
            break;
        case 3:
            objeto2.incrementar_mes();
            break;
        case 4:
            objeto2.incrementar_dia();
            break;
        case 5:
            objeto2.dec_ano();
            break;
        case 6:
            objeto2.dec_mes();
            break;
        case 7:
            objeto2.dec_dia();
            break;
        case 8:
            objeto2.informe_hora();
            break;
        case 9:
            objeto2.exibir_data();
            break;
        }
    }while(opcao != 10);

    return 0;
}
