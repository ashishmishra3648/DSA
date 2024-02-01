#include <stdio.h>
#include <stdlib.h>   //Since we used malloc!!!!
struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
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
    struct Node *fourth;
    // Memory will be allocated of the linked list in the heap not stack
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));

    // Link head and second node
    head->data = 4;
    head->next = second;
    head->prev = NULL;
    // Link second  and third node
    second->data = 15;
    second->next = third;
    second->prev = head;
    // Terminate the list at the last node
    third->data = 45;
    third->next = fourth;
    third->prev = second;
    fourth->data = 99;
    fourth->next = NULL;
    fourth->prev = third;
printf("Doubly LinkedList :-- \n");
    LinkedListTraversal(head);
// printf("Doubly LinkedList after Reversing :-- \n");
//     // Reverse(head);
//     LinkedListTraversal(head);


    return 0;
}
