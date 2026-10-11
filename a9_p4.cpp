/*
CH-230-A
a9_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <string>
using namespace std;

// Calculates difference between two integers
int mycount(int a, int b)
{
    return b - a;
}

// Counts how many times a character appears in a string
int mycount(char c, string s)
{
    int count = 0;
    
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == c)
        {
            count++;
        }
    }
    
    return count;
}

int main()
{
    // Demonstrate both overloads
    cout << mycount(7, 3) << endl;
    cout << mycount('i', "this is a string") << endl;
    
    return 0;
}