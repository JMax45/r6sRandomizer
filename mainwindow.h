#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "operator.h"
#include <algorithm>

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
    std::vector<std::string> txtToVector(std::string filename);
    bool checkExists(std::string filename);
    void checkDatabase();

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void setOperator(std::string role);
    void manageLayout(std::string option);

    void on_actionCheck_database_triggered();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
