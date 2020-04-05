//
// Created by Ryan Kennedy on 4/5/2020.
//

#ifndef BACKEND_SIMULATION_H
#define BACKEND_SIMULATION_H

#include <vector>
#include "character.h"

class simulation {
public:
    void inputFriendly(character);
    void inputEnemy(character);
    void calculateBestCharacter();

private:
    vector<character> friendlyTeam;
    vector<character> enemyTeam;

};


#endif //BACKEND_SIMULATION_H
