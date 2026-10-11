#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Area.h"

class Rectangle : public Area {
public:
    Rectangle(const char* c, double w, double h);
    virtual ~Rectangle();

    virtual double calcArea() const override;
    virtual double calcPerimeter() const override;

protected:
    double width;
    double height;
};

#endif
