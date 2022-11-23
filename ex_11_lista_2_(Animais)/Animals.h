#ifndef ANIMALS_H_INCLUDED
#define ANIMALS_H_INCLUDED
#include <string>

using namespace std;

class Animal
{
public:
    Animal();
    Animal(string);
    string Caminha();


    void set_nome(string);
    string get_nome();

private:
    string nome, raca;
};

#endif // ANIMALS_H_INCLUDED
