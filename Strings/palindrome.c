#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "madam";
    int size = strlen(str);
    int i=0, j=size-1;
    int flag = 1;

    while(i<=j){
        if(str[i]!=str[j]){
            flag=0;
            break;
        }
        i++;
        j--;
    }
    if(flag) printf("Palindrome");
    else printf("Not a palindrome");

    return 0;
}