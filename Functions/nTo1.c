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

    printf("%d\n", n);

    nTo1(n-1);
}