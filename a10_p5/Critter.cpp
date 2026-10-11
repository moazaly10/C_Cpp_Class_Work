/*
CH-230-A
a10_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Critter.cpp
#include <iostream>
#include "Critter.h"
using namespace std;

// Converts an integer hunger (0–10) to a double (0.0–1.0)
double Critter::intToDoubleHunger(int h)
{
    return h / 10.0;
}

// Converts an internal double hunger (0.0–1.0) back to an integer (0–10)
int Critter::doubleToIntHunger(double h)
{
    return static_cast<int>(h * 10 + 0.5);  // rounding to nearest integer
}

// Default constructor
Critter::Critter()
{
    name = "default_critter";
    hunger = 0.2;  // internally 20%
    boredom = 0;
    height = 10;
}

// Constructor with only name
Critter::Critter(string newName)
{
    name = newName;
    hunger = 0.2;
    boredom = 0;
    height = 10;
}

// Full constructor
Critter::Critter(string newName, int newHunger, int newBoredom, double newHeight)
{
    name = newName;
    hunger = intToDoubleHunger(newHunger);
    boredom = newBoredom;
    height = newHeight;
}

// Sets hunger (testcritter.cpp still uses integer input)
void Critter::setHunger(int newHunger)
{
    hunger = intToDoubleHunger(newHunger);
}

// Gets hunger as an integer (0–10)
int Critter::getHunger()
{
    return doubleToIntHunger(hunger);
}

// Prints critter details
void Critter::print()
{
    cout << "I am " << name << "." << endl;
    cout << "My hunger level is " << getHunger() << "." << endl;
    cout << "My boredom level is " << boredom << "." << endl;
    cout << "My height is " << height << "." << endl;
    cout << endl;
}
