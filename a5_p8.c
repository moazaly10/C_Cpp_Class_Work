/*
CH-230-A
a5_p8.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

// allocate rows x cols matrix
int **alloc_matrix(int rows, int cols)
{
    int **mat = (int **)malloc(rows * sizeof(int *));
    if (!mat)
    {
        return NULL;
    }
    for (int i = 0; i < rows; i++)
    {
        mat[i] = (int *)malloc(cols * sizeof(int));
        if (!mat[i])
        {
            // free already allocated rows
            for (int r = 0; r < i; r++)
            {
                free(mat[r]);
            }
            free(mat);
            return NULL;
        }
    }
    return mat;
}

// free matrix memory
void free_matrix(int **mat, int rows)
{
    for (int i = 0; i < rows; i++)
    {
        free(mat[i]);
    }
    free(mat);
}

// read matrix elements row by row
void read_matrix(int **mat, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }
}

// print matrix with a title
void print_matrix(const char *title, int **mat, int rows, int cols)
{
    printf("%s\n", title);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d", mat[i][j]);
            if (j + 1 < cols)
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

// C = A(n x m) * B(m x p)
void multiply(int **A, int **B, int **C, int n, int m, int p)
{
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < p; k++)
        {
            int sum = 0;
            for (int j = 0; j < m; j++)
            {
                sum += A[i][j] * B[j][k];
            }
            C[i][k] = sum;
        }
    }
}

int main()
{
    int n, m, p;

    scanf("%d", &n);
    scanf("%d", &m);
    scanf("%d", &p);

    int **A = alloc_matrix(n, m);
    int **B = alloc_matrix(m, p);
    int **C = alloc_matrix(n, p);

    if (!A || !B || !C)
    {
        // clean up any successful allocations
        if (A) free_matrix(A, n);
        if (B) free_matrix(B, m);
        if (C) free_matrix(C, n);
        return 1;
    }

    read_matrix(A, n, m);
    read_matrix(B, m, p);

    print_matrix("Matrix A:", A, n, m);
    print_matrix("Matrix B:", B, m, p);

    multiply(A, B, C, n, m, p);

    print_matrix("The multiplication result AxB:", C, n, p);

    free_matrix(A, n);
    free_matrix(B, m);
    free_matrix(C, n);

    return 0;
}
