#include<stdio.h>

int main(void)
{
    int age;
    printf("\nEnter your age:\n");
    scanf("%d",&age);

    if (age >= 18)
        printf("\nYou gotta get to work!\n");
    else
        printf("\nAre you ready yet?\n");
    
    return 0;
}