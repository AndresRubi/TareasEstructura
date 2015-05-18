#include "tarea.h"

Tarea::Tarea()
{

}

void Tarea::Insertar(int val)
{
    if(!conjunto)
    {
        conjunto=new Nodo(val);
        return;
    }
    Nodo *actual=incio;
    while(true)
    {
        if(actual->sig->valor > val || !actual->sig)
        {
            break;
        }
        if(actual->valor < val)
        {
            actual=actual->sig;
        }
        if(actual->valor == val)
        {
            return;
        }
    }
    Nodo *temp= actual->sig;
    actual->sig = new Nodo(val);
    actual->sig->sig=temp;
}

void Tarea::Union()
{
    while(nodA && nodB)
    {
        while(conjunto != NULL)
        {
            if(nodA != NULL)
            {
                conjunto=nodA;
                conjunto= conjunto->sig;
                nodA=nodA->sig;
            }
            if(nodA == NULL && !nodB)
            {
                conjunto=nodB;
                conjunto=conjunto->sig;
                nodB=nodB->sig;
            }
        }
    }
}

void Tarea::Diferencia()
{
    while(nodA && nodB)
    {
        if(nodA->valor == nodB->valor)
        {
            nodA=nodA->sig;
        }
        else
        {
            conjunto=nodA;
            conjunto=conjunto->sig;
        }
    }
}

void Tarea::Interseccion()
{
    while(nodA && nodB)
    {
        if(nodA->valor == nodB->valor)
        {
            conjunto=nodA;
            conjunto=conjunto->sig;
            nodA=nodA->sig;
            nodB=nodB->sig;
        }
        else if(nodA->valor > nodB->valor)
        {
            nodB=nodB->sig;
        }
        else
        {
            nodA=nodA->sig;
        }
    }
}
