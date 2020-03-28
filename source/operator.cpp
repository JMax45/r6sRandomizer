#include "operator.h"
#include <iostream>

Operator::Operator()
{

}

void Operator::randomize(std::vector<std::string> names, std::vector<std::string> primaryWeapons,
                         std::vector<std::string> secondaryWeapons)
{
    srand (time(NULL));
    name            = names           [rand() % names.size() + 0];

    icon            = ("../data/icons/" + name + ".png");
    std::transform(icon.begin(), icon.end(), icon.begin(), [](unsigned char c){ return std::tolower(c); });

    primaryWeapon   = primaryWeapons  [rand() % primaryWeapons.size() + 0];
    secondaryWeapon = secondaryWeapons[rand() % secondaryWeapons.size() + 0];
}
