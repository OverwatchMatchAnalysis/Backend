//
// Created by Ryan Kennedy on 4/4/2020.
//

#include <iostream>
#include <vector>
#include "simulation.h"

using namespace std;

int main() {
    simulation s;
    vector<string> friendlyTeam = {"Tracer", "Ashe", "Bastion", "Orisa", "Mercy"};
    vector<string> enemyTeam = {"Reaper", "Torbjorn", "Widowmaker", "Zarya", "Doomfist", "Roadhog"};
    for (int i = 0; i < friendlyTeam.size(); i++) {
        s.inputFriendly(friendlyTeam[i]);
    }
    for (int i = 0; i < enemyTeam.size(); i++) {
        s.inputEnemy(enemyTeam[i]);
    }
    s.printTeams();
    return 0;
}
