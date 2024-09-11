#ifndef RPGENGINE_ITEM_H
#define RPGENGINE_ITEM_H
#include <string>
using namespace std;

class Item {
private:
    string name;
    string description;
    int price;
    int durability;

public:
    //constructors
    Item();
    Item(string tag, string info, int cost, int dura);

    //setters
    void setName(string words);
    void setDes(string words);
    void setPrice(int num);
    void setDura(int num);

    //getters
    string getName();
    string getDes();
    int getPrice();
    int getDura();

    //modifier functions
    void lowerDura(int num);
    void raiseDura(int num);

};


#endif //RPGENGINE_ITEM_H
