#include<stdio.h>
#include<assert.h>

int divide(int x, int y);

int main(void)
{
    while (1)
    {
        int a,b;
        printf("Enter two numbers:\n");
        scanf("%d%d", &a, &b);
        assert(a/b == divide(a,b));
        printf("%d is the multiplication\n", divide(a,b));
    }

    return 0;
    
}

int divide(int x, int y)
{
    return (x/y);
}