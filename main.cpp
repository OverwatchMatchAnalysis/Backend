//
// Created by Ryan Kennedy on 4/4/2020.
//

#include <iostream>
#include "simulation.h"
#include "character.h"
#include "characterList.h"

using namespace std;

int main() {
    simulation s;
    vector<characterList> tracerList;
    for (int i = 0; i < 10; i++) {
        characterList temp;
        temp.setName("1");
        temp.setEnemyValue(2);
        temp.setFriendlyValue(2);
        tracerList.push_back(temp);
    }
    character tracer("tracer", "damage", tracerList);
    s.inputFriendly(tracer);
    s.printTeams();

    return 0;
}
