#include<stdio.h>

void swap(int *a, int *b);
void bubble(int n, int a[]);


int main(void)
{
    int a[]={9,8,6,5,2,1,45};
    int n = sizeof(a)/sizeof(a[0]);
    bubble(n, a);
    for(int i=0; i < n; i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
    return 0;
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubble(int n, int a[])
{
    for (int i=0; i < n; i++)
    {
        for (int j=n-1; j > i; j--)
        {
            if (a[j] < a[j-1]){swap(&a[j],&a[j-1]);}
        }
    }
}
