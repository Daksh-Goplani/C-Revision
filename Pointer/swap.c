#include<stdio.h>

void swap(int*, int* );
int main(){

    int a = 10;
    int b = 9;

    printf("a = %d and b=%d\n", a,b);
    swap(&a,&b);
    printf("a = %d and b=%d", a,b);

    return 0;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b=temp;
}
