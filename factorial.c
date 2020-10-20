#include<stdio.h>

long factorial(int n);

int main(void)
{
    int n;
    printf("\nEnter a number:\n");
    scanf("%d", &n);
    long result = factorial(n);
    printf("\nFactorial of %d is %ld\n", n, result);
    return 0;
}

long factorial(int n)
{
    if (n==0){return 1;}
    return n*factorial(n-1);
}