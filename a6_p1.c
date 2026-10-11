/*
CH-230-A
a6_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// swap two variables of a given type
#define SWAP(a, b, type)  \
do                        \
{                         \
    type _t = (a);        \
    (a) = (b);            \
    (b) = _t;             \
} while (0)

int main()
{
    int a, b;
    double x, y;

    // read two ints and two doubles
    if (scanf("%d", &a) != 1) return 1;
    if (scanf("%d", &b) != 1) return 1;
    if (scanf("%lf", &x) != 1) return 1;
    if (scanf("%lf", &y) != 1) return 1;

    // swap pairs
    SWAP(a, b, int);
    SWAP(x, y, double);

    // print results
    printf("After swapping:\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%.6f\n", x);
    printf("%.6f\n", y);

    return 0;
}
