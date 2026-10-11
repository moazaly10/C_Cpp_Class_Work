/*
CH-230-A
a13_p8.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <exception>

using namespace std;

// third class
class Motor {
public:
    Motor() {
        // motor throws its own problem
        throw runtime_error("This motor has problems");
    }
};

// second class
class Car {
    Motor motor;
public:
    Car() : motor() {}
};

// first class
class Garage {
    Car car;
public:
    Garage() try : car() {
    }
    catch (const exception& e) {
        // translate exception
        throw runtime_error("The car in this garage has problems with the motor");
    }
};

int main() {

    try {
        Garage g;
    }
    catch (const exception& e) {
        cerr << e.what() << endl;
    }

    return 0;
}
