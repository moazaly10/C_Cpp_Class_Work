/*
CH-230-A
a10_p8.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Complex.h
#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
    double re;
    double im;

public:
    Complex();                          // 0 + 0i
    Complex(double r, double i);        // r + i*i
    Complex(const Complex& other);      // copy
    ~Complex();                         // empty

    // setters/getters
    void setReal(double r);
    void setImag(double i);
    double getReal() const;
    double getImag() const;

    // ops
    Complex conjugate() const;
    Complex add(const Complex& z) const;
    Complex sub(const Complex& z) const;    // this - z
    Complex mul(const Complex& z) const;

    void print() const;                     // math form
};

#endif
