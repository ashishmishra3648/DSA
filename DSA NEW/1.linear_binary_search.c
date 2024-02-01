#include<stdio.h>
// int linearSearch(int arr[],int size,int element){
//     for(int i=0;i<size;i++){
//         if(arr[i]==element){   
//             return i;
//         }
//     }
//     return -1;
// }
int binarySearch(int arr[],int size,int element){
int low,mid,high;
low = 0;
high = size - 1;
while(low<=high){
mid = (low+high)/2;
    if(arr[mid]==element){
        return mid;
    }
    else if(arr[mid]<element){
        low = mid+1;
    }
    else{
        high = mid -1;
    }
}
}
int main(){
    // int arr[]={1,55,4,33,52,15,12,75,65}; // <--UNSORTED ARRAY
    // int size=sizeof(arr)/sizeof(int);
    int arr[]={1,4,13,42,58,66,75,88,99};  //<--SORTED ARRAY
    int size=sizeof(arr)/sizeof(int);
    int element ;
    printf("Enter the element to be searched : ");
    scanf("%d",&element);
    printf("size : %d\n",size);
  int searchIndex = binarySearch(arr,size,element);
    printf("The given element %d is found at index %d\n",element,searchIndex);

return 0;
}