/*
CH-230-A
a7_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef void (*Action)(const int *src, int n);

// stable int comparisons for qsort
static int cmp_asc(const void *a, const void *b)
{
    int x = *(const int *)a, y = *(const int *)b;
    return (x > y) - (x < y);
}

static int cmp_desc(const void *a, const void *b)
{
    int x = *(const int *)a, y = *(const int *)b;
    return (y > x) - (y < x);
}

// print array
static void print_arr(const int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (i) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
}

// sort copy ascending and print
static void do_asc(const int *src, int n)
{
    int *w = (int *)malloc(n * sizeof(int));
    memcpy(w, src, n * sizeof(int));
    qsort(w, n, sizeof(int), cmp_asc);
    print_arr(w, n);
    free(w);
}

// sort copy descending and print
static void do_desc(const int *src, int n)
{
    int *w = (int *)malloc(n * sizeof(int));
    memcpy(w, src, n * sizeof(int));
    qsort(w, n, sizeof(int), cmp_desc);
    print_arr(w, n);
    free(w);
}

// quit
static void do_exit(const int *src, int n)
{
    (void)src; (void)n;
    exit(0);
}

// ignore unknown command
static void noop(const int *src, int n)
{
    (void)src; (void)n;
}

int main()
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 1;
    }

    int *arr = (int *)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // command -> action table
    Action act[256];
    for (int i = 0; i < 256; i++)
    {
        act[i] = noop;
    }
    act['a'] = do_asc;
    act['d'] = do_desc;
    act['e'] = do_exit;

    // endless command loop
    while (1)
    {
        char c;
        if (scanf(" %c", &c) != 1)
        {
            break;
        }
        act[(unsigned char)c](arr, n);
    }

    free(arr);
    return 0;
}
