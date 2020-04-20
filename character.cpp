//
// Created by Ryan Kennedy on 4/5/2020.
//
#include "character.h"

character::character(string name, string role, vector<characterList> cl) {
    this->matchups = cl;
    this->name = name;
    this->role = role;
}

characterList character::findMatchup(string name) {
    for (int i = 0; i < this->matchups.size(); i++) {
        if (this->matchups[i].getName() == name) {
            return this->matchups[i];
        }
    }
}

double character::getEnemyMatchup(string name) {
    return findMatchup(name).getEnemyValue();
}

double character::getFriendlyMatchup(string name) {
    return findMatchup(name).getFriendlyValue();
}

character::character() {

}
