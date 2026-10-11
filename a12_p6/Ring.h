#ifndef RING_H
#define RING_H

#include "Circle.h"

class Ring : public Circle {
public:
    Ring(const char* c, double outerR, double innerR);
    ~Ring();

    double calcArea() const override;
    double calcPerimeter() const override;

private:
    double innerRadius;
};

#endif
