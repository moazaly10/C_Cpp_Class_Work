/*
CH-230-A
a6_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// macro for least significant bit
#define LSB8(b) ((unsigned)((unsigned char)(b)) & 1u)

int main()
{
    unsigned char v;

    // read one byte
    if (scanf(" %c", &v) != 1)
    {
        return 1;
    }

    // print decimal value and its LSB
    printf("The decimal representation is: %u\n", (unsigned)v);
    printf("The least significant bit is: %u\n", LSB8(v));

    return 0;
}
