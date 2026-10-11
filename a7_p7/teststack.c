/*
CH-230-A
a7_p7.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include "stack.h"

int main()
{
    stack s;
    init(&s);

    char cmd;
    while (scanf(" %c", &cmd) == 1)
    {
        if (cmd == 's')
        {
            int x;
            scanf("%d", &x);
            push(&s, x);
        }
        else if (cmd == 'p')
        {
            pop(&s);
        }
        else if (cmd == 'e')
        {
            empty(&s);
        }
        else if (cmd == 'q')
        {
            printf("Quit\n");
            break;
        }
        else
        {
            // ignore unknown command
        }
    }

    return 0;
}
