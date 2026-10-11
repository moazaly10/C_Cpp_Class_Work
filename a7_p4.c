/*
CH-230-A
a7_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

typedef void (*Action)(const char *);

// print uppercase
void print_upper(const char *s)
{
    for (const unsigned char *p = (const unsigned char *)s; *p; p++)
    {
        putchar(toupper(*p));
    }
    putchar('\n');
}

// print lowercase
void print_lower(const char *s)
{
    for (const unsigned char *p = (const unsigned char *)s; *p; p++)
    {
        putchar(tolower(*p));
    }
    putchar('\n');
}

// invert case
void print_invert(const char *s)
{
    for (const unsigned char *p = (const unsigned char *)s; *p; p++)
    {
        if (islower(*p))
        {
            putchar(toupper(*p));
        }
        else if (isupper(*p))
        {
            putchar(tolower(*p));
        }
        else
        {
            putchar(*p);
        }
    }
    putchar('\n');
}

// no-op for unmapped commands
void noop(const char *s)
{
    (void)s;
}

// quit program
void do_quit(const char *s)
{
    (void)s;
    exit(0);
}

int main()
{
    char text[512];

    // read the whole line
    if (!fgets(text, sizeof(text), stdin))
    {
        return 1;
    }
    text[strcspn(text, "\n")] = '\0';

    // command table
    Action map[256];
    for (int i = 0; i < 256; i++)
    {
        map[i] = noop;
    }
    map['1'] = print_upper;
    map['2'] = print_lower;
    map['3'] = print_invert;
    map['4'] = do_quit;

    // endless loop reading commands
    while (1)
    {
        char cmd;
        if (scanf(" %c", &cmd) != 1)
        {
            break;
        }
        map[(unsigned char)cmd](text);
    }

    return 0;
}
