/*
CH-230-A
a7_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct person
{
    char name[30];
    int age;
} person;

// comparison by name, tie by age
int cmp_name(const person *a, const person *b)
{
    int s = strcmp(a->name, b->name);
    if (s != 0)
    {
        return s;
    }
    return (a->age > b->age) - (a->age < b->age);
}

// comparison by age, tie by name
int cmp_age(const person *a, const person *b)
{
    if (a->age != b->age)
    {
        return (a->age > b->age) - (a->age < b->age);
    }
    return strcmp(a->name, b->name);
}

// generic bubble sort via function pointer
void bubblesort(person *arr, int n, int (*cmp)(const person *, const person *))
{
    int swapped;
    do
    {
        swapped = 0;
        for (int i = 1; i < n; i++)
        {
            if (cmp(&arr[i - 1], &arr[i]) > 0)
            {
                person t = arr[i - 1];
                arr[i - 1] = arr[i];
                arr[i] = t;
                swapped = 1;
            }
        }
    } while (swapped);
}

// print as in sample
void print_people(const person *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("{%s, %d}; ", arr[i].name, arr[i].age);
    }
    printf("\n");
}

int main()
{
    int n;
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        return 1;
    }

    person *a = (person *)malloc(n * sizeof(person));
    person *b = (person *)malloc(n * sizeof(person));
    if (!a || !b)
    {
        free(a);
        free(b);
        return 1;
    }

    for (int i = 0; i < n; i++)
    {
        scanf("%29s", a[i].name);
        scanf("%d", &a[i].age);
    }
    memcpy(b, a, n * sizeof(person));

    bubblesort(a, n, cmp_name);
    print_people(a, n);

    bubblesort(b, n, cmp_age);
    print_people(b, n);

    free(a);
    free(b);
    return 0;
}
