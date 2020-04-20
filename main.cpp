//
// Created by Ryan Kennedy on 4/4/2020.
//

#include <iostream>
#include <vector>
#include "simulation.h"
#include "character.h"
#include "characterList.h"
#include "heroParser.h"

using namespace std;

int main() {
    simulation s;
    heroParser parser;
    vector<characterList> tracerList;
    parser.parseFile("..//heroData//Tracer.csv", tracerList);
    character tracer("tracer", "damage", tracerList);
    cout << tracerList[1].getName() << endl;
    s.inputFriendly(tracer);
    s.printTeams();
    //cout << "widowmaker: " << tracer.getEnemyMatchup("Widowmaker");
    return 0;
}
