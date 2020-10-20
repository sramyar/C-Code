#include<stdio.h>

void swap1(int a, int b);
void swap2(int *a, int *b);

int main(void)
{
    int a = 2, b = 5;
    printf("Here, we're testing two swap functions for distinguishing call by value and call by reference\n");
    swap1(a,b);
    printf("The first call by value function: a=%d and b=%d\n", a, b);
    swap2(&a,&b);
    printf("The second function where we have call by reference: a=%d and b=%d\n", a, b);
    return 0;
} 

void swap1(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

void swap2(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b  = temp;
}