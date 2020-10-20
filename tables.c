#include<stdio.h>

int square(int n)
{
    return n*n;
}

int cube(int n)
{
    return (n*n*n);
}

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("\nSquare\tCube:\n");
    for(int i=0; i < n; i++)
    {
        printf("%d\t%d\n",square(i),cube(i));
    }

    return 0;
}