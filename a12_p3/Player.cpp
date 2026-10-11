/*
CH-230-A
a12_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include "Player.h"

Player::Player() : TournamentMember() {
    cout << "Player default constructor\n";
    number = 0;
    position = "None";
    goals = 0;
    leftFooted = false;
}

Player::Player(const char* fn, const char* ln, const char* db,
               const string& r, const string& c,
               int num, const string& pos, bool lf)
               : TournamentMember(fn, ln, db, r, c) {
    cout << "Player parametric constructor\n";
    number = num;
    position = pos;
    goals = 0;
    leftFooted = lf;
}

Player::Player(const Player& p) : TournamentMember(p) {
    cout << "Player copy constructor\n";
    number = p.number;
    position = p.position;
    goals = p.goals;
    leftFooted = p.leftFooted;
}

Player::~Player() {
    cout << "Player destructor\n";
}

void Player::incrementGoals() {
    goals++;
}

void Player::printPlayer() const {
    printInfo();
    cout << "Number: " << number << endl;
    cout << "Position: " << position << endl;
    cout << "Goals: " << goals << endl;
    cout << "Left Footed: " << (leftFooted ? "Yes" : "No") << endl;
}
