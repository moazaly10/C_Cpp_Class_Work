/*
CH-230-A
a10_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Critter.h
#ifndef CRITTER_H
#define CRITTER_H

#include <string>
using namespace std;

class Critter {
private:
    string name;
    int hunger;
    int boredom;
    double height;

public:
    Critter();                                // no parameters
    Critter(string n);                        // only name
    Critter(string n, int h, int b, double he = 10.0); // all parameters with default height

    void setName(string n);
    void setHunger(int h);
    void setBoredom(int b);
    void setHeight(double he);

    string getName();
    int getHunger();
    int getBoredom();
    double getHeight();

    void print();
};

#endif
