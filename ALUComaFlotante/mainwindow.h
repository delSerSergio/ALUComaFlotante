#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    typedef union {

        float num;
        struct
        {
            unsigned int mantisa : 23;
            unsigned int exponente : 8;
            unsigned int signo : 1;

        } camposComaFlotante;
    } IEEE745;

private slots:

    void on_transformarNumeros_clicked();

    void on_botonSuma_clicked();

    void on_botonResta_clicked();

    void on_botonProducto_clicked();

    void on_botonDivision_clicked();

    void on_restablecer_clicked();

    void on_salir_clicked();

private:
    Ui::MainWindow *ui;
    double num1, num2, resultado;
    QString real1,real2;

};

#endif // MAINWINDOW_H
