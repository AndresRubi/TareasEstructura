/********************************************************************************
** Form generated from reading UI file 'narios.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NARIOS_H
#define UI_NARIOS_H

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

class Ui_NArios
{
public:
    QPushButton *pushButtonAgregar;
    QPushButton *pushButtonEliminar;
    QPushButton *pushButtonBuscar;
    QPushButton *pushButtonSumar;
    QPushButton *pushButtonImprimir;
    QLineEdit *lineEditAgregarP;
    QLineEdit *lineEditEliminar;
    QLineEdit *lineEditBuscar;
    QLineEdit *lineEditAgregarH;
    QListWidget *listWidget;

    void setupUi(QWidget *NArios)
    {
        if (NArios->objectName().isEmpty())
            NArios->setObjectName(QStringLiteral("NArios"));
        NArios->resize(640, 284);
        pushButtonAgregar = new QPushButton(NArios);
        pushButtonAgregar->setObjectName(QStringLiteral("pushButtonAgregar"));
        pushButtonAgregar->setGeometry(QRect(20, 50, 85, 27));
        pushButtonEliminar = new QPushButton(NArios);
        pushButtonEliminar->setObjectName(QStringLiteral("pushButtonEliminar"));
        pushButtonEliminar->setGeometry(QRect(20, 90, 85, 27));
        pushButtonBuscar = new QPushButton(NArios);
        pushButtonBuscar->setObjectName(QStringLiteral("pushButtonBuscar"));
        pushButtonBuscar->setGeometry(QRect(20, 130, 85, 27));
        pushButtonSumar = new QPushButton(NArios);
        pushButtonSumar->setObjectName(QStringLiteral("pushButtonSumar"));
        pushButtonSumar->setGeometry(QRect(20, 170, 85, 27));
        pushButtonImprimir = new QPushButton(NArios);
        pushButtonImprimir->setObjectName(QStringLiteral("pushButtonImprimir"));
        pushButtonImprimir->setGeometry(QRect(20, 210, 85, 27));
        lineEditAgregarP = new QLineEdit(NArios);
        lineEditAgregarP->setObjectName(QStringLiteral("lineEditAgregarP"));
        lineEditAgregarP->setGeometry(QRect(110, 50, 113, 27));
        lineEditEliminar = new QLineEdit(NArios);
        lineEditEliminar->setObjectName(QStringLiteral("lineEditEliminar"));
        lineEditEliminar->setGeometry(QRect(110, 90, 113, 27));
        lineEditBuscar = new QLineEdit(NArios);
        lineEditBuscar->setObjectName(QStringLiteral("lineEditBuscar"));
        lineEditBuscar->setGeometry(QRect(110, 130, 113, 27));
        lineEditAgregarH = new QLineEdit(NArios);
        lineEditAgregarH->setObjectName(QStringLiteral("lineEditAgregarH"));
        lineEditAgregarH->setGeometry(QRect(230, 50, 113, 27));
        listWidget = new QListWidget(NArios);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(350, 50, 256, 192));

        retranslateUi(NArios);

        QMetaObject::connectSlotsByName(NArios);
    } // setupUi

    void retranslateUi(QWidget *NArios)
    {
        NArios->setWindowTitle(QApplication::translate("NArios", "Form", 0));
        pushButtonAgregar->setText(QApplication::translate("NArios", "Agregar", 0));
        pushButtonEliminar->setText(QApplication::translate("NArios", "Eliminar", 0));
        pushButtonBuscar->setText(QApplication::translate("NArios", "Buscar", 0));
        pushButtonSumar->setText(QApplication::translate("NArios", "Sumar", 0));
        pushButtonImprimir->setText(QApplication::translate("NArios", "Imprimir", 0));
    } // retranslateUi

};

namespace Ui {
    class NArios: public Ui_NArios {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NARIOS_H
