/*
CH-230-A
a5_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char str1[101];
    char str2[101];
    char *result;
    int len1, len2;

    scanf("%100s", str1);
    scanf("%100s", str2);

    len1 = strlen(str1);
    len2 = strlen(str2);

    result = (char *)malloc(len1 + len2 + 1);
    if (result == NULL)
    {
        return 1;
    }

    strcpy(result, str1);
    strcat(result, str2);

    printf("Result of concatenation: %s\n", result);

    free(result);

    return 0;
}
