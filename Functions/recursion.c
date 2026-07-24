#include<stdio.h>

void printHello(int);

int main(){

    printHello(3);

    return 0;
}

void printHello(int n){
    // base case
    if(n==0){
        return;
    }

    // work
    printf("hello\n");

    //call
    printHello(n-1);
}