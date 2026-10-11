/*
CH-230-A
a11_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Vector.cpp
#include "Vector.h"

// Default constructor
Vector::Vector() : size(0), components(nullptr) {
    cout << "Default Vector constructed\n";
}

// Parameterized constructor
Vector::Vector(int s, const double* vals) : size(s) {
    components = new double[size];
    for (int i = 0; i < size; ++i)
        components[i] = vals ? vals[i] : 0.0;
    cout << "Parameterized Vector constructed\n";
}

// Copy constructor
Vector::Vector(const Vector& v) : size(v.size) {
    components = new double[size];
    for (int i = 0; i < size; ++i)
        components[i] = v.components[i];
    cout << "Vector copied\n";
}

// Destructor
Vector::~Vector() {
    delete[] components;
    cout << "Vector destroyed\n";
}

// Getters and setters
int Vector::getSize() const { return size; }

void Vector::setComponent(int i, double val) {
    if (i >= 0 && i < size)
        components[i] = val;
}

double Vector::getComponent(int i) const {
    return (i >= 0 && i < size) ? components[i] : 0.0;
}

// Print vector
void Vector::print() const {
    cout << "(";
    for (int i = 0; i < size; ++i) {
        cout << components[i];
        if (i < size - 1) cout << " ";
    }
    cout << ")\n";
}

// Compute norm (magnitude)
double Vector::norm() const {
    double sum = 0;
    for (int i = 0; i < size; ++i)
        sum += components[i] * components[i];
    return sqrt(sum);
}

// Scalar product
double Vector::scalarProduct(const Vector& v) const {
    double prod = 0;
    for (int i = 0; i < size; ++i)
        prod += components[i] * v.components[i];
    return prod;
}

// Vector addition
Vector Vector::add(const Vector& v) const {
    Vector result(size);
    for (int i = 0; i < size; ++i)
        result.setComponent(i, components[i] + v.components[i]);
    return result;
}

// Vector subtraction
Vector Vector::subtract(const Vector& v) const {
    Vector result(size);
    for (int i = 0; i < size; ++i)
        result.setComponent(i, components[i] - v.components[i]);
    return result;
}
