/*
CH-230-A
a7_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#ifndef LINKED_LIST_H
#define LINKED_LIST_H

// Node structure for linked list
struct Node {
    int data;
    struct Node* next;
};

// Function declarations
struct Node* createNode(int value);
void addToEnd(struct Node** head, int value);
void addToBeginning(struct Node** head, int value);
void removeFirst(struct Node** head);
void printList(struct Node* head);
void freeList(struct Node** head);

#endif