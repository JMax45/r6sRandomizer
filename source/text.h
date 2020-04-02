#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

#ifndef TEXT_H
#define TEXT_H


class Text
{
public:
    void split(std::string s, std::string delimiter, std::string filename);
    void splitMultiple(std::string s, std::string delimiter, std::string filename);
    std::vector<std::string> txtToVector(std::string filename);
    bool checkExists(std::string filename);
    template <typename T>
    std::vector<std::string> remove_duplicates(std::vector<T>& vec);
    std::string tolower(std::string str);
    Text();
};

#endif // TEXT_H
