#include<stdio.h>

int main(void)
{
    int arr[5] = {1,2,3,4,5};
    int a = 2;
    int ai = arr[1];
    printf("The address of int a is %p, for int ai it's %p and for a[1] it's %p\n", &a, &ai, &arr[1]);
    return 0;
}