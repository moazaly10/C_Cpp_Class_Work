/*
CH-230-A
a12_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include "TournamentMember.h"
using namespace std;

int main() {

    TournamentMember::changeLocation("Berlin");

    TournamentMember m1("John", "Smith", "1999-03-12", "Player", 25);

    TournamentMember m2("Alex", "Morris", "2001-07-16", "Coach", 35);

    TournamentMember m3(m2);

    m1.printInfo();
    m2.printInfo();
    m3.printInfo();

    TournamentMember::changeLocation("Tokyo");

    cout << "\nAfter changing location:\n";
    m1.printInfo();
    m2.printInfo();
    m3.printInfo();

    return 0;
}
