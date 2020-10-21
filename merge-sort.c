#include<stdio.h>

void sort(int a[], int iters);
void merge(int a[], int b[], int c[], int iters);

int main(void)
{
    int a[] = {1,2,3,5,4};
    int b[] = {4,5,6,7,8};
    int c[] = {0,0,0,0,0,0,0,0,0,0};
    int ex[] = {8,7,6,5,4,3,2,1};
    merge(a, b, c,5);
    for (int i = 0; i < 10; i++)
        printf("%d\n",c[i]);
    sort(ex,8);
    for (int i = 0; i < 8; i++)
        printf("%d",ex[i]);
    return 0;
}


void sort(int a[], int iters)
{
    int j,k;
    int w[iters];
    for (k=1; k<iters; k*=2){
        for(j=0; j < iters - k; j+=2*k)
            {merge(a+j, a+j+k, w+j, k);}
        for (j=0; j < iters; j++)
            {a[j] = w[j];}
    }

}

void merge(int a[], int b[], int c[], int iters)
{
    int i=0, j=0, k=0;
    while (i < iters && j < iters)
    {
        if (a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while (i < iters)
    {
        c[k++] = a[i++];
    }

    while (j < iters)
    {
        c[k++] = b[j++];
    }

}

