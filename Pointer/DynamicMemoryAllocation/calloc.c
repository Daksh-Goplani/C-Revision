#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p = (int*)calloc(3, 4); // 5, 4: size, byte

    p[0] = 1;
    p[1] = 2;
    p[2] = 3;

    for(int i=0; i<3; i++){
        printf("%d ", p[i]);
    }
    printf("\n");

    p = realloc(p, 5);
    p[3] = p[4] = 13;

    for(int i=0; i<5; i++){
        printf("%d ", p[i]);
    }

    return 0;
}

// if no value given calloc will give default value and in malloc no guarantee of default and can give undefined/error