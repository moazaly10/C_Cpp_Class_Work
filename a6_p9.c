/*
CH-230-A
a6_p9.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

// push at front
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

// push at back
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

// pop first
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

// insert at position pos in [0..len]
int insert_at(Node **head, Node **tail, int pos, int v)
{
    if (pos < 0)
    {
        return 0;
    }
    if (pos == 0)
    {
        push_front(head, tail, v);
        return 1;
    }

    Node *cur = *head;
    for (int i = 0; cur && i < pos - 1; i++)
    {
        cur = cur->next;
    }
    if (cur == NULL)
    {
        return 0; // pos > len
    }

    Node *n = (Node *)malloc(sizeof(Node));
    n->value = v;
    n->next = cur->next;
    cur->next = n;
    if (n->next == NULL)
    {
        *tail = n; // inserted at end
    }
    return 1;
}

// reverse list in-place
void reverse_list(Node **head, Node **tail)
{
    Node *prev = NULL;
    Node *cur = *head;

    *tail = *head;
    while (cur)
    {
        Node *next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    *head = prev;
}

// print list values separated by one space
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
            case 'i': // insert at position
            {
                int pos, v;
                scanf("%d%d", &pos, &v);
                if (!insert_at(&head, &tail, pos, v))
                {
                    printf("Invalid position!\n");
                }
                break;
            }
            case 'R': // reverse list
            {
                reverse_list(&head, &tail);
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
