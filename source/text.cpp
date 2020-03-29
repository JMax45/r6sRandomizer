#include "text.h"

Text::Text()
{

}

void Text::split(std::string s, std::string delimiter, std::string filename){
    auto start = 0U;
    auto end = s.find(delimiter);
    std::ofstream file(filename);
    while (end != std::string::npos)
    {
        file << s.substr(start, end - start) << "\n";
        start = end + delimiter.length();
        end = s.find(delimiter, start);
    }
    file << s.substr(start, end);
    file.close();
}

void Text::splitMultiple(std::string s, std::string delimiter, std::string filename){
    auto start = 0U;
    auto end = s.find(delimiter);
    std::ofstream file(filename, std::ios::app);
    while (end != std::string::npos)
    {
        file << s.substr(start, end - start) << "\n";
        start = end + delimiter.length();
        end = s.find(delimiter, start);
    }
    file << s.substr(start, end);
    file.close();
}

std::vector<std::string> Text::txtToVector(std::string filename){
    std::vector<std::string> allStrings;
    std::ifstream file(filename);
    std::string str;
    while(std::getline(file, str)){
    allStrings.push_back(str);
    }
    file.close();
    return allStrings;
}

bool Text::checkExists(std::string filename){
    std::ifstream file(filename);
    return (bool)file;
}

template <typename T>
std::vector<std::string> remove_duplicates(std::vector<T>& vec){
  std::sort(vec.begin(), vec.end());
  vec.erase(std::unique(vec.begin(), vec.end()), vec.end());
  return vec;
}
