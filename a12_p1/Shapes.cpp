/*
CH-230-A
a12_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include "Shapes.h"
#include <iostream>
#include <cmath>
using namespace std;

RegularPolygon::RegularPolygon() : color("none"), side(0) {}
RegularPolygon::RegularPolygon(const string& c, double s) : color(c), side(s) {}
RegularPolygon::RegularPolygon(const RegularPolygon& other)
    : color(other.color), side(other.side) {}
RegularPolygon::~RegularPolygon() {}

void RegularPolygon::setColor(const string& c) { color = c; }
void RegularPolygon::setSide(double s) { side = s; }
string RegularPolygon::getColor() const { return color; }
double RegularPolygon::getSide() const { return side; }

Hexagon::Hexagon() : RegularPolygon("none", 0) {}
Hexagon::Hexagon(const string& c, double s) : RegularPolygon(c, s) {}
Hexagon::Hexagon(const Hexagon& other) : RegularPolygon(other) {}
Hexagon::~Hexagon() {}

double Hexagon::perimeter() const {
    return 6 * side;
}

double Hexagon::area() const {
    return (3 * sqrt(3) / 2.0) * side * side;
}
