/*
CH-230-A
a13_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include "Complex.h"

// default constructor
Complex::Complex() : real(0), imag(0) {}

// parameterized constructor
Complex::Complex(double r, double i) : real(r), imag(i) {}

// copy constructor
Complex::Complex(const Complex& other) {
    real = other.real;
    imag = other.imag;
}

// destructor
Complex::~Complex() {}

// assignment operator
Complex& Complex::operator=(const Complex& other) {
    if (this != &other) {
        real = other.real;
        imag = other.imag;
    }
    return *this;
}

// addition
Complex Complex::operator+(const Complex& other) const {
    return Complex(real + other.real, imag + other.imag);
}

// subtraction
Complex Complex::operator-(const Complex& other) const {
    return Complex(real - other.real, imag - other.imag);
}

// multiplication
Complex Complex::operator*(const Complex& other) const {
    return Complex(
        real * other.real - imag * other.imag,
        real * other.imag + imag * other.real
    );
}

// input operator (real imag)
istream& operator>>(istream& in, Complex& c) {
    in >> c.real >> c.imag;
    return in;
}

// output operator (a + bi)
ostream& operator<<(ostream& out, const Complex& c) {
    out << c.real << " + " << c.imag << "i";
    return out;
}
