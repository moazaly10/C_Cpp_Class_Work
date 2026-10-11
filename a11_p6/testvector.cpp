/*
CH-230-A
a11_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// testvector.cpp
#include "Vector.h"

int main() {
    double arr1[] = {1.0, 2.0, 3.0};
    double arr2[] = {4.0, 5.0, 6.0};

    cout << "Creating vectors...\n";

    Vector v1;                       // default
    Vector v2(3, arr1);              // parameterized
    Vector v3(v2);                   // copy constructor
    Vector v4(3, arr2);              // parameterized

    cout << "\nVector v2: ";
    v2.print();
    cout << "Vector v4: ";
    v4.print();

    cout << "\nNorm of v2: " << v2.norm() << endl;
    cout << "Scalar product (v2 · v4): " << v2.scalarProduct(v4) << endl;

    Vector sum = v2.add(v4);
    Vector diff = v2.subtract(v4);

    cout << "\nSum (v2 + v4): ";
    sum.print();

    cout << "Difference (v2 - v4): ";
    diff.print();

    cout << "\nProgram complete.\n";
    return 0;
}
