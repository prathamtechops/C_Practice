#include <stdio.h>
int main()
{
    int a;
    int re;
    int book;
    printf("What do want to do\n");
    printf("Press 1 to do issue\n");
    printf("Press 2 to return\n");
    printf("Press 3 to to search the library\n");
    scanf("%d", &a);
    switch (a)
    {
    case 1:
    printf("What book you want to issue\n");
    printf(" Enter 1 for book name\n");
    printf(" Enter 2 for book name\n");
    printf(" Enter 2 for book name\n");
    printf(" Enter 3 for book name\n");
    printf(" Enter 4 for book name\n");
    scanf("%d", &book);
    printf("Book has been issed\n");
        break;
    case 2:
    printf("Do you want to return the book...");
    printf("Enter 1 to return the book\n");
    printf("Enter 2 to not return the book\n");
    scanf("%d", &re);
    switch(re){
        case 1: printf("Book has been returned");
        break;
        case 2: printf("Book has not been returned"); break;
    }
    break;
    case 3: printf("Book available to read..\n");
    printf("Book\t"); 
    printf("Book\t");
    printf("Book\t");
    printf("Book\t");
    printf("Book\t");
    default:
        break;
    }
    return 0;
}
