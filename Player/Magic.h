#ifndef RPGENGINE_MAGIC_H
#define RPGENGINE_MAGIC_H
#include <string>
using namespace std;


class Magic {

private:
    int mana;
    string status;

public:
    //default constructor
    Magic();

    //check magic functions
    string checkStatus();
    int returnMana();

    //modify mana functions
    void raiseMana(int num);
    void lowerMana(int num);

};


#endif //RPGENGINE_MAGIC_H
