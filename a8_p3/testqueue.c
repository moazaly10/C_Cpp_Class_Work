/*
CH-230-A
a8_p3.c
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

    while (scanf(" %c", &cmd) == 1)
    {
        if (cmd == 'a')
        {
            int x;
            scanf("%d", &x);
            enqueue(&q, x);
            printf("add int: Putting %d into queue\n", x);
            printf("%d items in queue\n", queue_size(&q));
            printf("Type a to add, d to delete, p to print, q to quit:\n");
        }
        else if (cmd == 'd')
        {
            int x;
            if (dequeue(&q, &x))
            {
                printf("Removing %d from queue\n", x);
                printf("%d items in queue\n", queue_size(&q));
            }
            else
            {
                printf("Queue Underflow\n");
                printf("%d items in queue\n", queue_size(&q));
            }
            printf("Type a to add, d to delete, p to print, q to quit:\n");
        }
        else if (cmd == 'p')
        {
            printq(&q);
            printf("%d items in queue\n", queue_size(&q));
            printf("Type a to add, d to delete, p to print, q to quit:\n");
        }
        else if (cmd == 'q')
        {
            printf("Bye.\n");
            break;
        }
        else
        {
            /* ignore unknown commands */
        }
    }

    return 0;
}
