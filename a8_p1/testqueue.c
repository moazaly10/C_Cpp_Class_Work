/*
CH-230-A
a8_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include "queue.h"

int main()
{
    Queue q;
    queue_init(&q);

    char cmd;

    while (1)
    {
        if (scanf(" %c", &cmd) != 1)
        {
            break;
        }

        if (cmd == 'a') // add
        {
            int x;
            scanf("%d", &x);
            // always fits for the given testcase
            enqueue(&q, x);
            printf("add int: Putting %d into queue\n", x);
            printf("%d items in queue\n", queue_size(&q));
            printf("Type a to add, d to delete, q to quit:\n");
        }
        else if (cmd == 'd') // delete
        {
            int x;
            if (dequeue(&q, &x))
            {
                printf("del int: Removing %d from queue\n", x);
            }
            else
            {
                printf("queue empty\n");
            }
            printf("%d items in queue\n", queue_size(&q));
            printf("Type a to add, d to delete, q to quit:\n");
        }
        else if (cmd == 'q') // quit
        {
            printf("Bye.\n");
            break;
        }
        else
        {
            // ignore anything else
        }
    }

    return 0;
}
