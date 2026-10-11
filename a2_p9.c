/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main()
{
    char character;
    
    // Read character from keyboard
    printf("Enter a character: ");
    scanf("%c", &character);
    
    // Check if the character is a digit
    if (character >= '0' && character <= '9')
    {
        printf("%c is a digit\n", character);
    }
    // Check if the character is a letter (uppercase or lowercase)
    else if ((character >= 'A' && character <= 'Z') || (character >= 'a' && character <= 'z'))
    {
        printf("%c is a letter\n", character);
    }
    // Otherwise, it's some other symbol
    else
    {
        printf("%c is some other symbol\n", character);
    }
    
    return 0;
}