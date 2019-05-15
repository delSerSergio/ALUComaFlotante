#ifndef ALU_H
#define ALU_H

#include "string.h"
#include <iostream>

using namespace std;

class ALU
{
public:
    ALU();


private:

    //FUNCIONES
    void tipoOperacion();
    float funcionSuma();
    float funcionMultiplicacion();
    float funcionDivision();

    //VARIABLES
    string op;
};

#endif // ALU_H
