#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;
// Printing  the list
int list_lenght(node *list)
{
    node *current = list;
    int count = 0;
    if (list == NULL)
        printf("list is empty\n");

    while (current != NULL)
    {
        printf("%d ", current->data);
        count++;
        current = current->next;
    }
    return count;
}

void athead(node **list, int data)
{
    node *temp = malloc(sizeof(node));
    temp->data = data;
    temp->next = *list;

    *list = temp;
}

void atend(node *list, int data)
{
    // if (list->next == NULL)
    // {
    //     list->data = data;
    //     list->next = NULL;
    // }
    node *temp = malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    while (list->next != NULL)
    {
        list = list->next;
    }
    list->next = temp;
}

void at_position(node *list, int data, int pos)
{
    node *ptr = list;
    node *ptr2 = malloc(sizeof(node));
    ptr2->data = data;
    ptr2->next = NULL;
    pos--;
    while (pos != 1)
    {
        ptr = ptr->next;
        pos--;
    }

    ptr2->next = ptr->next;
    ptr->next = ptr2;
}

struct node *del_head(node *lsit)
{
    if (!lsit)
        printf("List is Empty");
    else
    {
        node *temp = list;
        list = list->next;
        free(temp);
        temp = NULL;
    }
    return list;
}

void del_tail(node *list)
{
    if (!lsit)
        printf("List is Empty");
    else if (list->next == NULL)
    {
        free(list);
        list = NULL;
    }
    else
    {
        node *temp = list;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        free(temp->next);
        temp->next = NULL;
    }
}

int main(int argc, char const *argv[])
{
    // node *list = NULL;
    // node *n = malloc(sizeof(node));
    // if (n == NULL)
    //     return 1;
    // n->number = 1;
    // n->next = NULL;
    // list = n;

    // n = malloc(sizeof(node));
    // if (n == NULL)
    // {
    //     free(list);
    //     return 1;
    // }
    // n->number = 2;
    // n->next = NULL;
    // list->next = n;

    // n = malloc(sizeof(node));
    // if (n == NULL)
    // {
    //     free(list->next);
    //     free(list);
    //     return 1;
    // }

    // n->number = 3;
    // n->next = NULL;
    // list->next->next = n;

    node *list = malloc(sizeof(node));
    list->data = 10;
    list->next = NULL;
    // printf("%d\n", list->data);

    node *current = malloc(sizeof(node));
    current->data = 20;
    current->next = NULL;
    list->next = current;

    current = malloc(sizeof(node));
    current->data = 30;
    current->next = NULL;
    list->next->next = current;

    atend(list, 90);

    athead(&list, 80);

    at_position(list, 69, 3);

    list_lenght(list);

    return 0;
}
