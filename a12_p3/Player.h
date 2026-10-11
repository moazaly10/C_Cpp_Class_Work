/*
CH-230-A
a12_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef PLAYER_H
#define PLAYER_H

#include "TournamentMember.h"

class Player : public TournamentMember {
private:
    int number;
    string position;
    int goals;
    bool leftFooted;

public:
    Player();  
    Player(const char*, const char*, const char*, const string&, const string&,
           int, const string&, bool);  
    Player(const Player&);
    ~Player();

    // inline setters/getters
    inline void setNumber(int n){ number = n; }
    inline void setPosition(const string& p){ position = p; }
    inline void setLeftFooted(bool lf){ leftFooted = lf; }

    inline int getNumber() const { return number; }
    inline string getPosition() const { return position; }
    inline int getGoals() const { return goals; }
    inline bool getLeftFooted() const { return leftFooted; }

    void printPlayer() const;
    void incrementGoals();
};

#endif
