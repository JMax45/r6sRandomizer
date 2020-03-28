#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    database.opRole = "attacker";
    database.randomize();

    QString qstr = (QString::fromStdString(database.op.icon));
    QPixmap pix(qstr);
    ui->label_1->setPixmap(pix);

    ui->label_2->setText(QString::fromStdString(database.op.name));
    ui->label_3->setText(QString::fromStdString(database.op.primaryWeapon));
    ui->label_5->setText(QString::fromStdString(database.op.secondaryWeapon));
}

void MainWindow::on_pushButton_2_clicked()
{

}
