//
// Created by Ryan Kennedy on 4/19/2020.
//

#include "heroParser.h"
#include <sstream>
using namespace std;

//Line format is: name, team value, enemy value

void heroParser::parseFile(string fileName, vector<characterList> &list, string& name, string& role) {
    ifstream inputFile;
    inputFile.open(fileName);
    string line, lineItem;
    vector<string> row;
    getline(inputFile, line); //Get name of hero
    seperateCSVLine(line, row);
    name = row[0];
    role = row[1];
    while(!inputFile.eof())
    {
        line.clear(); //Clear line string and row vector so no chance of error
        row.clear();
        getline(inputFile, line); //Read in a row
        seperateCSVLine(line, row);
        characterList tempList(row[0], stod(row[1]), stod(row[2]));
        list.push_back(tempList);
    }
}

void heroParser::seperateCSVLine(string line, vector<string> &row) {
    string lineItem;
    stringstream s(line);
    while(getline(s, lineItem, ',')) //Separate each item in the line and add to row vector
    {
        row.push_back(lineItem);
    }
}
