/*
CH-230-A
a13_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <exception>

using namespace std;

// custom exception class
class OwnException : public exception {
public:
    const char* what() const noexcept override {
        return "OwnException";
    }
};

// function that throws different exceptions
void testFunction(int x) {
    if (x == 1)
        throw 'a';
    else if (x == 2)
        throw 12;
    else if (x == 3)
        throw true;
    else
        throw OwnException();
}

int main() {

    // case 1: char
    try {
        testFunction(1);
    }
    catch (char c) {
        cerr << "Caught in main: " << c << endl;
    }

    // case 2: int
    try {
        testFunction(2);
    }
    catch (int i) {
        cerr << "Caught in main: " << i << endl;
    }

    // case 3: bool
    try {
        testFunction(3);
    }
    catch (bool b) {
        cerr << "Caught in main: " << b << endl;
    }

    // case 4: OwnException
    try {
        testFunction(4);
    }
    catch (const OwnException& e) {
        cerr << "Caught in main: " << e.what() << endl;
    }

    return 0;
}
