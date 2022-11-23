#ifndef RELOGIO_H_INCLUDED
#define RELOGIO_H_INCLUDED

using namespace std;

class Relogio {
private:
    int hora, minuto, segundo;

public:
    Relogio();
    void informar_hora();
    void incrementar_hora();
    void incrementar_minuto();
    void incrementar_segundo();
    void decrementar_hora();
    void decrementar_minuto();
    void decrementar_segundo();
    void incrementar_contador();
    void exibir_hora();
    void exibir_menu();
    void condicoes();
    int parada;
};

#endif // RELOGIO_H_INCLUDED
