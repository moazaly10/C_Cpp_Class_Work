/*
CH-230-A
a8_p8.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <ctype.h>

int isSeparator(int ch)
{
    return ch == ' ' || ch == ',' || ch == '?' ||
           ch == '!' || ch == '.' || ch == '\t' ||
           ch == '\r' || ch == '\n';
}

int main(void)
{
    char filename[100];
    scanf("%99s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL)
    {
        return 1;
    }

    int ch;
    int inWord = 0;
    int count = 0;

    // scan through characters
    while ((ch = fgetc(file)) != EOF)
    {
        if (isSeparator(ch))
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            count++;
            inWord = 1;
        }
    }

    fclose(file);

    printf("The file contains %d words.\n", count);
    return 0;
}
