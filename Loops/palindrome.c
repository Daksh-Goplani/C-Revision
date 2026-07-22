#include <stdio.h>

int main() {
    int num;
    int final = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    int copy = num;
    while(num>0){
        final = final*10 + num%10;
        num /= 10;
    }
    if(final == copy){
        printf("Palindromic number");
    }
    else{
        printf("Not a Palindromic number");
    }
    
    return 0;
}