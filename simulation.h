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
    vector<string> calculateBestCharacter(string role);
    void printTeams();

private:
    void setHerosForRole(string role, string& friendly, vector<string>& enemies, vector<string>& currentList);
    float calulateTeamPower(vector<character> team);
    double getFriendlyScore(character);
    double getEnemyScore(character);
    vector<character> friendlyTeam;
    vector<character> enemyTeam;

};


#endif //BACKEND_SIMULATION_H
