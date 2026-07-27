#include<stdio.h>
#include<string.h>

int main(){

    char name[50] = "Hello";
    char name2[50] = "Wello";

    int size = strlen(name);

    strcpy(name, name2);
    int compare = strcmp(name, name2);
    strcat(name, name2);

    printf("Size: %d\n", size);
    printf("%s\n", name);
    printf("%s\n", name2);
    printf("%d\n", compare);

    return 0;
}