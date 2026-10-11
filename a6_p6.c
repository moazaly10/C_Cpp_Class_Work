/*
CH-230-A
a6_p6.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// print 8-bit binary of an unsigned char (MSB -> LSB)
int main()
{
    unsigned char v;

    // read one byte as a character
    int ch = getchar();
    if (ch == EOF)
    {
        return 1;
    }
    v = (unsigned char)ch;

    printf("The decimal representation is: %u\n", (unsigned)v);
    printf("The binary representation is: ");

    // mask from bit 7 down to bit 0
    for (int i = 7; i >= 0; i--)
    {
        unsigned char mask = (unsigned char)(1u << i);
        putchar((v & mask) ? '1' : '0');
    }
    putchar('\n');

    return 0;
}