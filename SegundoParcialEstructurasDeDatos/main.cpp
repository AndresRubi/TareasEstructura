//#include "mainwindow.h"
#include "practicamonticulos.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PracticaMonticulos w;
    w.show();

    return a.exec();
}
