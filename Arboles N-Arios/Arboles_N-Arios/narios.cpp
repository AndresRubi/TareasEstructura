#include "narios.h"
#include "ui_narios.h"

NArios::NArios(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::NArios)
{
    ui->setupUi(this);
    raiz=NULL;
}

NArios::~NArios()
{
    delete ui;
}


void NArios::imprimir(Nodo* raiz)
{

    if(raiz!=NULL)
    {

        QString val=QString::number(raiz->valor);
        ui->listWidget->addItem(val);
        cout<<raiz->valor<<endl;
        for(int i=0;i<raiz->hijos.size();i++)
        {
            imprimir(raiz->hijos[i]);
        }
    }
}

int NArios::sumar(Nodo* &raiz)
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

Nodo* NArios::buscar(Nodo*  &raiz, int num)
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

void NArios::Agregar(Nodo *&raiz,int num)
{
    if(raiz==NULL)
            raiz=new Nodo(num);
    else
        raiz->agregarHijo(new Nodo(num));
    cout<<raiz->valor<<endl;
}

void NArios::eliminar(Nodo* &raiz, int num)
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

void NArios::on_pushButtonAgregar_clicked()
{
    QString Padre=ui->lineEditAgregarP->text();
    QString Hijo=ui->lineEditAgregarH->text();
    QString men=" Es El Padre De -> ";


    ui->listWidget->addItem(Padre+men+Hijo);
    int num=Padre.toInt();
    int num2=Hijo.toInt();
    Nodo *papa=buscar(raiz,num);
    if(raiz==NULL)
        Agregar(raiz,num);
    else
        Agregar(papa,num2);
}

void NArios::on_pushButtonEliminar_clicked()
{
     QString Eliminador = ui->lineEditEliminar->text();
     eliminar(raiz,Eliminador.toInt());
}



void NArios::on_pushButtonBuscar_clicked()
{
    QString Buscador=ui->lineEditBuscar->text();
    QString si=" Si Existe";
    QString no = " No Existe";
    int find=Buscador.toInt();
    if(buscar(raiz,find)== NULL)
        ui->listWidget->addItem(Buscador + no);
    else
        ui->listWidget->addItem(Buscador + si);
}

void NArios::on_pushButtonSumar_clicked()
{

    QString s= QString::number(sumar(raiz));
    QString men="La Suma Total Del Arbol N-Ario Es: ";
    ui->listWidget->addItem(men+s);
}

void NArios::on_pushButtonImprimir_clicked()
{
    imprimir(raiz)    ;

}
