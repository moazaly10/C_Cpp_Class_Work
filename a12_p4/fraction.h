/*
CH-230-A
a12_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction();                       // default
    Fraction(int n, int d);           // parametric
    Fraction(const Fraction &f);      // copy constructor

    // operators
    Fraction operator*(const Fraction &f) const;
    Fraction operator/(const Fraction &f) const;

    // friends for I/O
    friend std::ostream &operator<<(std::ostream &out, const Fraction &f);
    friend std::istream &operator>>(std::istream &in, Fraction &f);
};

#endif
