/*
CH-230-A
a11_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Shapes.h
#include <iostream>
#include <cmath>
#include <string>
using namespace std;

// Base class
class Shape {
protected:
    string name;
public:
    Shape(const string& n = "Shape");
    Shape(const Shape& s);
    virtual ~Shape();
    string getName() const;
    void setName(const string& n);
};

// Derived from Shape
class CenteredShape : public Shape {
protected:
    double x, y;
public:
    CenteredShape(const string& n = "CenteredShape", double nx = 0, double ny = 0);
    CenteredShape(const CenteredShape& c);
    void move(double nx, double ny);
};

// Circle derived from CenteredShape
class Circle : public CenteredShape {
protected:
    double radius;
public:
    Circle(const string& n = "Circle", double nx = 0, double ny = 0, double r = 0);
    Circle(const Circle& c);
    double area() const;
    double perimeter() const;
};

// RegularPolygon derived from CenteredShape
class RegularPolygon : public CenteredShape {
protected:
    int EdgesNumber;
public:
    RegularPolygon(const string& n = "RegularPolygon", double nx = 0, double ny = 0, int nEdges = 0);
    RegularPolygon(const RegularPolygon& r);
};

// Rectangle derived from RegularPolygon
class Rectangle : public RegularPolygon {
protected:
    double width, height;
public:
    Rectangle(const string& n = "Rectangle", double nx = 0, double ny = 0, double nwidth = 0, double nheight = 0);
    Rectangle(const Rectangle& r);
    double area() const;
    double perimeter() const;
};

// Square derived from Rectangle
class Square : public Rectangle {
public:
    Square(const string& n = "Square", double nx = 0, double ny = 0, double nside = 0);
    Square(const Square& s);
};
