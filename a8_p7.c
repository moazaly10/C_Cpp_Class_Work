/*
CH-230-A
a8_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>

int main(void)
{
    FILE *f1 = fopen("text1.txt", "r");
    FILE *f2 = fopen("text2.txt", "r");
    FILE *out = fopen("merge12.txt", "w");

    if (f1 == NULL || f2 == NULL || out == NULL)
    {
        return 1;
    }

    char line[256];

    // copy from first file
    while (fgets(line, sizeof(line), f1) != NULL)
    {
        fputs(line, out);
    }

    // copy from second file
    while (fgets(line, sizeof(line), f2) != NULL)
    {
        fputs(line, out);
    }

    fclose(f1);
    fclose(f2);
    fclose(out);

    return 0;
}