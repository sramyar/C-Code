#include<stdio.h>

int main(void)
{
    int a = 0;
    int arr[3] = {1,2,3};
    int *p = &a;
    printf("a is stored at %p or %ls containing value %d\n", p,p,a);
    printf("the array 'arr' is stored at %p and goes to %p", arr, arr + 3);
    return 0; 
}