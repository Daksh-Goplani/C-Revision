#include<stdio.h>

int main(){

    int num, digit, sum=0, digitNo=0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num!=0){
        digitNo+=1;
        digit = num%10;
        sum = sum + digit;
        num = num/10;
    }
    printf("Sum of all digits: %d\nNumber of digits: %d", sum, digitNo);

    return 0;
}