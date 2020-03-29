#include "operator.h"
#include <iostream>

Operator::Operator()
{

}

void Operator::randomize(std::vector<std::string> names, std::vector<std::string> primaryWeapons,
                         std::vector<std::string> secondaryWeapons)
{
    srand (time(NULL));

    // Generates a random number in the range of 0 and the size of the vector...
    int randomNum = rand() % names.size() + 0;

    // ...this number is used to choose an operator in the vector
    name = names[randomNum];

    // Creates a string with the operator icon
    icon            = ("../data/icons/" + name + ".png");
    // Converts string to lowercase because filenames are lowercase
    std::transform(icon.begin(), icon.end(), icon.begin(), [](unsigned char c){ return std::tolower(c); });

    // Splits the weapons in lines
    text.split(primaryWeapons[randomNum], "; ", "../data/weap.txt");
    primaryWeapons = text.txtToVector("../data/weap.txt");
    text.split(secondaryWeapons[randomNum], "; ", "../data/weap.txt");
    secondaryWeapons = text.txtToVector("../data/weap.txt");

    // Chooses a random line with a weapon
    primaryWeapon   = primaryWeapons  [rand() % primaryWeapons.size() + 0];
    secondaryWeapon = secondaryWeapons[rand() % secondaryWeapons.size() + 0];

    // Deletes the file because it is no longer needed
    QFile("../data/weap.txt").remove();
}
