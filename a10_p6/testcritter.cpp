/*
CH-230-A
a10_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include "Critter.h"
using namespace std;

int main()
{
    Critter c1;
    Critter c2("Bob");
    Critter c3("Alice", 5, 2);
    Critter c4("Charlie", 9, 4, 12.5);
    Critter c5("Dave", 3, 5, 11.0, 0.7);

    c1.print();
    c2.print();
    c3.print();
    c4.print();
    c5.print();

    return 0;
}
