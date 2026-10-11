/*
CH-230-A
a10_p8.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// testcomplex.cpp
#include <iostream>
#include "Complex.h"
using namespace std;

int main() {
    Complex c1, c2;

    // read input
    double r, i;
    cout << "Enter c1 (real imag): ";
    cin >> r >> i;
    c1 = Complex(r, i);

    cout << "Enter c2 (real imag): ";
    cin >> r >> i;
    c2 = Complex(r, i);

    // a) conjugate of first
    cout << "conj(c1) = ";
    c1.conjugate().print();
    cout << endl;

    // b) sum
    Complex c3 = c1.add(c2);
    cout << "c1 + c2 = ";
    c3.print();
    cout << endl;

    // c) difference second minus first
    Complex c4 = c2.sub(c1);
    cout << "c2 - c1 = ";
    c4.print();
    cout << endl;

    // d) product
    Complex c5 = c1.mul(c2);
    cout << "c1 * c2 = ";
    c5.print();
    cout << endl;

    return 0;
}
