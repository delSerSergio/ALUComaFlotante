#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <string.h>
#include <stdio.h>
#include <alu.h>
#include <bitset>

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_transformarNumeros_clicked();
    string pasoBinario(float num);
    void on_botonSuma_clicked();
    void on_botonResta_clicked();
    void on_botonProducto_clicked();
    void on_botonDivision_clicked();
    void on_restablecer_clicked();
    void on_salir_clicked();

private:
    Ui::MainWindow *ui;

    string op;

    float num1, num2, resultado;
    QString real1,real2;

};

#endif // MAINWINDOW_H
