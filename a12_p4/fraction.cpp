/*
CH-230-A
a12_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include "fraction.h"
using namespace std;

Fraction::Fraction() {
    numerator = 0;
    denominator = 1;
}

Fraction::Fraction(int n, int d) {
    numerator = n;
    denominator = d;
}

Fraction::Fraction(const Fraction &f) {
    numerator = f.numerator;
    denominator = f.denominator;
}

Fraction Fraction::operator*(const Fraction &f) const {
    return Fraction(numerator * f.numerator, denominator * f.denominator);
}

Fraction Fraction::operator/(const Fraction &f) const {
    return Fraction(numerator * f.denominator, denominator * f.numerator);
}

ostream &operator<<(ostream &out, const Fraction &f) {
    out << f.numerator << "/" << f.denominator;
    return out;
}

istream &operator>>(istream &in, Fraction &f) {
    in >> f.numerator >> f.denominator;
    return in;
}
