#include "Item.h"
using namespace std;

//constructors
Item::Item()
{
    name = "";
    description = "";
    price = 0;
    durability = 0;
}

Item::Item(string tag, string info, int cost, int dura)
{
    name = tag;
    description = info;
    price = cost;
    durability = dura;
}


//setters
void Item::setName(string words)
{
    name = words;
}

void Item::setDes(string words)
{
    description = words;
}

void Item::setPrice(int num) {
    price = num;
}

void Item::setDura(int num) {
    durability = num;
}


//getters
string Item::getName() {
    return name;
}

string Item::getDes() {
    return description;
}

int Item::getPrice() {
    return price;
}

int Item::getDura() {
    return durability;
}


//modifier functions
void Item::lowerDura(int num) {
    durability -= num;
}

void Item::raiseDura(int num) {
    durability += num;
}



