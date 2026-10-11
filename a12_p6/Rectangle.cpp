#include <iostream>
#include "Rectangle.h"

Rectangle::Rectangle(const char* c, double w, double h)
    : Area(c), width(w), height(h)
{
    std::cout << "Rectangle constructed\n";
}

Rectangle::~Rectangle() {
    std::cout << "Rectangle destructed\n";
}

double Rectangle::calcArea() const {
    std::cout << "Rectangle calcArea() called\n";
    return width * height;
}

double Rectangle::calcPerimeter() const {
    std::cout << "Rectangle calcPerimeter() called\n";
    return 2 * (width + height);
}
