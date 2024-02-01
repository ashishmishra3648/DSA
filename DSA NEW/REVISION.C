// #include<stdio.h>
// #include<stdlib.h>

// struct Node{
//     int data;
//     struct Node * next;
// };

// void traversal(struct Node *ptr){
//     while (ptr != NULL)
//     {
//         printf("Element : %d\n", ptr->data);
//         ptr = ptr->next;
//     }
// }
// struct Node * DeleteAtIndex(struct Node * head,int value){
//    struct Node *p =head;
//     struct Node *ptr = p->next;
   
//    while( ptr->data != value){
//     p = p->next;
//     ptr=ptr->next;
    
//    }
//     if(ptr->data == value){
//     p->next=ptr->next;
//     free(ptr);}
   
//     return head;
//     }


// int main(){
//     struct Node * head;
//     struct Node * second;
//     struct Node * third;
//     struct Node * four;

//     head = (struct Node *)malloc(sizeof(struct Node));
//      second= (struct Node *)malloc(sizeof(struct Node));
//      third= (struct Node *)malloc(sizeof(struct Node));
//      four= (struct Node *)malloc(sizeof(struct Node));
   
// head ->data = 7;
// head ->next = second;
// second ->data = 45;
// second ->next = third;
// third ->data = 99;
// third ->next = four;
// four ->data = 55;
// four ->next = NULL;
// traversal(head);
// printf("After Deletion !!!!\n");
// head = DeleteAtIndex(head,45);
// traversal(head);

//     return 0;
// }
                            //    ARRAY ADT'S!!!!
// #include<stdio.h>
// #include<stdlib.h>
// struct myArray{
//     int total_size;
//     int used_size;
//     int *ptr;
// };
// void createArray(struct myArray* a,int tSize,int uSize){
//     a->total_size=tSize;
//     a->used_size=uSize;
//     a->ptr=(int *)malloc(tSize* sizeof(int));
// }
// void show(struct myArray *a){
//     for(int i=0;i<a->used_size;i++){
//         printf("%d \n",(a->ptr)[i]);
//     }
// }
    
// void setVal(struct myArray *a){
//     int n;
//     for(int i=1;i<a->used_size;i++){
//         printf("Enter your marks of subject %d \n: ",i+1);
//         scanf("%d",&n);
//     (a->ptr)[i]=n;
//     }
        
// }
// int main(){
//     struct myArray marks;
//     createArray(&marks,10,2);
// printf("\n");
// setVal(&marks);
// printf("\n");
// show(&marks);
// return 0;
// }
                            //    ARRAY INSERTION !!!!!!!!   //
#include<stdio.h>
// #include<stdlib.h>
void display(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d \n",arr[i]);
    }
    // printf("\n");
}

int IndInsertion(int arr[],int size,int capacity,int index,int element){
    if(index>=capacity){
        printf("Array insertion not done !!!!\n");
        return -1;
    }
    else{
        for(int i=size-1;i>=index;i--){
            arr[i+1]=arr[i];
        }
        arr[index]=element;
    }
    return 1;
}

int main(){
    int arr[10]={1,25,48,34,94,34,65};
    int size =7,element,index;
    printf("enter element : ");
    scanf("%d",&element);
    printf("enter index : ");
    scanf("%d",&index);
    IndInsertion(arr,size,10,index,element);
    size +=1;
    display(arr, size);
    return 0;
}