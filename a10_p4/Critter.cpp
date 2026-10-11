/*
CH-230-A
a10_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Critter.cpp
#include <iostream>
#include "Critter.h"
using namespace std;

Critter::Critter() {
    cout << "Default constructor called" << endl;
    name = "default_critter";
    hunger = 0;
    boredom = 0;
    height = 5;
}

Critter::Critter(string n) {
    cout << "Constructor with name called" << endl;
    name = n;
    hunger = 0;
    boredom = 0;
    height = 5;
}

Critter::Critter(string n, int h, int b, double he) {
    cout << "Constructor with all parameters called" << endl;
    name = n;
    hunger = h;
    boredom = b;
    height = he;
}

void Critter::setName(string n) { name = n; }
void Critter::setHunger(int h) { hunger = h; }
void Critter::setBoredom(int b) { boredom = b; }
void Critter::setHeight(double he) { height = he; }

string Critter::getName() { return name; }
int Critter::getHunger() { return hunger; }
int Critter::getBoredom() { return boredom; }
double Critter::getHeight() { return height; }

void Critter::print() {
    cout << "Name: " << name << endl;
    cout << "Hunger: " << hunger << endl;
    cout << "Boredom: " << boredom << endl;
    cout << "Height: " << height << endl;
    cout << endl;
}
