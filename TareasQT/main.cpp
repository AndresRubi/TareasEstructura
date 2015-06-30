#include "mainwindow.h"
#include <QApplication>
#include "cartas.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    Cartas w;
    w.show();

    return a.exec();
}
