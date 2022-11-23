#include <iostream>

using namespace std;

class Livro
{
private:
    string titulo;
    string nome_autor;
    int isbn;
    int edicao;
    int volume;
    int numero_pgs;
    int pg_atual;

public:
    Livro()
    {
        titulo     = "Valor inicial";
        nome_autor = "Valor inicial";
        isbn       = 0;
        edicao     = 0;
        volume     = 0;
        numero_pgs = 0;
        pg_atual   = 0;
        cout << "Primeiro construtor: Objeto criado!" << endl;
    };
    Livro(string x, int y)
    {
        titulo = x;
        numero_pgs = y;
        cout << "Segundo  construtor: Objeto criado!" << endl;
    };


    void set_titulo(string x)
    {
        if(x.size() > 30)
        {
            do
            {
                cout << "\nCapacidade de caracteres excedida, tente outro: " << endl;
                getline(cin,x);
            }
            while(x.size() > 30);
        }
        titulo = x;
        cout << "Titulo alterado!" << endl;
    };


    void set_autor(string x)
    {
        if(x.size() > 20)
        {
            do
            {
                cout << "\nCapacidade de caracteres excedida, tente outro: " << endl;
                getline(cin,x);
            }
            while(x.size() > 20);
        }
        nome_autor = x;
        cout << "Nome do autor alterado!" << endl;
    }


    void set_total_pgs(int x)
    {
        numero_pgs = x;
        cout << "Numero de pgs totais alterado!" << endl;
    }


    void imprimir_titulo_pgs_autor()
    {
        cout << "\nTitulo: " << titulo << "\nAutor: " << nome_autor << "\nTotal de paginas: " << numero_pgs << endl;
    }


    void ir_para_pagina(int x)
    {
        if(x > numero_pgs)
        {
            do
            {
                cout << "\nEssa pagina nao existe, tente outra:" << endl;
                cin >> x;
            }
            while(x > numero_pgs);
        }

        pg_atual = x;
        cout << "\nVoce foi para a pagina: " << pg_atual << endl;
    }


    void proxima_pagina()
    {
        pg_atual++;
        if(pg_atual > numero_pgs)
        {
            pg_atual = 1;
        }
        cout << "Voce foi para a pagina: " << pg_atual << endl;
    }


    void imprimir_opcoes()
    {
        cout << "\n1- Alterar titulo\n2- Alterar autor\n3- Alterar num total de pg\n4- Ir para pagina\n5- Proxima pagina\n6- Exibir\n7- Sair" << endl;
    }
};

int main()
{
    Livro objeto;
    Livro objeto2("Teste",100);

    int opcao;
    string titulo;
    string autor;
    int numero_pgs;
    int ir_pagina;

    do
    {
        objeto2.imprimir_opcoes();
        cin >> opcao;
        switch(opcao)
        {
        case 1:
            cout << "\nInsira o novo titulo: " << endl;
            getline(cin,titulo);
            getline(cin,titulo);
            objeto2.set_titulo(titulo);
            break;
        case 2:
            cout << "\nInsira o novo autor: " << endl;
            getline(cin,autor);
            getline(cin,autor);
            objeto2.set_autor(autor);
            break;
        case 3:
            cout << "\nInsira o novo total de pgs: " << endl;
            cin >> numero_pgs;
            objeto2.set_total_pgs(numero_pgs);
            break;
        case 4:
            cout << "\nInsira para qual pagina deseja ir: " << endl;
            cin >> ir_pagina;
            objeto2.ir_para_pagina(ir_pagina);
            break;
        case 5:
            objeto2.proxima_pagina();
            break;
        case 6:
            objeto2.imprimir_titulo_pgs_autor();
            break;
        }
    }while(opcao != 7);

    return 0;
}
