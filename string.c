#include<stdio.h>

int main(void)
{
    char str[] = "salam";
    for(int i=0; i<6; i++)
    {
        printf("\n");
        printf("%c",str[i]);
    }
    printf("%d",str[5]);
    return 0;
}