#include <stdio.h>
int main(){

    int num = 5;

    for (int i = 1; i <= num; i++)    {
        // Spaces
        for(int j=1; j<=num-i; j++){
            printf("  ");
        }
        // Stars
        for(int j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}