#include<stdio.h>
int factorialIterative(int number){
    int val = 1;
    for (int i = number; i>1 ; i--){
        val *= i;
    }
    return val;
}
int factorialRecursive(int number){
    if (number == 0 || number == 1){
        return 1;
    }
    else{
        return number * factorialRecursive(number - 1);
    }
}
int main(){
    int number;
    printf("Enter your number : ");
    scanf("%d",&number);
    int factorial = factorialIterative(number);
     if (number < 0) {
       printf("Factorial is not defined for negative numbers.\n");
   } else {
       printf("Factorial of %d = %d\n", number, factorial);
   }


    return 0;

}