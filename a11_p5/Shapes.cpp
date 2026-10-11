/*
CH-230-A
a11_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Shapes.cpp
#include "Shapes.h"

// Shape
Shape::Shape(const string& n) : name(n) { cout << "Shape constructed\n"; }
Shape::Shape(const Shape& s) : name(s.name) { cout << "Shape copied\n"; }
Shape::~Shape() { cout << "Shape destructed\n"; }
string Shape::getName() const { return name; }
void Shape::setName(const string& n) { name = n; }

// CenteredShape
CenteredShape::CenteredShape(const string& n, double nx, double ny) : Shape(n), x(nx), y(ny) {
    cout << "CenteredShape constructed\n";
}
CenteredShape::CenteredShape(const CenteredShape& c) : Shape(c), x(c.x), y(c.y) {
    cout << "CenteredShape copied\n";
}
void CenteredShape::move(double nx, double ny) { x += nx; y += ny; }

// Circle
Circle::Circle(const string& n, double nx, double ny, double r) : CenteredShape(n, nx, ny), radius(r) {
    cout << "Circle constructed\n";
}
Circle::Circle(const Circle& c) : CenteredShape(c), radius(c.radius) {
    cout << "Circle copied\n";
}
double Circle::area() const { return M_PI * radius * radius; }
double Circle::perimeter() const { return 2 * M_PI * radius; }

// RegularPolygon
RegularPolygon::RegularPolygon(const string& n, double nx, double ny, int nEdges)
    : CenteredShape(n, nx, ny), EdgesNumber(nEdges) {
    cout << "RegularPolygon constructed\n";
}
RegularPolygon::RegularPolygon(const RegularPolygon& r)
    : CenteredShape(r), EdgesNumber(r.EdgesNumber) {
    cout << "RegularPolygon copied\n";
}

// Rectangle
Rectangle::Rectangle(const string& n, double nx, double ny, double nwidth, double nheight)
    : RegularPolygon(n, nx, ny, 4), width(nwidth), height(nheight) {
    cout << "Rectangle constructed\n";
}
Rectangle::Rectangle(const Rectangle& r)
    : RegularPolygon(r), width(r.width), height(r.height) {
    cout << "Rectangle copied\n";
}
double Rectangle::area() const { return width * height; }
double Rectangle::perimeter() const { return 2 * (width + height); }

// Square
Square::Square(const string& n, double nx, double ny, double nside)
    : Rectangle(n, nx, ny, nside, nside) {
    cout << "Square constructed\n";
}
Square::Square(const Square& s)
    : Rectangle(s) {
    cout << "Square copied\n";
}
