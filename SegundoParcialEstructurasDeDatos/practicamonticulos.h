#ifndef PRACTICAMONTICULOS_H
#define PRACTICAMONTICULOS_H
#include <iostream>
#include <QDateTime>
using namespace std;
#include <QWidget>

class Tarea
{
public:
    qint64 time;
    Tarea *ant;
    QString notas;

    Tarea(qint64 time,QString notas)
    {
        this->time=time;
        this->notas=notas;
    }

};


namespace Ui {
class PracticaMonticulos;
}

class PracticaMonticulos : public QWidget
{
    Q_OBJECT

public:
    explicit PracticaMonticulos(QWidget *parent = 0);
    ~PracticaMonticulos();

    Tarea *primero,*ultimo;
    bool InsertMemo(QDateTime date, QString info);
    void ChangeMemo(QDateTime date);
    bool Delete();
    Tarea *FirstMemo() {return primero;}
    void SetSlots();
    void LoadSlots();

private slots:
    void on_pushNuevaTarea_clicked();

    void on_pushCambiarTarea_clicked();

    void on_pushCumplirPrimerTarea_clicked();

    void on_pushImprimir_clicked();

private:
    Ui::PracticaMonticulos *ui;
};

#endif // PRACTICAMONTICULOS_H
