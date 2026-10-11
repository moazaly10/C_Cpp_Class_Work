/*
CH-230-A
a9_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
using namespace std;

// Swap two integers by reference
void swapping(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

// Swap two floats by reference
void swapping(float &a, float &b)
{
    float temp = a;
    a = b;
    b = temp;
}

// Swap two character pointers by reference
void swapping(const char* &a, const char* &b)
{
    const char* temp = a;
    a = b;
    b = temp;
}

int main(void)
{
    int a = 7, b = 15;
    float x = 3.5, y = 9.2;
    const char *str1 = "One";
    const char *str2 = "Two";

    cout << "Before swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;

    swapping(a, b);
    swapping(x, y);
    swapping(str1, str2);

    cout << "\nAfter swapping:" << endl;
    cout << "a = " << a << ", b = " << b << endl;
    cout << "x = " << x << ", y = " << y << endl;
    cout << "str1 = " << str1 << ", str2 = " << str2 << endl;

    return 0;
}
