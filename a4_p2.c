/*
CH-230-A
a4_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main(void)
{
    // Read a string that may contain spaces
    // Maximum length 50 characters plus room for '\n' and '\0'
    char s[52];

    // fgets reads until newline or array is full
    if (fgets(s, sizeof s, stdin) == NULL)
    {
        return 0;
    }

    // Print the characters vertically in a zig zag pattern
    // even index characters start at the left margin
    // odd index characters are indented with two spaces
    for (int i = 0; s[i] != '\0' && s[i] != '\n'; ++i)
    {
        if (i % 2 == 0)
        {
            // even index, no indentation
            printf("%c\n", s[i]);
        }
        else
        {
            // odd index, indent with two spaces
            printf("  %c\n", s[i]);
        }
    }

    return 0;
}
