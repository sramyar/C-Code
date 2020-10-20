#include<stdio.h>

long fibo(int n);
long ifibo(int n);

int main(void)
{
    int n;
    printf("Enter n:\n");
    scanf("%d", &n);
    long iresult = ifibo(n);
    printf("\nThe Fibonacci series result using iteration f(%d)=%ld\n", n, iresult);
    long rresult = fibo(n);
    printf("\nThe Fibonacci series result using recursion f(%d)=%ld\n", n, rresult);
    return 0;
}

long fibo(int n)
{
    if (n<=1){return n;}
    return fibo(n-1) + fibo(n-2);
}

long ifibo(int n)
{
    long f1 = 1, f2 = 0, prev;
    for (int i=1; i<=n; i++)
    {
        prev = f1;
        f1 += f2;
        f2 = prev;
    }
    return f2;
}