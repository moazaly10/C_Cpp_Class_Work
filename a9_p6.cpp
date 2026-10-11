/*
CH-230-A
a9_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
#include <cctype>
using namespace std;

// Finds first positive even integer
int myfirst(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > 0 && arr[i] % 2 == 0)
        {
            return arr[i];
        }
    }
    return -1;
}

// Finds first negative double without fractional part
double myfirst(double arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < 0 && arr[i] == static_cast<int>(arr[i]))
        {
            return arr[i];
        }
    }
    return -1.1;
}

// Finds first consonant in char array
char myfirst(char arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        char c = tolower(arr[i]);
        if (isalpha(c) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
        {
            return arr[i];
        }
    }
    return '0';
}

int main()
{
    int intArr[] = { -3, -2, 5, 8, 11 };
    double dblArr[] = { 1.5, -2.3, -4.0, 6.7 };
    char charArr[] = { 'a', 'e', 'i', 'o', 'p', 'u' };

    cout << "First positive even integer: " << myfirst(intArr, 5) << endl;
    cout << "First negative double without fraction: " << myfirst(dblArr, 4) << endl;
    cout << "First consonant: " << myfirst(charArr, 6) << endl;

    return 0;
}