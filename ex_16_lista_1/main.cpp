#include <iostream>

class Jogador
{
private:
    string nome;
    int passes_certos;
    int passes_errados;
    int qtd_gols;
    int faltas_sofridas;
    int faltas_realizadas;
    int minutos_jogados;
    int pontuacao;
public:
    Jogador(string x)
    {
        this -> nome = x;
    }

    int calcular_pontos()
    {

    }
};

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
