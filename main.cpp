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

void parseFile(string fileName, vector<characterList>& list)
{
    ifstream inputFile;
    inputFile.open(fileName);
    string hero;
    getline(inputFile, hero); //Get name of hero
    string line, lineItem;
    vector<string> row;
    while(!inputFile.eof())
    {
        line.clear(); //Clear line string and row vector so no chance of error
        row.clear();
        getline(inputFile, line); //Read in a row
        stringstream s(line);
        while(getline(s, lineItem, ',')) //Separate each item in the line and add to row vector
        {
            row.push_back(lineItem);
        }

        characterList tempList(row[0], stod(row[1]), stod(row[2]));
        list.push_back(tempList);
    }
}


int main() {
    simulation s;
    vector<characterList> tracerList;
    parseFile("..\\heroData\\Tracer.csv", tracerList);
    character tracer("tracer", "damage", tracerList);
    cout << tracerList[1].getName() << endl;
    s.inputFriendly(tracer);
    s.printTeams();
    //cout << "widowmaker: " << tracer.getEnemyMatchup("Widowmaker");
    return 0;
}
