/*
CH-230-A
a10_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// City.cpp
#include <iostream>
#include "City.h"
using namespace std;

City::City() {
    name = "unknown";
    inhabitants = 0;
    mayor = "none";
    area = 0.0;
}

City::City(string n, int i, string m, double a) {
    name = n;
    inhabitants = i;
    mayor = m;
    area = a;
}

void City::setName(string n) { name = n; }
void City::setInhabitants(int i) { inhabitants = i; }
void City::setMayor(string m) { mayor = m; }
void City::setArea(double a) { area = a; }

string City::getName() { return name; }
int City::getInhabitants() { return inhabitants; }
string City::getMayor() { return mayor; }
double City::getArea() { return area; }

void City::print() {
    cout << "City: " << name << endl;
    cout << "Inhabitants: " << inhabitants << endl;
    cout << "Mayor: " << mayor << endl;
    cout << "Area: " << area << " km^2" << endl;
    cout << endl;
}
