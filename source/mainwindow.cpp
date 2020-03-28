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

    setOp();
}

void MainWindow::on_pushButton_2_clicked()
{
    database.opRole = "defender";
    database.randomize();

    setOp();
}

void MainWindow::setOp(){
    ui->label_1->setPixmap(QPixmap(QString::fromStdString(database.op.icon)));

    ui->label_2->setText(QString::fromStdString(database.op.name));
    ui->label_3->setText(QString::fromStdString(database.op.primaryWeapon));
    ui->label_5->setText(QString::fromStdString(database.op.secondaryWeapon));

    ui->label_4->setPixmap(QPixmap(QString::fromStdString("../data/weapons/"+database.op.primaryWeapon+".png")));
    ui->label_6->setPixmap(QPixmap(QString::fromStdString("../data/weapons/"+database.op.secondaryWeapon+".png")));
}
