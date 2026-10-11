/*
CH-230-A
a10_p8.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Complex.cpp
#include <iostream>
#include <cmath>
#include "Complex.h"
using namespace std;

Complex::Complex() : re(0.0), im(0.0) {}
Complex::Complex(double r, double i) : re(r), im(i) {}
Complex::Complex(const Complex& other) : re(other.re), im(other.im) {}
Complex::~Complex() {}

void Complex::setReal(double r) { re = r; }
void Complex::setImag(double i) { im = i; }
double Complex::getReal() const { return re; }
double Complex::getImag() const { return im; }

Complex Complex::conjugate() const { return Complex(re, -im); }

Complex Complex::add(const Complex& z) const {
    return Complex(re + z.re, im + z.im);
}

Complex Complex::sub(const Complex& z) const {
    return Complex(re - z.re, im - z.im);
}

Complex Complex::mul(const Complex& z) const {
    // (a+bi)(c+di) = (ac-bd) + (bc+ad)i
    double r = re * z.re - im * z.im;
    double i = im * z.re + re * z.im;
    return Complex(r, i);
}

void Complex::print() const {
    cout << re;
    if (im >= 0) cout << " + " << im << "i";
    else         cout << " - " << -im << "i";
}
