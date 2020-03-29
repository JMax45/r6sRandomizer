#include <iostream>
#include <fstream>
#include <vector>

#ifndef TEXT_H
#define TEXT_H


class Text
{
public:
    void split(std::string s, std::string delimiter, std::string filename);
    std::vector<std::string> txtToVector(std::string filename);
    bool checkExists(std::string filename);
    Text();
};

#endif // TEXT_H
