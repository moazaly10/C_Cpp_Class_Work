/*
CH-230-A
a12_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include "fraction.h"

Fraction::Fraction() : num(0), den(1) {}

Fraction::Fraction(int n, int d) : num(n), den(d) {}

Fraction::Fraction(const Fraction &f) : num(f.num), den(f.den) {}

Fraction& Fraction::operator=(const Fraction &f) {
    num = f.num;
    den = f.den;
    return *this;
}

istream& operator>>(istream &in, Fraction &f) {
    char slash;
    in >> f.num >> slash >> f.den;
    return in;
}

ostream& operator<<(ostream &out, const Fraction &f) {
    out << f.num << "/" << f.den;
    return out;
}

Fraction Fraction::operator+(const Fraction &f) const {
    int common = lcm(den, f.den);
    int a = num * (common / den);
    int b = f.num * (common / f.den);
    return Fraction(a + b, common);
}

Fraction Fraction::operator-(const Fraction &f) const {
    int common = lcm(den, f.den);
    int a = num * (common / den);
    int b = f.num * (common / f.den);
    return Fraction(a - b, common);
}

Fraction Fraction::operator*(const Fraction &f) const {
    return Fraction(num * f.num, den * f.den);
}

Fraction Fraction::operator/(const Fraction &f) const {
    return Fraction(num * f.den, den * f.num);
}

bool Fraction::operator<(const Fraction &f) const {
    return (num * f.den) < (f.num * den);
}

bool Fraction::operator>(const Fraction &f) const {
    return (num * f.den) > (f.num * den);
}
