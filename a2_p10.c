/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{
    int n;
    int i;
    
    // Input validation using while loop
    while (1)
    {
        printf("Enter an integer n: ");
        scanf("%d", &n);
        
        if (n > 0)
        {
            break;  // Valid input, exit the loop
        }
        else
        {
            printf("Invalid input! Please enter a positive non-zero integer.\n");
        }
    }
    
    // Print the conversion table from 1 to n days
    printf("\nDays to Hours Conversion Table:\n");
    
    i = 1;
    while (i <= n)
    {
        if (i == 1)
        {
            printf("%d day = %d hours\n", i, i * 24);
        }
        else
        {
            printf("%d days = %d hours\n", i, i * 24);
        }
        i++;
    }
    
    return 0;
}