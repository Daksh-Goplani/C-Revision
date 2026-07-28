#include<stdio.h>
#include<stdlib.h>

int main(){

    int *p = (int*)malloc(3*4); // 5*4: size*byte

    p[0] = 1;
    p[1] = 2;
    p[2] = 3;

    for(int i=0; i<3; i++){
        printf("%d ", p[i]);
    }

    free(p); // frees the memory
    p = NULL;

    return 0;
}



// malloc() -> memory allocation
// calloc() -> continuous allocation
// free() -> 
// realloc() -> reallocation of memory