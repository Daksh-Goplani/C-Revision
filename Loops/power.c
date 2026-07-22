#include <stdio.h>

int main()
{
    int num1, num2;
    int result = 1;
    scanf("%d %d", &num1, &num2);

    for (int i = 1; i <= num2; i++)
    {
        result = result * num1;
    }
    printf("%d", result);

    return 0;
}