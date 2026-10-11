/*
CH-230-A
a3_p10.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// Return the product of two float values
float product(float a, float b)
{
    return a * b;
}

// Return the product of two float values by reference
void productbyref(float a, float b, float *p)
{
    *p = a * b;
}

// Add 3 to first float and 11 to second float by reference
void modifybyref(float *a, float *b)
{
    *a = *a + 3;
    *b = *b + 11;
}

int main()
{
    float x, y;
    float result1, result2;

    // Read two float values
    scanf("%f %f", &x, &y);

    // Call product and store the result
    result1 = product(x, y);

    // Call productbyref and store the result
    productbyref(x, y, &result2);

    // Show both results to confirm they match
    printf("product() result: %f\n", result1);
    printf("productbyref() result: %f\n", result2);

    // Modify the values by reference
    modifybyref(&x, &y);

    // Show the effect of modifybyref
    printf("After modifybyref: x = %f, y = %f\n", x, y);

    return 0;
}
