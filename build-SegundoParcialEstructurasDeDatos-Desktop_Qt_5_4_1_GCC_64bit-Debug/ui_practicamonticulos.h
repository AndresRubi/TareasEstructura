/********************************************************************************
** Form generated from reading UI file 'practicamonticulos.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRACTICAMONTICULOS_H
#define UI_PRACTICAMONTICULOS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PracticaMonticulos
{
public:
    QPushButton *pushNuevaTarea;
    QPushButton *pushCambiarTarea;
    QPushButton *pushCumplirPrimerTarea;
    QPushButton *pushImprimir;
    QDateTimeEdit *dateTimeEdit_CrearTarea;
    QLineEdit *lineEditCrear;
    QLineEdit *lineEditModificados;
    QDateTimeEdit *dateTimeEditModifcados;
    QPushButton *pushButtonTareaMod;
    QListWidget *listWidgetCrear;
    QListWidget *listWidgetModificador;
    QLabel *labelImprimir;
    QLabel *labelCumplir;

    void setupUi(QWidget *PracticaMonticulos)
    {
        if (PracticaMonticulos->objectName().isEmpty())
            PracticaMonticulos->setObjectName(QStringLiteral("PracticaMonticulos"));
        PracticaMonticulos->resize(734, 592);
        pushNuevaTarea = new QPushButton(PracticaMonticulos);
        pushNuevaTarea->setObjectName(QStringLiteral("pushNuevaTarea"));
        pushNuevaTarea->setGeometry(QRect(30, 70, 151, 27));
        pushCambiarTarea = new QPushButton(PracticaMonticulos);
        pushCambiarTarea->setObjectName(QStringLiteral("pushCambiarTarea"));
        pushCambiarTarea->setGeometry(QRect(30, 190, 151, 27));
        pushCumplirPrimerTarea = new QPushButton(PracticaMonticulos);
        pushCumplirPrimerTarea->setObjectName(QStringLiteral("pushCumplirPrimerTarea"));
        pushCumplirPrimerTarea->setGeometry(QRect(40, 350, 141, 27));
        pushImprimir = new QPushButton(PracticaMonticulos);
        pushImprimir->setObjectName(QStringLiteral("pushImprimir"));
        pushImprimir->setGeometry(QRect(40, 320, 141, 31));
        dateTimeEdit_CrearTarea = new QDateTimeEdit(PracticaMonticulos);
        dateTimeEdit_CrearTarea->setObjectName(QStringLiteral("dateTimeEdit_CrearTarea"));
        dateTimeEdit_CrearTarea->setGeometry(QRect(380, 70, 231, 27));
        lineEditCrear = new QLineEdit(PracticaMonticulos);
        lineEditCrear->setObjectName(QStringLiteral("lineEditCrear"));
        lineEditCrear->setGeometry(QRect(190, 70, 191, 27));
        lineEditModificados = new QLineEdit(PracticaMonticulos);
        lineEditModificados->setObjectName(QStringLiteral("lineEditModificados"));
        lineEditModificados->setGeometry(QRect(190, 190, 191, 27));
        lineEditModificados->setReadOnly(true);
        dateTimeEditModifcados = new QDateTimeEdit(PracticaMonticulos);
        dateTimeEditModifcados->setObjectName(QStringLiteral("dateTimeEditModifcados"));
        dateTimeEditModifcados->setGeometry(QRect(380, 190, 231, 27));
        pushButtonTareaMod = new QPushButton(PracticaMonticulos);
        pushButtonTareaMod->setObjectName(QStringLiteral("pushButtonTareaMod"));
        pushButtonTareaMod->setGeometry(QRect(30, 240, 151, 27));
        listWidgetCrear = new QListWidget(PracticaMonticulos);
        listWidgetCrear->setObjectName(QStringLiteral("listWidgetCrear"));
        listWidgetCrear->setGeometry(QRect(190, 100, 421, 81));
        listWidgetModificador = new QListWidget(PracticaMonticulos);
        listWidgetModificador->setObjectName(QStringLiteral("listWidgetModificador"));
        listWidgetModificador->setGeometry(QRect(190, 220, 421, 81));
        labelImprimir = new QLabel(PracticaMonticulos);
        labelImprimir->setObjectName(QStringLiteral("labelImprimir"));
        labelImprimir->setGeometry(QRect(190, 330, 141, 21));
        labelCumplir = new QLabel(PracticaMonticulos);
        labelCumplir->setObjectName(QStringLiteral("labelCumplir"));
        labelCumplir->setGeometry(QRect(190, 356, 171, 21));

        retranslateUi(PracticaMonticulos);

        QMetaObject::connectSlotsByName(PracticaMonticulos);
    } // setupUi

    void retranslateUi(QWidget *PracticaMonticulos)
    {
        PracticaMonticulos->setWindowTitle(QApplication::translate("PracticaMonticulos", "Form", 0));
        pushNuevaTarea->setText(QApplication::translate("PracticaMonticulos", "Crear Nueva Tarea", 0));
        pushCambiarTarea->setText(QApplication::translate("PracticaMonticulos", "Cambiar Primera Tarea", 0));
        pushCumplirPrimerTarea->setText(QApplication::translate("PracticaMonticulos", "Cumplir Primer Tarea", 0));
        pushImprimir->setText(QApplication::translate("PracticaMonticulos", "Imprimir Primer Tarea", 0));
        pushButtonTareaMod->setText(QApplication::translate("PracticaMonticulos", "Tarea A Modificar", 0));
        labelImprimir->setText(QApplication::translate("PracticaMonticulos", "TextLabel", 0));
        labelCumplir->setText(QApplication::translate("PracticaMonticulos", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class PracticaMonticulos: public Ui_PracticaMonticulos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRACTICAMONTICULOS_H
