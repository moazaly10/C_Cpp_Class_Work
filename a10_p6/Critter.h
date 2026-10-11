/*
CH-230-A
a10_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef CRITTER_H
#define CRITTER_H

#include <string>
using namespace std;

class Critter
{
private:
    string name;
    double hunger;
    int boredom;
    double height;
    double thirst;

    double intToDoubleHunger(int h);
    int doubleToIntHunger(double h);

public:
    Critter();
    Critter(string newName);
    Critter(string newName, int newHunger, int newBoredom, double newHeight = 10);
    Critter(string newName, int newHunger, int newBoredom, double newHeight, double newThirst);

    void setHunger(int newHunger);
    int getHunger();
    void print();
};

#endif
