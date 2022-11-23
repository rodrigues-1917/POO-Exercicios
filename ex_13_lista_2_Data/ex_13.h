#ifndef EX_13_H_INCLUDED
#define EX_13_H_INCLUDED

class Data
{
private:
    int dia;
    int mes;
    int ano;

public:
    Data();
    Data(int, int, int);

    int get_dia();
    int get_mes();
    int get_ano();

    void set_dia(int);
    void set_mes(int);
    void set_ano(int);

};

#endif // EX_13_H_INCLUDED
