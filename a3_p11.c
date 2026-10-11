/*
CH-230-A
a3_p11.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <string.h>

#define MAX 256

// Trim trailing newline left by fgets
void chomp(char *s)
{
    size_t n = strlen(s);
    if (n > 0 && s[n - 1] == '\n')
    {
        s[n - 1] = '\0';
    }
}

int main(void)
{
    char one[MAX];
    char two[MAX];
    char concat[MAX * 2];
    char copy[MAX];
    char c;
    char *pos;

    // Read two lines with spaces
    fgets(one, sizeof(one), stdin);
    chomp(one);

    fgets(two, sizeof(two), stdin);
    chomp(two);

    // Read search character
    // Skip any leftover newline
    do
    {
        c = (char)getchar();
    }
    while (c == '\n' || c == '\r');

    // 1. Lengths
    printf("length1=%zu\n", strlen(one));
    printf("length2=%zu\n", strlen(two));

    // 2. Concatenation one + two
    strcpy(concat, one);
    strcat(concat, two);
    printf("concatenation=%s\n", concat);

    // 3. Copy two into a third string
    strcpy(copy, two);
    printf("copy=%s\n", copy);

    // 4. Compare two and one
    int cmp = strcmp(two, one);
    if (cmp < 0)
    {
        printf("two is smaller than one\n");
    }
    else if (cmp > 0)
    {
        printf("one is smaller than two\n");
    }
    else
    {
        printf("one is equal to two\n");
    }

    // 5. First occurrence of c in two
    pos = strchr(two, c);
    if (pos)
    {
        // Example shows 0-based index, so print pointer diff as is
        printf("position=%ld\n", (long)(pos - two));
    }
    else
    {
        printf("character not found\n");
    }

    return 0;
}
