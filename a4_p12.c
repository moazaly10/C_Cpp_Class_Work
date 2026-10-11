/*
CH-230-A
a4_p12.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <string.h>

// Replace every occurrence of character c in str with character e
void replaceAll(char *str, char c, char e)
{
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (str[i] == c)
        {
            str[i] = e;
        }
    }
}

int main(void)
{
    char line[82]; // allow up to 80 chars plus newline and terminator
    char oldc, newc;

    // repeatedly read input until the string equals "stop"
    while (1)
    {
        // read string line
        if (fgets(line, sizeof line, stdin) == NULL)
        {
            break;
        }

        // remove trailing newline if present
        size_t len = strlen(line);
        if (len > 0 && line[len - 1] == '\n')
        {
            line[len - 1] = '\0';
        }

        // check for stop condition
        if (strcmp(line, "stop") == 0)
        {
            break;
        }

        // read character to be replaced
        if (scanf(" %c", &oldc) != 1)
        {
            break;
        }

        // read replacing character
        if (scanf(" %c", &newc) != 1)
        {
            break;
        }

        // flush newline left in input buffer
        int ch;
        while ((ch = getchar()) != '\n' && ch != EOF) {}

        printf("Replace '%c' with '%c'\n", oldc, newc);
        printf("Before: %s\n", line);

        replaceAll(line, oldc, newc);

        printf("After:  %s\n", line);
    }

    return 0;
}
