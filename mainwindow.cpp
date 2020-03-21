#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    manageLayout("hide");
    ui->stackedWidget->setCurrentIndex((0));
}

MainWindow::~MainWindow()
{
    delete ui;
}

std::vector<std::string> MainWindow::txtToVector(std::string filename){
    std::vector<std::string> allStrings;
    std::ifstream file(filename);
    std::string str;
    while(std::getline(file, str)){
    allStrings.push_back(str);
    }
    file.close();
    return allStrings;
}

bool MainWindow::checkExists(std::string filename){
    std::ifstream file(filename);
    return (bool)file;
}

void splitMultiple(std::vector<std::string> weapons){
    for(int i=0; i<weapons.size(); i++){
        SplitString spl;
        spl.splitMultiple(weapons[i], "; ", "data/weapons.txt");
    }
}

void MainWindow::checkDatabase(){
    std::vector<std::string> weapons;

    weapons = txtToVector("data/attackers/primaryWeapons.txt");
    splitMultiple(weapons);
    weapons = txtToVector("data/attackers/secondaryWeapons.txt");
    splitMultiple(weapons);
    weapons = txtToVector("data/defenders/primaryWeapons.txt");
    splitMultiple(weapons);
    weapons = txtToVector("data/defenders/secondaryWeapons.txt");
    splitMultiple(weapons);

    weapons = txtToVector("data/weapons.txt");
    std::ofstream file("data/missing.txt");

    int missingFiles = 0;

    for (int i=0; i<weapons.size(); i++){
        std::string str;
        str = ("data/weapons/"+weapons[i]+".png");

        if(checkExists(str)==true){
            QString message = QString::fromStdString(weapons[i] + " found.");
            std::cout << weapons[i] << " found.\n";
            ui->plainTextEdit->appendPlainText(message);

        }
        else{
            file << str << "\n";
            QString message = QString::fromStdString(weapons[i] + " not found.");
            std::cout << weapons[i] << " not found.\n";
            ui->plainTextEdit->appendPlainText(message);
            missingFiles = missingFiles+1;

        }
    }
    QString message = QString::fromStdString(std::to_string(missingFiles) + " missing.");
    ui->label_13->setText(message);

    int num = weapons.size() - missingFiles;
    QString message2 = QString::fromStdString(std::to_string(num) + " found.");
    ui->label_12->setText(message2);
    remove("data/weapons.txt");
    remove("data/missing.txt");

    if(missingFiles==0){
        QMessageBox::about(this, "Database Analysis", "The database is complete");
    }
    else{
        QMessageBox::warning(this, "Database Analysis", "Missing files in the database");
    }

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

void MainWindow::on_actionCheck_database_triggered()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_pushButton_3_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_pushButton_4_clicked()
{
    ui->label_10->setText("running");
    ui->pushButton_4->setDisabled(false);
    checkDatabase();
    ui->label_10->setText("finished");
}
