//
// Created by Ryan Kennedy on 4/5/2020.
//
#include "character.h"

characterList character::findMatchup(string name) {
    for (int i = 0; i < this->matchup.size(); i++) {
        if (this->matchup[i].getName() == name) {
            return this->matchup[i];
        }
    }
}


double character::getEnemyMatchup(string name) {
    return findMatchup(name).getEnemyValue();
}

double character::getFriendlyMatchup(string name) {
    return findMatchup(name).getFriendlyValue();

}
