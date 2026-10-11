/*
CH-230-A
a4_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <math.h>

#define MAXN 15

// Return geometric mean of arr[0..num-1]
// Assumes num > 0 and all elements are positive
float geometric_mean(float arr[], int num)
{
    double log_sum = 0.0; // use logs to avoid overflow for many numbers
    for (int i = 0; i < num; ++i)
    {
        log_sum += log(arr[i]);
    }
    double g = exp(log_sum / num);
    return (float)g;
}

// Return the maximum value in arr[0..num-1]
float highest(float arr[], int num)
{
    float hi = arr[0];
    for (int i = 1; i < num; ++i)
    {
        if (arr[i] > hi)
        {
            hi = arr[i];
        }
    }
    return hi;
}

// Return the minimum value in arr[0..num-1]
float lowest(float arr[], int num)
{
    float lo = arr[0];
    for (int i = 1; i < num; ++i)
    {
        if (arr[i] < lo)
        {
            lo = arr[i];
        }
    }
    return lo;
}

// Return the sum of arr[0..num-1]
float sum(float arr[], int num)
{
    double s = 0.0;
    for (int i = 0; i < num; ++i)
    {
        s += arr[i];
    }
    return (float)s;
}

int main(void)
{
    float a[MAXN];
    int n = 0;

    // Read up to 15 floats
    // Stop on first negative value (not included)
    while (n < MAXN)
    {
        float x;
        if (scanf("%f", &x) != 1)
        {
            // input ended
            break;
        }
        if (x < 0.0f)
        {
            // negative terminates input and is not stored
            break;
        }
        a[n++] = x;
    }

    // Read the command character after the numbers
    // Commands:
    // m -> geometric mean
    // h -> highest
    // l -> lowest
    // s -> sum
    char cmd;
    // skip any whitespace including newlines
    if (scanf(" %c", &cmd) != 1)
    {
        return 0;
    }

    switch (cmd)
    {
        case 'm':
        {
            float g = geometric_mean(a, n);
            printf("%.6f\n", g);
            break;
        }
        case 'h':
        {
            float v = highest(a, n);
            printf("%.6f\n", v);
            break;
        }
        case 'l':
        {
            float v = lowest(a, n);
            printf("%.6f\n", v);
            break;
        }
        case 's':
        {
            float v = sum(a, n);
            printf("%.6f\n", v);
            break;
        }
        default:
        {
            // unknown option
            printf("Invalid option\n");
            break;
        }
    }

    return 0;
}
