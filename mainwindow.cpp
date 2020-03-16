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
    Operator player;
    player.randomize("attackers");
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

void MainWindow::on_pushButton_2_clicked()
{
    Operator player;
    player.randomize("defenders");
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
