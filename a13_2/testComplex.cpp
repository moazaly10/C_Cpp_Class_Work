/*
CH-230-A
a13_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <fstream>
#include "Complex.h"

using namespace std;

int main() {
    // open input and output files
    ifstream in1("in1.txt");
    ifstream in2("in2.txt");
    ofstream out("output.txt");

    Complex c1, c2;

    // read complex numbers from files
    in1 >> c1;
    in2 >> c2;

    // perform operations
    Complex sum  = c1 + c2;
    Complex diff = c1 - c2;
    Complex prod = c1 * c2;

    // print results on screen
    cout << "First: " << c1 << endl;
    cout << "Second: " << c2 << endl;
    cout << "Sum: " << sum << endl;
    cout << "Difference: " << diff << endl;
    cout << "Product: " << prod << endl;

    // write results to file
    out << "First: " << c1 << endl;
    out << "Second: " << c2 << endl;
    out << "Sum: " << sum << endl;
    out << "Difference: " << diff << endl;
    out << "Product: " << prod << endl;

    // close files
    in1.close();
    in2.close();
    out.close();

    return 0;
}
