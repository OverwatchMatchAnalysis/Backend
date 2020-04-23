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

void simulation::setHerosForRole(string role, string& friendly, vector<string>& enemies, vector<string>& currentList) {
    vector<string> support = {"Ana", "Baptiste", "Brigitte", "Lucio", "Mercy", "Moira", "Zenyatta"};
    vector<string> tank = {"D.Va", "Orisa", "Reinhardt", "Roadhog", "Sigma", "Winston", "Wrecking Ball", "Zarya"};
    vector<string> damage = {"Ashe", "Bastion", "Doomfist", "Genji", "Hanzo", "Junkrat", "Mccree", "Mei", "Pharah", "Reaper", "Soldier 76", "Sombra", "Symmetra", "Torbjorn", "Tracer", "Widowmaker"};
    if (role == "support") {
        currentList = support;
        for (int i = 0; i < this->friendlyTeam.size(); i++) {
            if (this->friendlyTeam[i].role == "Support")
                friendly = this->friendlyTeam[i].name;
        }
        for (int i = 0; i < this->enemyTeam.size(); i++) {
            if (this->enemyTeam[i].role == "Support")
                enemies.push_back(this->enemyTeam[i].name);
        }
    }
    if (role == "tank") {
        currentList = tank;
        for (int i = 0; i < this->friendlyTeam.size(); i++) {
            if (this->friendlyTeam[i].role == "Tank")
                friendly = this->friendlyTeam[i].name;
        }
        for (int i = 0; i < this->enemyTeam.size(); i++) {
            if (this->enemyTeam[i].role == "Tank")
                enemies.push_back(this->enemyTeam[i].name);
        }
    }
    if (role == "damage") {
        currentList = damage;
        for (int i = 0; i < this->friendlyTeam.size(); i++) {
            if (this->friendlyTeam[i].role == "Offense")
                friendly = this->friendlyTeam[i].name;
        }
        for (int i = 0; i < this->enemyTeam.size(); i++) {
            if (this->enemyTeam[i].role == "Offense")
                enemies.push_back(this->enemyTeam[i].name);
        }
    }
}

double simulation::getFriendlyScore(character c) {
    double teamScore = 0;
    for (int i = 0; i < this->friendlyTeam.size(); i++) {
        teamScore += c.getFriendlyMatchup(this->friendlyTeam[i].name);
    }
    return teamScore;
}

double simulation::getEnemyScore(character c) {
    double teamScore = 0;
    for (int i = 0; i < this->enemyTeam.size(); i++) {
        teamScore += c.getEnemyMatchup(this->enemyTeam[i].name);
    }
    return teamScore;
}

vector<string> simulation::calculateBestCharacter(string role) {
    heroParser hp;
    vector<string> currentList, enemies;
    string friendly;
    vector<string> bestHeroes;
    double bestMatchupScore = 0;
    setHerosForRole(role, friendly, enemies, currentList);
    for (int i = 0; i < currentList.size(); i++) {
        if ((currentList[i] != friendly)) {
            string name, role;
            vector<characterList> cl;
            string path = "..//heroData//" + currentList[i] + ".csv";
            hp.parseFile(path, cl, name, role);
            character currentHero = character(name, role, cl);
            double friendScore = getFriendlyScore(currentHero);
            double enemyScore = getEnemyScore(currentHero);
            cout << name << endl;
            double matchupScore = friendScore + enemyScore;
            cout << "friendly score: " << friendScore << "     " << "enemy score: " << enemyScore << "     "<< "matchup score: " << matchupScore << endl << endl;
            if (matchupScore >= bestMatchupScore) {
                if (matchupScore > bestMatchupScore) {
                    bestMatchupScore = matchupScore;
                    bestHeroes = {currentHero.name};
                } else if (matchupScore == bestMatchupScore) {
                    bestHeroes.push_back(currentHero.name);
                }
            }
        }
    }
    cout << "\n";
    return bestHeroes;
}