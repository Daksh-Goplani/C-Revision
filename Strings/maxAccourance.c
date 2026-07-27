#include<stdio.h>
#include<string.h>

int main(){

    char str[] = "programming";
    int size = strlen(str);
    int max=0;
    char ans;

    for(int i=0; i<size; i++){
        int c=1;
        for(int j=i+1; j<size; j++){
            if(str[i] == str[j]){
                c++;
            }
        }
        if(c>max){
            max = c;
            ans = str[i];
        } else if(c==max && str[i]<ans){
            ans = str[i];
        }
    }

    printf("Max occuring char : %c\n", ans);

    return 0;
}