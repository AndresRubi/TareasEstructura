#ifndef CARTAS_H
#define CARTAS_H

#include <QWidget>

#include <iostream>

using namespace std;

class Carta
{
public:
    int valor;
    Carta *siguiente;
    Carta(int valor)
    {
        this->valor=valor;
        siguiente=NULL;
    }


};

namespace Ui {
class Cartas;
}

class Cartas : public QWidget
{
    Q_OBJECT

public:
    explicit Cartas(QWidget *parent = 0);
    ~Cartas();
    Carta* inicio,*Final;
    bool insertar(Carta*nuevo,int pos);
    void agregar(Carta*nuevo);
    Carta* getFinal();
    Carta* ExisteValorCarta(int num);
    Carta* GetPosCarta(int pos);
    void EliminarCartaDuplicada();
    void EliminarCarta(int pos);
    void imprimir();

private slots:
    void on_pushButtonAgregar_clicked();

    void on_pushButtonImprimir_clicked();

    void on_pushButtonInsertar_clicked();

    void on_pushButtonEliminar_clicked();

private:
    Ui::Cartas *ui;
};

#endif // CARTAS_H
