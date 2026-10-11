/*
CH-230-A
a10_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include "Critter.h"
using namespace std;

double Critter::intToDoubleHunger(int h)
{
    return h / 10.0;
}

int Critter::doubleToIntHunger(double h)
{
    return static_cast<int>(h * 10 + 0.5);
}

Critter::Critter()
{
    name = "default_critter";
    hunger = 0.2;
    boredom = 0;
    height = 10;
    thirst = hunger;
}

Critter::Critter(string newName)
{
    name = newName;
    hunger = 0.2;
    boredom = 0;
    height = 10;
    thirst = hunger;
}

Critter::Critter(string newName, int newHunger, int newBoredom, double newHeight)
{
    name = newName;
    hunger = intToDoubleHunger(newHunger);
    boredom = newBoredom;
    height = newHeight;
    thirst = hunger;
}

Critter::Critter(string newName, int newHunger, int newBoredom, double newHeight, double newThirst)
{
    name = newName;
    hunger = intToDoubleHunger(newHunger);
    boredom = newBoredom;
    height = newHeight;
    thirst = newThirst;
}

void Critter::setHunger(int newHunger)
{
    hunger = intToDoubleHunger(newHunger);
}

int Critter::getHunger()
{
    return doubleToIntHunger(hunger);
}

void Critter::print()
{
    cout << "I am " << name << endl;
    cout << "Hunger: " << getHunger() << endl;
    cout << "Boredom: " << boredom << endl;
    cout << "Height: " << height << endl;
    cout << "Thirst: " << thirst << endl << endl;
}
