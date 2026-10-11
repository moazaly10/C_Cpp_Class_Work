/*
CH-230-A
a10_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// testcritter.cpp
#include <iostream>
#include "Critter.h"
using namespace std;

int main()
{
    Critter c1;
    Critter c2("Bob");
    Critter c3("Alice", 5, 2);
    Critter c4("Charlie", 9, 4, 12.5);

    c1.print();
    c2.print();
    c3.print();
    c4.print();

    c1.setHunger(8);
    c1.print();

    return 0;
}
