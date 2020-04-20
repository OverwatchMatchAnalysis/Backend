//
// Created by Ryan Kennedy on 4/19/2020.
//

#ifndef BACKEND_HEROPARSER_H
#define BACKEND_HEROPARSER_H

#include <fstream>
#include <vector>
#include "characterList.h"

class heroParser
{
    public:
        void parseFile(std::string fileName, std::vector<characterList>& list);
};


#endif //BACKEND_HEROPARSER_H
