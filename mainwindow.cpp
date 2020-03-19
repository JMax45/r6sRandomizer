#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    manageLayout("hide");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setOperator(std::string role){
    manageLayout("show");
    Operator player;
    player.randomize(role);
    QString qstr = QString::fromStdString(player.icon);
    QPixmap pix(qstr);
    ui->label->setPixmap(pix);
    ui->label_2->setText(QString::fromStdString(player.name));

    ui->label_5->setText(QString::fromStdString(player.secondaryWeapon));
    ui->label_6->setText(QString::fromStdString(player.primaryWeapon));

    QString prmWeapIcon = QString::fromStdString(player.primaryWeaponIcon);
    QPixmap primaryWeaponIcon(prmWeapIcon);
    QString secWeapIcon = QString::fromStdString(player.secondaryWeaponIcon);
    QPixmap secondaryWeaponIcon(secWeapIcon);

    ui->label_7->setPixmap(primaryWeaponIcon);
    ui->label_8->setPixmap(secondaryWeaponIcon);
}

void MainWindow::manageLayout(std::string option){
    if(option == "show"){
        ui->label->show();
        ui->label_2->show();
        ui->label_3->show();
        ui->label_4->show();
        ui->label_5->show();
        ui->label_6->show();
        ui->label_7->show();
        ui->label_8->show();
    }
    if(option == "hide"){
        ui->label->hide();
        ui->label_2->hide();
        ui->label_3->hide();
        ui->label_4->hide();
        ui->label_5->hide();
        ui->label_6->hide();
        ui->label_7->hide();
        ui->label_8->hide();
    }
}

void MainWindow::on_pushButton_clicked()
{
    setOperator("attackers");
}

void MainWindow::on_pushButton_2_clicked()
{
    setOperator("defenders");
}
