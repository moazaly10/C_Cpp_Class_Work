/*
CH-230-A
a9_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    double x;
    string s;

    // read inputs
    cin >> n >> x >> s;

    // repeat printing n times
    for (int i = 0; i < n; i++)
    {
        cout << s << ":" << x << endl;
    }

    return 0;
}
