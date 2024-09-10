#include "Stats.h"

// constructors
Stats::Stats() {
    con = 10;
    dex = 10;
    wis = 10;
    intel = 10;
    car = 10;
    str = 10;
}

Stats::Stats(int co, int de, int wi, int in, int ca, int st) { //this constructor is for setting specific stat values
    con = co;
    dex = de;
    wis = wi;
    intel = in;
    car = ca;
    str = st;
}

//return functions
int Stats::returnCon() {
    return con;
}

int Stats::returnDex() {
    return dex;
}

int Stats::returnWis() {
    return wis;
}

int Stats::returnIntel() {
    return intel;
}

int Stats::returnCar() {
    return car;
}

int Stats::returnStr() {
    return str;
}


//level up functions
void Stats::lvlCon(int num) {
    con += num;
}

void Stats::lvlDex(int num) {
    dex += num;
}

void Stats::lvlWis(int num) {
    wis += num;
}

void Stats::lvlIntel(int num) {
    intel += num;
}
void Stats::lvlCar(int num) {
    car += num;
}

void Stats::lvlStr(int num) {
    str += num;
}

