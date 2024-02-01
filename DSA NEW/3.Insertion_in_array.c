#include<stdio.h>

void display(int arr[],int n){
    for (int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int indInsertion(int arr[],int size,int element,int capacity,int index){
    if(index>=capacity){
        printf("Array Insertion in unsuccessful!\n");
        return -1;
    }
    else
    {
    for(int i = size-1; i>=index;i--){
        arr[i+1]=arr[i];
    }
    arr[index]=element;

        printf("Array Insertion in Successful!\n");
    return 1;
    }
}

int main(){
    int arr[100]={1,5,9,13,75};
    int size=5,element,index;
    printf("Enter your element : \n");
    scanf("%d",&element);
    printf("Enter your index : ");
    scanf("%d",&index);
    indInsertion(arr,size,element,100,index);
    size +=1;
    display(arr, size);
    return 0;



}