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

void Database::download(std::vector<std::string> toDownload){

}

void Database::checkFirstLaunch(){
    bool value;
    value = text.checkExists("../data/conf/firstLaunch.txt");
    if(value==true){
        std::vector<std::string> toDownload;

        // Attackers icons
        for(int i=0; i<attackers.size(); i++){
            std::string op;
            op = attackers[i];
            std::transform(op.begin(), op.end(), op.begin(), [](unsigned char c){ return std::tolower(c); });
            toDownload.push_back("https://www.jz-software.com/app/r6s-randomizer/data/icons/"+op+".png");
        }
        // Defenders icons
        for(int i=0; i<defenders.size(); i++){
            std::string op;
            op = defenders[i];
            std::transform(op.begin(), op.end(), op.begin(), [](unsigned char c){ return std::tolower(c); });
            toDownload.push_back("https://www.jz-software.com/app/r6s-randomizer/data/icons/"+op+".png");
        }

        download(toDownload);
        for(int i=0; i<toDownload.size(); i++){
            qDebug() << QString::fromStdString(toDownload[i]);
        }
    }
    else{
        qDebug() << "First launch: false";
    }
}
