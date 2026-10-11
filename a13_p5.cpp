/*
CH-230-A
a13_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
using namespace std;

class A {
protected:
    int x;

public:
    A(int i) {
        x = i;
    }

    void print() {
        cout << x;
    }
};

class B : virtual public A {
public:
    B() : A(10) { }
};

class C : virtual public A {
public:
    C() : A(10) { }
};

class D : public B, public C {
public:
    // A must be initialized here because it is a virtual base class
    D() : A(10), B(), C() { }
};

int main() {
    D d;
    d.print();
    return 0;
}
