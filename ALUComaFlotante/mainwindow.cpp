#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLineEdit>
#include <iostream>
#include <stdio.h>
#include <unistd.h>

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_transformarNumeros_clicked()
{

    //PRIMER NUMERO

    //Leemos el segundo numero
    real1 = ui->lineEdit->text();
    num1 = real1.toDouble();

    union IEEE754 numero1;

    numero1.num = num1;

    cout<<"El signo del número 2: "<<numero1.camposComaFlotante.signo<<endl;
    cout<<"El exponente del número 2: "<<numero1.camposComaFlotante.exponente<<endl;
    cout<<"La mantisa del número 2 : "<<numero1.camposComaFlotante.mantisa<<endl;

    cout<< "La representacion en IEEE 754 de " << num1 << " es : \n";
    cout<< numero1.camposComaFlotante.signo << " | ";

    int resto;
    string binario ="";

    while(numero1.camposComaFlotante.exponente >= 2){

        resto = (numero1.camposComaFlotante.exponente)%2;

        if(resto == 1){
            binario = "1" + binario;
        }else{
            binario = "0" + binario;
        }
        numero1.camposComaFlotante.exponente = (numero1.camposComaFlotante.exponente )/2;
    }

    if(numero1.camposComaFlotante.exponente  == 1){
        binario = "1" + binario;
    }else{
        binario = "0" + binario;
    }

    cout<< binario;
    cout<< " | ";

    int resto1;
    string binario1 ="";

    while(numero1.camposComaFlotante.mantisa >= 2){

        resto1 = (numero1.camposComaFlotante.mantisa)%2;

        if(resto1 == 1){
            binario1 = "1" + binario1;
        }else{
            binario1 = "0" + binario1;
        }
        numero1.camposComaFlotante.mantisa = (numero1.camposComaFlotante.mantisa)/2;
    }

    if(numero1.camposComaFlotante.mantisa  == 1){
        binario1 = "1" + binario1;
    }else{
        binario1 = "0" + binario1;
    }

    cout<< binario1;
    cout<< "\n" <<endl;

    QString impr1 = QString::number(numero1.camposComaFlotante.signo);
    QString impr2 = QString::fromStdString(binario);
    QString impr3 = QString::fromStdString(binario1);

    ui->lineEdit_3->setText(impr1 + " | " + impr2 + " | " + impr3);

    //SEGUNDO NUMERO

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toDouble();

    union IEEE754 numero2;

    numero2.num = num2;

    cout<<"El signo del número 2: "<<numero2.camposComaFlotante.signo<<endl;
    cout<<"El exponente del número 2: "<<numero2.camposComaFlotante.exponente<<endl;
    cout<<"La mantisa del número 2 : "<<numero2.camposComaFlotante.mantisa<<endl;

    cout<< "La representacion en IEEE 754 de " << num2 << " es : \n";
    cout<< numero2.camposComaFlotante.signo << " | ";

    int resto3;
    string binario3 ="";

    while(numero2.camposComaFlotante.exponente >= 2){

        resto3 = (numero2.camposComaFlotante.exponente)%2;

        if(resto3 == 1){
            binario3 = "1" + binario3;
        }else{
            binario3 = "0" + binario3;
        }
        numero2.camposComaFlotante.exponente = (numero2.camposComaFlotante.exponente )/2;
    }

    if(numero2.camposComaFlotante.exponente  == 1){
        binario3 = "1" + binario3;
    }else{
        binario3 = "0" + binario3;
    }

    cout<< binario3;
    cout<< " | ";

    int resto4;
    string binario4 ="";

    while(numero2.camposComaFlotante.mantisa >= 2){

        resto4 = (numero2.camposComaFlotante.mantisa)%2;

        if(resto4 == 1){
            binario4 = "1" + binario4;
        }else{
            binario4 = "0" + binario4;
        }
        numero2.camposComaFlotante.mantisa = (numero2.camposComaFlotante.mantisa)/2;
    }

    if(numero2.camposComaFlotante.mantisa  == 1){
        binario4 = "1" + binario4;
    }else{
        binario4 = "0" + binario4;
    }

    cout<< binario4;
    cout<< "\n" <<endl;

    QString impr4 = QString::number(numero2.camposComaFlotante.signo);
    QString impr5 = QString::fromStdString(binario3);
    QString impr6 = QString::fromStdString(binario4);

    ui->lineEdit_4->setText(impr4 + " | " + impr5 + " | " + impr6);
}

