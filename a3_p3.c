/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

float convert(int cm)
{
    return cm / 100000.0;
}

int main()
{
    int cm;
    float km;

    printf("Enter length in centimeters: ");
    scanf("%d", &cm);

    km = convert(cm);

    printf("Length in kilometers: %.5f\n", km);

    return 0;
}
