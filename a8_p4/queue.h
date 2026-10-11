/*
CH-230-A
a8_p4.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef QUEUE_H
#define QUEUE_H

#define QUEUE_CAPACITY 128

typedef struct
{
    int data[QUEUE_CAPACITY];
    int head;
    int tail;
    int size;
} Queue;

void queue_init(Queue *q);
int  enqueue(Queue *q, int x);        /* returns 1 on success, 0 if full */
int  dequeue(Queue *q, int *out);     /* returns 1 on success, 0 if empty */
int  queue_size(const Queue *q);
void printq(const Queue *q);          /* print elements separated by spaces */

#endif
