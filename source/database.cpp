#include "database.h"

Database::Database()
{
    // Reads all files with informations and converts them to vector
    operators = text.txtToVector("../data/names.txt");
    roles =     text.txtToVector("../data/roles.txt");

    primaryWeapons    = text.txtToVector("../data/primaryWeapons.txt");
    secondaryWeapons  = text.txtToVector("../data/secondaryWeapons.txt");

    for(int i=0; i<operators.size(); i++){
        if(roles[i]=="attacker"){
            attackers.push_back(operators[i]);
            aPrimaryWeapons.push_back(primaryWeapons[i]);
            aSecondaryWeapons.push_back(secondaryWeapons[i]);
        }
        if(roles[i]=="defender"){
            defenders.push_back(operators[i]);
            dPrimaryWeapons.push_back(primaryWeapons[i]);
            dSecondaryWeapons.push_back(secondaryWeapons[i]);
        }
    }

    splitWeapons();
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
    downloader.getData(toDownload);
}


template <typename T>
std::vector<std::string> remove_duplicates(std::vector<T>& vec)
{
  std::sort(vec.begin(), vec.end());
  vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
  return vec;
}

void Database::splitWeapons(){
    // Download icons
    std::vector<std::string> vec;
    std::vector<std::string> allVector[] = {aPrimaryWeapons, dPrimaryWeapons, aSecondaryWeapons, dSecondaryWeapons};

    for(int i=0; i<4; i++){
        std::vector<std::string> weaponsVector;
        weaponsVector = allVector[i];
        for(int i=0; i<weaponsVector.size(); i++){
            qDebug() << QString::fromStdString(weaponsVector[i]);
            text.split(weaponsVector[i], "; ", "../data/splitMult.txt");
            std::vector<std::string> vec2 = text.txtToVector("../data/splitMult.txt");
            vec.insert(vec.end(), vec2.begin(), vec2.end());
        }
    }

    for(int i=0; i<vec.size(); i++){
        std::ofstream file("../data/splitMult.txt", std::ios::app);
        file << vec[i] << "\n";
        file.close();
    }
    vec = text.txtToVector("../data/splitMult.txt");
    vec = remove_duplicates(vec);
    allWeapons = vec;
    QFile("../data/splitMult.txt").remove();
}

void Database::check(){
    int operatorsQuantity;
    std::vector<std::string> allOperators;

    allOperators.insert(allOperators.end(), attackers.begin(), attackers.end());
    allOperators.insert(allOperators.end(), defenders.begin(), defenders.end());

    operatorsQuantity = allOperators.size();

    std::vector<std::string> toDownload;
    for(int i=0; i<operatorsQuantity; i++){
        bool exists = text.checkExists("../data/icons/"+text.tolower(allOperators[i])+".png");
        if(exists == true){
            qDebug() << "File exists";
        }
        else{
            std::string filePath = "https://www.jz-software.com/app/r6s-randomizer/data/icons/"+allOperators[i]+".png";
            toDownload.push_back(text.tolower(filePath));
        }
    }
    for(int i=0; i<allWeapons.size(); i++){
        bool exists = text.checkExists("../data/weapons/"+allWeapons[i]+".png");
        if(exists == true){
            qDebug() << "File exists";
        }
        else{
            std::string filePath = "https://www.jz-software.com/app/r6s-randomizer/data/weapons/"+allWeapons[i]+".png";
            toDownload.push_back(filePath);
        }
    }

    download(toDownload);

}
