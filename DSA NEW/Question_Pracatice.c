#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node * next;
};
void traversal(struct Node *ptr){
    while (ptr != NULL)
    {for(int i=0;i>=0;i++){
        printf("Element %d: %d\n",i, ptr->data);
        ptr = ptr->next;
    }}
}
struct Node * reverse(struct Node *head){
    struct Node *ptr=head;
    if( (ptr->data)%2==0){
            struct Node *temp;
  

      
        temp=ptr->data;
        ptr=ptr->next;
        ptr->next=temp;
    }
      
    return head;
    }
    



int main(){
      struct Node * head;
    struct Node * second;
    struct Node * third;
    struct Node * four;
    struct Node * fifth;
    struct Node * sixth;
    struct Node * seventh;
    struct Node * eighth;

    head = (struct Node *)malloc(sizeof(struct Node));
     second= (struct Node *)malloc(sizeof(struct Node));
     third= (struct Node *)malloc(sizeof(struct Node));
     four= (struct Node *)malloc(sizeof(struct Node));
     fifth= (struct Node *)malloc(sizeof(struct Node));
     sixth= (struct Node *)malloc(sizeof(struct Node));
     seventh= (struct Node *)malloc(sizeof(struct Node));
     eighth= (struct Node *)malloc(sizeof(struct Node));
     
   
head ->data = 2;
head ->next = second;
second ->data = 6;
second ->next = third;
third ->data = 15;
third ->next = four;
four ->data = 17;
four ->next = fifth;
fifth ->data = 18;
fifth->next = sixth;
sixth ->data = 20;
sixth ->next = seventh;
seventh ->data = 22;
seventh ->next = eighth;
eighth ->data = 25;
eighth ->next = NULL;
traversal(head);
head=reverse(head);
traversal(head);
return 0;
}