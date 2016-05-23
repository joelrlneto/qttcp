/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *txtIP;
    QPushButton *btnConectar;
    QLineEdit *txtPorta;
    QLabel *label_2;
    QLabel *label_3;
    QSlider *sliderFaixa;
    QLabel *label_4;
    QLineEdit *txtInicio;
    QLabel *label_5;
    QLineEdit *txtFim;
    QPushButton *btnConectar_2;
    QTextEdit *txtLog;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(508, 403);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 65, 17));
        txtIP = new QLineEdit(centralWidget);
        txtIP->setObjectName(QStringLiteral("txtIP"));
        txtIP->setGeometry(QRect(10, 30, 113, 27));
        btnConectar = new QPushButton(centralWidget);
        btnConectar->setObjectName(QStringLiteral("btnConectar"));
        btnConectar->setGeometry(QRect(10, 120, 111, 27));
        txtPorta = new QLineEdit(centralWidget);
        txtPorta->setObjectName(QStringLiteral("txtPorta"));
        txtPorta->setGeometry(QRect(10, 80, 113, 27));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 60, 65, 17));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 160, 65, 17));
        sliderFaixa = new QSlider(centralWidget);
        sliderFaixa->setObjectName(QStringLiteral("sliderFaixa"));
        sliderFaixa->setGeometry(QRect(10, 180, 111, 29));
        sliderFaixa->setMaximum(10);
        sliderFaixa->setOrientation(Qt::Horizontal);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(10, 220, 121, 17));
        txtInicio = new QLineEdit(centralWidget);
        txtInicio->setObjectName(QStringLiteral("txtInicio"));
        txtInicio->setGeometry(QRect(10, 240, 113, 27));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 270, 65, 17));
        txtFim = new QLineEdit(centralWidget);
        txtFim->setObjectName(QStringLiteral("txtFim"));
        txtFim->setGeometry(QRect(10, 290, 113, 27));
        btnConectar_2 = new QPushButton(centralWidget);
        btnConectar_2->setObjectName(QStringLiteral("btnConectar_2"));
        btnConectar_2->setGeometry(QRect(10, 320, 111, 27));
        txtLog = new QTextEdit(centralWidget);
        txtLog->setObjectName(QStringLiteral("txtLog"));
        txtLog->setGeometry(QRect(150, 30, 341, 321));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 508, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        label->setText(QApplication::translate("MainWindow", "IP", 0));
        btnConectar->setText(QApplication::translate("MainWindow", "Conectar", 0));
        label_2->setText(QApplication::translate("MainWindow", "Porta", 0));
        label_3->setText(QApplication::translate("MainWindow", "Intervalo", 0));
        label_4->setText(QApplication::translate("MainWindow", "Faixa de valores", 0));
        label_5->setText(QApplication::translate("MainWindow", "a", 0));
        btnConectar_2->setText(QApplication::translate("MainWindow", "Start", 0));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
