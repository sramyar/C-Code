#include<stdlib.h>
#include<stdio.h>

void print_file(FILE* fptr)
{
    int c;
    rewind(fptr);
    while((c = getc(fptr)) != EOF){
        putc(c,stdout);
    }
    putc('\n',stdout);
}

void process(FILE *ifp, FILE *ofp)
{
    int c;
    rewind(ifp);
    while ((c = getc(ifp)) != EOF){
        if (c == 's') {putc('z',ofp);}
        else putc(c,ofp);
    }
}

int main(int argc, char *argv[])
{
    if (argc != 3){
        printf("Your input is shit\n");
        exit(1);
    }
    FILE *ifp, *ofp;
    ifp = fopen(argv[1],"r+");
    ofp = fopen(argv[2], "w+");
    printf("The original file before processing is:\n");
    print_file(ifp);
    process(ifp,ofp);
    printf("The processed file is now:\n");
    print_file(ofp);
    return 0;
}