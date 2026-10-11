/*
CH-230-A
a11_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Creature.cpp
#include "Creature.h"

// Base class
Creature::Creature() : distance(10) { cout << "Creature constructed\n"; }
Creature::~Creature() { cout << "Creature destructed\n"; }
void Creature::run() const { cout << "Running " << distance << " meters!\n"; }

// Wizard
Wizard::Wizard() : power(5) { cout << "Wizard constructed\n"; }
Wizard::~Wizard() { cout << "Wizard destructed\n"; }
void Wizard::hover() const { cout << "Hovering " << (power * distance) << " meters!\n"; }

// Elf
Elf::Elf(string f) : forest(f) { cout << "Elf constructed\n"; }
Elf::~Elf() { cout << "Elf destructed\n"; }
void Elf::hide() const { cout << "Elf hides in " << forest << ".\n"; }

// Dragon
Dragon::Dragon(int f) : firePower(f) { cout << "Dragon constructed\n"; }
Dragon::~Dragon() { cout << "Dragon destructed\n"; }
void Dragon::breatheFire() const { cout << "Dragon breathes fire of power " << firePower << "!\n"; }
