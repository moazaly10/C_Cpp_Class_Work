/*
CH-230-A
a3_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// function that prints the trapezoid
void print_form(int n, int m, char c)
{
    // loop for each row (height n)
    for (int i = 0; i < n; i++)
    {
        // print characters for this row
        for (int j = 0; j < m + i; j++)
        {
            printf("%c", c);
        }

        // move to next line after printing one row
        printf("\n");
    }
}

int main()
{
    int n, m;
    char c;

    // read inputs: n, m, and character c
    scanf("%d", &n);
    scanf("%d", &m);
    scanf(" %c", &c);

    // call the function
    print_form(n, m, c);

    return 0;
}
