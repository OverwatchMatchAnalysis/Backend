//1
// Created by Ryan Kennedy on 4/5/2020.
//

#include "simulation.h"

simulation::simulation() {

}

void simulation::inputFriendly(string name) {
    heroParser parser;
    string path = "..//heroData//" + name + ".csv";
    string role;
    vector<characterList> playerList;
    parser.parseFile(path, playerList, name, role);
    character newPlayer(name, role, playerList);
    this->friendlyTeam.push_back(newPlayer);
}

void simulation::inputEnemy(string name) {
    heroParser parser;
    string path = "..//heroData//" + name + ".csv";
    string role;
    vector<characterList> playerList;
    parser.parseFile(path, playerList, name, role);
    character newPlayer(name, role, playerList);
    this->enemyTeam.push_back(newPlayer);
}

void simulation::printTeams() {
    cout << "\nFriendly Team: ";
    for (int i = 0; i < this->friendlyTeam.size(); i++){
        if (i == this->friendlyTeam.size()-1) {
            cout << this->friendlyTeam[i].name << endl;
        } else {
            cout << this->friendlyTeam[i].name << ", ";
        }
    }

    cout << "\nEnemy Team: ";
    for (int i = 0; i < this->enemyTeam.size(); i++)
        if (i == this->enemyTeam.size()-1) {
            cout << this->enemyTeam[i].name << endl;
        } else {
            cout << this->enemyTeam[i].name << ", ";
        }
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