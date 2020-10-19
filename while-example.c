#include<stdio.h>

int main(void)
{
    int repeat;
    printf("How many times you want it?\n");
    scanf("%d", &repeat);

    while (repeat > 0)
    {
        repeat--;
        printf("\n got it?");
    }

    printf(" enough?");
    return 0;
    
}