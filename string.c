#include<stdio.h>

int main(void)
{
    char str[6];
    scanf("%s",&str[0]);
    for(int i=0; i<6; i++)
    {
        printf("\n");
        printf("%c",str[i]);
    }
    printf("\n%d\n",str[5]);
    return 0;
}