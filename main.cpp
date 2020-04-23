//
// Created by Ryan Kennedy on 4/4/2020.
//

#include <iostream>
#include <vector>
#include "simulation.h"

using namespace std;

int main() {
    simulation s;
    vector<string> friendlyTeam = {"DVa", "Mei", "Orisa", "Moira", "Zenyatta"};
    vector<string> enemyTeam = {"Ashe", "Genji", "Reinhardt", "Winston", "Mercy", "Symmetra"};
    for (int i = 0; i < friendlyTeam.size(); i++) {
        s.inputFriendly(friendlyTeam[i]);
    }
    for (int i = 0; i < enemyTeam.size(); i++) {
        s.inputEnemy(enemyTeam[i]);
    }
    s.printTeams();
    vector<string> bestHero = s.calculateBestCharacter("damage");
    cout << "Best matchup: ";
    for (int i = 0; i < bestHero.size(); i++) {
        cout << bestHero[i] << " ";
    }
    return 0;
}
