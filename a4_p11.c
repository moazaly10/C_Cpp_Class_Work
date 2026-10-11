/*
CH-230-A
a4_p11.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

// Count occurrences of character c in str, case-insensitive
// Works for single-byte locales by using tolower with locale enabled
int count_insensitive(char *str, char c)
{
    int count = 0;

    // cast to unsigned char before calling ctype functions
    unsigned char target = (unsigned char)c;
    unsigned char target_lower = (unsigned char)tolower(target);

    for (size_t i = 0; str[i] != '\0'; ++i)
    {
        unsigned char ch = (unsigned char)str[i];
        if (tolower(ch) == target_lower)
        {
            count++;
        }
    }

    return count;
}

int main(void)
{
    // enable locale so tolower works for the active environment
    setlocale(LC_CTYPE, "");

    // step 1 allocate dynamic buffer for up to 50 chars plus terminator
    size_t cap = 51;
    char *buf = (char *)malloc(cap);
    if (!buf)
    {
        return 0;
    }

    // step 2 read a line from stdin
    // fgets stops at newline or when buffer is full
    if (fgets(buf, (int)cap, stdin) == NULL)
    {
        free(buf);
        return 0;
    }

    // remove trailing newline if present
    size_t len = strlen(buf);
    if (len > 0 && buf[len - 1] == '\n')
    {
        buf[len - 1] = '\0';
        len--;
    }

    // step 3 allocate a new buffer with the exact size
    char *str = (char *)malloc(len + 1);
    if (!str)
    {
        free(buf);
        return 0;
    }

    // step 4 copy and free the first buffer
    memcpy(str, buf, len + 1);
    free(buf);

    // test characters as required
    char tests[] = { 'b', 'H', '8', 'u', 'ş' }; // 'ş' relies on current single-byte locale
    size_t tcount = sizeof(tests) / sizeof(tests[0]);

    for (size_t i = 0; i < tcount; ++i)
    {
        int k = count_insensitive(str, tests[i]);
        printf("The character '%c' occurs %d times.\n", tests[i], k);
    }

    // release exact-size string
    free(str);

    return 0;
}
