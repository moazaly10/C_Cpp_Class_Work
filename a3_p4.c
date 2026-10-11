/*
CH-230-A
a1 p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <string.h>

int position(char str[], char c)
{
    int idx;

    for (idx = 0; str[idx] != '\0'; ++idx)
    {
        if (str[idx] == c)
        {
            return idx;
        }
    }

    return -1; // if not found (won't happen here since g is guaranteed)
}

int main()
{
    char line[80];

    while (1)
    {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);

        // remove newline if present
        line[strcspn(line, "\n")] = '\0';

        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
    }

    return 0;
}
