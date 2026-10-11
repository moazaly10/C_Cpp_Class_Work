#include <iostream>
#include <cmath>
#include "Circle.h"

Circle::Circle(const char* c, double r) : Area(c), radius(r) {
    std::cout << "Circle constructed\n";
}

Circle::~Circle() {
    std::cout << "Circle destructed\n";
}

double Circle::calcArea() const {
    std::cout << "Circle calcArea() called\n";
    return M_PI * radius * radius;
}

double Circle::calcPerimeter() const {
    std::cout << "Circle calcPerimeter() called\n";
    return 2 * M_PI * radius;
}
