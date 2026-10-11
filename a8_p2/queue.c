/*
CH-230-A
a8_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include "queue.h"

/* initialize queue */
void queue_init(Queue *q)
{
    q->head = 0;
    q->tail = 0;
    q->size = 0;
}

/* add element, return 1 on success, 0 if full */
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

/* remove element, store in out, return 1 on success, 0 if empty */
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

/* current size */
int queue_size(const Queue *q)
{
    return q->size;
}
