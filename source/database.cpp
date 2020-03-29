#include "database.h"

Database::Database()
{
    // Reads all files with informations and converts them to vector
    attackers = text.txtToVector("../data/attackers/names.txt");
    defenders = text.txtToVector("../data/defenders/names.txt");

    aPrimaryWeapons   = text.txtToVector("../data/attackers/primaryWeapons.txt");
    aSecondaryWeapons = text.txtToVector("../data/attackers/secondaryWeapons.txt");
    dPrimaryWeapons   = text.txtToVector("../data/defenders/primaryWeapons.txt");
    dSecondaryWeapons = text.txtToVector("../data/defenders/secondaryWeapons.txt");
}

void Database::randomize(){
    if(opRole == "attacker"){
        op.randomize(attackers, aPrimaryWeapons, aSecondaryWeapons);
    }
    else{
        op.randomize(defenders, dPrimaryWeapons, dSecondaryWeapons);
    }
}
