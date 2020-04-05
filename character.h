//
// Created by Ryan Kennedy on 4/4/2020.
//

#ifndef BACKEND_CHARACTER_H
#define BACKEND_CHARACTER_H

#include <vector>

class character {
    string name;
    vector matchup;

    void getEnemyMatchup();
    void getFriendlyMatchup();
};

#endif //BACKEND_CHARACTER_H
