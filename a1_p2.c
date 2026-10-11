/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
int main() {
    int result; /* The result of our calculation*/
     /*
       Why did the program print a random number before?
       - The variable 'result' was declared but not properly assigned
         before being printed, so it contained a garbage value.
       - In C, uninitialized variables in local scope have undefined values.
       - The fix is to assign the expression to 'result' before printing it.
    */

    result = (2+7)*9 / 3;

    printf("the result is %d\n", result);
    return 0;
}