/*
CH-230-A
a3_p8.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// compute the sum of all elements in the array
float compute_sum(float arr[], int n)
{
    float sum = 0.0f;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum;
}

// compute the average of all elements in the array
float compute_average(float arr[], int n)
{
    if (n == 0)
    {
        // avoid division by zero if no numbers were entered
        return 0.0f;
    }
    return compute_sum(arr, n) / n;
}

int main()
{
    float numbers[10];   // store up to 10 floats
    int count = 0;       // track how many numbers were entered
    float input;

    // read numbers until -99.0 is entered or we reach 10 numbers
    while (count < 10)
    {
        printf("Enter a float (-99.0 to stop): ");

        // read one float from the user
        if (scanf("%f", &input) != 1)
        {
            // invalid input ends program
            return 1;
        }

        // stop if user enters sentinel value -99.0
        if (input == -99.0f)
        {
            break;
        }

        // store the number and increase count
        numbers[count] = input;
        count++;
    }

    // calculate results
    float sum = compute_sum(numbers, count);
    float average = compute_average(numbers, count);

    // print results
    printf("Sum: %.2f\n", sum);
    printf("Average: %.2f\n", average);

    return 0;
}