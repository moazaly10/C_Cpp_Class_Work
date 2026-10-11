#ifndef CIRCLE_H
#define CIRCLE_H

#include "Area.h"

class Circle : public Area {
public:
    Circle(const char* c, double r);
    ~Circle();

    double calcArea() const override;
    double calcPerimeter() const override;

protected:
    double radius;
};

#endif
