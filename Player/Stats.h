#ifndef RPGENGINE_STATS_H
#define RPGENGINE_STATS_H
#include <string>
using namespace std;


class Stats {
private:
    int con; //constitution
    int dex; //dexterity
    int wis; //wisdom
    int intel; //intelligence
    int car; //charisma
    int str; //strength

public:
    // constructors
    Stats();
    Stats(int co, int de, int wi, int in, int ca, int st); //this constructor is for setting specific stat values

    //return functions
    int returnCon();
    int returnDex();
    int returnWis();
    int returnIntel();
    int returnCar();
    int returnStr();

    //modification functions
    void lvlCon(int num);
    void lvlDex(int num);
    void lvlWis(int num);
    void lvlIntel(int num);
    void lvlCar(int num);
    void lvlStr(int num);



};


#endif //RPGENGINE_STATS_H
