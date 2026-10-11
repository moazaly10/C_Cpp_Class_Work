/*
CH-230-A
a11_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Box.cpp
#include <iostream>
#include "Box.h"
using namespace std;

Box::Box() {
    height = 0;
    width = 0;
    depth = 0;
}

Box::Box(double h, double w, double d) {
    height = h;
    width = w;
    depth = d;
}

Box::Box(const Box& other) {
    height = other.height;
    width = other.width;
    depth = other.depth;
}

Box::~Box() {}

void Box::setHeight(double h) { height = h; }
void Box::setWidth(double w) { width = w; }
void Box::setDepth(double d) { depth = d; }

double Box::getHeight() const { return height; }
double Box::getWidth() const { return width; }
double Box::getDepth() const { return depth; }

double Box::volume() const {
    return height * width * depth;
}
