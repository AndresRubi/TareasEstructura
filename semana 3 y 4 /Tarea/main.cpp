#include <QCoreApplication>
#include "colas.h"

Colas *test;
int main(int argc, char *argv[])
{

    test->Vacia();
    test->Meter(new Nodo(10));
    test->Meter(new Nodo(20));
    test->Meter(new Nodo(30));
    test->Meter(new Nodo(40));
    test->Meter(new Nodo(50));
    test->Sacar();

    if(test->Vacia()==false)
    {
        return -1;
    }
    else
        return -2;

    test->getFrente();


    QCoreApplication a(argc, argv);

    return a.exec();
}
