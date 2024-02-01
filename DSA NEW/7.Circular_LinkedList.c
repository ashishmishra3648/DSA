#include <stdio.h>
#include <stdlib.h>   //Since we used malloc!!!!
struct Node
{
    int data;
    struct Node *next;
};

// void LinkedListTraversal(struct Node* head)
// {
//     struct Node  *ptr = head;
//     printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     while (ptr!= head)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     } 
// }

// ANOTHER WAY OF TRAVERSING CIRCULAR LINKED LIST THROUGH DO WHILE LOOP ! ! ! ! !
void LinkedListTraversal(struct Node* head)
{
    struct Node  *ptr = head;
    // printf("Element : %d\n", ptr->data);
    //     ptr = ptr->next;
    do{
        printf("Element : %d\n", ptr->data);
        ptr = ptr->next;
    }while (ptr!= head);
}

struct Node * insertAtFirst(struct Node *head, int data){
    struct Node *ptr = (struct Node *)malloc(sizeof(struct Node));
    ptr->data=data;
    struct Node *p = head->next;
    while(p->next != head){
        p = p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
    return head;

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
    // Link second  and third node
    second->data = 15;
    second->next = third;
    // Terminate the list at the last node
    third->data = 45;
    third->next = fourth;
    fourth->data = 2;
    fourth->next = head;
    LinkedListTraversal(head);
    head = insertAtFirst(head,25);
    LinkedListTraversal(head);
   
    return 0;
}
