/*
CH-230-A
a8_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include "queue.h"
#include <stdio.h>

void queue_init(Queue *q)
{
    q->head = 0;
    q->tail = 0;
    q->size = 0;
}

int enqueue(Queue *q, int x)
{
    if (q->size == QUEUE_CAPACITY)
    {
        return 0;
    }

    q->data[q->tail] = x;
    q->tail = (q->tail + 1) % QUEUE_CAPACITY;
    q->size++;
    return 1;
}

int dequeue(Queue *q, int *out)
{
    if (q->size == 0)
    {
        return 0;
    }

    *out = q->data[q->head];
    q->head = (q->head + 1) % QUEUE_CAPACITY;
    q->size--;
    return 1;
}

int queue_size(const Queue *q)
{
    return q->size;
}

/* print queue contents from head to tail */
void printq(const Queue *q)
{
    if (q->size == 0)
    {
        printf("content of the queue:\n");
        return;
    }

    printf("content of the queue: ");

    int idx = q->head;
    for (int i = 0; i < q->size; i++)
    {
        if (i) printf(" ");
        printf("%d", q->data[idx]);
        idx = (idx + 1) % QUEUE_CAPACITY;
    }
    printf("\n");
}
