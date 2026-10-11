/*
CH-230-A
a12_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include "TournamentMember.h"

string TournamentMember::location = "Bremen";

TournamentMember::TournamentMember() {
    cout << "TournamentMember default constructor\n";
    strcpy(fname, "None");
    strcpy(lname, "None");
    strcpy(dob, "0000-00-00");
    role = "None";
    country = "None";
}

TournamentMember::TournamentMember(const char* fn, const char* ln,
                                   const char* db, const string& r,
                                   const string& c) {
    cout << "TournamentMember parametric constructor\n";
    strcpy(fname, fn);
    strcpy(lname, ln);
    strcpy(dob, db);
    role = r;
    country = c;
}

TournamentMember::TournamentMember(const TournamentMember& t) {
    cout << "TournamentMember copy constructor\n";
    strcpy(fname, t.fname);
    strcpy(lname, t.lname);
    strcpy(dob, t.dob);
    role = t.role;
    country = t.country;
}

TournamentMember::~TournamentMember() {
    cout << "TournamentMember destructor\n";
}

void TournamentMember::changeLocation(const string& loc) {
    location = loc;
}

void TournamentMember::printInfo() const {
    cout << "Name: " << fname << " " << lname << endl;
    cout << "DOB: " << dob << endl;
    cout << "Role: " << role << endl;
    cout << "Country: " << country << endl;
    cout << "Location: " << location << endl;
}
