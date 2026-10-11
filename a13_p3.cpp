/*
CH-230-A
a13_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    int n;
    cin >> n;   // number of files

    ofstream out("concat.txt", ios::binary);
    if (!out) return 0;

    for (int i = 0; i < n; i++) {
        string filename;
        cin >> filename;

        ifstream in(filename, ios::binary);
        if (!in) return 0;

        char ch;
        while (in.get(ch)) {     // copy file character by character
            out.put(ch);
        }

        if (i != n - 1) {        // newline between files
            out.put('\n');
        }

        in.close();
    }

    out.close();
    return 0;
}
