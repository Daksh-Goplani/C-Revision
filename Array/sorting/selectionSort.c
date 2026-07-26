#include<stdio.h>

int main(){

    int arr[] = {7,5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0; i<n-1; i++){
        int min = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min]){
                min = j;
            }
        }
        if(i!=min){
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    printf("Sorted array: ");
    for(int i=0; i<n;i++){
    printf("%d ", arr[i] );
    }

    return 0;
}