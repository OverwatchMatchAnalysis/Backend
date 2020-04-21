//
// Created by Ryan Kennedy on 4/5/2020.
//

#ifndef BACKEND_SIMULATION_H
#define BACKEND_SIMULATION_H

#include <vector>
#include <iostream>
#include "character.h"

class simulation {
public:
    simulation();
    void inputFriendly(character);
    void inputEnemy(character);
    void calculateBestCharacter();
    bool checkRole(character c, vector<character> list);
    void printTeams();

private:
    float calulateTeamPower(vector<character> team);
    vector<character> friendlyTeam;
    vector<character> enemyTeam;
    vector<string> support;
    vector<string> damage;
    vector<string> tank;

};


#endif //BACKEND_SIMULATION_H
