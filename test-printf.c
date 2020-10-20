#include<stdio.h>

int main(void)
{
    char c;
    printf("Enter a character:");
    scanf("%c", &c);
    int a = printf("\n%c",c);
    printf("\nprintf return value was %d for %c that has ASCII value %d\n",a,c,c);
}