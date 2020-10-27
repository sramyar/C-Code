#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<assert.h>

typedef struct list{int data; struct list* next;} list;

int is_empty(const list* l)
{
    return (l == NULL);
}

void print_list(list* head, char* title)
{
    printf("\n%s", title);
    while(head != NULL)
    {
        printf("%d\t", head->data);
        head = head ->next;
    }
}

list* create_list(int d)
{
    list* head = malloc(sizeof(list));
    head -> next = NULL;
    head -> data = d;
    return head;
}

list* add_to_front(int d, list* h)
{
    list* head = create_list(d);
    head -> next = h;
    return head;
}


list* array_to_list_reverse(int a[], int size)
{
    list* head = create_list(a[0]);
    int i;
    for (i=1; i < size; i++)
    {
        head = add_to_front(a[i], head);
    }

    return head;
}

int count(list* h)
{
    if (h == NULL) return 0;
    return (1+count(h->next));
}

void concat(list* h1, list* h2)
{   assert(h1 != NULL);
    if (h1 -> next == NULL) h1->next = h2;
    concat(h1->next, h2);
}

void insert(list* p1, list* p2, list* q)
{
    p1 -> next = q;
    q -> next = p2;
}

list* delete (list* h)
{
    h = h -> next;
    return h;
}

int main(void)
{
    int a[]={1,2,3,4,5};
    list* al = array_to_list_reverse(a,5);
    print_list(al, "list printed in reverse: ");
    printf("\n");
    int n = count(al);
    printf("The count is %d\n",n);
    int b[] = {100,200,300};
    list* bl = array_to_list_reverse(b,3);
    print_list(bl, "the second ist is: ");
    printf("\n");
    list* ald = delete(al);
    print_list(ald, "after deletion: ");
    printf("\n");
    n = count(ald);
    printf("%d is the count after deletion\n", n);
    return 0;
}

