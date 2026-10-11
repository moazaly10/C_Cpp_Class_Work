/*
CH-230-A
a10_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// testcritter.cpp
#include <iostream>
#include "Critter.h"
using namespace std;

int main() {
    Critter c1;
    Critter c2("Tom");
    Critter c3("Jerry", 2, 3, 7.5);

    c1.setColor("blue");
    c1.setAge(4);

    c2.setColor("red");
    c2.setAge(2);

    c3.setColor("green");
    c3.setAge(3);

    c1.print();
    c2.print();
    c3.print();

    return 0;
}
