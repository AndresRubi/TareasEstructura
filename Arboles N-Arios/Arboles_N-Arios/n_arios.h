#ifndef N_ARIOS_H
#define N_ARIOS_H


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

class N_Arios
{
public:
    N_Arios();
    Nodo *raiz;
    void imprimir(Nodo* raiz);
    int sumar(Nodo* raiz);
    Nodo* buscar(Nodo* raiz, int num);
    void Agregar(Nodo* raiz, int num);
    void eliminar(Nodo* raiz, int val);
};

#endif // N_ARIOS_H
