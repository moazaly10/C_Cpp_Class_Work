/*
CH-230-A
a12_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;

class Fraction {
private:
    int num;
    int den;

    int gcd(int a, int b) const {
        while (b != 0) {
            int t = a % b;
            a = b;
            b = t;
        }
        return a;
    }

    int lcm(int a, int b) const {
        return a / gcd(a, b) * b;
    }

public:
    Fraction();
    Fraction(int n, int d);
    Fraction(const Fraction &f);

    Fraction& operator=(const Fraction &f);

    friend istream& operator>>(istream &in, Fraction &f);
    friend ostream& operator<<(ostream &out, const Fraction &f);

    Fraction operator+(const Fraction &f) const;
    Fraction operator-(const Fraction &f) const;
    Fraction operator*(const Fraction &f) const;
    Fraction operator/(const Fraction &f) const;

    bool operator<(const Fraction &f) const;
    bool operator>(const Fraction &f) const;
};

#endif
