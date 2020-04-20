//
// Created by Ryan Kennedy on 4/4/2020.
//

#ifndef BACKEND_CHARACTER_H
#define BACKEND_CHARACTER_H

#include <vector>
#include <String>
#include "characterList.h"

using namespace std;

class character {

public:
    character();
    character(string, string role, vector<characterList>);
    double getEnemyMatchup(string);
    double getFriendlyMatchup(string);
    string role;
    string name;

private:
    vector<characterList> matchups;
    characterList findMatchup(string);
};

#endif //BACKEND_CHARACTER_H
