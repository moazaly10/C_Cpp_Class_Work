/*
CH-230-A
a4_p8.c
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

// Print the matrix in normal 2D form
void print_matrix(int a[][MAXN], int n)
{
    printf("The entered matrix is:\n");
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (j > 0)
            {
                printf(" ");
            }
            printf("%d", a[i][j]);
        }
        printf("\n");
    }
}

// Print all elements strictly under the secondary diagonal
// secondary diagonal is from top right to bottom left
// condition for being under it: i + j > n - 1
void print_under_secondary_diagonal(int a[][MAXN], int n)
{
    printf("\nUnder the secondary diagonal:\n");
    int first = 1;
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (i + j > n - 1)
            {
                if (!first)
                {
                    printf(" ");
                }
                printf("%d", a[i][j]);
                first = 0;
            }
        }
    }
    printf("\n");
}

int main(void)
{
    int n;
    int a[MAXN][MAXN];

    // read size of square matrix
    if (scanf("%d", &n) != 1 || n < 1 || n > MAXN)
    {
        return 0;
    }

    read_matrix(a, n);
    print_matrix(a, n);
    print_under_secondary_diagonal(a, n);

    return 0;
}
