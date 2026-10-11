/*
CH-230-A
a12_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef TOURNAMENTMEMBER_H
#define TOURNAMENTMEMBER_H

#include <iostream>
#include <cstring>
using namespace std;

class TournamentMember {
private:
    char fname[36];
    char lname[36];
    char dob[11];
    static string location;
    string role;
    string country;

public:
    TournamentMember();                  // default
    TournamentMember(const char*, const char*, const char*, 
                     const string&, const string&);   // parametric
    TournamentMember(const TournamentMember&);         // copy
    ~TournamentMember();                 // destructor

    // inline setters/getters
    inline void setFname(const char* n) { strcpy(fname, n); }
    inline void setLname(const char* n) { strcpy(lname, n); }
    inline void setDob(const char* d) { strcpy(dob, d); }
    inline void setRole(const string& r) { role = r; }
    inline void setCountry(const string& c) { country = c; }

    inline const char* getFname() const { return fname; }
    inline const char* getLname() const { return lname; }
    inline const char* getDob() const { return dob; }
    inline string getRole() const { return role; }
    inline string getCountry() const { return country; }
    inline static string getLocation() { return location; }

    static void changeLocation(const string& loc);
    void printInfo() const;
};

#endif
