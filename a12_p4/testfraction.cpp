/*
CH-230-A
a12_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include "fraction.h"
using namespace std;

int main() {
    Fraction f1, f2;

    cout << "Enter first fraction (num den): ";
    cin >> f1;

    cout << "Enter second fraction (num den): ";
    cin >> f2;

    Fraction product = f1 * f2;
    Fraction quotient = f1 / f2;

    cout << "Product: " << product << endl;
    cout << "Quotient: " << quotient << endl;

    return 0;
}