void MainWindow::on_botonSuma_clicked()
{
    union IEEE754 numero1;
    numero1.num=num1;

    union IEEE754 numero2;
    numero2.num=num2;

    cout<<"El signo del número 1: "<<numero1.camposComaFlotante.signo<<endl;
    cout<<"El exponente del número 1: "<<numero1.camposComaFlotante.exponente<<endl;
    cout<<"La mantisa del número 1 : "<<numero1.camposComaFlotante.mantisa<<endl;

    cout<<"El signo del número 2: "<<numero2.camposComaFlotante.signo<<endl;
    cout<<"El exponente del número 2: "<<numero2.camposComaFlotante.exponente<<endl;
    cout<<"La mantisa del número 2 : "<<numero2.camposComaFlotante.mantisa<<endl;

    cout<<"Inicializamos el algoritmo de la suma: \n"<<endl;

    //PASO 1
    int P = 0, g = 0, r = 0, st = 0, n = 23;
    bool operandos_Intercambiados = false;
    bool complementado_P = false;

    //PASO 2
    if(numero1.camposComaFlotante.exponente < numero2.camposComaFlotante.exponente){
        IEEE754 aux;
        aux = numero1;
        numero1 = numero2;
        numero2 = aux;
        operandosIntercambiados = true;

       cout<<"Después del cambio, el signo del número 1 es: "<<numero1.camposComaFlotante.signo<<endl;
       cout<<"Después del cambio, el exponente del número 1 es: "<<numero1.camposComaFlotante.exponente<<endl;
       cout<<"Después del cambio, la mantisa del número 1 es: "<<numero1.camposComaFlotante.mantisa<<endl;
       cout<<"Después del cambio, el signo del número 2 es: "<<numero2.camposComaFlotante.signo<<endl;
       cout<<"Después del cambio, el exponente del número 2 es: "<<numero2.camposComaFlotante.exponente<<endl;
       cout<<"Después del cambio, la mantisa del número 2 es: "<<numero2.camposComaFlotante.mantisa<<endl;
    }

    //PASO 3
    int e, d;
    e = numero1.camposComaFlotante.exponente;
    d = numero1.camposComaFlotante.exponente - numero2.camposComaFlotante.exponente;
    //Siempre se verifica que d >= 0

    //PASO 4
    if(numero1.camposComaFlotante.signo != numero2.camposComaFlotante.signo){

        for(int i = binario4.size(); i >= 0; i--){
            if(binario4[i] = 1){
                do{
                    if((binario4[i-1]) = 1){
                        binario4[i-1] = 0;
                    }
                    if((binario4[i-1]) = 0){
                        binario4[i-1] = 1;
                    }
                }while(binario4[i] > 0);
            }
        }
        cout<<"La mantisa en complemento a 2 es: " << binario4<<endl;

    }

    //PASO 5
     P = numero2.camposComaFlotante.mantisa;

     //PASO 6
    int bitDeGuarda;
    int bitDeRedondeo;
    int bitSticky;

    //PASO 7
    if(numero1.camposComaFlotante.signo != numero2.camposComaFlotante.signo){
        //Desplazar P a la derecha d bits introduciendo 1 por la izquierda.
    }
    else{
        //Desplazar P a la derecha d bits introduciendo 0 por la izquierda.
    }

    //PASO 8
    P = numero1.camposComaFlotante.mantisa + P;
    int C1;
    //C1 = ACARREO;

    //PASO 9
    if((numero1.camposComaFlotante.signo != numero2.camposComaFlotante.signo) && (C1 = 0)){
        //P = COMPLEMENTO_2(P);
        complementado_P = true;
    }

    //PASO 10
    if((numero1.camposComaFlotante.signo != numero2.camposComaFlotante.signo) && (C1 = 1)){
        //st = OR(g,r,st);
        //r = P0;
        //Desplazar 1 bit a la derecha (c1,P);
        //Ajustatar el exponente de la suma : eS = eS +1;
    }else{
        //Calcular el valor entero, k, de bits que es necesario desplazar P para que sea una mantisa normalizada

        //if( k = 0){
        //  st = OR(r, st);
        //  r = g;
        //}

        //if( k >1){
        //  r = 0;
        //  st = 0;
        //}

        //Desplazar (P,g) a la izquierda k bits y ajustar el exponente de la suma: eS = eS - k;
    }

    //PASO 11
    //if((r == 1 && st == 1) || (r == 1 && st == 0 && P0 == 1)){
       // P = P+1;
       // C2 = ACARREO;
       // if(C2 = 1){
            // Desplazar 1 bit a la derecha (C2,P),
            // eS = eS +1;
    //}
    //mS = P;

    //PASO 12
    if(!operandos_Intercambiados && complementado_P){
       //sS = numero2.camposComaFlotante.signo;
    }else{
        //sS = numero1.camposComaFlotante.signo;
    }

    //PASO 13
    // suma = (sS)*mS*s^es


}

