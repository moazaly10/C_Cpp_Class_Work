#include <iostream>
#include "Square.h"

Square::Square(const char* n, double side)
    : Rectangle(n, side, side)
{
    std::cout << "Square constructed\n";
}

Square::~Square() {
    std::cout << "Square destructed\n";
}

double Square::calcArea() const {
    std::cout << "Square calcArea() called\n";
    return width * height;
}

double Square::calcPerimeter() const {
    std::cout << "Square calcPerimeter() called\n";
    return 4 * width;
}
