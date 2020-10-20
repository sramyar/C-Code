#include<stdio.h>

int main(void)
{   
    int n, sum = 0;
    printf("Enter n:\n");
    scanf("%d", &n);
    for (size_t i = 0; i < n; i++)
    {
        sum += i;
    }

    printf("\nThe sum of 1 to %d is: %d\n", n, sum);
    return 0;
    
}