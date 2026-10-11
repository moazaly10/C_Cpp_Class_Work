/*
CH-230-A
a5_p10.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// print n, n-1, ..., 1 recursively
void print_down(int n)
{
    if (n <= 0)
    {
        return;
    }

    printf("%d\n", n);
    print_down(n - 1);
}

int main()
{
    int n;

    // read positive integer and print countdown
    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    print_down(n);
    return 0;
}
