#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

// insert at front
void push_front(Node **head, Node **tail, int v)
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->value = v;
    n->next = *head;
    *head = n;
    if (*tail == NULL)
    {
        *tail = n;
    }
}

// insert at end
void push_back(Node **head, Node **tail, int v)
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->value = v;
    n->next = NULL;

    if (*tail)
    {
        (*tail)->next = n;
        *tail = n;
    }
    else
    {
        *head = *tail = n;
    }
}

// remove first
void pop_front(Node **head, Node **tail)
{
    if (*head == NULL)
    {
        return;
    }

    Node *t = *head;
    *head = t->next;

    if (*head == NULL)
    {
        *tail = NULL;
    }

    free(t);
}

// print list
void print_list(Node *head)
{
    for (Node *p = head; p; p = p->next)
    {
        if (p != head)
        {
            printf(" ");
        }
        printf("%d", p->value);
    }
    printf("\n");
}

// free all nodes
void free_list(Node **head, Node **tail)
{
    while (*head)
    {
        pop_front(head, tail);
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    char cmd;

    // command loop
    while (scanf(" %c", &cmd) == 1)
    {
        switch (cmd)
        {
            case 'a': // append
            {
                int v;
                scanf("%d", &v);
                push_back(&head, &tail, v);
                break;
            }
            case 'b': // prepend
            {
                int v;
                scanf("%d", &v);
                push_front(&head, &tail, v);
                break;
            }
            case 'r': // remove first
            {
                pop_front(&head, &tail);
                break;
            }
            case 'p': // print
            {
                print_list(head);
                break;
            }
            case 'q': // quit
            {
                free_list(&head, &tail);
                return 0;
            }
            default:
            {
                break;
            }
        }
    }

    free_list(&head, &tail);
    return 0;
}