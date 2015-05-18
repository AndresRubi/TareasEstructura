#ifndef TAREA_H
#define TAREA_H
#include <iostream>
using namespace std;

class Nodo
{
public:
    int valor;
    Nodo *sig;
    Nodo(int valor)
    {
        this->valor=valor;
        sig=Null;
    }
};

class Tarea
{
public:
    Tarea();
    Nodo *nodA;
    Nodo *nodB;
    Nodo *conjunto;

    void Insertar(int val);
    void Union();
    void Diferencia();
    void Interseccion();
};

#endif // TAREA_H
