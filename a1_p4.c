/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main(){
    int x,y;
    x=17;
    y=4;
    int sum = x + y;
    int product = x * y;
    int difference = x - y;
    float division = (float) x / y;
    int remainder = x % y;
    printf("x=%d \n y=%d \n", x,y);
    printf("Sum = x + y =%d\n", sum);
    printf("mul = x * y =%d\n", product);
    printf("sub = x - y =%d\n", difference);
    printf("div = x / y =%f\n",division);
    printf("remainder of division=%d\n", remainder);
    return 0;
}