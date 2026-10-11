/*
CH-230-A
a11_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// Vector.h
#include <iostream>
#include <cmath>
using namespace std;

class Vector {
private:
    int size;
    double* components;

public:
    Vector();                                      // default constructor
    Vector(int s, const double* vals = nullptr);   // parameterized constructor
    Vector(const Vector& v);                       // copy constructor
    ~Vector();                                     // destructor

    int getSize() const;
    void setComponent(int i, double val);
    double getComponent(int i) const;

    void print() const;                            // print vector
    double norm() const;                           // magnitude of vector
    double scalarProduct(const Vector& v) const;   // dot product
    Vector add(const Vector& v) const;             // vector addition
    Vector subtract(const Vector& v) const;        // vector subtraction
};
