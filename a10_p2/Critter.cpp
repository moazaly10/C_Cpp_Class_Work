/*
CH-230-A
a10_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Critter.cpp
#include <iostream>
#include "Critter.h"
using namespace std;

Critter::Critter() {
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
    color = "gray";
    age = 1;
}

Critter::Critter(string newname) {
    name = newname;
    hunger = 0;
    boredom = 0;
    height = 5;
    color = "gray";
    age = 1;
}

Critter::Critter(string newname, int newhunger, int newboredom, double newheight) {
    name = newname;
    hunger = newhunger;
    boredom = newboredom;
    height = newheight;
    color = "gray";
    age = 1;
}

// Setters
void Critter::setName(string& newname) { name = newname; }
void Critter::setHunger(int newhunger) { hunger = newhunger; }
void Critter::setBoredom(int newboredom) { boredom = newboredom; }
void Critter::setHeight(double newheight) { height = newheight; }
void Critter::setColor(string newcolor) { color = newcolor; }
void Critter::setAge(int newage) { age = newage; }

// Getters
string Critter::getName() { return name; }
int Critter::getHunger() { return hunger; }
int Critter::getBoredom() { return boredom; }
double Critter::getHeight() { return height; }
string Critter::getColor() { return color; }
int Critter::getAge() { return age; }

void Critter::print() {
    cout << "Critter Info:" << endl;
    cout << "Name: " << name << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Boredom: " << boredom << endl;
    cout << "Height: " << height << endl;
    cout << "Color: " << color << endl;
    cout << "Age: " << age << endl;
    cout << endl;
}
