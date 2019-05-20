#ifndef ALU_H
#define ALU_H

#include "num.h"
#include "string.h"
#include <iostream>

using namespace std;

class ALU
{
public:
    ALU();
    ALU(num *num1, num *num2, string op);
    ~ALU();

    void tipoOperacion();
    string complemento2(string mantisa);
    string desplazarDerecha(string mantisa, int posicion, int digito);
    int OR(string mantisa);
    string sumaBinaria(string parametro1, string parametro2);
    int normalizar(string parametro);

private:

    //FUNCIONES
    float funcionSuma();
    float funcionMultiplicacion();
    float funcionDivision();

    //VARIABLES
    num *numero1, *numero2;
    string operacion;

    int expSol, d;
};

#endif // ALU_H
