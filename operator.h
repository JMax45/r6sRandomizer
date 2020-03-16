#ifndef OPERATOR_H
#define OPERATOR_H
#include "splitstring.h"
#include <vector>
#include "txttovector.h"

class Operator
{
public:
    std::string name;
    std::string primaryWeapon;
    std::string secondaryWeapon;
    std::string icon;
    std::string primaryWeaponIcon;
    std::string secondaryWeaponIcon;

    txtToVector txtVec;

    std::vector<std::string> operators;
    std::vector<std::string> primaryWeapons;
    std::vector<std::string> secondaryWeapons;

    SplitString splString;

    void randomize(std::string option);
    Operator();
};

#endif // OPERATOR_H
