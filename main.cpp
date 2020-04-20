//
// Created by Ryan Kennedy on 4/4/2020.
//

#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include "simulation.h"
#include "character.h"
#include "characterList.h"

using namespace std;

void parseFile(string fileName, vector<characterList>& list) {
    ifstream inputFile;
    inputFile.open(fileName);
    string hero;
    getline(inputFile, hero);
    string currentLine;
    while (!(inputFile.eof())) {
        characterList tempList;
        getline(inputFile, currentLine);
        stringstream inputStream(currentLine);
        vector<string> tempLine;
        while(inputStream.good()) {
            string substring;
            getline(inputStream, substring, ',');
            tempLine.push_back(substring);
        }
        if (tempLine.size() == 2) {
            tempList.setName(tempLine[0]);
            tempList.setEnemyValue(stod(tempLine[1]));
            tempList.setFriendlyValue(stod(tempLine[2]));
            list.push_back(tempList);
        }
    }
}

int main() {
    simulation s;
    vector<characterList> tracerList;
    parseFile("heroData/Tracer.csv", tracerList);
    character tracer("tracer", "damage", tracerList);
    s.inputFriendly(tracer);
    s.printTeams();
    return 0;
}
