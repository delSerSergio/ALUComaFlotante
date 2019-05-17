#include "alu.h"
#include "bitset"
#include "string.h"

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

        cout<<"Se intercambian los numeros."<<endl;
        cout<<"Numero 1: "<<numero1<<endl;
        cout<<"Numero 2: "<<numero2<<endl;

        operandosIntercambiados=true;
    }

    int expSol, d;
    expSol=numero1->getExponente();
    d=numero1->getExponente()-numero2->getExponente();

    if(numero1->getSigno()!=numero2->getSigno())
    {
        cout<<"Empezamos a realizar el complemento 2 del numero 2."<<endl;

        string m;
        m=complemento2(numero2->getMantisa());

        cout<<"La mantisa es: "<<numero2->getMantisa()<<endl;
        cout<<"La mantisa cambiada es: "<<m<<endl;
    }

    //P=m;

    int bitDeGuarda, bitDeRedondeo, bitSticky;

    if(numero1->getSigno()!=numero2->getSigno())
    {
        string pDesplazado;
        pDesplazado=desplazarDerecha(numero2->getMantisa(), d, 1);
    }
    else
    {
        string pDesplazado;
        pDesplazado=desplazarDerecha(numero2->getMantisa(), d, 0);
    }

    //P=numero1->getMantisa()+pDesplazado;

}

float ALU::funcionMultiplicacion(){

}

float ALU::funcionDivision(){

}

string ALU::complemento2(string mantisa)
{

    string mantisaNueva;
    int i;
    bool cambio=false;

    for(i=mantisa.size();i=0;i--)
    {
        if(cambio==false)
        {
            if(mantisa.at(i)==1)
            {
                mantisaNueva='1'+mantisaNueva;
                cambio=true;
            }
            else if(mantisa.at(i)==0)
            {
               mantisaNueva='0'+mantisaNueva;
            }
        }
        else
        {
            if(mantisa.at(i)==1)
            {
                mantisaNueva='0'+mantisaNueva;
            }
            else if(mantisa.at(i)==0)
            {
                mantisaNueva='1'+mantisaNueva;
            }
        }
    }
    return mantisaNueva;
}

string ALU::desplazarDerecha(string mantisa, int posiciones, int digito)
{
    int i, j;
    for(i=0;i<posiciones;i++)
    {
        for(j=0;mantisa.size();j++)
        {

        }
    }
}
