#include "database.h"

Database::Database()
{
    attackers = txtToVector("../data/attackers/names.txt");
    defenders = txtToVector("../data/defenders/names.txt");

    aPrimaryWeapons   = txtToVector("../data/attackers/primaryWeapons.txt");
    aSecondaryWeapons = txtToVector("../data/attackers/secondaryWeapons.txt");
    dPrimaryWeapons   = txtToVector("../data/defenders/primaryWeapons.txt");
    dSecondaryWeapons = txtToVector("../data/defenders/secondaryWeapons.txt");
}

std::vector<std::string> Database::txtToVector(std::string filename){
    std::vector<std::string> allStrings;
    std::ifstream file(filename);
    std::string str;
    while(std::getline(file, str)){
    allStrings.push_back(str);
    }
    file.close();
    return allStrings;
}

void Database::randomize(){
    if(opRole == "attacker"){
        op.randomize(attackers, aPrimaryWeapons, aSecondaryWeapons);
    }
    else{
        op.randomize(defenders, dPrimaryWeapons, dSecondaryWeapons);
    }
}
