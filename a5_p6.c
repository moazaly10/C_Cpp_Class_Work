/*
CH-230-A
a5_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    float *arr;
    float *p;

    scanf("%d", &n);

    arr = (float *)malloc(n * sizeof(float));
    if (arr == NULL)
    {
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &arr[i]);
    }

    p = arr;
    while (p < arr + n && *p >= 0)
    {
        p++;
    }

    printf("Before the first negative value: %ld elements\n", p - arr);

    free(arr);

    return 0;
}