//
// Created by wilde on 4/5/2020.
//

#include "characterList.h"
using namespace std;

characterList::characterList()
{

}
characterList::~characterList() {
    this->setName("");
    this->setFriendlyValue(0);
    this->setEnemyValue(0);
}

void characterList::setName(string name)
{
    characterName = name;
}

string characterList::getName()
{
    return characterName;
}

void characterList::setEnemyValue(double value)
{
    enemyValue = value;
}

double characterList::getEnemyValue()
{
    return enemyValue;
}

void characterList::setFriendlyValue(double value)
{
    friendlyValue = value;
}

double characterList::getFriendlyValue()
{
    return friendlyValue;
}
