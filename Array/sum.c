#include<stdio.h>

int main(){
    int size, sum = 0;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter all elements: \n");
    
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    for(int i=0; i<size; i++){
        sum = sum + arr[i];
    }
    printf("Sum is : %d\nAvg: %.1f", sum, (float)sum/size);

    return 0;
}