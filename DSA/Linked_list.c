
// There are the nodes in the linked list and the every node
// contains the data and the reference to the next node.
#include <stdio.h>
#include <stdlib.h>
struct Node
{

    int data;
    struct Node *next;
};

void linkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("ELement : %d \n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
     struct Node *fourth;

    // Allocate memory for nodes in the linked list in heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
     fourth = (struct Node *)malloc(sizeof(struct Node));

    head->data = 7;
    head->next = second;

    // Link list first and second nodes
    second->data = 44;
    second->next = third;

    third->data = 66;
    third->next = fourth;


     fourth->data = 77;
    fourth->next = NULL;

    linkedListTraversal(head);
    return 0;
}