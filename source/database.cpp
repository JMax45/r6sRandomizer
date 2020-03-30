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


template <typename T>
std::vector<std::string> remove_duplicates(std::vector<T>& vec)
{
  std::sort(vec.begin(), vec.end());
  vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
  return vec;
}

void Database::checkFirstLaunch(){
    bool value;
    value = text.checkExists("../data/conf/firstLaunch.txt");
    if(value==true){
        QFile("../data/conf/firstLaunch.txt").remove();
        std::vector<std::string> toDownload;
        std::vector<std::string> downloadIcons;

        // Concatenates attackers and defenders vectors
        downloadIcons.insert(downloadIcons.end(), attackers.begin(), attackers.end());
        downloadIcons.insert(downloadIcons.end(), defenders.begin(), defenders.end());

        // Download icons
        for(int i=0; i<downloadIcons.size(); i++){
            std::string op;
            op = downloadIcons[i];
            // Converts to lowercase
            std::transform(op.begin(), op.end(), op.begin(), [](unsigned char c){ return std::tolower(c); });
            toDownload.push_back("https://www.jz-software.com/app/r6s-randomizer/data/icons/"+op+".png");
        }

        // Download icons
        std::vector<std::string> vec;
        for(int i=0; i<aPrimaryWeapons.size(); i++){
            qDebug() << QString::fromStdString(aPrimaryWeapons[i]);
            text.split(aPrimaryWeapons[i], "; ", "../data/splitMult.txt");
            std::vector<std::string> vec2 = text.txtToVector("../data/splitMult.txt");
            vec.insert(vec.end(), vec2.begin(), vec2.end());
        }
        for(int i=0; i<dPrimaryWeapons.size(); i++){
            qDebug() << QString::fromStdString(aPrimaryWeapons[i]);
            text.split(dPrimaryWeapons[i], "; ", "../data/splitMult.txt");
            std::vector<std::string> vec2 = text.txtToVector("../data/splitMult.txt");
            vec.insert(vec.end(), vec2.begin(), vec2.end());
        }
        for(int i=0; i<aSecondaryWeapons.size(); i++){
            qDebug() << QString::fromStdString(aPrimaryWeapons[i]);
            text.split(aSecondaryWeapons[i], "; ", "../data/splitMult.txt");
            std::vector<std::string> vec2 = text.txtToVector("../data/splitMult.txt");
            vec.insert(vec.end(), vec2.begin(), vec2.end());
        }
        for(int i=0; i<dSecondaryWeapons.size(); i++){
            qDebug() << QString::fromStdString(aPrimaryWeapons[i]);
            text.split(dSecondaryWeapons[i], "; ", "../data/splitMult.txt");
            std::vector<std::string> vec2 = text.txtToVector("../data/splitMult.txt");
            vec.insert(vec.end(), vec2.begin(), vec2.end());
        }

        for(int i=0; i<vec.size(); i++){
            std::ofstream file("../data/splitMult.txt", std::ios::app);
            file << vec[i] << "\n";
            file.close();
        }
        vec = text.txtToVector("../data/splitMult.txt");
        vec = remove_duplicates(vec);

        // Download icons
        for(int i=0; i<vec.size(); i++){
            std::string op;
            op = vec[i];
            toDownload.push_back("https://www.jz-software.com/app/r6s-randomizer/data/weapons/"+op+".png");
        }

        downloader.getData(toDownload);

    }
    else{
        qDebug() << "First launch: false";
    }
}
