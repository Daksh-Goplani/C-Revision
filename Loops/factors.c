#include <stdio.h>

int main()
{
    int num;
    printf("Enter number: ");
    scanf("%d", &num);
    int range = num/2;

    for(int i=1; i<=range; i++){
        if(num%i==0) {
            printf("%d ", i);
        }
    }

    printf("%d", num);
    return 0;
}