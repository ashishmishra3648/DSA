#include<stdio.h>

int fib(int n){
    if(n == 0){
        return 0;
    }
    else if(n == 1){
        return 1;
    }
    else {
        return fib(n-1) + fib(n-2);
    }
}

int main(){
    int n;
    printf("Enter your Fibonacci number : ");
    scanf("%d",&n);
    printf("Fibonacci number of %d is : %d", n, fib(n));


return 0;
}
