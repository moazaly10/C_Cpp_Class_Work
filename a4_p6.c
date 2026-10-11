/*
CH-230-A
a4_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Find the two greatest values in one pass
// a points to the array, n is the length (assume n >= 2)
// max1 receives the greatest, max2 receives the second greatest
void two_max(const int *a, int n, int *max1, int *max2)
{
    int m1 = INT_MIN;
    int m2 = INT_MIN;

    for (int i = 0; i < n; ++i)
    {
        int x = a[i];

        // if x becomes the new greatest, shift the previous greatest to second
        if (x > m1)
        {
            m2 = m1;
            m1 = x;
        }
        // otherwise maybe x is the new second greatest
        else if (x > m2)
        {
            m2 = x;
        }
    }

    *max1 = m1;
    *max2 = m2;
}

int main(void)
{
    int n;

    // read number of elements
    if (scanf("%d", &n) != 1 || n < 2)
    {
        // need at least two values
        return 0;
    }

    // allocate dynamic memory for n integers
    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (!arr)
    {
        return 0;
    }

    // read n integers from keyboard
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // compute two greatest values
    int max1, max2;
    two_max(arr, n, &max1, &max2);

    // print results
    printf("greatest=%d second_greatest=%d\n", max1, max2);

    // release dynamic memory
    free(arr);

    return 0;
}
