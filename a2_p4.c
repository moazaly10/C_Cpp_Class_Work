/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{
    float a;
    float b;
    float h;

    float square_area;
    float rectangle_area;
    float triangle_area;
    float trapezoid_area;

    // Read inputs
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    // Compute areas
    square_area = a * a;
    rectangle_area = a * b;
    triangle_area = (a * h) / 2.0;
    trapezoid_area = ((a + b) * h) / 2.0;

    // Print results
    printf("square area=%f\n", square_area);
    printf("rectangle area=%f\n", rectangle_area);
    printf("triangle area=%f\n", triangle_area);
    printf("trapezoid area=%f\n", trapezoid_area);

    return 0;
}