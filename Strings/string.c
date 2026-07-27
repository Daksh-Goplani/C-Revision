#include<stdio.h>

int main(){

    char name[50];
    char name2[] = {'H', 'e','l','l','o', '\0'};  // Null character

    printf("Enter name: ");
    // scan set
    // scanf("%[^\n]s", name); // jab tak \n(next line) na mile tab tak scan karna hai

    fgets(name, 50, stdin);
    printf("%s\n", name);

    return 0;
}