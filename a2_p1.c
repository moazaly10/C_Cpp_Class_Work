/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{


double d1, d2;
scanf("%lf",&d1);
scanf("%lf",&d2);


printf("sum of doubles=%lf\n", d1+d2);

printf("difference of doubles=%lf\n", d1-d2);


printf("square=%lf\n", d1*d1);


int i1,i2;
scanf("%d",&i1);
scanf("%d",&i2);


printf("sum of integers=%d\n", i1+i2);
printf("product of integers=%d\n", i1*i2);


char c1,c2;
scanf(" %c",&c1);
scanf(" %c",&c2);


int sumChars = c1+c2;
int prodChars = c1*c2;
printf("sum of chars=%d\n", sumChars);
printf("product of chars=%d\n", prodChars);
printf("sum of chars=%c\n", sumChars);
printf("product of chars=%c\n", prodChars);
return 0;
}

