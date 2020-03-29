#include <iostream>
#include <vector>
#include <fstream>
#include "operator.h"
#include "text.h"
#include <QDebug>

#ifndef DATABASE_H
#define DATABASE_H

class Database
{
private:
    Text text;
    std::vector<std::string> attackers;
    std::vector<std::string> defenders;

    std::vector<std::string> aPrimaryWeapons;
    std::vector<std::string> aSecondaryWeapons;
    std::vector<std::string> dPrimaryWeapons;
    std::vector<std::string> dSecondaryWeapons;

    bool firstLaunch;
public:
    Database();
    Operator op;
    std::string opRole;
    void randomize();
    void download(std::vector<std::string> toDownload);
    void checkFirstLaunch();
};

#endif // DATABASE_H
