#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLineEdit>
#include <iostream>
#include <stdio.h>

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

    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 = real1.toDouble();

    IEEE754 numero1;

    numero1.num = num1;

    cout<< "La representacion en IEEE 754 de " << num1 << " es : \n";
    cout<< numero1.camposComaFlotante.signo << " | ";

    int resto1;
    string binario1 ="";

    while(numero1.camposComaFlotante.exponente >= 2){

        resto1 = (numero1.camposComaFlotante.exponente)%2;

        if(resto1 == 1){
            binario1 = "1" + binario1;
        }else{
            binario1 = "0" + binario1;
        }
        numero1.camposComaFlotante.exponente = (numero1.camposComaFlotante.exponente )/2;
    }

    if(numero1.camposComaFlotante.exponente  == 1){
        binario1 = "1" + binario1;
    }else{
        binario1 = "0" + binario1;
    }

    cout<< binario1;
    cout<< " | ";

    int resto2;
    string binario2 ="";

    while(numero1.camposComaFlotante.mantisa >= 2){

        resto2 = (numero1.camposComaFlotante.mantisa)%2;

        if(resto2 == 1){
            binario2 = "1" + binario2;
        }else{
            binario2 = "0" + binario2;
        }
        numero1.camposComaFlotante.mantisa = (numero1.camposComaFlotante.mantisa)/2;
    }

    if(numero1.camposComaFlotante.mantisa  == 1){
        binario2 = "1" + binario2;
    }else{
        binario2 = "0" + binario2;
    }

    cout<< binario2;
    cout<< "\n" <<endl;

    QString impr1 = QString::number(numero1.camposComaFlotante.signo);
    QString impr2 = QString::fromStdString(binario1);
    QString impr3 = QString::fromStdString(binario2);

    ui->lineEdit_3->setText(impr1 + " | " + impr2 + " | " + impr3);

    //SEGUNDO NUMERO

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toDouble();

    IEEE754 numero2;

    numero2.num = num2;

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
    cout<<"Inicializamos el algoritmo de la suma: \n"<<endl;

    double suma = num1 + num2;

    ui->lineEdit_7->setText(QString::number(suma));

    int P, g, r, st, n;
    bool operandosIntercambiados=false;
    bool complementadoP=false;

    if(numero1.camposComaFlotante.exponente<numero2.camposComaFlotante.exponente)
    {
        IEEE754 aux;
        aux=numero1;
        numero1=numero2;
        numero2=aux;
        operandosIntercambiados=true;
    }

    //Asignamos
    //e=numero1.camposComaFlotante.exponente;
    //d=numero1.camposComaFlotante.exponente-numero2.camposComaFlotante.exponente);

    if(numero1.camposComaFlotante.signo != numero2.camposComaFlotante.signo)
    {
        //m=complemento2
    }

     //P=m;

    int bitDeGuarda;
    int bitDeRedondeo;
    int bitSticky;

    if(numero1.camposComaFlotante.signo != numero2.camposComaFlotante.signo)
    {
        //Desplazar P a la derecha d bits introduciendo 1 por la izquierda.
    }
    else
    {
        //Desplazar P a la derecha d bits introduciendo 0 por la izquierda.
    }

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

}

void MainWindow::on_botonDivision_clicked()
{

}

void MainWindow::on_restablecer_clicked()
{
    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
}

void MainWindow::on_salir_clicked()
{
    this->close();
}
