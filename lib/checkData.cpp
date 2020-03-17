#include <iostream>
#include <fstream>
#include <vector>

std::vector<std::string> txtToVector(std::string filename){
    std::vector<std::string> allStrings;
    std::ifstream file(filename);
    std::string str;
    while(std::getline(file, str)){
	allStrings.push_back(str);
    }
    file.close();
    return allStrings;
}

bool checkExists(std::string filename){
    std::ifstream file(filename);
    return (bool)file;
}

int main(){
	std::vector<std::string> weapons;
	weapons = txtToVector("weapons.txt");

	std::ofstream file("missing.txt");

	for (int i=0; i<weapons.size(); i++){
		std::string str;
		str = ("weapons/"+weapons[i]+".png");

		if(checkExists(str)==true){
			std::cout << weapons[i] << " found.\n";
		}
		else{
			file << str << "\n";
			std::cout << weapons[i] << " not found.\n";
		}
	}

}