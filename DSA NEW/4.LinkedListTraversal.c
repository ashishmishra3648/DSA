#include <stdio.h>
#include <stdlib.h>   //Since we used malloc!!!!
struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node* ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}

int main()
{
    struct Node *head;
    struct Node *second;
    struct Node *third;
    // Memory will be allocated of the linked list in the heap not stack
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    // Link head and second node
    head->data = 4;
    head->next = second;
    // Link second  and third node
    second->data = 15;
    second->next = third;
    // Terminate the list at the last node
    third->data = 45;
    third->next = NULL;
    LinkedListTraversal(head);
    return 0;
}