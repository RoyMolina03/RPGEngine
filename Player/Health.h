#ifndef RPGENGINE_HEALTH_H
#define RPGENGINE_HEALTH_H
#include <string>
using namespace std;


class Health {
private:
    int hp; //user's hitpoints
    string status; //string representation of user's health (used for items or NPCs)

public:
    //constructors
    Health();

    //check health functions
    string checkStatus();
    int returnHP();

    //modify health
    void raiseHP(int num);
    void lowerHP(int num);

};


#endif //RPGENGINE_HEALTH_H
