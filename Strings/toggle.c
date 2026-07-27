#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "DaKsH GoPlAnI";
    int size = strlen(str);
    int s = strlen(str);

    for(int i=0; i<s; i++){
        if(str[i]>= 'a' && str[i]<='z'){
            str[i] -= 32;
        }
        else{
            str[i] += 32;
        }
    }
    printf("%s", str);

    return 0;
}