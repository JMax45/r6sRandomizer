#include "operator.h"
#include <boost/algorithm/string.hpp>

Operator::Operator()
{

}

void Operator::randomize(std::string option){
    operators = txtVec.transform("data/"+option+"/names.txt");
    primaryWeapons = txtVec.transform("data/"+option+"/primaryWeapons.txt");
    secondaryWeapons = txtVec.transform("data/"+option+"/secondaryWeapons.txt");

    // Generates a random number between 0 and vector size
    srand (time(NULL));
    int randomOperator;
    randomOperator = rand() % operators.size() + 0;

    name = operators[randomOperator];

    // Splits string so later it can randomize one weapon
    splString.split(primaryWeapons[randomOperator],   "; ", "data/temp1.txt");
    splString.split(secondaryWeapons[randomOperator], "; ", "data/temp2.txt");

    // Creates two vectors with primary and secondary weapons
    std::vector<std::string> tmp1;
    std::vector<std::string> tmp2;
    tmp1 = txtVec.transform("data/temp1.txt");
    tmp2 = txtVec.transform("data/temp2.txt");

    // Randomizes one number for each vector
    srand (time(NULL));
    int randomPrimaryWeapon;
    int randomSecondaryWeapon;
    randomPrimaryWeapon = rand() % tmp1.size() + 0;
    randomSecondaryWeapon = rand() % tmp2.size() + 0;

    // Assigns the randomized weapon
    primaryWeapon = tmp1[randomPrimaryWeapon];
    secondaryWeapon = tmp2[randomSecondaryWeapon];

    icon = ("data/icons/"+name+".png");
    boost::to_lower(icon);

    primaryWeaponIcon = ("data/weapons/"+primaryWeapon+".png");
    secondaryWeaponIcon = ("data/weapons/"+secondaryWeapon+".png");
}
