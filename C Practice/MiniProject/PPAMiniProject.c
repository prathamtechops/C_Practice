#include <stdio.h>
int main()
{
    int s, ret, book, i, wb, read;
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
    printf("Press 4\t If you want to quit\n");
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
            printf("\t\t-----Book has been issed------\n");
            printf("\t\t------Please come again-----\n");
            printf("\t\t*Return the book in 14 days*\n");
            printf("------------------------------------\n");
             }
    else if (i == 2)
    {
            printf("****************************************\n");
            printf("------Thanks for coming-----\n");
            printf("------Please come again-----\n");
            printf("****************************************\n");
    }
    else {printf("\t\t!!!!!!!!!!!!!!!!!!**Invalid Input**!!!!!!!!!!!!!!!!!!!!!!!!\n"); goto Start;}
    break;
    case 2:
    printf("******Are you sure you wanna return the book*****\n");
    printf("\t*****If Yes--Enter 1*****\n");
    printf("\t*****If No --Enter 2*****\n");
    scanf("%d", &ret);
    if (ret == 1) {
         printf(" Which Book you have and want to return \n");
         printf(" Enter 1 for \t Calculus \n");
         printf(" Enter 2 for \t Let Us C \n");
         printf(" Enter 3 for \t Fundamental of Computer \n");
         printf(" Enter 4 for \t Python Crash Course \n");
         printf(" Enter 5 for \t Test Your Skills\n");
         scanf("%d", &wb);
         printf("\t\t******Book Returned******\n\t\t*****Please Come Agian*****");}
    else if(ret == 2) printf("\t\t******Its okay take you time, You can search more Explore more********\n");
    else {printf("\t\t!!!!!!!!!!!!!!!!!!**Invalid Input**!!!!!!!!!!!!!!!!!!!!!!!!\n"); goto Start;}

    break;
    case 3: 
    printf("****************************************\n");
    printf("*******Book available in our libery*******\n");
    printf("************Not For Issue*************\n");
    printf("****************************************\n");
    printf("-------- Elementry Engineering Mathematics-----\n"); 
    printf("-------- Programming in C-----\n");
    printf("-------- MS-Office 2000-----\n"); 
    printf("-------- Essential Of Management-----\n");
    printf("-------- Effective Business Communication-----\n");
    printf("-------- Algorithms-----\n");
    printf("-------- Discrete Mathematics-----\n");
    printf("-------- Oraganisational Behaviour-----\n");
    printf("****************************************\n");
    printf("Do you pick anything to read..\n");
    printf("If Yes----Enter '1'\n If No----Enter '2'\n");
    scanf("%d", &read);
    if (read == 1) printf("-------Have a good time------\n");
    else if(read == 2) { 
            printf("------Thanks for coming-----\n");
            printf("------Please come again-----\n");
            }
    else {printf("\t\t!!!!!!!!!!!!!!!!!!**Invalid Input**!!!!!!!!!!!!!!!!!!!!!!!!\n"); goto Start;}
    break;
    case 4: goto Exit;
        break;
    }
    Exit:
    return 0;
}
