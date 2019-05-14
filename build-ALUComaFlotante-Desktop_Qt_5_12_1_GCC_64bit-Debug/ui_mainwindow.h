/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLabel *label_5;
    QPushButton *botonSuma;
    QPushButton *botonResta;
    QPushButton *botonProducto;
    QPushButton *botonDivision;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QPushButton *transformarNumeros;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *lineEdit_7;
    QPushButton *restablecer;
    QPushButton *salir;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(807, 706);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(190, 50, 191, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(440, 50, 211, 17));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(190, 80, 181, 25));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(440, 80, 181, 25));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(100, 220, 261, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(430, 220, 281, 17));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 280, 301, 25));
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(430, 280, 301, 25));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(340, 320, 211, 41));
        botonSuma = new QPushButton(centralWidget);
        botonSuma->setObjectName(QString::fromUtf8("botonSuma"));
        botonSuma->setGeometry(QRect(150, 370, 91, 51));
        botonResta = new QPushButton(centralWidget);
        botonResta->setObjectName(QString::fromUtf8("botonResta"));
        botonResta->setGeometry(QRect(270, 370, 91, 51));
        botonProducto = new QPushButton(centralWidget);
        botonProducto->setObjectName(QString::fromUtf8("botonProducto"));
        botonProducto->setGeometry(QRect(390, 370, 141, 51));
        botonDivision = new QPushButton(centralWidget);
        botonDivision->setObjectName(QString::fromUtf8("botonDivision"));
        botonDivision->setGeometry(QRect(560, 370, 101, 51));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(120, 450, 191, 17));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(410, 450, 221, 17));
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(390, 480, 341, 25));
        transformarNumeros = new QPushButton(centralWidget);
        transformarNumeros->setObjectName(QString::fromUtf8("transformarNumeros"));
        transformarNumeros->setGeometry(QRect(280, 130, 221, 61));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(100, 250, 231, 17));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(430, 250, 231, 17));
        lineEdit_7 = new QLineEdit(centralWidget);
        lineEdit_7->setObjectName(QString::fromUtf8("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(120, 480, 181, 25));
        restablecer = new QPushButton(centralWidget);
        restablecer->setObjectName(QString::fromUtf8("restablecer"));
        restablecer->setGeometry(QRect(510, 560, 111, 41));
        salir = new QPushButton(centralWidget);
        salir->setObjectName(QString::fromUtf8("salir"));
        salir->setGeometry(QRect(640, 560, 89, 41));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 807, 22));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "PRIMER N\303\232MERO:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "SEGUNDO N\303\232MERO:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "PRIMER N\303\232MERO TRANSFORMADO:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "SEGUNDO N\303\232MERO TRANSFORMADO:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "OPERACIONES POSIBLES", nullptr));
        botonSuma->setText(QApplication::translate("MainWindow", "SUMA", nullptr));
        botonResta->setText(QApplication::translate("MainWindow", "RESTA", nullptr));
        botonProducto->setText(QApplication::translate("MainWindow", "MULTIPLICACI\303\223N", nullptr));
        botonDivision->setText(QApplication::translate("MainWindow", "DIVISI\303\223N", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "RESULTADO EN DECIMAL:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "RESULTADO TRANSFORMADO:", nullptr));
        transformarNumeros->setText(QApplication::translate("MainWindow", "TRANSFORMAR N\303\232MEROS", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "SIGNO | EXPONENTE | MANTISA", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "SIGNO | EXPONENTE | MANTISA", nullptr));
        restablecer->setText(QApplication::translate("MainWindow", "RESTABLECER", nullptr));
        salir->setText(QApplication::translate("MainWindow", "SALIR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
