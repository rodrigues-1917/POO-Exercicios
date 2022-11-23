#include <iostream>
#include "ex_14.h"

Ingresso::Ingresso()
{
    nome_comprador = "default";
    Data_evento.set_dia(1);
    Data_evento.set_mes(1);
    Data_evento.set_ano(1);
    valor = 20;
}

Ingresso::Ingresso(std::string nome, Data& data, int _valor)
{
    nome_comprador = nome;
    Data_evento = data;
    valor = _valor;
}

void Ingresso::exibir()
{
    std::cout << "Nome do comprador : " << nome_comprador << std::endl;
    std::cout << "Data do evento    : " << Data_evento.get_dia() << "/" << Data_evento.get_mes() << "/" << Data_evento.get_ano() << std::endl;
    std::cout << "Valor do ingresso : " << valor << std::endl;
}

void Ingresso::imprime_Valor()
{
    std::cout << valor << std::endl;
}
