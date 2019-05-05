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

    IEEE745 numero2;

    numero2.num = num1;

    cout<< "La representacion en IEEE 754 de " << num1 << " es : \n";
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

    QString impr1 = QString::number(numero2.camposComaFlotante.signo);
    QString impr2 = QString::fromStdString(binario3);
    QString impr3 = QString::fromStdString(binario4);

    ui->lineEdit_3->setText(impr1 + " | " + impr2 + " | " + impr3);

    //SEGUNDO NUMERO

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toDouble();

    IEEE745 numero1;

    numero1.num = num2;

    cout<< "La representacion en IEEE 754 de " << num2 << " es : \n";
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

    QString impr4 = QString::number(numero1.camposComaFlotante.signo);
    QString impr5 = QString::fromStdString(binario);
    QString impr6 = QString::fromStdString(binario2);

    ui->lineEdit_4->setText(impr4 + " | " + impr5 + " | " + impr6);

}

void MainWindow::on_botonSuma_clicked()
{
    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 = real1.toDouble();

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toDouble();

    double suma = num1 + num2;

    ui->lineEdit_7->setText(QString::number(suma));

}

void MainWindow::on_botonResta_clicked()
{
    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 = real1.toDouble();

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toDouble();

    double resta = num1 - num2;

    ui->lineEdit_7->setText(QString::number(resta));

}

void MainWindow::on_botonProducto_clicked()
{
    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 = real1.toDouble();

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toDouble();

    double multiplicacion = num1 * num2;

    ui->lineEdit_7->setText(QString::number(multiplicacion));

}

void MainWindow::on_botonDivision_clicked()
{
    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 = real1.toDouble();

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toDouble();

    double division = num1 / num2;

    ui->lineEdit_7->setText(QString::number(division));

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
