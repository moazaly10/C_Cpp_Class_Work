/*
CH-230-A
a4_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#define PI 3.141592653589793

int main()
{
    double lower;     // lower limit for radius
    double upper;     // upper limit for radius
    double step;      // step size

    // read input values
    scanf("%lf", &lower);
    scanf("%lf", &upper);
    scanf("%lf", &step);

    // print the table
    // each line shows radius, area and perimeter
    for (double x = lower; x <= upper; x += step)
    {
        double area = PI * x * x;       // area of circle
        double perimeter = 2 * PI * x;  // perimeter of circle
        printf("%lf %lf %lf\n", x, area, perimeter);
    }

    return 0;
}
