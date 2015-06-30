/********************************************************************************
** Form generated from reading UI file 'cartas.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CARTAS_H
#define UI_CARTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Cartas
{
public:
    QPushButton *pushButtonAgregar;
    QPushButton *pushButtonImprimir;
    QPushButton *pushButtonInsertar;
    QPushButton *pushButtonEliminar;
    QLineEdit *lineEditadd;
    QLineEdit *lineEditinsert;
    QLineEdit *lineEditdelete;
    QListWidget *listWidget;

    void setupUi(QWidget *Cartas)
    {
        if (Cartas->objectName().isEmpty())
            Cartas->setObjectName(QStringLiteral("Cartas"));
        Cartas->resize(640, 306);
        pushButtonAgregar = new QPushButton(Cartas);
        pushButtonAgregar->setObjectName(QStringLiteral("pushButtonAgregar"));
        pushButtonAgregar->setGeometry(QRect(10, 60, 85, 27));
        pushButtonImprimir = new QPushButton(Cartas);
        pushButtonImprimir->setObjectName(QStringLiteral("pushButtonImprimir"));
        pushButtonImprimir->setGeometry(QRect(10, 90, 85, 27));
        pushButtonInsertar = new QPushButton(Cartas);
        pushButtonInsertar->setObjectName(QStringLiteral("pushButtonInsertar"));
        pushButtonInsertar->setGeometry(QRect(10, 120, 85, 27));
        pushButtonEliminar = new QPushButton(Cartas);
        pushButtonEliminar->setObjectName(QStringLiteral("pushButtonEliminar"));
        pushButtonEliminar->setGeometry(QRect(10, 150, 85, 27));
        lineEditadd = new QLineEdit(Cartas);
        lineEditadd->setObjectName(QStringLiteral("lineEditadd"));
        lineEditadd->setGeometry(QRect(100, 60, 113, 27));
        lineEditinsert = new QLineEdit(Cartas);
        lineEditinsert->setObjectName(QStringLiteral("lineEditinsert"));
        lineEditinsert->setGeometry(QRect(100, 120, 113, 27));
        lineEditdelete = new QLineEdit(Cartas);
        lineEditdelete->setObjectName(QStringLiteral("lineEditdelete"));
        lineEditdelete->setGeometry(QRect(100, 150, 113, 27));
        listWidget = new QListWidget(Cartas);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(220, 40, 311, 211));

        retranslateUi(Cartas);

        QMetaObject::connectSlotsByName(Cartas);
    } // setupUi

    void retranslateUi(QWidget *Cartas)
    {
        Cartas->setWindowTitle(QApplication::translate("Cartas", "Form", 0));
        pushButtonAgregar->setText(QApplication::translate("Cartas", "Agregar", 0));
        pushButtonImprimir->setText(QApplication::translate("Cartas", "Imprimir", 0));
        pushButtonInsertar->setText(QApplication::translate("Cartas", "Insertar", 0));
        pushButtonEliminar->setText(QApplication::translate("Cartas", "Eliminar", 0));
    } // retranslateUi

};

namespace Ui {
    class Cartas: public Ui_Cartas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CARTAS_H
