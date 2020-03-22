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

template <typename T>
std::vector<std::string> remove_duplicates(std::vector<T>& vec)
{
  std::sort(vec.begin(), vec.end());
  vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
  return vec;
}

void MainWindow::checkDatabase(){
    std::vector<std::string> weapons;

    // Array of all weapons files to use in the for loop
    std::string weaponsList[] = {"data/attackers/primaryWeapons.txt", "data/attackers/secondaryWeapons.txt",
                                 "data/defenders/primaryWeapons.txt", "data/defenders/secondaryWeapons.txt"};
    // Gets weaponsList size
    int weaponsListSize = sizeof(weaponsList)/sizeof(weaponsList[0]);

    // Splits all weapons in weapons.txt
    for(int i=0; i<weaponsListSize; i++){
        weapons = txtToVector(weaponsList[i]);
        splitMultiple(weapons);
    }

    weapons = txtToVector("data/weapons.txt");
    weapons = remove_duplicates(weapons);

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

    // Finds how many files were found by doing [allFiles - missingFiles]
    int num = weapons.size() - missingFiles;
    QString message2 = QString::fromStdString(std::to_string(num) + " found.");
    ui->label_12->setText(message2);

    // These files are no longer needed as we showed them in the program
    remove("data/weapons.txt");
    remove("data/missing.txt");

    // Checks if the database is complete or not
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
