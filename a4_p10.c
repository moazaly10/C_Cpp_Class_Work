/*
CH-230-A
a4_p10.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <math.h>

// Compute product, division, a^b, and 1/b
// Results are returned by reference through the pointer parameters
void proddivpowinv(float a, float b,
                   float *prod,
                   float *div,
                   float *pwr,
                   float *invb)
{
    *prod = a * b;      // product of a and b
    *div  = a / b;      // division a/b
    *pwr  = powf(a, b); // a raised to the power b
    *invb = 1.0f / b;   // reciprocal of b
}

int main(void)
{
    float a, b;
    float prod, div, pwr, invb;

    // read two floats from input
    if (scanf("%f %f", &a, &b) != 2)
    {
        return 0;
    }

    // call the function to compute all results
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);

    // print the results
    printf("product=%.6f\n", prod);
    printf("division=%.6f\n", div);
    printf("a^b=%.6f\n", pwr);
    printf("1/b=%.6f\n", invb);

    return 0;
}
