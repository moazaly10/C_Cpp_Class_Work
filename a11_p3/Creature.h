/*
CH-230-A
a11_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Creature.h
#include <iostream>
#include <string>
using namespace std;

// Base class
class Creature {
protected:
    int distance;
public:
    Creature();
    ~Creature();
    void run() const;
};

// Derived class 1
class Wizard : public Creature {
    int power;
public:
    Wizard();
    ~Wizard();
    void hover() const;
};

// Derived class 2
class Elf : public Creature {
    string forest;
public:
    Elf(string f = "Enchanted Woods");
    ~Elf();
    void hide() const;
};

// Derived class 3
class Dragon : public Creature {
    int firePower;
public:
    Dragon(int f = 50);
    ~Dragon();
    void breatheFire() const;
};
