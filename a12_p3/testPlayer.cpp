/*
CH-230-A
a12_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include "Player.h"
using namespace std;

int main() {

    Player p1("John", "Smith", "1999-09-09", "Player", "USA",
               9, "Striker", true);

    Player p2("Michael", "East", "1995-02-10", "Player", "Germany",
               4, "Defender", false);

    Player p3(p2); // copy constructor

    TournamentMember::changeLocation("Hamburg");

    p1.incrementGoals();
    p1.incrementGoals();

    p2.incrementGoals();

    p3.incrementGoals();
    p3.incrementGoals();
    p3.incrementGoals();

    cout << "\n--- Player 1 ---\n";
    p1.printPlayer();

    cout << "\n--- Player 2 ---\n";
    p2.printPlayer();

    cout << "\n--- Player 3 (copy of Player 2) ---\n";
    p3.printPlayer();

    return 0;
}
