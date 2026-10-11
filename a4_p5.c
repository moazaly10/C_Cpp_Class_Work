/*
CH-230-A
a4_p5.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Return number of consonant letters in the given string
// This version uses a pointer and address arithmetic
int count_consonants(char *str)
{
    int count = 0;
    char *p = str;

    // walk through the string using pointer p
    while (*p != '\0')
    {
        if (isalpha((unsigned char)*p))
        {
            char c = tolower((unsigned char)*p);
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            {
                count++;
            }
        }
        p++; // move pointer to next character
    }

    return count;
}

int main(void)
{
    char line[102];

    // repeatedly read lines until an empty line is entered
    while (1)
    {
        if (fgets(line, sizeof line, stdin) == NULL)
        {
            // end of input
            break;
        }

        if (strcmp(line, "\n") == 0)
        {
            // empty line, stop execution
            break;
        }

        int n = count_consonants(line);
        printf("Number of consonants=%d\n", n);
    }

    return 0;
}
