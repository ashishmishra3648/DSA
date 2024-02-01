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
// CASE 1 : DELETION AT FIRST
struct Node * deleteFirst(struct Node *head) // Instead of struct  Node we can't use void FUNCTION!!!!!
{
    struct Node *ptr = head;
    head = head->next;
    free(ptr);
    return head;
};
// CASE 2
struct Node  *deleteAtindex(struct Node *head,int index) 
{
    struct Node *p = head;
    struct Node *q = head->next;
    for(int i=0;i<index-1;i++){
        p = p->next;
        q = q->next;
    }
    p->next=q->next;
    free(q);
    return head;
};

// CASE 3 : DELETION AT LAST
struct Node  *deleteAtLast(struct Node *head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    p->next=NULL;
    free(q);
    return head;}

// CASE 4 : DELETION AT GIVEN VALUE
    struct Node  *deleteAtValue(struct Node *head, int value){
    struct Node *p = head;
    struct Node *q = head->next; //Note :-- we can't delete first element from this method as q = head->next
    while(q->data !=value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
  if(q->data == value){
    p->next=q->next;
    free(q);
  }
return head;}

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
    second->data = 8;
    second->next = third;
    // Terminate the list at the last node
    third->data = 11;
    third->next = fourth;
    fourth->data = 1;
    fourth->next = NULL;
    printf("Linked list before deleting first node :- \n");
    LinkedListTraversal(head);
    head = deleteAtindex(head, 2);
    // head = deleteAtLast(head);
    printf("Linked list after deleting first node :- \n");
    // head = deleteFirst(head);
    LinkedListTraversal(head);

    return 0;
}