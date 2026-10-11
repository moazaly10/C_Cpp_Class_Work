#ifndef SQUARE_H
#define SQUARE_H

#include "Rectangle.h"

class Square : public Rectangle {
public:
    Square(const char* n, int side);
    ~Square();

    double calcArea() const override;
    double calcPerimeter() const override;
};

#endif

