#ifndef N_ARIOS_H
#define N_ARIOS_H

#include <QString>
#include <iostream>
#include <vector>

using namespace std;

class asd
{
public:
    int valor;
    vector<asd*> hijos;
    asd(int valor)
    {
        this->valor=valor;
    }

    void agregarHijo(asd* hijo)
    {
        hijos.push_back(hijo);
    }
};

class N_Arios
{
public:
    N_Arios();

    QString print;
    asd *raiz;
    void imprimir(Nodo* raiz);
    int sumar(Nodo* raiz);
    Nodo* buscar(Nodo* raiz, int num);
    void Agregar(Nodo* raiz, int num);
    void eliminar(Nodo* raiz, int val);
};

#endif // N_ARIOS_H
