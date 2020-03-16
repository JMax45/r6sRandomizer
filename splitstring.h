#ifndef SPLITSTRING_H
#define SPLITSTRING_H

#include <iostream>
#include <vector>
#include <fstream>

class SplitString
{
public:
    void split(std::string s, std::string delimiter, std::string filename);
    SplitString();
};

#endif // SPLITSTRING_H
