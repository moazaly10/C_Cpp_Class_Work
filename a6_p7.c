/*
CH-230-A
a6_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

// set three bit positions in an unsigned char to 1
void set3bits(unsigned char *v, int b1, int b2, int b3)
{
    *v = (unsigned char)(*v | (1u << b1) | (1u << b2) | (1u << b3));
}

// print 8-bit binary MSB→LSB
void print_binary8(unsigned char v)
{
    for (int i = 7; i >= 0; i--)
    {
        putchar((v & (1u << i)) ? '1' : '0');
    }
}

int main()
{
    unsigned char ch;
    int b1, b2, b3;

    // read character then three bit indices
    if (scanf(" %c%d%d%d", &ch, &b1, &b2, &b3) != 4)
    {
        return 1;
    }

    printf("The decimal representation is: %u\n", (unsigned)ch);
    printf("The binary representation is: ");
    print_binary8(ch);
    putchar('\n');

    set3bits(&ch, b1, b2, b3);

    printf("After setting the bits: ");
    print_binary8(ch);
    putchar('\n');

    return 0;
}