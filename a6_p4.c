/*
CH-230-A
a6_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

// define to show intermediate products like the sample output
#define INTERMEDIATE

int main()
{
    int n;
    int *x, *y;
    long long dot = 0;

    // read vector dimension
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 1;
    }

    // allocate the two vectors
    x = (int *)malloc(n * sizeof(int));
    y = (int *)malloc(n * sizeof(int));
    if (!x || !y)
    {
        free(x);
        free(y);
        return 1;
    }

    // read x then y
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &y[i]);
    }

#ifdef INTERMEDIATE
    // header for intermediate products
    printf("The intermediate product values are:\n");
#endif

    // accumulate scalar product, optionally print each product
    for (int i = 0; i < n; i++)
    {
        long long t = (long long)x[i] * (long long)y[i];
#ifdef INTERMEDIATE
        printf("%lld\n", t);
#endif
        dot += t;
    }

#ifdef INTERMEDIATE
    printf("\n");
#endif

    // final result
    printf("The scalar product is: %lld\n", dot);

    free(x);
    free(y);
    return 0;
}