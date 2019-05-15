#include "alu.h"
#include "bitset"

ALU::ALU()
{

}

void ALU::tipoOperacion(){

    if(op == "Suma"){
        funcionSuma();
    }
    if(op == "Resta"){
        funcionSuma();
    }
    if(op == "Multiplicacion"){
        funcionMultiplicacion();
    }
    if(op == "Division"){
        funcionDivision();
    }
}

float ALU::funcionSuma(){

}

float ALU::funcionMultiplicacion(){

}

float ALU::funcionDivision(){

}
