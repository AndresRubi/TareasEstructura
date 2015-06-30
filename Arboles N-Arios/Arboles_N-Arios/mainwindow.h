#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_pushAgregar_clicked();

    void on_pushBuscar_clicked();

    void on_pushEliminar_clicked();

    void on_pushSumar_clicked();

    void on_pushImprimir_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
