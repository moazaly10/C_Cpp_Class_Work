/*
CH-230-A
a6_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// pairwise min and max
#define MIN2(x, y) ((x) < (y) ? (x) : (y))
#define MAX2(x, y) ((x) > (y) ? (x) : (y))

// min and max of three using the pairwise macros
#define MIN3(a, b, c) MIN2(MIN2((a), (b)), (c))
#define MAX3(a, b, c) MAX2(MAX2((a), (b)), (c))

// mid-range = (min + max) / 2
#define MIDRANGE(a, b, c) ( ((double)MIN3((a), (b), (c)) + (double)MAX3((a), (b), (c))) / 2.0 )

int main()
{
    int a, b, c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    printf("The mid-range is: %.6f\n", MIDRANGE(a, b, c));

    return 0;
}
