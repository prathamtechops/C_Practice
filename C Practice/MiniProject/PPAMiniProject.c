#include <stdio.h>
int main()
{
    int s;
    int ret;
    int book;
    int i;
    Start:
    printf(".....................................................................................\n");
    printf(".....................................................................................\n");
    printf("--------------------------------Welcome to the library-------------------------------\n");
    printf(".....................................................................................\n");
    printf(".....................................................................................\n");
    printf("\n");
    printf("****************************************\n");
    printf("Press 1\t If you want to issue a book  *\n");
    printf("Press 2\t If you want to return a book *\n");
    printf("Press 3\t To Explore our Library       *\n");
    printf("****************************************\n");
    scanf("%d", &s);
    switch (s)
    {
    case 1:
    printf("What book you want to issue\n");
    printf("If Yes----Enter '1'\n If No----Enter '2'\n");
    scanf("%d", &i);
    if (i == 1){
            printf("-------Books available for issue-----\n");
            printf(" Enter 1 for \t Calculus \n");
            printf(" Enter 2 for \t Let Us C \n");
            printf(" Enter 3 for \t Fundamental of Computer \n");
            printf(" Enter 4 for \t Python Crash Course \n");
            printf(" Enter 5 for \t Test Your Skills\n");
            printf("------------------------------------\n");
            scanf("%d", &book);
            printf("------------------------------------\n");
            printf("\t-----Book has been issed------\n");
            printf("\t------Please come again-----\n");
            printf("\t******Return the book in 14 days******\n");
            printf("------------------------------------\n");
             }
    else if (i == 2)
    {
            printf("****************************************\n");
            printf("------Thanks for coming-----\n");
            printf("------Please come again-----\n");
            printf("****************************************\n");
    }
    else {printf("****************************************\n"); printf("Please Enter a valid number\n"); printf("****************************************\n"); goto Start;}
    break;
    case 2:
    printf("Are you sure you wanna return the book...");
    printf("Enter 1 to return the book\n");
    printf("Enter 2 to not return the book\n");
    scanf("%d", &ret);
    switch(ret){
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
    break;
    default:
        break;
    }
    return 0;
}
