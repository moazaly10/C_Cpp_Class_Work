/*
CH-230-A
a5_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

// Compute scalar product of two vectors
double scalar_product(double v[], double w[], int n)
{
    double result = 0.0;
    for (int i = 0; i < n; i++)
    {
        result += v[i] * w[i];
    }
    return result;
}

// Find smallest element and its position
void find_smallest(double arr[], int n, double *value, int *pos)
{
    *value = arr[0];
    *pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < *value)
        {
            *value = arr[i];
            *pos = i;
        }
    }
}

// Find largest element and its position
void find_largest(double arr[], int n, double *value, int *pos)
{
    *value = arr[0];
    *pos = 0;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > *value)
        {
            *value = arr[i];
            *pos = i;
        }
    }
}

int main()
{
    int n;
    double *v, *w;
    double val;
    int pos;

    scanf("%d", &n);

    v = (double *)malloc(n * sizeof(double));
    w = (double *)malloc(n * sizeof(double));
    if (v == NULL || w == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &v[i]);
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%lf", &w[i]);
    }

    double sp = scalar_product(v, w, n);
    printf("Scalar product=%.6f\n", sp);

    find_smallest(v, n, &val, &pos);
    printf("The smallest = %.6f\n", val);
    printf("Position of smallest = %d\n", pos);

    find_largest(v, n, &val, &pos);
    printf("The largest = %.6f\n", val);
    printf("Position of largest = %d\n", pos);

    find_smallest(w, n, &val, &pos);
    printf("The smallest = %.6f\n", val);
    printf("Position of smallest = %d\n", pos);

    find_largest(w, n, &val, &pos);
    printf("The largest = %.6f\n", val);
    printf("Position of largest = %d\n", pos);

    free(v);
    free(w);

    return 0;
}
