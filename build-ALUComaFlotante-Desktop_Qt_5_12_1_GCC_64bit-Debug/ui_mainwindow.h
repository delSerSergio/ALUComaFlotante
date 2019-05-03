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
    QLineEdit *lineEdit_5;
    QLabel *label_7;
    QLineEdit *lineEdit_6;
    QPushButton *transformarNumeros;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(531, 513);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 30, 191, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(290, 30, 211, 17));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(40, 60, 181, 25));
        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(290, 60, 181, 25));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 150, 161, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(280, 150, 161, 17));
        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(30, 180, 181, 25));
        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(280, 180, 181, 25));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(210, 240, 91, 17));
        botonSuma = new QPushButton(centralWidget);
        botonSuma->setObjectName(QString::fromUtf8("botonSuma"));
        botonSuma->setGeometry(QRect(40, 270, 89, 25));
        botonResta = new QPushButton(centralWidget);
        botonResta->setObjectName(QString::fromUtf8("botonResta"));
        botonResta->setGeometry(QRect(160, 270, 89, 25));
        botonProducto = new QPushButton(centralWidget);
        botonProducto->setObjectName(QString::fromUtf8("botonProducto"));
        botonProducto->setGeometry(QRect(280, 270, 89, 25));
        botonDivision = new QPushButton(centralWidget);
        botonDivision->setObjectName(QString::fromUtf8("botonDivision"));
        botonDivision->setGeometry(QRect(400, 270, 89, 25));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(210, 310, 81, 17));
        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QString::fromUtf8("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(170, 330, 181, 25));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(170, 360, 181, 17));
        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QString::fromUtf8("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(170, 390, 181, 25));
        transformarNumeros = new QPushButton(centralWidget);
        transformarNumeros->setObjectName(QString::fromUtf8("transformarNumeros"));
        transformarNumeros->setGeometry(QRect(140, 110, 221, 25));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 531, 22));
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
        label->setText(QApplication::translate("MainWindow", "Primer n\303\272mero:", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Segundo n\303\272mero:", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "N\303\272mero transformado:", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "N\303\272mero transformado:", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Operaciones:", nullptr));
        botonSuma->setText(QApplication::translate("MainWindow", "Suma", nullptr));
        botonResta->setText(QApplication::translate("MainWindow", "Resta", nullptr));
        botonProducto->setText(QApplication::translate("MainWindow", "Producto", nullptr));
        botonDivision->setText(QApplication::translate("MainWindow", "Divisi\303\263n", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "Resultado:", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "Resultado transformado:", nullptr));
        transformarNumeros->setText(QApplication::translate("MainWindow", "TRANSFORMAR N\303\232MEROS", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
