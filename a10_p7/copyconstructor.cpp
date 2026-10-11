/*
CH-230-A
a10_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <string>
using namespace std;

class Critter
{
private:
    string name;
    double hunger;

public:
    Critter()
    {
        cout << "Default constructor called" << endl;
        name = "default_critter";
        hunger = 0.0;
    }

    Critter(string newName, double newHunger)
    {
        cout << "Parameterized constructor called" << endl;
        name = newName;
        hunger = newHunger;
    }

    Critter(const Critter& c)
    {
        cout << "Copy constructor called" << endl;
        name = c.name;
        hunger = c.hunger;
    }

    ~Critter()
    {
        cout << "Destructor called for " << name << endl;
    }

    void setName(string newName)
    {
        name = newName;
    }

    void setHunger(double newHunger)
    {
        hunger = newHunger;
    }

    void print() const
    {
        cout << "Name: " << name << ", Hunger: " << hunger << endl;
    }
};

// Pass-by-value (triggers copy constructor)
void funcByVal(Critter c)
{
    cout << "Inside funcByVal" << endl;
    c.print();
}

// Pass-by-reference (no copy constructor)
void funcByRef(Critter& c)
{
    cout << "Inside funcByRef" << endl;
    c.print();
}

int main()
{
    cout << "--- Creating first critter with default constructor ---" << endl;
    Critter c1;

    cout << "--- Creating second critter with parameterized constructor ---" << endl;
    Critter c2("Fluffy", 2.5);

    cout << "--- Calling funcByVal (copy constructor invoked) ---" << endl;
    funcByVal(c2);

    cout << "--- Calling funcByRef (no copy constructor) ---" << endl;
    funcByRef(c2);

    cout << "--- Creating copy using copy constructor ---" << endl;
    Critter c3 = c2;

    cout << "--- Printing all critters ---" << endl;
    c1.print();
    c2.print();
    c3.print();

    cout << "--- End of main ---" << endl;
    return 0;
}
