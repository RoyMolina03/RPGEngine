#include "Health.h"

// default constructor
Health::Health(){
    hp = 20;
}


//check health and status functions
string Health::checkStatus() {
    return status;
}

int Health::returnHP() {
    return hp;
}


//modify HP
void Health::raiseHP(int num) {
    hp += num;
}

void Health::lowerHP(int num) {
    hp -= num;
}

