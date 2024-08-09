
// There are the nodes in the linked list and the every node
// contains the data and the reference to the next node.
#include <stdio.h>
#include <stdlib.h>
struct node
{

    int data;
    struct node *link;
};

int main()
{
struct node *head = malloc(sizeof(struct node));
struct node *first = malloc(sizeof(struct node));
struct node *second = malloc(sizeof(struct node));
struct node *third = malloc(sizeof(struct node));


    head->data = 45;
    head->link = first;

    first->data = 45;
    first->link = second;

    third->data = 45;
    head->link = first;
    head->data = 45;
    head->link = first;
    head->data = 45;
    head->link = first;
    return 0;
}