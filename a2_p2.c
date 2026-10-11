/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{
    char c;

    // Read a character
    scanf("%c", &c);

    // Print the character in different formats
    printf("character=%c\n", c);
    printf("decimal=%d\n", c);
    printf("octal=%o\n", c);
    printf("hexadecimal=%x\n", c);

    return 0;
}