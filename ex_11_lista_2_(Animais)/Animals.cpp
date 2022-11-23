#include <iostream>
#include "Animals.h"

Animal::Animal()
{
    nome = "default";
    raca = "default";
    //cout << "Animal criado" << endl;
}

Animal::Animal(string _nome)
{
    nome = _nome;
    //cout << "Animal criado" << endl;
}

string Animal::Caminha()
{
    string status = "caminhando";
    return status;
}

void Animal::set_nome(string _nome)
{
    nome = _nome;
}

string Animal::get_nome()
{
    return nome;
}

