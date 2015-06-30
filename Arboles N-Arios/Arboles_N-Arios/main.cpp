#include "narios.h"
#include "mainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NArios w;
    w.show();

    return a.exec();
}
