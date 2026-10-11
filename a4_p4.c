/*
CH-230-A
a4_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <ctype.h>
#include <string.h>

// Return number of consonant letters in the given string
int count_consonants(char str[])
{
    int count = 0;

    for (int i = 0; str[i] != '\0'; ++i)
    {
        // check if character is alphabetic
        if (isalpha((unsigned char)str[i]))
        {
            char c = tolower((unsigned char)str[i]);
            // if not a vowel then it's a consonant
            if (c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u')
            {
                count++;
            }
        }
    }

    return count;
}

int main(void)
{
    char line[102];

    // repeatedly read lines until an empty line is entered
    while (1)
    {
        // fgets reads a full line including the trailing '\n'
        if (fgets(line, sizeof line, stdin) == NULL)
        {
            // end of input
            break;
        }

        // check if the line is only a newline character
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
