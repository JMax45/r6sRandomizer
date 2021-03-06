#include <QDebug>

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "database.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    Database database;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    // It shows all the randomized information in the graphics
    void setOp();

    // Goes to the check database page
    void on_actionCheck_Database_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
