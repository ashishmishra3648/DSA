#include <stdio.h>
#include <stdlib.h> //Since we used malloc!!!!
struct Node
{
    int data;
    struct Node *next;
};

void LinkedListTraversal(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *insertAtFirst(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data = data; // DATA MUST BE GIVEN OTHERWISE IT WILL THROW GARBAGE VALUE !!!!
    ptr->next = head;
    head = ptr; //CAN'T DO LIKE THIS !!!!!
    return ptr;
}
// Case 2
struct Node *insertAtIndex(struct Node *head, int data, int index)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;
    int i = 0;

    while (i != index - 1)
    {
        p = p->next;
        i++;
    }
    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
}
// Case 3
struct Node *insertAtLast(struct Node *head, int data)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    struct Node *p = head;

    while (p->next != NULL)
    {
        p = p->next;
    }
    ptr->data = data;
    p->next = ptr;
    ptr->next = NULL;
    return head;
}
// Case 4
struct Node *insertAfterNode(struct Node *head, int data, struct Node *p)
{
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));

    ptr->data = data;
    ptr->next = p->next;
    p->next = ptr;
    return head;
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
    printf("BEFORE !\n");
    LinkedListTraversal(head);
    // head = insertAtFirst(head,55);
    head = insertAtIndex(head, 69, 2);
    // head = insertAtLast(head,31);
    // head = insertAfterNode(head,915,second);
    printf("AFTER !\n");
    LinkedListTraversal(head);

    return 0;
}