void MainWindow::on_botonResta_clicked()
{
    double resta = num1 - num2;

    ui->lineEdit_7->setText(QString::number(resta));

}

void MainWindow::on_botonProducto_clicked()
{
    double multiplicacion = num1 * num2;

    ui->lineEdit_7->setText(QString::number(multiplicacion));

    union IEEE754 numero1;
    numero1.num=num1;

    union IEEE754 numero2;
    numero2.num=num2;

    cout<<"El signo del número 1: "<<numero1.camposComaFlotante.signo<<endl;
    cout<<"El exponente del número 1: "<<numero1.camposComaFlotante.exponente<<endl;
    cout<<"La mantisa del número 1 : "<<numero1.camposComaFlotante.mantisa<<endl;

    cout<<"El signo del número 2: "<<numero2.camposComaFlotante.signo<<endl;
    cout<<"El exponente del número 2: "<<numero2.camposComaFlotante.exponente<<endl;
    cout<<"La mantisa del número 2 : "<<numero2.camposComaFlotante.mantisa<<endl;

    cout<<"Inicializamos el algoritmo de la multiplicación: \n"<<endl;

    //PASO 1
    int signo;
    signo = numero1.camposComaFlotante.signo * numero2.camposComaFlotante.signo;
    cout<<"El signo del producto es: " << signo<< endl;

    //PASO 2
    int exponente;
    exponente = numero1.camposComaFlotante.exponente + numero2.camposComaFlotante.exponente;
    cout<<"El exponente del producto es: " << exponente<< endl;

    //PASO 3
    int mantisa;
    int P = 0;
}

void MainWindow::on_botonDivision_clicked()
{
    union IEEE754 numero1;
    numero1.num=num1;

    union IEEE754 numero2;
    numero2.num=num2;

    cout<<"El signo del número 1: "<<numero1.camposComaFlotante.signo<<endl;
    cout<<"El exponente del número 1: "<<numero1.camposComaFlotante.exponente<<endl;
    cout<<"La mantisa del número 1 : "<<numero1.camposComaFlotante.mantisa<<endl;

    cout<<"El signo del número 2: "<<numero2.camposComaFlotante.signo<<endl;
    cout<<"El exponente del número 2: "<<numero2.camposComaFlotante.exponente<<endl;
    cout<<"La mantisa del número 2 : "<<numero2.camposComaFlotante.mantisa<<endl;

    cout<<"Inicializamos el algoritmo de la división: \n"<<endl;

    //PASO 1


}

void MainWindow::on_restablecer_clicked()
{
    cout<< "DIME LOS NUEVOS NÚMEROS..."<<endl;
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
}

void MainWindow::on_salir_clicked()
{
    cout<< "¡HASTA LA PRÓXIMA!"<<endl;
    this->close();
}
