/*
CH-230-A
a5_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

// Function to divide each element by 5
void divby5(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        arr[i] = arr[i] / 5;
    }
}

// Function to print the array
void printArray(float arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%.3f ", arr[i]);
    }
    printf("\n");
}

int main()
{
    int n;
    float *array;

    scanf("%d", &n);

    array = (float *)malloc(n * sizeof(float));
    if (array == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &array[i]);
    }

    printf("Before:\n");
    printArray(array, n);

    divby5(array, n);

    printf("After:\n");
    printArray(array, n);

    free(array);

    return 0;
}
