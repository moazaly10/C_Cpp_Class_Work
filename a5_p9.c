/*
CH-230-A
a5_p9.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

// allocate a 3D array rows x cols x depth
int ***alloc3d(int rows, int cols, int depth)
{
    int ***a = (int ***)malloc(rows * sizeof(int **));
    if (!a)
    {
        return NULL;
    }

    for (int i = 0; i < rows; i++)
    {
        a[i] = (int **)malloc(cols * sizeof(int *));
        if (!a[i])
        {
            for (int r = 0; r < i; r++)
            {
                free(a[r]);
            }
            free(a);
            return NULL;
        }

        for (int j = 0; j < cols; j++)
        {
            a[i][j] = (int *)malloc(depth * sizeof(int));
            if (!a[i][j])
            {
                for (int jj = 0; jj < j; jj++)
                {
                    free(a[i][jj]);
                }
                for (int r = 0; r < i; r++)
                {
                    for (int jj = 0; jj < cols; jj++)
                    {
                        free(a[r][jj]);
                    }
                    free(a[r]);
                }
                free(a);
                return NULL;
            }
        }
    }
    return a;
}

// free a 3D array
void free3d(int ***a, int rows, int cols)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            free(a[i][j]);
        }
        free(a[i]);
    }
    free(a);
}

// read values row, then column, then depth
void read3d(int ***a, int rows, int cols, int depth)
{
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            for (int k = 0; k < depth; k++)
            {
                scanf("%d", &a[i][j][k]);
            }
        }
    }
}

// print XOY sections (fixed depth, rows x cols)
void print_sections_xoy(int ***a, int rows, int cols, int depth)
{
    for (int k = 0; k < depth; k++)
    {
        printf("Section %d:\n", k + 1);
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                printf("%d", a[i][j][k]);
                if (j + 1 < cols) // space between columns
                {
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
}

int main()
{
    int rows, cols, depth;

    scanf("%d", &rows);
    scanf("%d", &cols);
    scanf("%d", &depth);

    int ***A = alloc3d(rows, cols, depth);
    if (!A)
    {
        return 1;
    }

    read3d(A, rows, cols, depth);
    print_sections_xoy(A, rows, cols, depth);

    free3d(A, rows, cols);
    return 0;
}
