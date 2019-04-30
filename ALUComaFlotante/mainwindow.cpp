#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QLineEdit>
#include <iostream>

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

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toFloat();
}

void MainWindow::on_botonResta_clicked()
{
    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 =  real1.toFloat();

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toFloat();
}

void MainWindow::on_botonProducto_clicked()
{
    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 =  real1.toFloat();

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toFloat();
}

void MainWindow::on_botonDivision_clicked()
{
    //Leemos el primer numero
    real1 = ui->lineEdit->text();
    num1 =  real1.toFloat();

    //Leemos el segundo numero
    real2 = ui->lineEdit_2->text();
    num2 = real2.toFloat();

}
