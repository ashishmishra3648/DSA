#include <stdio.h>
#include <stdlib.h>

struct stack
{
    int size;
    int top;
    int *arr;
};

int isEmpty(struct stack ptr)
{
    if (ptr.top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};
int isFull(struct stack ptr)
{
    if (ptr.top == ptr.size - 1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
};

int main()
{
    struct stack s;
    s.size = 6;
    s.top = -1;
    s.arr = (int *)malloc(s.size * sizeof(int));

    s.top++;
    //  Push :-
    if (isFull(s))
    {
        printf("Stack Overflow !");
    }
    else
    {
        s.top++;
        s.arr[s.top] = 7;
        // s.top++;
        // s.arr[s.top]=11;
    }
    printf("\nElement at %d is : %d", s.top - 1, s.arr[s.top]);

    //  Pop :-
    if (isEmpty(s))
    {
        printf("Stack Underflow !");
    }
    else
    {
        int val = s.arr[s.top];
        // s.top=s.top-1;
        s.top--;
        return val;
    }
    printf("\nElement at %d is : %d", s.top - 1, s.arr[s.top]);

    printf("\nElements in stack : %d\n", s);
    if (isFull(s))
    {
    }

    return 0;
}