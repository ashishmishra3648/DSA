#include <stdio.h>
#include <stdlib.h>

struct stack{
    int size;
    int top;
    int * arr;
};

int isEmpty(struct stack* ptr)
{
    if (ptr->top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int isFull(struct stack* ptr)
{
    if (ptr->top == ptr->size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
// /Push
void push(struct stack* ptr, int val)
{
    if (isFull(ptr))
    {
        printf("Stack overflow ! Can't insert %d in Stack !!\n ",val);
    }
    else
    {
        ptr->top++;
        ptr->arr[ptr->top] = val;
    }
}
//  Pop :-
int pop(struct stack *ptr)
{
    if (isEmpty(ptr))
    {
        printf("Stack Underflow !");
        return -1;
    }
    else
    {
        int val = ptr->arr[ptr->top];
        ptr->top--;
        return val;
    }
}

int peek(struct stack *ptr,int i){
    if(ptr->top -i+1<0){
        printf("Invalid Position !!!!!!");
        return -1;
    }
    else{
        return ptr->arr[ptr->top-i+1];
    }
}
int stackTop(struct stack *ptr){
    return ptr->arr[ptr->top];
}
int stackBottom(struct stack *ptr){
    return ptr->arr[0];
}

int main()
{
    struct stack *sp= (struct stack *)malloc( sizeof(struct stack ));
    sp->size = 100;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    // printf("Before Pushing , full : %d\n", isFull(sp));
    // printf("Before Pushing ,empty : %d\n", isEmpty(sp));
    push(sp, 99);
    push(sp, 49);
    push(sp, 69);
    push(sp, 16);
    push(sp, 73);
    push(sp, 45);
    push(sp, 25);
    push(sp, 75);
    push(sp, 59);
    push(sp, 89);
    push(sp, 49);
    push(sp, 829);
    push(sp, 73);
    

for(int j=1;j<=sp->top+1;j++){         //j<=top+1 because we have to run the loop till the last element and top start from 0;;example stack has 3 elements but top == 2 that's why top + 1 means 3 times !!!!!!    printf("The value at position %d is %d\n",j,peek(sp,j));
printf("The value at postion %d is %d\n",j,peek(sp,j));
}
    
printf("The topmost element of the stack is %d\n",stackTop(sp));
printf("The bottommost element of the stack is %d\n",stackBottom(sp));
    return 0;
}