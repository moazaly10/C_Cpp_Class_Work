/*
CH-230-A
a4_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

#define MAXN 30

// Read an n x n matrix from stdin (row by row)
void read_matrix(int a[][MAXN], int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &a[i][j]);
        }
    }
}

// Print the matrix in its natural 2D form
void print_matrix(int a[][MAXN], int n)
{
    printf("The entered matrix is:\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            // print a space between numbers on the same row
            if (j > 0)
            {
                printf(" ");
            }
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

// Print all elements strictly under the main diagonal (i > j)
void print_under_main_diagonal(int a[][MAXN], int n)
{
    printf("\nUnder the main diagonal:\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < i; ++j) // j < i ensures we are under the diagonal
        {
            // print one per line or separated by spaces – example shows spaces
            // keep spaces between numbers
            static int first = 1;
            if (!first)
            {
                printf(" ");
            }
            printf("%d", a[i][j]);
            first = 0;
        }
    }
    printf("\n");
}

int main(void)
{
    int n;
    int a[MAXN][MAXN];

    // Read n (size of the square matrix), assume valid and 1 <= n <= 30
    if (scanf("%d", &n) != 1 || n < 1 || n > MAXN)
    {
        return 0;
    }

    read_matrix(a, n);
    print_matrix(a, n);
    print_under_main_diagonal(a, n);

    return 0;
}
