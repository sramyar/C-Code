#include<stdio.h>

int main(void)
{
    int input, stop;
    printf("Enter an integer:\n");
    scanf("%d", &input);

    stop = input+4;
    while (input < stop)
    {
        printf("%d \t",input);
        input++;
    }
    printf("\n");
    return 0;    
}