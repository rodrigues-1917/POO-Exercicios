#ifndef BIBLI_PNEU_H_INCLUDED
#define BIBLI_PNEU_H_INCLUDED
#include <string>

using namespace std;

class Pneu
{
public:
    Pneu();
    void set_calibragem(int);
    void set_durabilidade(int);
    void set_marca(string);
    void set_modelo(string);
    void set_estepe(bool);
    void get_calibragem();
    void get_durabilidade();
    void get_marca();
    void get_modelo();
    void get_estepe();
    void get_ficha_tecnica();
    int retorna_durabilidade();

private:
    int durabilidade;
    int calibragem;
    string marca;
    string modelo;
    bool estepe;
};

#endif // BIBLI_PNEU_H_INCLUDED
