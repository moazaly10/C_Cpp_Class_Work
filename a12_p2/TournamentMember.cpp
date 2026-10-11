/*
CH-230-A
a12_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include "TournamentMember.h"

string TournamentMember::location = "Unknown";

TournamentMember::TournamentMember() {
    strcpy(firstname, "DefaultFirst");
    strcpy(lastname, "DefaultLast");
    strcpy(dob, "2000-01-01");
    role = "Unknown";
    age = 0;
    cout << "Default constructor called\n";
}

TournamentMember::TournamentMember(const char* fn, const char* ln, 
                                   const char* d, const string& r, int a) {
    strncpy(firstname, fn, 35);
    firstname[35] = '\0';
    strncpy(lastname, ln, 35);
    lastname[35] = '\0';
    strncpy(dob, d, 10);
    dob[10] = '\0';
    role = r;
    age = a;
    cout << "Parametric constructor called\n";
}

TournamentMember::TournamentMember(const TournamentMember& other) {
    strcpy(firstname, other.firstname);
    strcpy(lastname, other.lastname);
    strcpy(dob, other.dob);
    role = other.role;
    age = other.age;
    cout << "Copy constructor called\n";
}

TournamentMember::~TournamentMember() {
    cout << "Destructor called for " << firstname << "\n";
}

void TournamentMember::changeLocation(const string& newLoc) {
    location = newLoc;
}

void TournamentMember::printInfo() const {
    cout << "\n--- Tournament Member ---\n";
    cout << "First name: " << firstname << "\n";
    cout << "Last name:  " << lastname << "\n";
    cout << "DOB:        " << dob << "\n";
    cout << "Role:       " << role << "\n";
    cout << "Age:        " << age << "\n";
    cout << "Location:   " << location << "\n";
}
#include "TournamentMember.h"

string TournamentMember::location = "Unknown";

TournamentMember::TournamentMember() {
    strcpy(firstname, "DefaultFirst");
    strcpy(lastname, "DefaultLast");
    strcpy(dob, "2000-01-01");
    role = "Unknown";
    age = 0;
    cout << "Default constructor called\n";
}

TournamentMember::TournamentMember(const char* fn, const char* ln, 
                                   const char* d, const string& r, int a) {
    strncpy(firstname, fn, 35);
    firstname[35] = '\0';
    strncpy(lastname, ln, 35);
    lastname[35] = '\0';
    strncpy(dob, d, 10);
    dob[10] = '\0';
    role = r;
    age = a;
    cout << "Parametric constructor called\n";
}

TournamentMember::TournamentMember(const TournamentMember& other) {
    strcpy(firstname, other.firstname);
    strcpy(lastname, other.lastname);
    strcpy(dob, other.dob);
    role = other.role;
    age = other.age;
    cout << "Copy constructor called\n";
}

TournamentMember::~TournamentMember() {
    cout << "Destructor called for " << firstname << "\n";
}

void TournamentMember::changeLocation(const string& newLoc) {
    location = newLoc;
}

void TournamentMember::printInfo() const {
    cout << "\n--- Tournament Member ---\n";
    cout << "First name: " << firstname << "\n";
    cout << "Last name:  " << lastname << "\n";
    cout << "DOB:        " << dob << "\n";
    cout << "Role:       " << role << "\n";
    cout << "Age:        " << age << "\n";
    cout << "Location:   " << location << "\n";
}
