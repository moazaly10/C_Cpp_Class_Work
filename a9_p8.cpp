/*
CH-230-A
a9_p8.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <iostream>
using namespace std;

// Subtracts the maximum value from all elements in the array
void subtract_max(int* a, int n)
{
    int maxVal = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i] > maxVal)
        {
            maxVal = a[i];
        }
    }

    for (int i = 0; i < n; i++)
    {
        a[i] -= maxVal;
    }
}

// Releases allocated memory
void deallocate(int* &a)
{
    delete[] a;
    a = nullptr;
}

int main()
{
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    int* a = new int[n];

    cout << "Enter " << n << " integers: ";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    subtract_max(a, n);

    cout << "Array after subtracting max value: ";
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    deallocate(a);

    return 0;
}
