#ifndef OPERATOR_H
#define OPERATOR_H

#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>

class Operator
{
public:
    Operator();
    std::string name;
    std::string icon;
    std::string primaryWeapon;
    std::string secondaryWeapon;
    std::string role;
    void randomize(std::vector<std::string> names, std::vector<std::string> primaryWeapons,
                   std::vector<std::string> secondaryWeapons);
};

#endif // OPERATOR_H
