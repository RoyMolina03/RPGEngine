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

string Stats::returnConString() {

}