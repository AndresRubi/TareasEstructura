#include "form.h"


Form::Form(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Form)
{
    ui->setupUi(this);
}

Form::~Form()
{
    delete ui;
}

void Form::on_pushButton_clicked()
{
    QString valor = ui->lineEdit->text();
    funcion.Insertar(valor.toInt());

}



void Form::on_pushButton_2_clicked()
{
    funcion.Interseccion();
}


void Form::on_pushButton_3_clicked()
{
    funcion.Union();
}

void Form::on_pushButton_4_clicked()
{
    funcion.Diferencia();
}
