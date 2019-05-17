#ifndef NUM_H
#define NUM_H

#include "iostream"

using namespace std;

class num
{
public:
    num();
    num(string num);
    ~num();

    void setSigno(string sig);
    void setExponente(int exp);
    void setMantisa(string mant);

    string getSigno();
    int getExponente();
    string getMantisa();

    int getExp(string exp);
    int getNum(int posicion);

private:
    string signo, mantisa;
    int exponente;


};

#endif // NUM_H
