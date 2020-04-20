//
// Created by Ryan Kennedy on 4/19/2020.
//

#include "heroParser.h"
#include <sstream>
using namespace std;

void heroParser::parseFile(string fileName, vector<characterList> &list)
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
