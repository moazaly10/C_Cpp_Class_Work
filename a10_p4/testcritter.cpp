/*
CH-230-A
a10_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// testcritter.cpp
#include <iostream>
#include "Critter.h"
using namespace std;

int main() {
    cout << "Creating critters..." << endl << endl;

    Critter c1;                              // default
    Critter c2("Tom");                       // only name
    Critter c3("Jerry", 3, 4, 7.5);          // all parameters
    Critter c4("Spike", 1, 2);               // without height, uses default 10

    c1.setHunger(2);
    c2.setHunger(2);
    c3.setHunger(2);
    c4.setHunger(2);

    cout << endl << "Critter data:" << endl << endl;
    c1.print();
    c2.print();
    c3.print();
    c4.print();

    return 0;
}
