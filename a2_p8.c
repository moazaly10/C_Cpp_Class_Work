/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{
    int number;
    
    // Read integer from keyboard
    printf("Enter an integer: ");
    scanf("%d", &number);
    
    // Check if the number is divisible by both 2 and 7
    if (number % 2 == 0 && number % 7 == 0)
    {
        printf("The number is divisible by 2 and 7\n");
    }
    else
    {
        printf("The number is NOT divisible by 2 and 7\n");
    }
    
    return 0;
}