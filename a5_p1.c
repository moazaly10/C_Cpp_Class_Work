/*
CH-230-A
a5_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

void print_triangle(int n, char ch)
{
    // start from n and go down to 1
    for (int i = n; i >= 1; --i)
    {
        // print the character i times
        for (int j = 0; j < i; ++j)
        {
            printf("%c", ch);
        }
        // go to next line after printing one row
        printf("\n");
    }
}

int main(void)
{
    int n;
    char ch;

    // read number of rows
    scanf("%d", &n);

    // read the character, skip whitespace before it
    scanf(" %c", &ch);

    // call the function to print the triangle
    print_triangle(n, ch);

    return 0;
}
