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
    void setOp();

    void on_actionCheck_Database_triggered();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
