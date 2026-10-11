/*
CH-230-A
a9_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
using namespace std;

// return absolute value of a float
float absolute(float x)
{
    if (x < 0)
    {
        return -x;
    }
    else
    {
        return x;
    }
}

int main()
{
    float num;

    // read input
    cin >> num;

    // print result
    cout << absolute(num) << endl;

    return 0;
}