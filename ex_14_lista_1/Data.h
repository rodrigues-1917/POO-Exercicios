#ifndef DATA_H_INCLUDED
#define DATA_H_INCLUDED

class Data
{
private:
    int dia;
    int mes;
    int ano;
public:
    Data();
    Data(int,int);

    void informe_hora();
    void incrementar_ano();
    void incrementar_mes();
    void incrementar_dia();
    void dec_ano();
    void dec_mes();
    void dec_dia();
    void exibir_data();
    void exibir_opcoes();
};

#endif // DATA_H_INCLUDED
