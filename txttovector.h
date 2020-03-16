#ifndef TXTTOVECTOR_H
#define TXTTOVECTOR_H

#include <vector>
#include <fstream>

class txtToVector
{
public:
    std::vector<std::string> transform(std::string filename);
    txtToVector();
};

#endif // TXTTOVECTOR_H
