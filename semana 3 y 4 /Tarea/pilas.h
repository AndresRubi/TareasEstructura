#ifndef PILAS_H
#define PILAS_H

class Nodo
{
public:
    int valor;
    Nodo* anterior;

    Nodo(int val)
    {
        valor = val;
    }
};

class Pilas
{
public:
    Pilas();


    Nodo* tope;
    bool Sacar();
    void Meter(Nodo* obj);
    bool Vacia();
    Nodo* getTope();
    void Anular();
};

#endif // PILAS_H
