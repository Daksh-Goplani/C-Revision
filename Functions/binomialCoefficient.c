#include<stdio.h>

int binomial(int n, int r){
    if(r == 0 ||  r == n)
        return 1;
    else 
        return binomial(n-1, r-1) + binomial(n-1,r);
}

int main(){

    int n, r;
    printf("Enter n and r: ");
    scanf("%d %d", &n, &r);
    printf("Binomial coefficient = %d", binomial(n,r));

    return 0;
}
