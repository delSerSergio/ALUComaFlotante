#include "alu.h"
#include "bitset"

ALU::ALU()
{

}

ALU::ALU(num *num1, num *num2, string op)
{
    numero1=num1;
    numero2=num2;
    operacion=op;
}

ALU::~ALU()
{

}

void ALU::tipoOperacion(){

    if(operacion == "Suma"){
        funcionSuma();
    }
    if(operacion == "Resta"){
        funcionSuma();
    }
    if(operacion == "Multiplicacion"){
        funcionMultiplicacion();
    }
    if(operacion == "Division"){
        funcionDivision();
    }
}

float ALU::funcionSuma()
{
    int P=0, g=0, r=0, st=0, n;
    n=numero1->getMantisa().size();
    bool operandosIntercambiados=false;
    bool complementoP=false;

    if(numero1->getExponente()<numero2->getExponente())
    {
        num *aux;
        aux=numero2;
        numero1=numero2;
        numero1=aux;

        operandosIntercambiados=true;
    }

    int expSol, d;
    expSol=numero1->getExponente();
    d=numero1->getExponente()-numero2->getExponente();

    if(numero1->getSigno()!=numero2->getSigno())
    {
        int m;
        m=complemento2(numero2->getMantisa());
    }

    P=m;

    int bitDeGuarda, bitDeRedondeo, bitSticky;

    if(numero1->getSigno()!=numero2->getSigno())
    {

    }
    else
    {

    }
}

float ALU::funcionMultiplicacion(){

}

float ALU::funcionDivision(){

}
