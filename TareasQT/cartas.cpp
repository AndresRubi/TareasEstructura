#include "cartas.h"
#include "ui_cartas.h"

Cartas::Cartas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cartas)
{
    ui->setupUi(this);
    inicio=NULL;
}

Cartas::~Cartas()
{
    delete ui;
}

bool Cartas::insertar(Carta*nuevo,int pos)
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

    void Cartas::agregar(Carta*nuevo)
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

    Carta* Cartas::getFinal()
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

    Carta* Cartas::ExisteValorCarta(int num)
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


    Carta* Cartas::GetPosCarta(int pos)
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

    void Cartas::EliminarCartaDuplicada()
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

    void Cartas::EliminarCarta(int pos)
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


    void Cartas::imprimir()
    {
        for(Carta*temp=inicio;temp!=NULL;temp=temp->siguiente)
        {
            cout<<temp->valor<<endl;
            QString print=QString::number(temp->valor);
            ui->listWidget->addItem(print);
        }
    }

void Cartas::on_pushButtonAgregar_clicked()
{
    QString valor=ui->lineEditadd->text();
    agregar(new Carta(valor.toInt()));
}

void Cartas::on_pushButtonImprimir_clicked()
{
    imprimir();
}

void Cartas::on_pushButtonInsertar_clicked()
{
    QString pos=ui->lineEditinsert->text();
    insertar(new Carta(5),pos.toInt());
}

void Cartas::on_pushButtonEliminar_clicked()
{
    QString pos=ui->lineEditdelete->text();
    EliminarCarta(pos.toInt());
}


