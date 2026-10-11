/*
CH-230-A
a7_p1.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main()
{
    struct Node* head = NULL;
    char command;
    int value;
    
    while (1) {
        scanf(" %c", &command);
        
        switch (command) {
            case 'a':
                scanf("%d", &value);
                addToEnd(&head, value);
                break;
                
            case 'b':
                scanf("%d", &value);
                addToBeginning(&head, value);
                break;
                
            case 'r':
                removeFirst(&head);
                break;
                
            case 'p':
                printList(head);
                break;
                
            case 'q':
                freeList(&head);
                return 0;
        }
    }
    
    return 0;
}