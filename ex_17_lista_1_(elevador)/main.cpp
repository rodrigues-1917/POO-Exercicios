#include <iostream>

using namespace std;

class Elevador
{
private:
    int andar_atual;
    int total_de_andares;
    int capacidade_elevador;
    int pessoas_no_elevador;
public:
    void inicializa(int capacidade,int andares)
    {
        this -> capacidade_elevador = capacidade;
        this -> total_de_andares = andares;
        andar_atual = 0;
        pessoas_no_elevador = 0;
    }

    void entra()
    {
        if(pessoas_no_elevador == capacidade_elevador)
        {
            cout << "\nLimite de pessoas excedido!" << endl;
        }
        else
        {
            pessoas_no_elevador++;
            cout << "Pessoas no elevador: " << pessoas_no_elevador << endl;
        }
    }

    void sai()
    {
        if(pessoas_no_elevador == 0)
        {
            cout << "\nNao ha ninguem para sair!" << endl;
        }
        else
        {
            pessoas_no_elevador--;
            cout << "Pessoas no elevador: " << pessoas_no_elevador << endl;
        }
    }

    void sobe()
    {
        if(andar_atual == total_de_andares)
        {
            cout << "\nNao ha mais andares acima." << endl;
        }
        else
        {
            andar_atual++;
            cout << "Andar: " << andar_atual << endl;
        }
    }

    void desce()
    {
        if(andar_atual == 0)
        {
            cout << "\nVoce ja esta no terreo" << endl;
        }
        else
        {
            andar_atual--;
            cout << "Andar: " << andar_atual << endl;
        }
    }

    void get_capacidade_andares()
    {
        int capacidade, andares;
        cout << "\nCapacidade: " << endl;
        cin >> capacidade;
        cout << "\nCapacidade atualizada." << endl;
        cout << "\nAndares: " << endl;
        cin >> andares;
        cout << "\nAndares atualizados." << endl;

        inicializa(capacidade, andares);
    }
};

int main()
{
    Elevador elevador1;
    int opcao;

    elevador1.get_capacidade_andares();

    do
    {
        cout << "1- Alterar capacidade e numero de andares\n2- Entrar pessoa\n3- Sair pessoa\n4- Subir andar\n5- Descer andar\n6- Sair" << endl;
        cin >> opcao;
        switch(opcao)
        {
        case 1:
            elevador1.get_capacidade_andares();
            break;
        case 2:
            elevador1.entra();
            break;
        case 3:
            elevador1.sai();
            break;
        case 4:
            elevador1.sobe();
            break;
        case 5:
            elevador1.desce();
            break;
        }
    }while(opcao != 6);
    return 0;
}
