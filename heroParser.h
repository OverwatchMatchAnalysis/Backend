//
// Created by Ryan Kennedy on 4/19/2020.
//

#ifndef BACKEND_HEROPARSER_H
#define BACKEND_HEROPARSER_H

#include <fstream>
#include <vector>
#include "characterList.h"

using namespace std;

class heroParser
{
    public:
        void parseFile(string fileName, vector<characterList>& list);
};


#endif //BACKEND_HEROPARSER_H
