#include "operator.h"
#include <iostream>

Operator::Operator()
{

}

void Operator::randomize(std::vector<std::string> names, std::vector<std::string> primaryWeapons,
                         std::vector<std::string> secondaryWeapons)
{
    srand (time(NULL));
    int randomNum = rand() % names.size() + 0;

    name = names[randomNum];

    icon            = ("../data/icons/" + name + ".png");
    std::transform(icon.begin(), icon.end(), icon.begin(), [](unsigned char c){ return std::tolower(c); });

    text.split(primaryWeapons[randomNum], "; ", "../data/weap.txt");
    primaryWeapons = text.txtToVector("../data/weap.txt");
    text.split(secondaryWeapons[randomNum], "; ", "../data/weap.txt");
    secondaryWeapons = text.txtToVector("../data/weap.txt");

    primaryWeapon   = primaryWeapons  [rand() % primaryWeapons.size() + 0];
    secondaryWeapon = secondaryWeapons[rand() % secondaryWeapons.size() + 0];

    QFile("../data/weap.txt").remove();
}
