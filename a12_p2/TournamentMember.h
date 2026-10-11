/*
CH-230-A
a12_p2.c
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
    char firstname[36];
    char lastname[36];
    char dob[11];
    static string location;    

    string role;
    int age;

public:
    TournamentMember();                                
    TournamentMember(const char*, const char*, const char*, 
                     const string&, int);               
    TournamentMember(const TournamentMember&);          
    ~TournamentMember();                                

    // setters
    void setFirstname(const char* fn) { strncpy(firstname, fn, 35); firstname[35] = '\0'; }
    void setLastname(const char* ln) { strncpy(lastname, ln, 35); lastname[35] = '\0'; }
    void setDOB(const char* d) { strncpy(dob, d, 10); dob[10] = '\0'; }
    void setRole(const string& r) { role = r; }
    void setAge(int a) { age = a; }

    // getters
    const char* getFirstname() const { return firstname; }
    const char* getLastname() const { return lastname; }
    const char* getDOB() const { return dob; }
    string getRole() const { return role; }
    int getAge() const { return age; }
    static string getLocation() { return location; }

    static void changeLocation(const string& newLoc);
    void printInfo() const;
};

#endif
