#include "colas.h"

Colas::Colas()
{

}

bool Colas::Sacar()
{
    if(!frente)
        {
            Nodo* temp = frente;
            frente = frente->anterior;
            delete temp;

            return true;
        }
        return false;
}

void Colas::Meter(Nodo* obj)
{
    if(!frente)
    {
        frente=obj;
        ultimo=obj;
        return;

    }
    ultimo->anterior=obj;
    ultimo=obj;
}

bool Colas::Vacia()
{
    return frente;
}

Nodo* Colas::getFrente()
{
    return frente;
}

void Colas::Anular()
{
    while(Sacar());
}
