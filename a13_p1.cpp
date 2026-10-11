/*
CH-230-A
a13_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    string filename;
    cin >> filename;

    // open input file
    ifstream in(filename, ios::binary);

    // build output name: original + "_copy" + extension
    size_t pos = filename.rfind('.');
    string outname;

    if (pos != string::npos)
        outname = filename.substr(0, pos) + "_copy" + filename.substr(pos);
    else
        outname = filename + "_copy";

    // open output file
    ofstream out(outname, ios::binary);

    // copy contents
    out << in.rdbuf();

    return 0;
}
