#include "mainwindow.h"
#include <QApplication>
#include <iostream>
#include <vector>
#include <fstream>
#include <boost/algorithm/string.hpp>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
