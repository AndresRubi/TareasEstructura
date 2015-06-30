/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
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
#include <QtWidgets/QListWidget>
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
    QPushButton *pushAgregar;
    QPushButton *pushEliminar;
    QPushButton *pushSumar;
    QPushButton *pushImprimir;
    QPushButton *pushBuscar;
    QLineEdit *lineEditAgregarRaiz;
    QLineEdit *lineEditBuscar;
    QLineEdit *lineEditEliminar;
    QLineEdit *lineEditAgregarValor;
    QLabel *label;
    QLabel *label_2;
    QListWidget *listWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(648, 298);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushAgregar = new QPushButton(centralWidget);
        pushAgregar->setObjectName(QStringLiteral("pushAgregar"));
        pushAgregar->setGeometry(QRect(20, 30, 91, 27));
        pushEliminar = new QPushButton(centralWidget);
        pushEliminar->setObjectName(QStringLiteral("pushEliminar"));
        pushEliminar->setGeometry(QRect(20, 110, 91, 27));
        pushSumar = new QPushButton(centralWidget);
        pushSumar->setObjectName(QStringLiteral("pushSumar"));
        pushSumar->setGeometry(QRect(20, 150, 91, 27));
        pushImprimir = new QPushButton(centralWidget);
        pushImprimir->setObjectName(QStringLiteral("pushImprimir"));
        pushImprimir->setGeometry(QRect(20, 190, 91, 27));
        pushBuscar = new QPushButton(centralWidget);
        pushBuscar->setObjectName(QStringLiteral("pushBuscar"));
        pushBuscar->setGeometry(QRect(20, 70, 91, 27));
        lineEditAgregarRaiz = new QLineEdit(centralWidget);
        lineEditAgregarRaiz->setObjectName(QStringLiteral("lineEditAgregarRaiz"));
        lineEditAgregarRaiz->setGeometry(QRect(120, 30, 113, 27));
        lineEditBuscar = new QLineEdit(centralWidget);
        lineEditBuscar->setObjectName(QStringLiteral("lineEditBuscar"));
        lineEditBuscar->setGeometry(QRect(120, 70, 113, 27));
        lineEditEliminar = new QLineEdit(centralWidget);
        lineEditEliminar->setObjectName(QStringLiteral("lineEditEliminar"));
        lineEditEliminar->setGeometry(QRect(120, 110, 113, 27));
        lineEditAgregarValor = new QLineEdit(centralWidget);
        lineEditAgregarValor->setObjectName(QStringLiteral("lineEditAgregarValor"));
        lineEditAgregarValor->setGeometry(QRect(240, 30, 113, 27));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 59, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(280, 10, 59, 17));
        listWidget = new QListWidget(centralWidget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(360, 30, 256, 192));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 648, 27));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        pushAgregar->setText(QApplication::translate("MainWindow", "Agregar", 0));
        pushEliminar->setText(QApplication::translate("MainWindow", "Eliminar", 0));
        pushSumar->setText(QApplication::translate("MainWindow", "Sumar Arbol", 0));
        pushImprimir->setText(QApplication::translate("MainWindow", "Imprimir", 0));
        pushBuscar->setText(QApplication::translate("MainWindow", "Buscar", 0));
        label->setText(QApplication::translate("MainWindow", "Padre", 0));
        label_2->setText(QApplication::translate("MainWindow", "Hijo", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
