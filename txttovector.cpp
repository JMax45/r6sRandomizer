#include "txttovector.h"

txtToVector::txtToVector()
{

}

std::vector<std::string> txtToVector::transform(std::string filename){
    std::vector<std::string> allStrings;
    std::ifstream file(filename);
    std::string str;
    while(std::getline(file, str)){
    allStrings.push_back(str);
    }
    file.close();
    return allStrings;
}
