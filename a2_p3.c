/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{
    int weeks;
    int days;
    int hours;
    int total_hours;

    // Read input values
    printf("Enter number of weeks: ");
    scanf("%d", &weeks);

    printf("Enter number of days: ");
    scanf("%d", &days);

    printf("Enter number of hours: ");
    scanf("%d", &hours);

    // Compute total hours
    total_hours = (weeks * 7 * 24) + (days * 24) + hours;

    // Output result
    printf("Total hours = %d\n", total_hours);

    return 0;
}
