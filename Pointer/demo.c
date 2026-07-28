#include<stdio.h>

int main(){

    int a = 10;
    int *ptr = &a; // * -> Value at adress

    printf("%p\n", ptr);
    printf("%p\n", &a);
    printf("%d\n", *ptr);

    *ptr = *ptr+1;
    printf("%d\n", a);
    
    int **ptr2 = &ptr;
    printf("%d\n", **ptr2);

    
    return 0;
}