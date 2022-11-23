#include <iostream>

using namespace std;

class Animal {
 public:
 Animal() { cout << "- construindo animal" << endl; }
 ~Animal() { cout << "- destruindo animal" << endl; }
 };
class Mamifero : public Animal {
 public:
 Mamifero() { cout << "-- construindo mamifero" << endl; }
 ~Mamifero() { cout << "-- destruindo mamifero" << endl; }
 };
 class Homem : public Mamifero {
 public:
 Homem() { cout << "--- construindo homem" << endl; }
 ~Homem() { cout << "--- destruindo homem" << endl; }
};


int main()
{
    Homem h;
    return 0;
}
