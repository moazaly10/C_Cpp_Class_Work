/*
CH-230-A
a3_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// function that converts kilograms and grams to pounds
float to_pounds(int kg, int g)
{
    // convert grams to kilograms
    float total_kg = kg + g / 1000.0;

    // 1 kilogram = 2.2 pounds
    return total_kg * 2.2;
}

int main()
{
    int kg, g;

    // read kilograms and grams from input
    scanf("%d", &kg);
    scanf("%d", &g);

    // call the conversion function
    float pounds = to_pounds(kg, g);

    // print the result
    printf("Result of conversion: %f\n", pounds);

    return 0;
}
