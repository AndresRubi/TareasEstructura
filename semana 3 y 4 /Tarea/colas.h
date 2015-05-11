#ifndef COLAS_H
#define COLAS_H

class Nodo
{
public:
    int valor;
    Nodo *anterior;

    Nodo(int val)
    {
        valor=val;
    }
};

class Colas
{
public:
    Colas();


    Nodo* frente;
    Nodo* ultimo;
    bool Sacar();
    void Meter(Nodo* n);
    bool Vacia();
    Nodo* getFrente();
    void Anular();
};

#endif // COLAS_H
