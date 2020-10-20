#include<stdio.h>

int main(void)
{
    int num;
    printf("\n Enter a number:");
    scanf("%d", &num);
    switch (num%3)
    {
    case 0:
        printf("\nDivisible by 3\n");
        break;
    case 1:
        printf("\nRemainder is %d\n", num%3);
        break;
    
    default:
        printf("\nRemainder is %d\n", num%3);
        break;
    }

    return 0;
}