#include <stdio.h>

int main() {
    int num;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    return 0;
}