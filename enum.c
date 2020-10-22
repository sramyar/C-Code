#include<stdio.h>

enum day {sun, mon, tue, wed, thu, fri, sat};
void print_day(enum day d);
enum day next_day(enum day d);


int main(void)
{
    int d;
    printf("Enter today's value:\n");
    scanf("%d", &d);
    print_day(d);
    printf("\nTomorrow is:\n");
    enum day next = next_day(d);
    print_day(next);
    printf("\n");
    return 0;

}

void print_day(enum day d)
{
    switch(d){
        case sun: printf("Sunday "); break;
        case mon: printf("Monday "); break;
        case tue: printf("Tuesday "); break;
        case wed: printf("Wednesday "); break;
        case thu: printf("Thursday "); break;
        case fri: printf("Friday "); break;
        case sat: printf("Saturday "); break;
        default: printf("Something is wrong ");
    }
}

enum day next_day(enum day d)
{
    return ((d+1) % 7);
}