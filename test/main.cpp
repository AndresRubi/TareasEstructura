#include <iostream>

using namespace std;

class Carta
{
public:
    int valor;
    Carta *siguiente;
    Carta(int valor)
    {
        this->valor=valor;
        siguiente=NULL;
    }


};

class Tarea
{

///1eliminar,1buscar,1getPos,getfinal,1agregar,1insertar,eliminarDuplicado

public:
    Carta* inicio,*Final;

    Tarea()
    {
        inicio=NULL;
    }

    bool insertar(Carta*nuevo,int pos)
    {
        if(pos == 0)
        {
            nuevo->siguiente = inicio;
            inicio = nuevo;
        }else
        {
            Carta* temp = inicio;
            for(int i =0;i<pos-1;i++)
            {
                temp = temp->siguiente;
                if(temp==NULL)
                {
                    cout<<"Posicion invalida"<<endl;
                    return false;
                }
            }
            nuevo->siguiente = temp->siguiente;
            temp->siguiente = nuevo;
        }

        return true;
    }

    void agregar(Carta*nuevo)
    {
        if(inicio==NULL)
        {
            inicio = nuevo;
        }else
        {
            Carta*temp = inicio;
            while(temp->siguiente!=NULL)
            {
                temp = temp->siguiente;
            }
            temp->siguiente = nuevo;
        }
    }

    Carta* getFinal()
    {
        if(inicio==NULL)
        {
            return Final=inicio;
        }else
        {
            Carta*temp = inicio;
            while(temp->siguiente==NULL)
            {
                return Final=temp;
            }
            temp = temp->siguiente;
        }
        return NULL;
    }

    Carta* ExisteValorCarta(int num)
    {
        Carta*temp = inicio;
        while(temp != NULL)
        {
            if(num == temp->valor)
                return temp;
            temp = temp->siguiente;
        }
        return NULL;
    }


    Carta* GetPosCarta(int pos)
    {
        if(pos==0)
        {
            return inicio;
        }else
        {
            Carta* temp = inicio;
            for(int i=0;i<pos-1;i++)
            {
//                cout<<"elnum"<<temp->valor<<endl;
                temp = temp->siguiente;
            }
            cout<<"elnum"<<temp->valor<<endl;
            return temp;
        }
    }

    void EliminarCartaDuplicada()
    {
        Carta* temp=inicio;
        int valor=temp->valor;

        while(temp != NULL)
        {
            while(temp != NULL){
                if(valor == temp->valor)
                {

                    Carta *temp2 = temp->siguiente;
                    temp->siguiente = temp->siguiente->siguiente;
                    delete temp2;
                }
                else
                {
                    temp=temp->siguiente;
                }

            }

            temp=temp->siguiente;
            valor=temp->valor;

        }
    }

    void EliminarCarta(int pos)
    {
        if(pos==0)
        {
            Carta*temp2 = inicio;
            inicio = inicio->siguiente;
            delete temp2;
        }else
        {
            Carta* temp = inicio;
            for(int i=0;i<pos-1;i++)
            {
                temp = temp->siguiente;
            }
            Carta* temp2 = temp->siguiente;
            temp->siguiente = temp->siguiente->siguiente;
            delete temp2;
        }
    }


    void imprimir()
    {
        for(Carta*temp=inicio;temp!=NULL;temp=temp->siguiente)
        {
            cout<<temp->valor<<endl;
        }
    }

};



//void imprimir(Carta *raiz)
//{
//    if(!raiz)
//    {
//        cout<<raiz->valor<<endl;
//        for(int i=0; i < raiz->hijos.size(); i++)
//        {
//            imprimir(raiz->hijos[i]);
//        }
//    }
//}
//
//Carta* buscar(Carta* raiz, int num)
//{
//    if(raiz!=NULL)
//    {
//        if(raiz->valor == num)
//        {
//            return raiz;
//        }
//
//        for(int i=0;i<raiz->hijos.size();i++)
//        {
//            Carta* temp = buscar(raiz->hijos[i],num);
//            if(temp->valor == num)
//            {
//                return temp;
//            }
//        }
//
//    }
//    return NULL;
//}

int main()
{
    Tarea funcion;
    funcion.agregar(new Carta(10));
    funcion.agregar(new Carta(20));
    funcion.agregar(new Carta(30));
    funcion.agregar(new Carta(40));
    funcion.agregar(new Carta(50));
    funcion.agregar(new Carta(10));
    funcion.imprimir();

    cout << "Hello world!" << endl;
    cout << "Hello world!" << endl;
    cout << "Hello world!" << endl;
    cout << "Hello world!" << endl;
    funcion.insertar(new Carta(10),3);
    funcion.EliminarCarta(2);
    funcion.imprimir();
    cout << "posicion por numero #2 " << funcion.GetPosCarta(3) << endl;
    funcion.ExisteValorCarta(10);
    funcion.imprimir();
    return 0;
}
