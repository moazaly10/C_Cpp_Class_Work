/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{
    double x, y;
    double *ptr_one, *ptr_two, *ptr_three;
    
    // Read two double variables from keyboard
    printf("Enter the value for x: ");
    scanf("%lf", &x);
    
    printf("Enter the value for y: ");
    scanf("%lf", &y);
    
    // Initialize pointers
    // ptr_one and ptr_two both point to x
    ptr_one = &x;
    ptr_two = &x;
    
    // ptr_three points to y
    ptr_three = &y;
    
    // Print values of variables
    printf("\nValues:\n");
    printf("x = %.2f\n", x);
    printf("y = %.2f\n", y);
    
    // Show that ptr_one and ptr_two contain the same memory address
    printf("\nPointer addresses:\n");
    printf("ptr_one contains address: %p\n", (void*)ptr_one);
    printf("ptr_two contains address: %p\n", (void*)ptr_two);
    printf("ptr_three contains address: %p\n", (void*)ptr_three);
    
    // Demonstrate that ptr_one and ptr_two have the same address
    printf("\nComparison:\n");
    if (ptr_one == ptr_two)
    {
        printf("ptr_one and ptr_two contain the SAME memory address\n");
    }
    
    // Demonstrate that ptr_three has a different address
    if (ptr_one != ptr_three)
    {
        printf("ptr_three contains a DIFFERENT memory address\n");
    }
    
    // Show actual addresses for verification
    printf("\nActual variable addresses:\n");
    printf("Address of x: %p\n", (void*)&x);
    printf("Address of y: %p\n", (void*)&y);
    
    return 0;
}