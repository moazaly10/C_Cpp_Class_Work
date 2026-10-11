/*
CH-230-A
a13_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
using namespace std;

// Base class
class A {
protected:
    int x;

public:
    void setX(int i) { x = i; }
    void print() { cout << x; }
};

// B virtually inherits A
class B : virtual public A {
public:
    B() { setX(10); }
};

// C virtually inherits A
class C : virtual public A {
public:
    C() { setX(20); }
};

// D inherits B and C
class D : public B, public C {
public:
    D() {
        setX(30); // final value set here
    }
};

int main() {
    D d;
    d.print();   // no ambiguity now
    return 0;
}
