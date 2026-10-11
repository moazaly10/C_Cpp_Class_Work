/*
CH-230-A
a13_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
using namespace std;

// Class representing a complex number (a + bi)
class Complex {
private:
    double real;   // real part
    double imag;   // imaginary part

public:
    // constructors & destructor
    Complex();
    Complex(double r, double i);
    Complex(const Complex& other);
    ~Complex();

    // assignment operator
    Complex& operator=(const Complex& other);

    // arithmetic operators
    Complex operator+(const Complex& other) const;
    Complex operator-(const Complex& other) const;
    Complex operator*(const Complex& other) const;

    // input/output stream operators
    friend istream& operator>>(istream& in, Complex& c);
    friend ostream& operator<<(ostream& out, const Complex& c);
};

#endif
