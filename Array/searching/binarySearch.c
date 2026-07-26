// Array should be sorted!
// Optimized linear search algo
// Divides array in 2 parts 
// Time complexity: log(N)

#include<stdio.h>

int main(){

    int arr[] = {11,12,13,14,15,16,17};
    int target = 14;
    int size = sizeof(arr)/sizeof(arr[0]);
    int ans = -1;
    int s = 0, e = size-1; // Start , End

    while(s<=e){
        int mid =(s+e)/2;
        if(arr[mid] == target){
            ans = mid;
            break;
        } else if(arr[mid] < target){
            s = mid + 1;
        } else{
            e = mid - 1;
        }
    }

    printf(ans == -1 ? "Element not found" : "Element found at index: %d", ans);
    return 0;
}