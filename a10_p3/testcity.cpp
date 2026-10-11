/*
CH-230-A
a10_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// testcity.cpp
#include <iostream>
#include "City.h"
using namespace std;

int main() {
    City bremen("Bremen", 570000, "Andreas Bovenschulte", 326.7);
    City paris("Paris", 2148000, "Anne Hidalgo", 105.4);
    City london("London", 8982000, "Sadiq Khan", 1572.0);

    bremen.print();
    paris.print();
    london.print();

    return 0;
}
