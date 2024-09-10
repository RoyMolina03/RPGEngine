#include "Magic.h"

//default constructor
Magic::Magic()
{
    mana = 15;
}


//check magic functions
string Magic::checkStatus() {
    return status;
}

int Magic::returnMana() {
    return mana;
}


//modify magic functions
void Magic::raiseMana(int num) {
    mana += num;
}

void Magic::lowerMana(int num) {
    mana -= num;
}