#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

int length(node *list)
{
    int count = 0;
    while (list != NULL)
    {
        count++;
        list = list->next;
    }
    return count;
}

void print(node *list)
{
    while (list != NULL)
    {
        printf("%d ", list->data);
        list = list->next;
    }
}

void insertatEnd(node *list, int data)
{
    node *temp = malloc(sizeof(node));
    temp->data = data;
    temp->next = NULL;
    while (list->next != NULL)
    {
        list = list->next;
    }
    list->next = temp;
}

int main(int argc, char const *argv[])
{
    node *list = malloc(sizeof(node));
    list->data = 10;
    list->next = NULL;

    node *current = malloc(sizeof(node));
    current->data = 20;
    current->next = NULL;
    list->next = current;

    current = malloc(sizeof(node));
    current->data = 30;
    current->next = NULL;
    list->next->next = current;

    insertatEnd(list, 40);

    printf("%d\n", length(list));

    print(list);

    return 0;
}
