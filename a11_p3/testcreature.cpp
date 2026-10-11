/*
CH-230-A
a11_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// testcreature.cpp
#include "Creature.h"

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
