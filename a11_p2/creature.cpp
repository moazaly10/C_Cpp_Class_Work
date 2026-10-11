/*
CH-230-A
a11_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <string>
using namespace std;

// Base class
class Creature {
protected:
    int distance;
public:
    Creature() : distance(10) { cout << "Creature constructed\n"; }
    ~Creature() { cout << "Creature destructed\n"; }

    void run() const { cout << "Running " << distance << " meters!\n"; }
};

// Derived class 1
class Wizard : public Creature {
    int power;
public:
    Wizard() : power(5) { cout << "Wizard constructed\n"; }
    ~Wizard() { cout << "Wizard destructed\n"; }

    void hover() const { cout << "Hovering " << (power * distance) << " meters!\n"; }
};

// Derived class 2
class Elf : public Creature {
    string forest;
public:
    Elf(string f = "Enchanted Woods") : forest(f) { cout << "Elf constructed\n"; }
    ~Elf() { cout << "Elf destructed\n"; }

    void hide() const { cout << "Elf hides in " << forest << ".\n"; }
};

// Derived class 3
class Dragon : public Creature {
    int firePower;
public:
    Dragon(int f = 50) : firePower(f) { cout << "Dragon constructed\n"; }
    ~Dragon() { cout << "Dragon destructed\n"; }

    void breatheFire() const { cout << "Dragon breathes fire of power " << firePower << "!\n"; }
};

// Main program
int main() {
    cout << "Creating Wizard...\n";
    Wizard w;
    w.run();
    w.hover();

    cout << "\nCreating Elves...\n";
    Elf e1;
    Elf e2("Dark Forest");
    e1.run();
    e1.hide();
    e2.hide();

    cout << "\nCreating Dragons...\n";
    Dragon d1;
    Dragon d2(100);
    d1.run();
    d1.breatheFire();
    d2.breatheFire();

    cout << "\nAll creatures done.\n";
    return 0;
}
