#ifndef CHARACTERLIST_H
#define CHARACTERLIST_H

#include <string>
#include <vector>

class characterList
{
    public:
        characterList();
        ~characterList();
        void setName(std::string name);
        std::string getName();
        void setEnemyValue(double value);
        double getEnemyValue();
        void setFriendlyValue(double value);
        double getFriendlyValue();

    private:
        std::string characterName = "TestName";
        double enemyValue = 0;
        double friendlyValue = 0;
};

#endif //CHARACTERLIST_H