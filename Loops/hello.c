// Print hello for same input of user

#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int temp = num;

    while (temp == num) {
        printf("Hello\n");
        scanf("%d", &num);
    }

    return 0;
}