#include "num.h"
#include "bitset"

num::num()
{

}

num::num(string num)
{
    setSigno((num.substr(0,1)));
    setExponente(getExp(num.substr(1,8)));
    setMantisa((num.substr(9,23)));
}

num::~num()
{

}

void num::setSigno(string sig)
{
    signo=sig;
}

void num::setExponente(int exp)
{
    exponente=exp;
}

void num::setMantisa(string mant)
{
    mantisa=mant;
}

string num::getSigno()
{
    return signo;
}

int num::getExponente()
{
    return exponente;
}

string num::getMantisa()
{
    return mantisa;
}

int num::getExp(string exp)
{
    int cont=0, i;
    for(i=0;i<exp.size();i++)
    {
        if(exp[i]==1)
        {
            cont=cont+getNum(i);
        }
    }
    return cont-127;
}

int num::getNum(int posicion)
{
    int vector[8]={128, 64, 32, 16, 8, 4, 2, 1};
    return vector[posicion];
}
