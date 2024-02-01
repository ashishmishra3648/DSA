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
        ptr->arr[ptr->top] = val;
        ptr->top++;
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

int main()
{
    struct stack *sp= (struct stack *)malloc( sizeof(struct stack ));
    sp->size = 10;
    sp->top = -1;
    sp->arr = (int *)malloc(sp->size * sizeof(int));
    printf("Before Pushing , full : %d\n", isFull(sp));
    printf("Before Pushing ,empty : %d\n", isEmpty(sp));
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
    // push(sp, 79);
    printf("\nAfter Pushing , full : %d\n", isFull(sp));
    printf("After Pushing ,empty : %d\n", isEmpty(sp));
    // pop(sp);<-- We can do popping this way also but it doesn't show which element is popped
    // pop(sp);
    // pop(sp);
    printf("\nAfter Poping %d\n",pop(sp));
    printf("After Poping %d\n",pop(sp));
    printf("After Poping %d\n",pop(sp));
    printf("\nAfter Poping , full : %d\n", isFull(sp));
    printf("After Poping ,empty : %d\n", isEmpty(sp));
   for(int i=0;i<=sp->top;i++){
    printf("%d \n",sp->arr[sp->top]);
     i++;
        }
    return 0;
}