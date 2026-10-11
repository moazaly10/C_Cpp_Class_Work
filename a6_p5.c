/*
CH-230-A
a6_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// print the binary of an unsigned char in reverse (LSB→MSB)
int main()
{
    unsigned char v;

    // read one character and treat it as raw byte
    int ch = getchar();
    if (ch == EOF)
    {
        return 1;
    }
    v = (unsigned char)ch;

    printf("The decimal representation is: %u\n", (unsigned)v);
    printf("The backwards binary representation is: ");

    // stream bits without arrays or conversion
    unsigned char t = v;
    if (t == 0)
    {
        putchar('0');
    }
    else
    {
        while (t)
        {
            putchar((t & 1u) ? '1' : '0');
            t >>= 1;
        }
    }

    putchar('\n');
    return 0;
}