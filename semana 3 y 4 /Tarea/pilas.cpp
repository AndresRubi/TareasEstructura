#include "pilas.h"

Pilas::Pilas()
{

}

Nodo* Pilas::getTope()
{
    return tope;
}

bool Pilas::Vacia()
{
    if(tope)
    {
        return false;
    }
    else
        return true;
}

void Pilas::Anular()
{
    while(Sacar());
}

bool Pilas::Sacar()
{
    if(tope)
        {
            Nodo* t = tope;
            tope = tope->anterior;
            delete t;
            return true;
        }
        return false;
}

void Pilas::Meter(Nodo* obj)
{
    if(tope)
        obj->anterior = tope;
    tope=obj;
}
