#include<stdio.h>

int main(void)
{
    char *str;
    int n;
    scanf("%d",&n);
    scanf("%s",str);
    printf("%s","string literal\n");
    int i;
    for(i=0; i<n; i++){printf("\n%c is the %d'th element",*(str+i),i);}
    return 0;
}