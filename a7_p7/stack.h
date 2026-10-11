/*
CH-230-A
a7_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef STACK_H
#define STACK_H

// fixed-capacity stack of 12 ints
typedef struct stack
{
    unsigned int count;
    int array[12];
} stack;

void init(stack *s);
void push(stack *s, int value);   // prints on success or overflow
void pop(stack *s);                // prints element or underflow
void empty(stack *s);              // prints "Emptying Stack ..." line
int  isEmpty(const stack *s);

#endif
