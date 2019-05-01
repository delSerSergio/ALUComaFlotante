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


void MainWindow::on_botonSuma_clicked()
{
    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 =  real1.toFloat();

    int parteEntera;
    double parteDecimal;

    parteEntera=(int)num1;
    parteDecimal=num1-parteEntera;

    cout<<"La parte entera es: "<<parteEntera<<endl;
    cout<<"La parte decimal es: "<<parteDecimal<<endl;

    int numAux=1;

    if(parteEntera>1)
    {
        do
        {
            numAux=numAux*2;
        }while(parteEntera>numAux);

        numAux=numAux/2;

        parteEntera=parteEntera-numAux;

        cout<<"El número menor que la parte entera es: "<<numAux<<endl;

         parteEntera=parteEntera-numAux;
    }


    /*
    //PRIMER PASO: Calculamos el bit de signo
    if(num1 > 0){ //El numero es positivo
        signo = 0;
    }else{ // El numero es negativo
        signo = 1;
    }
    //SEGUNDO PASO: Normalizamos la mantisa. (se haya dividiendo por dos el entero y quedándote con el resto
    //y multiplicando por 2 la parte fraccionaria y quedándote con los resultados enteros)
    */
    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toFloat();

    /*
    //Calculamos el bit de signo
    if(num2 > 0){
        signo = 0;
    }else{
        signo = 1;
    }
    */
}

void MainWindow::on_botonResta_clicked()
{
    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 =  real1.toFloat();

     /*
    //Calculamos el bit de signo
    if(num1 > 0){ 
        signo = 0;
    }else{ 
        signo = 1;
    }
    */
    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toFloat();

     /*
    //Calculamos el bit de signo
    if(num2 > 0){
        signo = 0;
    }else{
        signo = 1;
    }
    */
}

void MainWindow::on_botonProducto_clicked()
{
    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 =  real1.toFloat();

    /*
    //Calculamos el bit de signo
    if(num1 > 0){ 
        signo = 0;
    }else{ 
        signo = 1;
    }
    */

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toFloat();

     /*
    //Calculamos el bit de signo
    if(num2 > 0){ 
        signo = 0;
    }else{ 
        signo = 1;
    }
    */
}

void MainWindow::on_botonDivision_clicked()
{
    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 =  real1.toFloat();

    /*
    //Calculamos el bit de signo
    if(num1 > 0){ 
        signo = 0;
    }else{ 
        signo = 1;
    }
    */

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toFloat();

    /*
    //Calculamos el bit de signo
    if(num2 > 0){
        signo = 0;
    }else{
        signo = 1;
    }
    */
}
