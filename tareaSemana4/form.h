#ifndef FORM_H
#define FORM_H
#include "tarea.h"
#include <QtWidgets>
#include <iostream>

using namespace std;
namespace Ui {
class Form;
}

class Form : public QWidget
{
    Q_OBJECT

public:
    explicit Form(QWidget *parent = 0);
    ~Form();
    Tarea funcion;

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::Form *ui;
};

#endif // FORM_H
