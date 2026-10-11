/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{
    char ch;
    int n;

    printf("Enter a lowercase character: ");
    scanf(" %c", &ch);

    printf("Enter an integer: ");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        printf("%c ", ch - i);
    }

    printf("\n");

    return 0;
}
