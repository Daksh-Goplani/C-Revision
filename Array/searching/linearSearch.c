#include<stdio.h>

int main(){

    int n, elem, index=-1;
    printf("Enter no of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements: \n");
    for(int i=1; i<=n; i++){
        scanf("%d", &arr[i]);
    }

    printf("Enter Element to search: ");
    scanf("%d", &elem);

    for(int i=1; i<=n; i++){
        if(arr[i] == elem){
            index = i-1;
            break;
        }
    }
    if(index == -1){
        printf("Element not found");
    }
    else{
        printf("Element found on index %d", index);
    }

    return 0;
}