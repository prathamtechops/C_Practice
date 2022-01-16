#include <stdio.h>
#include <string.h>
struct lib
{
    char book_n[100];
    char book_id[5];
    char author[100];
};
int main(int argc, char const *argv[])
{
    struct lib li[100];
    int k = 0, i = 0;
    int a = 0;
    int no_of_books;
    while (k != 5)
    {
        printf("\n........................................................................\n");
        printf("                    ....Welcome to the library.....");
        printf("\n........................................................................\n");
        printf("....Enter 1 to add a book....\n");
        printf("....Enter 2 to view the information....\n");
        printf("....Enter 3 to view total number of books...\n");
        printf("....Enter 4 to Exit.....\n");
        scanf("%d", &k);

        switch (k)
        {
        case 1:
        
            printf("Enter the number of books you wanna enter: \n");
            scanf("%d", &no_of_books);
            while (no_of_books > a){
                printf("Enter the name of the book: \n");
                scanf("%s", &li[a].book_n);
                printf("\nEnter the book id: \n");
                scanf("%s", &li[a].book_id);
                printf("Enter author name: \n");
                scanf("%s", &li[a].author);
                a++;
            }
            break;

        case 2:
            for (int j = 0; j < no_of_books; j++)
            {
                printf("book name = %s\t  ", li[j].book_n);
                printf("author name = %s\t  ", li[j].author);
                printf("Book ID = %s\t  ", li[j].book_id);
                printf("\n");
            }
            break;
        case 3:
            printf("\n No of books in brary : %d\n", no_of_books);
            break;
        case 4:
            goto end;
        }
    }
end:;
    return 0;
}