/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{
    int a;
    int *ptr_a;
    
    // Read integer from keyboard
    printf("Enter an integer: ");
    scanf("%d", &a);
    
    // Print the value
    printf("Value of a: %d\n", a);
    
    // Declare and initialize pointer to a
    ptr_a = &a;
    
    // Print the address contained in the pointer variable
    printf("Address contained in ptr_a: %p\n", (void*)ptr_a);
    
    // Increase the value of a by 5 using the pointer variable
    *ptr_a = *ptr_a + 5;
    
    // Print the modified value and address
    printf("Modified value of a: %d\n", *ptr_a);
    printf("Address of variable a: %p\n", (void*)&a);
    
    return 0;
}