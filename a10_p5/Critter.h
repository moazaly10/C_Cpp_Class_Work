/*
CH-230-A
a10_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Critter.h
#ifndef CRITTER_H
#define CRITTER_H

#include <string>
using namespace std;

class Critter
{
private:
    string name;
    double hunger;  // now stored internally as a percentage (0.0–1.0)
    int boredom;
    double height;

    // internal conversion methods
    double intToDoubleHunger(int h);
    int doubleToIntHunger(double h);

public:
    // constructors
    Critter();
    Critter(string newName);
    Critter(string newName, int newHunger, int newBoredom, double newHeight = 10);

    // setters
    void setHunger(int newHunger);

    // getters
    int getHunger();
    void print();
};

#endif
