//
// Created by Ryan Kennedy on 4/5/2020.
//

#ifndef BACKEND_SIMULATION_H
#define BACKEND_SIMULATION_H

#include <vector>
#include <iostream>
#include "character.h"
#include "heroParser.h"

class simulation {
public:
    simulation();
    void inputFriendly(string);
    void inputEnemy(string);
    void calculateBestCharacter();
    void printTeams();

private:
    float calulateTeamPower(vector<character> team);
    vector<character> friendlyTeam;
    vector<character> enemyTeam;
};


#endif //BACKEND_SIMULATION_H
