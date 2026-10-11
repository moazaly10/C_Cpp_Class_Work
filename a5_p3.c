/*
CH-230-A
a5_p3.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <string.h>

// Function to count lowercase letters using a pointer
int count_lower(char *str)
{
    int count = 0;
    char *p = str;

    while (*p != '\0')
    {
        if (*p >= 'a' && *p <= 'z')
        {
            count++;
        }
        p++;
    }

    return count;
}

int main()
{
    char input[51];

    while (1)
    {
        printf("Enter a string: ");
        if (fgets(input, sizeof(input), stdin) == NULL)
        {
            break;
        }

        // Stop if the string is empty (only newline)
        if (input[0] == '\n')
        {
            break;
        }

        // Remove trailing newline
        input[strcspn(input, "\n")] = '\0';

        int lowercase_count = count_lower(input);
        printf("Number of lowercase characters: %d\n", lowercase_count);
        
        break;
    }

    return 0;
}
