/*
CH-230-A
a11_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
// dyncreature.cpp
#include "Creature.h"

int main() {
    string input;
    Creature* creature = nullptr;

    cout << "Enter 'wizard', 'object1', 'object2', or 'quit' to exit.\n";

    while (true) {
        cout << "\nYour choice: ";
        cin >> input;

        if (input == "quit") break;

        if (input == "wizard") {
            creature = new Wizard();
            creature->run();
            ((Wizard*)creature)->hover();
        }
        else if (input == "object1") {  // Elf
            creature = new Elf();
            creature->run();
            ((Elf*)creature)->hide();
        }
        else if (input == "object2") {  // Dragon
            creature = new Dragon();
            creature->run();
            ((Dragon*)creature)->breatheFire();
        }
        else {
            cout << "Unknown creature.\n";
            continue;
        }

        delete creature;
        creature = nullptr;
    }

    cout << "\nProgram ended.\n";
    return 0;
}
