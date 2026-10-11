/*
CH-230-A
a10_p2.c
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
    double height;
    int boredom;

    // New properties
    string color;
    int age;

public:
    Critter();
    Critter(string newname);
    Critter(string newname, int newhunger, int newboredom, double newheight);

    // Setters
    void setName(string& newname);
    void setHunger(int newhunger);
    void setBoredom(int newboredom);
    void setHeight(double newheight);
    void setColor(string newcolor);
    void setAge(int newage);

    // Getters
    string getName();
    int getHunger();
    int getBoredom();
    double getHeight();
    string getColor();
    int getAge();

    // Print
    void print();
};

#endif
