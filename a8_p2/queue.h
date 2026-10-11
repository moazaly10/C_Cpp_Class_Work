/*
CH-230-A
a8_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_CAPACITY 128

typedef struct
{
    int data[QUEUE_CAPACITY];
    int head;   /* index of first element */
    int tail;   /* index one past last element */
    int size;   /* number of elements */
} Queue;

void queue_init(Queue *q);
int  enqueue(Queue *q, int x);        /* returns 1 on success, 0 on full */
int  dequeue(Queue *q, int *out);     /* returns 1 on success, 0 on empty */
int  queue_size(const Queue *q);

#endif
