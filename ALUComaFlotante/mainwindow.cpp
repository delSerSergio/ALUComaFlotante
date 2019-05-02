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

    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 =  real1.toFloat();

    int parteEnteraNum1;
    double parteDecimalNum1;

    //Dividimos la parte entera de la decimal del primer numero
    parteEnteraNum1 = (int)num1;
    parteDecimalNum1 = num1 - parteEnteraNum1;

    cout<<"La parte entera del primer número es: "<<parteEnteraNum1<<endl;
    cout<<"La parte decimal del primer número es: "<<parteDecimalNum1<<endl;

    int resto;
    QString binario ="";

    //Calculamos el binario de la parte entera
    while(parteEnteraNum1 >= 2){
        //Calculamos el resto
        resto = parteEnteraNum1%2;

        if(resto == 1){//Si el resto es igual a 1 añadimos 1 a la variable binario
            binario = "1" + binario;
        }else{ // Si el resto es igual a 0 añadimos 0 a la variable binario
            binario = "0" + binario;
        }
        //Actualizamos el valor del entero
        parteEnteraNum1 = parteEnteraNum1/2;
    }

    if(parteEnteraNum1 == 1){ //Si la parte entera resultante es igual a 1
        binario = "1" + binario;
    }else{ // Sino:
        binario = "0" + binario;
    }

    int restoDecimal;
    QString binarioDecimal ="";

    //Calculamos el binario de la parte decimal
    do{
        restoDecimal = (int)parteDecimalNum1*2;

        if(restoDecimal == 1){
            binarioDecimal = "1" + binarioDecimal;
        }else{
            binarioDecimal = "0" + binarioDecimal;
        }
        //Actualizamos el valor del decimal
        parteDecimalNum1 = parteDecimalNum1*2;
    }while(parteDecimalNum1 != 0);

    if((int)parteDecimalNum1 == 1){ //Si la parte entera resultante es igual a 1
        binarioDecimal = "1" + binarioDecimal;
    }else{ // Sino:
        binarioDecimal = "0" + binarioDecimal;
    }

    ui->lineEdit_3->setText(binario + "." + binarioDecimal);

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toFloat();

    int parteEnteraNum2;
    double parteDecimalNum2;

    //Dividimos la parte entera de la decimal del primer numero
    parteEnteraNum2 = (int)num2;
    parteDecimalNum2 = num2 - parteEnteraNum2;

    cout<<"La parte entera del segundo número es: "<<parteEnteraNum2<<endl;
    cout<<"La parte decimal del segundo número es: "<<parteDecimalNum2<<endl;

    int resto2;
    QString binario2 ="";

    while(parteEnteraNum2 >= 2){
        //Calculamos el resto
        resto2 = parteEnteraNum2%2;

        if(resto2 == 1){//Si el resto es igual a 1 añadimos 1 a la variable binario
            binario2 = "1" + binario2;
        }else{ // Si el resto es igual a 0 añadimos 0 a la variable binario
            binario2 = "0" + binario2;
        }
        //Actualizamos el valor del entero
        parteEnteraNum2 = parteEnteraNum2/2;
    }

    if(parteEnteraNum2 == 1){ //Si la parte entera resultante es igual a 1
        binario2 = "1" + binario2;
    }else{ // Sino:
        binario2 = "0" + binario2;
    }
    ui->lineEdit_4->setText(binario2);

}

void MainWindow::on_botonSuma_clicked()
{

}

void MainWindow::on_botonResta_clicked()
{

}

void MainWindow::on_botonProducto_clicked()
{

}

void MainWindow::on_botonDivision_clicked()
{

}
