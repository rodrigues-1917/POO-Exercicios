#include <iostream>

using namespace std;

class Dois  {
    public:
        Dois()
        {cout << "Um "     ;}
};

class Tres
{
    public:
        Tres()
        {cout << "tres ";}
        ~Tres()
        {cout << "cinco ";}
};

class Quatro{
    public:
        Quatro()
        {cout << "dois ";}
        ~Quatro()
        {cout << "sete ";}
};

class Um : public Dois
{
public:
    Um()
    {
        Tres tres;
        cout << "quatro ";
    }

    ~Um()
    {
        cout << "seis ";
    }

private:
    Quatro _quatro;
};


int main()
{
    Um d;
    return 0;
}
