/*
CH-230-A
a8_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef QUEUE_H
#define QUEUE_H

typedef struct
{
    int data[128];   // storage
    int head;        // front index
    int tail;        // one past last
    int size;        // items in queue
} Queue;

void queue_init(Queue *q);
int  enqueue(Queue *q, int x);     // 1 on success, 0 if full
int  dequeue(Queue *q, int *out);  // 1 on success, 0 if empty
int  queue_size(const Queue *q);

#endif
