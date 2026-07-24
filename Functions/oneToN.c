#include<stdio.h>

int nTo1(int);

int main(){

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    nTo1(n);

    return 0;
}

int nTo1(int n){
    if(n==0){
        return 0;
    }

    nTo1(n-1);

    printf("%d\n", n);
}