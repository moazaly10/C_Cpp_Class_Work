/*
CH-230-A
a12_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
    Fraction f1, f2;

    cout << "Enter first fraction (format a/b): ";
    cin >> f1;

    cout << "Enter second fraction (format a/b): ";
    cin >> f2;

    cout << "Greater fraction: ";
    if (f1 > f2) cout << f1 << "\n";
    else cout << f2 << "\n";

    Fraction sum = f1 + f2;
    Fraction diff = f1 - f2;
    Fraction prod = f1 * f2;
    Fraction quot = f1 / f2;

    cout << "Sum = " << sum << "\n";
    cout << "Difference = " << diff << "\n";
    cout << "Product = " << prod << "\n";
    cout << "Quotient = " << quot << "\n";

    return 0;
}
