/*
CH-230-A
a5_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

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
    float numbers[] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    printf("Before:\n");
    printArray(numbers, size);

    divby5(numbers, size);

    printf("After:\n");
    printArray(numbers, size);

    return 0;
}
