#include<stdio.h>

int sum(int num1, int num2); // Step 1: Fnc declaration

int main(){
    
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    // Step 3: fnc call
    printf("Sum of %d and %d is %d",num1, num2, sum(num1, num2)); // Arguments

    return 0;
}

// Step 2: Fnc definiton/inplementation
int sum(int num1, int num2){ // Parameters
    return num1 + num2;
}