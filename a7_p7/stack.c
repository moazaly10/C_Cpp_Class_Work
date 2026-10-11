/*
CH-230-A
a7_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include "stack.h"

void init(stack *s)
{
    s->count = 0;
}

void push(stack *s, int value)
{
    if (s->count >= 12)
    {
        printf("Stack Overflow\n");
        return;
    }
    s->array[s->count++] = value;
    printf("Pushing %d\n", value);
}

void pop(stack *s)
{
    if (s->count == 0)
    {
        printf("Popping Stack Underflow\n");
        return;
    }
    int v = s->array[--s->count];
    printf("Popping %d\n", v);
}

void empty(stack *s)
{
    printf("Emptying Stack");
    if (s->count == 0)
    {
        printf("\n");
        return;
    }

    // pop and print on one line
    while (s->count > 0)
    {
        int v = s->array[--s->count];
        printf(" %d", v);
    }
    printf("\n");
}

int isEmpty(const stack *s)
{
    return s->count == 0;
}
