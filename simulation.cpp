//1
// Created by Ryan Kennedy on 4/5/2020.
//

#include "simulation.h"

simulation::simulation() {
    support = {};
    damage = {};
    tank = {};
}

void simulation::inputFriendly(character c) {
    if (checkRole(c, this->friendlyTeam)) {
        this->friendlyTeam.push_back(c);
    } else {
        cerr << "Could not add character. Too many " << c.role << " on the friendly team already";
    }
}

void simulation::inputEnemy(character c) {
    if (checkRole(c, this->enemyTeam)) {
        this->enemyTeam.push_back(c);
    } else {
        cerr << "Could not add character. Too many " << c.role << " on the enemy team already";
    }}

bool simulation::checkRole(character c, vector<character> list) {
    int count = 0;
    for (int i = 0; i < list.size(); i++) {
        if (list[i].role == c.role) {
            count++;
        }
        if (count > 2)
            return false;
    }
    return true;
}

void simulation::printTeams() {
    cout << "Friendly Team: ";
    for (int i = 0; i < this->friendlyTeam.size(); i++)
        cout << this->friendlyTeam[i].name << " ,";

    cout << "\nEnemy Team: ";
    for (int i = 0; i < this->enemyTeam.size(); i++)
        cout << this->enemyTeam[i].name << " ,";
    cout << endl;
}

void simulation::calculateBestCharacter() {
    /*for (int i = 0; i < )
    double friendlyTeamScore = 0;
    for (int i = 0; i < friendlyTeam.size(); i++) {
        friendlyTeamScore += friendlyTeam[i].getFriendlyMatchup()
    }
    character f1 = friendlyTeam[i]*/
}