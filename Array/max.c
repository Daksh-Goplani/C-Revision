#include<stdio.h>

int main(){
    int size, max, index = -1;
    printf("Enter size of array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter all elements: \n");
    
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }

    max = arr[0];

    for(int i=0; i<size; i++){
        if(arr[i]>=max){
            max = arr[i];
            index = i;
        }
    }
    printf("Maximum value: %d at %d index", max, index);

    return 0;
}