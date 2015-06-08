#include "practicamonticulos.h"
#include "ui_practicamonticulos.h"

PracticaMonticulos::PracticaMonticulos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PracticaMonticulos)
{
  //  QDateTime *ol;
    ui->setupUi(this);
    //ui->dateTimeEdit_CrearTarea->setMinimumDateTime();
    SetSlots();
    primero=NULL;
}

PracticaMonticulos::~PracticaMonticulos()
{
    delete ui;
}


bool PracticaMonticulos::InsertMemo(QDateTime date, QString info)
{
    QDateTime today = QDateTime::currentDateTime();
    today.addDays(-2000);
    if(date<=today) return false;
    else
    {
        Tarea *memo= new Tarea(date.toMSecsSinceEpoch(),info);
        if(!primero)
        {
            primero =memo;
            return true;
        }
        else if(primero->time > memo->time)
        {
            memo->ant=primero;
            primero=memo;
            return true;
        }
        Tarea* temp = primero;
        while(temp->ant && temp->ant->time >= memo->time)
            temp = temp->ant;

        memo->ant= temp->ant;
        temp->ant = memo;
        return true;

    }
    return false;
}

void PracticaMonticulos::ChangeMemo(QDateTime date)
{
    Tarea *modifyMemo=FirstMemo();
    QDateTime time=QDateTime::fromMSecsSinceEpoch(modifyMemo->time);
    if(date < time) return;

    QString info= FirstMemo()->notas;
    Delete();
    InsertMemo(date,info);
}

bool PracticaMonticulos::Delete()
{
    Tarea *del;
    if(primero)
    {
        del=primero;
        primero=primero->ant;
        delete del;
        return true;
    }
    return false;
}

void PracticaMonticulos::SetSlots()
{
    ui->dateTimeEdit_CrearTarea->setMinimumDateTime(QDateTime::currentDateTime());
    ui->dateTimeEditModifcados->setMinimumDateTime(QDateTime::currentDateTime());
    ui->lineEditCrear->clear();
    ui->lineEditModificados->clear();
}

void PracticaMonticulos::LoadSlots()
{
    QDateTime time=QDateTime::fromMSecsSinceEpoch(FirstMemo()->time);
    QString sA = time.toString();
    ui->listWidgetCrear->addItem(FirstMemo()->notas + sA);
    ui->lineEditModificados->setText(FirstMemo()->notas);
    ui->labelCumplir->setText(FirstMemo()->notas);


}
////////////////////////////////////////////////////////
void PracticaMonticulos::on_pushNuevaTarea_clicked()
{
    InsertMemo(ui->dateTimeEdit_CrearTarea->dateTime(),ui->lineEditCrear->text());
    LoadSlots();


}

void PracticaMonticulos::on_pushCambiarTarea_clicked()
{
    QDateTime time=QDateTime::fromMSecsSinceEpoch(FirstMemo()->time);
    QString sA = time.toString();
    ui->listWidgetModificador->addItem(FirstMemo()->notas+sA);
    ui->labelCumplir->setText(FirstMemo()->notas+sA);

    ChangeMemo(ui->dateTimeEditModifcados->dateTime());




}

void PracticaMonticulos::on_pushCumplirPrimerTarea_clicked()
{
    QDateTime time=QDateTime::fromMSecsSinceEpoch(FirstMemo()->time);
    QString sA = time.toString();
    ui->labelCumplir->setText(FirstMemo()->notas+sA);
    if(!FirstMemo())
        return;
    Delete();


}

void PracticaMonticulos::on_pushImprimir_clicked()
{
    QDateTime time=QDateTime::fromMSecsSinceEpoch(FirstMemo()->time);
    QString sA = time.toString();
    ui->labelImprimir->setText(FirstMemo()->notas + sA);

}
