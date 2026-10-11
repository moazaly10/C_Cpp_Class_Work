/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{
    char c;                 // command character
    int n;                  // number of temperatures
    double temps[100];      // array to store up to 100 temperatures
    double sum = 0.0;       // variable to hold the sum of temperatures

    // read the character and the number of temperatures
    scanf(" %c", &c);
    scanf("%d", &n);

    // read n temperature values and compute their sum
    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &temps[i]);
        sum += temps[i];
    }

    // switch statement to handle different commands
    switch (c)
    {
        // if c = 's', print the sum of the temperatures
        case 's':
        {
            printf("Sum: %.2f\n", sum);
            break;
        }

        // if c = 'p', print all temperatures in Celsius
        case 'p':
        {
            printf("Temperatures in Celsius:\n");
            for (int i = 0; i < n; i++)
            {
                printf("%.2f ", temps[i]);
            }
            printf("\n");
            break;
        }

        // if c = 't', print all temperatures converted to Fahrenheit
        case 't':
        {
            printf("Temperatures in Fahrenheit:\n");
            for (int i = 0; i < n; i++)
            {
                double f = (9.0 / 5.0) * temps[i] + 32; // convert Celsius to Fahrenheit
                printf("%.2f ", f);
            }
            printf("\n");
            break;
        }

        // if c is anything else, print the average of the temperatures
        default:
        {
            double average = sum / n;
            printf("Average: %.2f\n", average);
            break;
        }
    }

    return 0;
}
