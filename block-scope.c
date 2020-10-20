#include<stdio.h>

int main(void)
{
    //first block:
    {int i = 0;
    printf("outer block i is %d\n",i);
        {
            int i = -1;
            printf("outer block i is %d\n",i);
        }
    printf("outer block i, again, is %d\n",i);
    }

    return 0;
}