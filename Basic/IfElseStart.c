#include<stdio.h>

int main()
{
    int a,b;
    printf("Enter First number: ");
    scanf("%d", &a);
    printf("Enter Second number: ");
    scanf("%d", &b);
    if(a==b){
        printf("Equal");
    }
    else{
        printf("Not equal");
    }
return 0;
}