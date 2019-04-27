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

private slots:

    void on_botonSuma_clicked();

    void on_botonResta_clicked();

    void on_botonProducto_clicked();

    void on_botonDivision_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
