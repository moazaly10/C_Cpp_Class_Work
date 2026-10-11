/*
CH-230-A
a3_p9.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// Function that returns the sum of elements at positions 2 and 5
// Returns -111 if these positions are not valid
double sum25(double v[], int n)
{
    // Check if we have at least 6 elements
    if (n < 6)
    {
        printf("Positions 2 and 5 are not valid\n");
        return -111;
    }

    // Positions are counted from 1, so use index 1 and 4
    return v[1] + v[4];
}

int main()
{
    int n;
    double v[20]; // Array with maximum 20 elements

    // Read the number of elements
    scanf("%d", &n);

    // Read n double values
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
    }

    // Compute the sum
    double result = sum25(v, n);

    // Print the sum only if valid
    if (result != -111)
    {
        printf("sum=%f\n", result);
    }

    return 0;
}
