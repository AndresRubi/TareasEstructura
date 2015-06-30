#ifndef NARIOS_H
#define NARIOS_H

#include <QWidget>
#include <QString>
#include <iostream>
#include <vector>

using namespace std;

class Nodo
{
public:
    int valor;
    vector<Nodo*> hijos;
    Nodo(int valor)
    {
        this->valor=valor;
    }

    void agregarHijo(Nodo* hijo)
    {
        hijos.push_back(hijo);
    }
};
namespace Ui {
class NArios;
}

class NArios : public QWidget
{
    Q_OBJECT

public:
    explicit NArios(QWidget *parent = 0);
    ~NArios();
    QString print;

private slots:
    void on_pushButtonAgregar_clicked();

    void on_pushButtonEliminar_clicked();

    void on_pushButtonBuscar_clicked();

    void on_pushButtonSumar_clicked();

    void on_pushButtonImprimir_clicked();

private:
    Ui::NArios *ui;
    Nodo *raiz;
    void imprimir(Nodo* raiz);
    int sumar(Nodo* &raiz);
    Nodo* buscar(Nodo* &raiz, int num);
    void Agregar(Nodo* &raiz, int num);
    void eliminar(Nodo*& raiz, int val);
};

#endif // NARIOS_H
