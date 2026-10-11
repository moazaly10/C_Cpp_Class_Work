#include <iostream>
#include <cmath>
#include "Ring.h"

Ring::Ring(const char* c, double outerR, double innerR)
    : Circle(c, outerR), innerRadius(innerR)
{
    std::cout << "Ring constructed\n";
}

Ring::~Ring() {
    std::cout << "Ring destructed\n";
}

double Ring::calcArea() const {
    std::cout << "Ring calcArea() called\n";
    return M_PI * (radius * radius - innerRadius * innerRadius);
}

double Ring::calcPerimeter() const {
    std::cout << "Ring calcPerimeter() called\n";
    return 2 * M_PI * radius + 2 * M_PI * innerRadius;
}
