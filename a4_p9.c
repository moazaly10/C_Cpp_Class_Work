/*
CH-230-A
a4_p9.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// Return product of the smallest and largest elements in arr[0..n-1]
int prodminmax(int arr[], int n)
{
    int mn = INT_MAX;
    int mx = INT_MIN;

    for (int i = 0; i < n; ++i)
    {
        if (arr[i] < mn)
        {
            mn = arr[i];
        }
        if (arr[i] > mx)
        {
            mx = arr[i];
        }
    }

    return mn * mx;
}

int main(void)
{
    int n;

    // read size of array
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 0;
    }

    // allocate dynamic array
    int *arr = (int *)malloc((size_t)n * sizeof(int));
    if (arr == NULL)
    {
        return 0;
    }

    // read n integers into arr
    for (int i = 0; i < n; ++i)
    {
        scanf("%d", &arr[i]);
    }

    // compute and print product of min and max
    int result = prodminmax(arr, n);
    printf("%d\n", result);

    // free dynamic memory
    free(arr);

    return 0;
}
