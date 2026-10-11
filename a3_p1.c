/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/

#include <stdio.h>

int main()
{
    
{
    float x;
    int n;

    printf("Enter a float value: ");
    scanf("%f", &x);

    while (1)
    {
        printf("Enter a positive integer: ");
        scanf("%d", &n);

        if (n > 0)
        {
            break;
        }
        else
        {
            printf("Input is invalid, reenter value\n");
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%f\n", x);
    }

    return 0;
}

}