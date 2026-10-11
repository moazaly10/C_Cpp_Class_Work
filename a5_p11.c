/*
CH-230-A
a5_p11.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// recursive helper testing divisors from d upward
int is_prime_helper(int x, int d)
{
    if (d * d > x)
    {
        return 1;
    }
    if (x % d == 0)
    {
        return 0;
    }
    return is_prime_helper(x, d + 1);
}

// wrapper handling small x
int is_prime(int x)
{
    if (x <= 1)
    {
        return 0;
    }
    return is_prime_helper(x, 2);
}

int main()
{
    int x;

    if (scanf("%d", &x) != 1)
    {
        return 1;
    }

    if (is_prime(x))
    {
        printf("%d is prime\n", x);
    }
    else
    {
        printf("%d is not prime\n", x);
    }

    return 0;
}
