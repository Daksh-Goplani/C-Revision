#include <stdio.h>

int main()
{
    int len, bre;
    printf("Enter Length: ");
    scanf("%d", &len);
    printf("Enter Bredth: ");
    scanf("%d", &bre);
    printf("Area of Rectangle is %d", len*bre);
    printf("\nPerimeter of Rectangle is %d", 2*(len+bre));
    return 0;
}
