/*
CH-230-A
a13_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <vector>
#include <stdexcept>

using namespace std;

int main() {

    vector<int> v;

    // add value 8, 20 times
    for (int i = 0; i < 20; i++) {
        v.push_back(8);
    }

    try {
        // access the 21st element (index 20)
        int x = v.at(20);
        cout << x << endl;
    }
    catch (const out_of_range& e) {
        // print exception type/message
        cerr << e.what() << endl;
    }

    return 0;
}
