// Note: Before this there were also so many codes but they were so so basic and like this like of circle and greeting user i thought not to push that!
// This is also basic but had to showcase the work i did

#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter First Number: ");
    scanf("%d", &a);
    printf("Enter Second Number: ");
    scanf("%d", &b);
    a = a + b; // 10 + 20 = 30
    b = a - b; // 30 - 20 = 10
    a = a - b; // 30 - 10 = 20
    printf("After Swapping:-\nFirst Number is %d and Second Number is %d ", a, b);
    printf("Aur kya chahiye nikal");
    return 0;
}
