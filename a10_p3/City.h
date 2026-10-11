/*
CH-230-A
a10_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// City.h
#ifndef CITY_H
#define CITY_H

#include <string>
using namespace std;

class City {
private:
    string name;
    int inhabitants;
    string mayor;
    double area;

public:
    City();
    City(string n, int i, string m, double a);

    void setName(string n);
    void setInhabitants(int i);
    void setMayor(string m);
    void setArea(double a);

    string getName();
    int getInhabitants();
    string getMayor();
    double getArea();

    void print();
};

#endif
