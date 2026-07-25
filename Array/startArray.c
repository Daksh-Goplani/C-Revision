#include<stdio.h>

int main(){
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    
    int arr[size];
    
    int Size = sizeof(arr)/sizeof(arr[0]);
    printf("Size Entered: %d\n", Size);

    printf("Enter all elements: \n");
    
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    printf("Entered Elements: \n");
    for(int i=0; i<size; i++){
        printf("%d\n", arr[i]);
    }

    return 0;
}