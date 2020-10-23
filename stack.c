#include<stdio.h>
#define MAX_LEN 1000
#define EMPTY -1
#define FULL (MAX_LEN-1)

typedef struct stack
{

    int top;
    char s[MAX_LEN];

} stack;

void push(char c, stack *stk)
{
        stk-> top++;
        stk-> s[stk->top] = c;
}

char pop(stack *stk)
{
    return stk->s[stk->top--];
}

char top(const stack *stk)
{
    return stk->s[stk->top];
}

int is_empty(stack *stk)
{
    return (stk->top == EMPTY);
}

int is_full(stack *stk)
{
    return (stk-> top == FULL);
}

int main(void)
{   

    stack a;
    char str[] = "abcde";
    char back[20];
    int i=0;
    while (str[i]!='\0')
    {
        push(str[i++],&a);
    }
    i=0;
    while (!is_empty(&a))
    {
        back[i++] = pop(&a);
    }
    i = 0;
    printf("\t%s\n",back);
    return 0;
    
}