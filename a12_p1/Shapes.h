/*
CH-230-A
a12_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef SHAPES_H
#define SHAPES_H

#include <string>
using namespace std;

class RegularPolygon {
protected:
    string color;
    double side;
public:
    RegularPolygon();
    RegularPolygon(const string& c, double s);
    RegularPolygon(const RegularPolygon& other);
    virtual ~RegularPolygon();

    void setColor(const string& c);
    void setSide(double s);
    string getColor() const;
    double getSide() const;

    virtual double perimeter() const = 0;
    virtual double area() const = 0;
};

class Hexagon : public RegularPolygon {
public:
    Hexagon();
    Hexagon(const string& c, double s);
    Hexagon(const Hexagon& other);
    ~Hexagon();

    double perimeter() const override;
    double area() const override;
};

#endif
