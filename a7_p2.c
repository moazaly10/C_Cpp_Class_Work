/*
CH-230-A
a7_p2.c
Moaz Ahmed Hanafy
maly@constructor.university
*/
#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    char ch;
    struct Node *prev;
    struct Node *next;
} Node;

typedef struct
{
    Node *head;
    Node *tail;
} List;

/* push front */
void push_front(List *L, char c)
{
    Node *n = (Node *)malloc(sizeof(Node));
    n->ch = c;
    n->prev = NULL;
    n->next = L->head;

    if (L->head)
    {
        L->head->prev = n;
    }
    else
    {
        L->tail = n;
    }
    L->head = n;
}

/* delete all occurrences; return count */
int delete_all(List *L, char c)
{
    int removed = 0;
    Node *p = L->head;

    while (p)
    {
        Node *nx = p->next;
        if (p->ch == c)
        {
            if (p->prev)
            {
                p->prev->next = p->next;
            }
            else
            {
                L->head = p->next;
            }

            if (p->next)
            {
                p->next->prev = p->prev;
            }
            else
            {
                L->tail = p->prev;
            }

            free(p);
            removed++;
        }
        p = nx;
    }
    return removed;
}

/* print forward */
void print_forward(const List *L)
{
    const Node *p = L->head;
    while (p)
    {
        printf("%c", p->ch);
        if (p->next)
        {
            printf(" ");
        }
        p = p->next;
    }
    printf("\n");
}

/* print backward */
void print_backward(const List *L)
{
    const Node *p = L->tail;
    while (p)
    {
        printf("%c", p->ch);
        if (p->prev)
        {
            printf(" ");
        }
        p = p->prev;
    }
    printf("\n");
}

/* free all */
void clear_list(List *L)
{
    Node *p = L->head;
    while (p)
    {
        Node *nx = p->next;
        free(p);
        p = nx;
    }
    L->head = L->tail = NULL;
}

int main(void)
{
    List L = { NULL, NULL };
    int cmd;

    while (scanf(" %d", &cmd) == 1)
    {
        switch (cmd)
        {
            case 1:
            {
                char c;
                scanf(" %c", &c);
                push_front(&L, c);
                break;
            }
            case 2:
            {
                char c;
                scanf(" %c", &c);
                if (delete_all(&L, c) == 0)
                {
                    printf("The element is not in the list!\n");
                }
                break;
            }
            case 3:
            {
                print_forward(&L);
                break;
            }
            case 4:
            {
                print_backward(&L);
                break;
            }
            case 5:
            {
                clear_list(&L);
                return 0;
            }
            default:
            {
                /* ignore unknown command */
                break;
            }
        }
    }

    clear_list(&L);
    return 0;
}
