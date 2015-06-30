#include "n_arios.h"

N_Arios::N_Arios()
{
    raiz=NULL;
}

void N_Arios::imprimir(Nodo* raiz)
{

    if(raiz!=NULL)
    {
        print=raiz->valor;
        cout<<raiz->valor<<endl;
        for(int i=0;i<raiz->hijos.size();i++)
        {
            imprimir(raiz->hijos[i]);
        }
    }
}

int N_Arios::sumar(Nodo* raiz)
{
    if(raiz!=NULL)
        {
            int suma = raiz->valor;

            for(int i=0;i<raiz->hijos.size();i++)
            {
                suma+=sumar(raiz->hijos[i]);
            }

            return suma;
        }
        return 0;
}

Nodo* N_Arios::buscar(Nodo* raiz, int num)
{
    if(raiz!=NULL)
        {
            if(raiz->valor == num)
            {
                return raiz;
            }

            for(int i=0;i<raiz->hijos.size();i++)
            {
                Nodo* temp = buscar(raiz->hijos[i],num);
                if(temp->valor == num)
                {
                    return temp;
                }
            }

        }
        return NULL;
}

void N_Arios::Agregar(Nodo *raiz,int num)
{
    if(raiz==NULL) raiz=new Nodo(num);
    else raiz->hijos.push_back(new Nodo(num));
}

void N_Arios::eliminar(Nodo* raiz, int num)
{
    if(!raiz)return;
        if(raiz->valor == num)
        {
            if(raiz->hijos.size() > 0)
            {
                raiz->valor = raiz->hijos[0]->valor;
                raiz->hijos.erase(raiz->hijos.begin());
                return;
            }
            delete raiz;
            raiz = NULL;
            return;
        }

        for(vector<Nodo*>::iterator x = raiz->hijos.begin(); x != raiz->hijos.end(); x++)
        {
            eliminar((*x), num);
        }
}
