/*
CH-230-A
a8_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include "queue.h"

void queue_init(Queue *q)
{
    q->head = 0;
    q->tail = 0;
    q->size = 0;
}

int enqueue(Queue *q, int x)
{
    if (q->size == (int)(sizeof q->data / sizeof q->data[0]))
    {
        return 0; // full
    }

    q->data[q->tail] = x;
    q->tail = (q->tail + 1) % (int)(sizeof q->data / sizeof q->data[0]);
    q->size++;
    return 1;
}

int dequeue(Queue *q, int *out)
{
    if (q->size == 0)
    {
        return 0; // empty
    }

    *out = q->data[q->head];
    q->head = (q->head + 1) % (int)(sizeof q->data / sizeof q->data[0]);
    q->size--;
    return 1;
}

int queue_size(const Queue *q)
{
    return q->size;
}
