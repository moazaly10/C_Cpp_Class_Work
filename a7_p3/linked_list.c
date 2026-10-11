/*
CH-230-A
a7_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

// Create a new node with given value
struct Node* createNode(int value)
{
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

// Add node to the end of the list
void addToEnd(struct Node** head, int value)
{
    struct Node* newNode = createNode(value);
    
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    
    // Traverse to the last node
    struct Node* temp = *head;
    while (temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

// Add node to the beginning of the list
void addToBeginning(struct Node** head, int value)
{
    struct Node* newNode = createNode(value);
    newNode->next = *head;
    *head = newNode;
}

// Remove the first node from the list
void removeFirst(struct Node** head)
{
    if (*head == NULL) {
        return;
    }
    
    struct Node* temp = *head;
    *head = (*head)->next;
    free(temp);
}

// Print all elements in the list
void printList(struct Node* head)
{
    struct Node* temp = head;
    while (temp != NULL) {
        printf("%d  ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// Free all memory used by the list
void freeList(struct Node** head)
{
    struct Node* temp;
    while (*head != NULL) {
        temp = *head;
        *head = (*head)->next;
        free(temp);
    }
}